#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,v1,v2;
        cin >> n >> v1 >> v2;
        float s = (float(n) * sqrt(2))/float(v1);
        float l = (float(n) * 2)/float(v2);

        if(s<l)
        {
            cout << "Stairs" << endl;
        }
        else
        {
            cout << "Elevator" << endl;
        }
    }
    return 0;
}