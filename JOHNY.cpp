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
        int k;
        cin >> k;
        int temp = arr[k-1];
        sort(arr,arr+n);
        
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==temp)
            {
                ans = i;
                break;
            }
        }
        cout << (ans+1) << endl;
    }
    return 0; 
}
