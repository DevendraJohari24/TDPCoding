/*
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0; j<=i; j++){
            cout<<n-j;
        }
        cout<<"\n";
    }
    for(int i=n;i>0;i--){
        for(int j=0; j<=2; j++){
            cout<<n-j;
        }
        cout<<"\n";
    }
    return 0;
}
