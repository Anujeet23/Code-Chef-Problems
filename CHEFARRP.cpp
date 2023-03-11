#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        cin >> arr[i];

        int cnt=0;
        for (int i = 0; i < n; i++)
        {   
            int sum = 0, product = 1;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                product *= arr[j];
                if(sum == product){
                cnt++;}
            }
        }
        cout << cnt << endl;
    } 
    return 0;
}