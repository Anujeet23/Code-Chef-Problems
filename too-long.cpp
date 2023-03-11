#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
        int t;
        cin >> t;

        while (t--)
        {
            string w,n;
            cin >> w;
            if(w.size() <= 10)
            {
                cout << w << endl;
            }
            else
            {
                int size = w.size() - 2;
                char ini = w[0];
                char last = w[(w.size())-1];
                cout << ini << size << last << endl;
            }
        }
        return 0;
}