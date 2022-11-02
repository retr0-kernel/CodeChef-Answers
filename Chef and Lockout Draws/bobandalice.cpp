#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A, B, C;
	    cin>>A>>B>>C;
	    
	    if((A+B)==C){
	        cout<<"YES"<<endl;
	    }
	    else if((B+C)==A){
	        cout<<"YES"<<endl;
	    }
	    else if((A+C)==B){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
