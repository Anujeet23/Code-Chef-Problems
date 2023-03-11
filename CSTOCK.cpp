#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s,a,b,c;
        cin >> s >> a >> b >> c;
        float change = s;
        
        change =  float(s) + ( (float(s))  *  (float(c)/100) ); 
        //cout << "Change:" << change << endl;

        if(change >= float(a) && change <= float(b))
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    }
    return 0;
}