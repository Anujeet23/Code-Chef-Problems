#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a,b;
        cin >> a >> b;
        int sum = a + b;

        if(sum< 3){
            cout << "1" << endl;
        }
        else if( 3<=sum && sum<=10 ){
            cout << "2" << endl;
        }
        else if( 11<=sum && sum<=60 ){
            cout << "3" << endl;
        }
        else{
            cout << "4" << endl;
        }
    }
}