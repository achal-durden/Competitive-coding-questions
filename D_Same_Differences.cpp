#include<bits/stdc++.h>
using namespace std;

int solve(){
   
    int n;
    cin>>n;
    int arr[n];
    int count=0; 
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]==(j-i)){
                count++;
            }
        }
    } 

    cout<<count<<endl;

  return 0;


}



int main(){
    int t;
    cin>>t;
    while(t--){

        solve();
    }
}