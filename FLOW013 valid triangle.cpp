#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int T;
	cin>>T;
	int A,B,C;
	while(T--){
	    	cin>>A>>B>>C;
	    	int sum=A+B+C;
	    if(sum==180 && A!=0 && B!=0 && C!=0){
	        cout<< "YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
