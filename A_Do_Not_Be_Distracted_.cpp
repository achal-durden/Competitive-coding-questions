#include <bits/stdc++.h>
using namespace std;


string ret(int n,string str){


    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
        {
            for(int j=i;j<n;j++)
            {
                if(str[i]==str[j+1])
                {
                    return "NO";
                }

            }
        }
    }

    return "YES";

}

int main(){
    int t;
    cin>>t;
    
    
    while(t--){
        int n;
        cin>>n;
        string poly;
        cin>>poly;

        cout<<ret(n,poly);
        cout<<endl;


    }

}
//        char poly[n];
       
//        for(int k=0;k<n;k++){
//            cin>>poly[k];
//        }


//        for(int i=0;i<n;i++){
//            if(poly[i]!=poly[i+1]){
//                for(int j =i;j<n;j++){
//                    if(poly[i]==poly[i+j]){
                       
                       
//                    }
//                }
//            }
//        }
       
//        ves.push_back("yes");
//        goto b;
//     }

//     for(int p =0;p<ves.size();p++){
//         cout<<ves[p]<<"\n";
//     }
// }





    //    vector<int> vec;
    //    for(int i=0;i<n;i++){
    //        if(poly[i]!=poly[i+1]){
    //            vec.push_back(i);
    //        }
    //    }

    //    for(int i=0;i<n;i++){
    //        for(int j=1;j<vec.size();j++){
    //             if(poly[vec[i]]==poly[vec[i]+j]){
    //                 cout<<"no";
    //                 break;
                    
    //             }
    //        }
    //    }

    //    cout<<"yes";


    
