#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        for (int i = 0; i < n-1; i++)
        {   
            
            sum += abs(arr[i+1] - arr[i])-1;
            //cout << i << "Sum :" << sum << endl;
        }
        cout << sum << nl;
    }
    return 0;
}