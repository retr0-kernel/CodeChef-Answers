#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,t,d=INT_MAX;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        t=abs(a[i+1]-a[i]);
	        if(t<d){
	            d=t;
	        }
	    }
	    cout<<d<<endl;
	}
	return 0;
}
