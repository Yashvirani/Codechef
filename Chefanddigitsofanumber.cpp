#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    string n;
	    int one=0,zero=0;
	    cin.ignore();
	    cin>>n;
	    for(int i=0;i < n.length();i++){
	        if(n[i] == '1'){
	            one++;
	        }
	        else{
	            zero++;
	        }
	    };

	    if(one == 1){
	        printf("Yes\n");
	    }
	    else if(zero == 1){
	        printf("Yes\n");
	    }
	    else{
            printf("No\n");
	    }

	}
	return 0;
}
