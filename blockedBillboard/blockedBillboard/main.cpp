//
//  main.cpp
//  blockedBillboard
//
//  Created by Enjia Zhang on 2022/1/2.
//

#include <iostream>
using namespace std;
int b1[4];
int b2[4];
int truck[4];
int arr[2000][2000] = {};
int cnt = 0;
int main(int argc, const char * argv[]) {
    cin>>b1[0]>>b1[1]>>b1[2]>>b1[3];
    cin>>b2[0]>>b2[1]>>b2[2]>>b2[3];
    cin>>truck[0]>>truck[1]>>truck[2]>>truck[3];
    
    for(int i = b1[0]-1; i < b1[2]; i++){
        for(int j = b1[1]-1; j < b1[3]; j++){
            arr[i][j]++;
        }
    }
    for(int i = b2[0]-1; i < b2[2]; i++){
        for(int j = b2[1]-1; j < b2[3]; j++){
            arr[i][j]++;
        }
    }
//    for(int i = truck[0]-1; i < truck[2]; i++){
//        for(int j = truck[1]-1; j < truck[3]; j++){
//            arr[i][j] = 3;
//        }
//    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j] > 0){
                cnt++;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<cnt;
    return 0;
}
//1 2 3 4
//6 0 10 4
//2 1 8 3
//return 17;
