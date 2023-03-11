#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[0] == arr[i])
        {
            count++;
        }
    }
    
    if(count == n)
    {
        cout << 0 << endl;
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=arr[k-1])
        {
            count++;
        }
    }
    cout << count << endl;

}