#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        
        if((m*n)%2 == 0){
           cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    



}