#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
    int d1,t1,m1,d2,t2,m2;
    cin >> d1 >> t1 >> m1;
    cin >> d2 >> t2 >> m2;
    
    int total1 = d1+t1+m1;
    int total2 = d2+t2+m2;
    if(total1 > total2)
    {
        cout << "DRAGON" << endl;
    }
    else if(total1 < total2)
    {
        cout << "SLOTH" << endl;
    }
    else
    {
        if(d1 > d2)
        {
            cout << "DRAGON" << endl;
        }
        else if(d1<d2)
        { 
            cout << "SLOTH" << endl;
        }
        else
        {
            if(t1 > t2)
            {
            cout << "DRAGON" << endl;
            }
            else if(t1<t2)
            { 
            cout << "SLOTH" << endl;
            }
            else
            {
                if(m1 > m2)
                {
                cout << "DRAGON" << endl;
                }
                else if(m1 < m2)
                { 
                cout << "SLOTH" << endl;
                }
                else
                {
                cout << "TIE" << endl;
                }
            }
        }
    }}
    return 0;
}