/*
    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--){
            if(j==1 || j==(2*i-1)){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    } 
 // Downwards
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=(2*(n-i)-1);j>=1;j--){
            if(j==1 || j==(2*(n-i)-1)){
                cout<<n-i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

