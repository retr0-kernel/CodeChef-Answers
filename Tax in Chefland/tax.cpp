#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
        if(x>100){
            cout<<(x-10)<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
	return 0;
}
