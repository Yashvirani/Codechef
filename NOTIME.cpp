#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,H,x;
    bool solved = false;
    cin>>N;
    cin>>H;
    cin>>x;
    int T[N];
    for(int i=0;i<N;i++){
        cin>>T[i];
    };
    if(x<H){
        for(int j=0;j<N;j++){
            if((x+T[j]) == H){
                solved = true;
                break;
            };
        };
    };
    if(solved == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


	return 0;
}

