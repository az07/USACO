//
//  main.cpp
//  doYouKnowYourABCs
//
//  Created by Enjia Zhang on 2022/1/26.
//
#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[7];
    for(int i = 0; i < 7; i++){
        cin>>arr[i];
    }
    sort(arr,arr+7);
    int temp = arr[6];
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            for(int m = 0; m < 7; m++){
                if(arr[i]+arr[j]+arr[m] == temp){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[m];
                    return 0;
                }
            }
        }
    }
    return 0;
}
