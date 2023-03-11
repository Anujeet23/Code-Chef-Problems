#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cout << endl;
    cin >> b; 
    cout << endl;
    cin >> c;

    //int maxi1 = max(a,b);
    //int mini = min(a,b,c);

    if( (a>b || a>c) &&  (a<b || a<c))
    {
        cout << a << endl;
    }
    else if((b>a || b>c) &&  (b<a || b<c))  
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}