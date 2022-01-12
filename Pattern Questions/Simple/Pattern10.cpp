/*
1   1
 2 2
  3
 4 4
5   5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<=(n/2+1)){
            for(int j=1;j<i;j++){
                cout<<" ";
            }
            for(int j=2*(n-i)-3;j>=1;j--){
                if(j==1 || j==(2*(n-i)-3)){
                    cout<<i;
                }
                else{
                    cout<<" ";
                }
            }
        }else{
            for(int j=n-i;j>=1;j--){
                cout<<" ";
            }

            for(int j=n/2+1; j<=(2*(i)-3);j++){
                if(j==n/2+1 || j==(2*(i)-3)){
                    cout<<i;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
