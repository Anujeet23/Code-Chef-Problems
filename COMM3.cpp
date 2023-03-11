#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int  r;
	    cin>>r;
	    long long int a,b,c,d,e,f,g,h,k;
	    cin>>a>>b;
	    cin>>c>>d;
	    cin>>e>>f;
	    g=(a-c)*(a-c)+(b-d)*(b-d);
	    h=(c-e)*(c-e)+(d-f)*(d-f);
	    k=(a-e)*(a-e)+(b-f)*(b-f);
	    if(g<=r*r && h<=r*r || g<=r*r && k<=r*r || h<=r*r && k<=r*r){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}