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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]!=arr[j+1])
            {
                if(arr[j]!=arr[j-1] && j!=0)
                {
                    cnt++;
                }
                else
                {
                    cnt+=2;
                }
            }
        }
    
        cout << cnt << endl;
    }
    return 0; 
}