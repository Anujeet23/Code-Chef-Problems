#include<bits/stdc++.h>
using namespace std;

bool find(int arr[],int n,int k)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    int n,k;
    cin >> n >> k;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bool ans = find(arr,n,k);
    
    if(ans)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
    return 0;
}