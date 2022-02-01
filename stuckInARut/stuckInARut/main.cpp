//
//  main.cpp
//  stuckInARut
//
//  Created by Enjia Zhang on 2022/1/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    char dir[51];
    int arr[2][51];
    int ae[51];
    cin>>n;
    cout<<"hi";
    for(int i = 0; i< n; i++){
        cin>>dir[i]>>arr[0][i]>>arr[1][i];
    }
    cout<<"here";
    bool field[1000][1000] = {};
    int cow[52];
    int temp[2][51];
    for(int i = 0; i < 100; i++){
        for(int i = 0; i < n; i++){
            if(cow[i] == 1){
                if(dir[i] == 'E'){
                    temp[0][i] = arr[0][i];
                    temp[1][i] = arr[1][i];
                    arr[0][i]++;
                    ae[i]++;
                    if(field[arr[0][i]][arr[1][i]] == false){
                        cow[i+1] = 0;
                        cow[0]++;
                    }
                }else if(dir[i] == 'N'){
                    temp[0][i] = arr[0][i];
                    temp[1][i] = arr[1][i];
                    arr[1][i]++;
                    ae[i]++;
                    if(field[arr[0][i]][arr[1][i]] == false){
                        cow[i+1] = 0;
                        cow[0]++;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            field[temp[0][i]][temp[1][i]] = false;
        }
//        if(cow[0]>=50){
//            break;
//        }
    }
    
    for(int i = 0; i < n; i++){
        if(ae[i] == INT_MAX){
            cout<<"infinity"<<endl;
        }else{
            cout<<ae[i];
        }
    }
    
    return 0;
}
