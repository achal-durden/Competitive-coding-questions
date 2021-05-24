#include<bits/stdc++.h>
using namespace std;


int solve(){

 int n;
 cin>>n;
 if(n==1){
     cout<<"1"<<endl;
     return 0;
 }
 if(n==2)
 {
     cout<<"-1"<<endl;
     return 0;
 }
 int arr[n][n];
 int d = n*n;
 int k =1;

 
 for(int i=0;i<n;i++){

    int c;
       if(i%2==0)
       {
            c=0;
       }
       else
       {
            c=1;
       }
    
       for(int j=c;j<n;j=j+2)
       {
           
          
               arr[i][j]=k;
               k++;
              
           


       }

 }
 
 for(int i=0;i<n;i++)
 {

    int c;
       if(i%2==0)
       {
            c=1;
       }
       else
       {
            c=0;
       }

       for(int j=c;j<n;j=j+2)
       {
           
          
               arr[i][j]=k;
               k++;
            

           
       }

 }

    
int count=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

         


            cout<<arr[i][j]<<" ";
            count++;


            if((count-1)%n==0)
            {
                cout<<endl;
            }
        }
    }


    return 0;

}




int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


