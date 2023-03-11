#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n , a;
        cin >> n >> a;
        int mini = min((n-a),a);

        cout << mini << endl;
    }
    return 0;
}