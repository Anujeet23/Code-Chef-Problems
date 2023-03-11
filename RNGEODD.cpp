#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin >> l >> r;

    vector<int> ans;

    for (int i = l; i <= r; i++)
    {
        if(i%2 !=0)
        {
            ans.push_back(i);
        }
    }
    
    for (int i = 0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}