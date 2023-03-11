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
        float rem = 120 - float(n),cnt = 0;
        //cout << "Remaining:" << rem << endl;
        string b;
        cin >> b;
        for (int i = 0; i < n; i++)
        {
            if(b[i]=='1')
            {
                cnt++;
            }
            //cout << "Count:" <<  cnt << endl;
        }

        float ans = (rem + cnt) / (120);
       // cout << "Ans:" << ans << endl;

        if(ans >= 0.75)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}