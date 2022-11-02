#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a, b, c, d;
	    cin>>a>>b>>c>>d;
	    if((a+b+c+d)==n){
	        int p = max(a,b);
	        int q = max(c,d);
	        int s = max(p,q);
	        
	        cout<<s<<endl;
	    }
	}
	return 0;
}
