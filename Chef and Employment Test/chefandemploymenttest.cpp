#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int a[n+k];
	    for(int i=0;i<n;i++){
	        a[i]=arr[i];
	    }
	    for(int i=n;i<n+k;i++){
	        a[i]=10000;
	    }
	    cout<<a[(n+k-1)/2]<<endl;
	}
	return 0;
}
