#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
       int n;
       cin >> n;
       if(n==1){
           cout << 1 << endl;
       }
       else{ 
           cout << (n+1)/2 << endl;
       }
   }

}