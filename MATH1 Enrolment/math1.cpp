#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int X, Y;
	    cin>>X>>Y;
	    if((Y-X)>=0){
	        cout<<Y-X<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
