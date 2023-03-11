#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {   
        int n,m;
        cin >> n >> m;
        int count_row=0,count_seats=0;
        for(int i=1; i<=n; i=i+2)
        {
            count_row++;
        }

        for(int i=1; i<=m; i=i+2)
        {
            count_seats++;
        }
        
        cout << (count_seats*count_row) << endl;
    }
    return 0;
}