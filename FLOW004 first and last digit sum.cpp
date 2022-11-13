//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>

using namespace std;
int first(int n){
    while(n>9){
        n=n/10;
    }
    return n;
}
int last(int n){
    n=n%10;
    return n;
}
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<first(n)+last(n)<<endl;
    }

		
	
	return 0;
}