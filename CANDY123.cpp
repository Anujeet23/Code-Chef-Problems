#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b;
        cin >> a >> b;
        int l=0,bob=0;
        for (int i = 1,j = 2; i < 100, j<100; i=i+2,j=j+2)
        {
            l += i;
            bob += j;
            if(l>a)
            {
                cout << "Bob" << endl;
                break;
            }
            else if(bob> b)
            {
                cout << "Limak" << endl;
                break;
            }
        }
    }
    return 0;
}