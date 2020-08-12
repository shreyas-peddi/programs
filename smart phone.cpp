#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int n,i;
	cin>>n;
	long long int b[n];
	for(i=0;i<n;i++){
	    cin>>b[i];
	    }
	sort(b,b+n);
	long long int max=0;
	for(i=0;i<n;i++){
	    long long int p= b[i]*(n-i);
	    if(p>max){
	        max=p;
	    }
	}
	cout<<max;
	return 0;
}
