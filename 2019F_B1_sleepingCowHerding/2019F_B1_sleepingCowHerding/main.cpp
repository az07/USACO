//
//  main.cpp
//  2019F_B1_sleepingCowHerding
//
//  Created by Enjia Zhang on 2022/2/16.
//

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("herding.in");
ofstream fout("herding.out");
int main(int argc, const char * argv[]) {
    int arr[3];
    int dif[2];
    for(int i = 0 ; i < 3; i ++){
        fin>>arr[i];
    }
    sort(arr,arr+3);
    
//    for(int i = 0 ; i < 3; i++){
//        cout<<arr[i];
//    }
//    cout<<endl;
    
    dif[0] = (arr[1] - arr[0]) - 1;
    dif[1] = (arr[2] - arr[1]) - 1;
    
//    cout<<dif[0]<<endl<<dif[1];
    
//    if(dif[0] == 1 && dif[1] == 1){
//        fout<<1;
//        fout<<endl;
//        fout<<1;
//    }else
    if(dif[0] == 1 || dif[1] == 1){
        fout<<1;
        fout<<endl;
        fout<<max(dif[0],dif[1]);
    }else if(dif[0] == 0 &&ue e dif[1] == 0){
        fout<<0;
        fout<<endl;
        fout<<0;
    }else{
        fout<<2;
        fout<<endl;
        fout<<max(dif[0],dif[1]);
    }
    return 0;
}
