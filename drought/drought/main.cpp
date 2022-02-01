//
//  main.cpp
//  drought
//
//  Created by Enjia Zhang on 2022/1/29.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    int ans[100];
    int n;
    long long arr[100000];
    long long sub[100000];
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        long long temp = 9223372036854775807;
        for(int j = 0; j < n; j++){
            cin>>arr[j];
            if(arr[j]<temp){
                temp = arr[j];
            }
        }
        bool k = false;
        for(long long j = temp; j >=0; j--){
            
            for(int l = 0; l < n; l++){
                sub[l] = arr[l]-j;
            }
            for(int l = 1; l < n-1; l+=3){
                if(sub[l]-min(sub[l+1],sub[l-1]) == max(sub[l+1],sub[l-1])&&k == false){
//                    ans[i]+=sub[l];
//                    k = true;
                }else{
                    k = true;
                }
            }
            if(k == false){
                for(int m = 0; m < n; m++){
                    ans[i]+=sub[m];
                }
                k = true;
                
            }else{
                ans[i] = -1;
            }
        }
    }
    for(int i = 0; i < t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
