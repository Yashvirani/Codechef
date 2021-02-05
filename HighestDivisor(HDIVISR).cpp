#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,maxi = -1;
	cin>>n;
	for(int i = 1;i<11;i++){
	    m = n%i == 0;
	    if(m){
	        maxi = max(i,maxi);
	    }
	};
	cout<<maxi;
	return 0;
}
