#include <bits/stdc++.h>
using namespace std;

// code by Yashvirani

int main(){
    int t,n,b,a[1000];
    long long int c;
	scanf("%d",&t);
	while(t--){
        int sum = 0;
        scanf("%d",&n);
        scanf("%lli",&c);
        

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        };
        for(int j=0;j<n;j++){
            c = c - a[j];
        };
        if(c < 0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }

	}

	return 0;
}
