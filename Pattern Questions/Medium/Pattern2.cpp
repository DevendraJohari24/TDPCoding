/*
1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev=0;
    int curr = 1;
    int sum=0;
    if(n>=1){
        cout<<curr<<"\n";   
        for(int i=2; i<=n; i++){
                for(int j=1; j<=i; j++){
                    sum = curr + prev;
                    cout<<sum<<" ";
                    prev = curr;
                    curr = sum;
                }
                cout<<"\n";
            }
    }
    
}