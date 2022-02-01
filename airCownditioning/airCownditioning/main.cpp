//
//  main.cpp
//  airCownditioning
//
//  Created by Enjia Zhang on 2021/12/18.
//

#include <iostream>
using namespace std;
//int n;
//int ideal[100001] = {};
//int reality[100001] = {};
//int temp;
//int times = 0;
//int main(int argc, const char * argv[]) {
//    cin>>n;
//    for(int i = 0; i < n; i++){
//        cin>>ideal[i];
//    }
//    for(int i = 0; i < n; i++){
//        cin>>reality[i];
//    }
//    for(int i = 0; i < n; i++){
//        while(reality[i]!=ideal[i]){
//            if(reality[i]>ideal[i]){
//                temp = reality[i]-ideal[i];
//                int j = i;
//                while(reality[j+1]>ideal[j+1]){
//                    if(reality[j] - ideal[j]<temp){
//                        temp = reality[j] - ideal[j];
//                    }
//                    j++;
//                }
//                for(int l = i; l <= j; l++){
//                    reality[l] = reality[l] - temp;
//                }
//                times+=temp;
//            }
//            if(reality[i]<ideal[i]){
//                temp = ideal[i]-reality[i];
//                int j = i;
//                while(reality[j+1]<ideal[j+1]){
//                    if(ideal[j] - reality[j] < temp){
//                        temp = ideal[j] - reality[j];
//                    }
//                    j++;
//                }
//
//                for(int l = i; l <= j; l++){
//                    reality[l] += temp;
//                }
//                times+=temp;
//            }
//        }
//    }
//    cout<<times;
//    return 0;
//}
int num[100000];
int main(){
    int n, t;
    cin >> n;
    int arr[100000];
    for(int i = 1; i <= n; i++){
        cin>>num[i];
        arr[i] = num[i];
    }
    
    
    //end of proper code
    
    
//    sort(arr+1,arr+n);
//    for(int i = 1; i <= n; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    if(arr[1] < 0){
//        cout<<arr[n]+abs(arr[1])<<endl;
//    }else{
//        cout<<arr[n]<<endl;
//    }
    
    
    //proper code from here on
    
    
    for(int i = 1; i <= n; i++){
        cin>>t;
        num[i] -= t;
    }
    long long ansa = 0, ansb = 0;
    for(int i = 1; i <= n; i++){
        if(num[i]>num[i-1]){
            ansa+=abs(num[i] - num[i-1]);
        }else{
            ansb += abs(num[i] - num[i-1]);
        }
    }
    cout<<max(ansa,ansb)<<endl;
    
   
    return 0;
}
