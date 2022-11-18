#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    int p,q,r;
	    p=a+b;
	    q=b+c;
	    r=a+c;
	    if(p%2!=0 || q%2!=0 || r%2!=0){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
