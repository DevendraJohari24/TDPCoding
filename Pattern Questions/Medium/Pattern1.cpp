/*
1     7
12   67
123 567
1234567
123 567
12   67
1     7

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int half = n/2;
    for(int i=1; i<=n; i++){
        if(i<=half){
            for(int j=1; j<=i;j++){
                cout<<j;
            }
            for(int j=i; j<n-i; j++){
                cout<<"*";
            }
            for(int j=1;j<=i;j++){
                cout<<n-j+1;
            }
        }
        else if(i==(half+1)){
            for(int j=1;j<=n;j++){
                cout<<j;
            }
        }
        else{
            for(int j=1;j<=n-i+1;j++){
                cout<<j;
            }
            for(int j=n;j>=i;j++)
        }
        
        cout<<"\n";
    }
}