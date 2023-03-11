#include<iostream>
using namespace std;

int prime(int check)
{
    for (int i = 2; i < check; i++)
        {
            if(check%i==0)
            {
                return false; 
                break;
            }
        }
        return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)   
    {
        int x,y;
        cin >> x >> y;
        int check = x + y;
        
        int value = prime(check);
        int count = 0;
        
        if(value)
        {
            cout << check << endl;
        }
        else
        {                 
            for (int i = check+1; i < 100; i++)
            {
                int aya = prime(i);
                if(aya)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

}