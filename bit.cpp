#include<iostream>
#include<string.h>
#include<string>
using namespace  std;

int main()
{
    int t,stay = 0;
    cin >> t;
    int x = 0;

    while (t--)
    {
        string o;
        cin >> o; 
        if(o == "++X")
        {
            ++x;
        }
        else if(o == "--X")
        {
            --x;
        }
        else if(o == "X++")
        {
            x++;
        }
        else if(o == "X--")
        {
            x--;
        }

        stay = x;
    }
    cout << stay << endl;
}