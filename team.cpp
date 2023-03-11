#include<iostream>
using namespace std;

int main()
{
    int t,count = 0;
    cin >> t;

    while (t--)
    {   
        int sum = 0;
        int arr[3];
        for (int i = 0; i < 3; i++)
        {   
            cin >> arr[i]; 
            sum += arr[i];     
        }
        
        if(sum>=2)
        {
            count++;
        }
    }
    cout << count << endl;
}