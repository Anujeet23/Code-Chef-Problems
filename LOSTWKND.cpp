#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {   
        int p;
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        cin >> p;
        
        int work = 0;
        for (int i = 0; i < 5; i++)
        {
            work += arr[i]*p;
        }
        if(work <= 120)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
