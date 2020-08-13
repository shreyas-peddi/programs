#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,g,i,n,q;
	// your code goes here
	cin>>t;
	while(t--){
	    cin>>g;
	    while(g--){
	        cin>>i>>n>>q;
	        if(i==q){
	            cout<<(n/2)<<endl;
	        }
	        else{
	            cout<<(n/2+n%2)<<endl;
	        }
	    }
	}
	return 0;
}
