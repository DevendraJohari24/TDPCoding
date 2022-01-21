/*
E       E 
 D     D
  C   C
   B B
    A  
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    char ch;
    cin>>n;
    int ascii = 65+n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=2*(n-i)+1;j>=1;j--){
            if(j==1 || j==(2*(n-i)+1)){
                ch = ascii;
                cout<<ch;
            }
            else{
                cout<<" ";
            }   
        }
        ascii--;
        cout<<"\n";
    }
    return 0;
}