#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {   
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0;
        
        for (int i = 0; i < n; i++)
        {
            if(str[i] == 'I')
            {
                cout << "INDIAN" << endl;
                break;
            }
            else if(str[i]=='Y')
            {
                    cout << "NOT INDIAN" << endl;
                    break;
            }
            else 
            {
                    cnt++;
            }
        }
        if(cnt==n)
        {
            cout << "NOT SURE" << endl;
        }
    }
    return 0;
}


