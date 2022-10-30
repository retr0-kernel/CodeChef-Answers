#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n;
	    cin >> x;
	    y = n-x;
	    if(y<=x){
	        cout<<y<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
