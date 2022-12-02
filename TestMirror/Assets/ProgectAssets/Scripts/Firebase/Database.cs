using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Database;
using System.Threading.Tasks;

public class Database : MonoBehaviour
{
    private static DatabaseReference _databaseReference;

    private void Start()
    {
        Player.Won += SetWin;
        Auth._SetName += SetName;
        Auth._SetRecord += StartSetWin;
        _databaseReference = FirebaseDatabase.DefaultInstance.RootReference;
        DontDestroyOnLoad(this);
    }

    private void SetName()
    {
        StartCoroutine(CR_SetNam());
    }
    private void StartSetWin(int value)
    {
        StartCoroutine(CR_SetWin(value));
    }
    private async void SetWin(int value)
    {
        var w = ReadWin();
        await Task.WhenAll(w);

        int _w = 0;
        int.TryParse(w.Result, out _w);


        if(_w < value)
            StartCoroutine(CR_SetWin(value));
    }
    public async static Task<string> ReadName()
    {
        var snapshot = _databaseReference.Child("Users").Child(Auth._user.UserId).Child("Name").GetValueAsync();
        await snapshot;

        if(snapshot.Result.Value == null)
        {
            return null;
        }


        return snapshot.Result.Value.ToString();
    }
    public async static Task<string> ReadWin()
    {
        var snapshot = _databaseReference.Child("Users").Child(Auth._user.UserId).Child("Win").GetValueAsync();
        await snapshot;

        if (snapshot.Result.Value == null)
        {
            return null;
        }


        return snapshot.Result.Value.ToString();
    }

    private IEnumerator CR_SetNam()
    {
        var loginTask = _databaseReference.Child("Users").Child(Auth._user.UserId).Child("Name").SetValueAsync(Auth._user.DisplayName);
        yield return new WaitUntil(predicate: () => loginTask.IsCanceled);
    }
    private IEnumerator CR_SetWin(int points)
    {
        var loginTask = _databaseReference.Child("Users").Child(Auth._user.UserId).Child("Win").SetValueAsync(points);
        yield return new WaitUntil(predicate: () => loginTask.IsCanceled);
    }

    private void OnDestroy()
    {
        Auth._SetName -= SetName;
        Auth._SetRecord -= SetWin;
    }

    public async void Win()
    {
        var w = Database.ReadWin();
        await Task.WhenAll(w);

        int v;
        int.TryParse(w.Result, out v);

        SetWin(v + 1);
    }
}
