#include<bits/stdc++.h>
using namespace std;

string L(string s1,int length)
{
    string s = s1;
    char t = s[0];
    for (int i = 1; i < length; ++i)
    {
        s[i-1] = s[i];
    }
    s[length-1] = t;
    return s;
}

string R(string s2,int length)
{
    string s = s2;
    char t = s[length-1];
    for (int i = length-2; i >= 0; i--)
    {
        s[i+1] = s[i];
    }
    s[0] = t;
    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
    
        if( L(str,str.length()) == R(str,str.length()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}