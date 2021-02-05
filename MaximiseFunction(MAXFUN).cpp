#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n;
	    scanf("%lli",&n);
	    int a[n];
	    for (long long int i = 0 ; i<n;i++){
	        scanf("%lli",&a[i]);
	    };
	    sort(a , a+n);
	    long long int maxi = a[n-1];
	    long long int mini = a[0];
	    long long int sum = abs(maxi - mini) + abs(mini - mini) + abs(mini - maxi);
	    cout<<sum<<"\n";

	};
	return 0;
}
