#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {   
        if(n%i==0)
        {
            ans.push_back(i);
            count++;
        }
    }
    
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << ans[i] << " ";
    }
    

    return 0;
}