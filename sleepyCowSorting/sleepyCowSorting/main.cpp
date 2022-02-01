//
//  main.cpp
//  sleepyCowSorting
//
//  Created by Enjia Zhang on 2022/1/25.
//

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sleepy.in");
ofstream fout("sleepy.out");
int main(int argc, const char * argv[]) {
    int n;
    int arr[101];
    fin>>n;
    for(int i = 1; i <= n; i++){
        fin>>arr[i];
    }
    int sol = 0;
    int temp = arr[n];
    for(int i = n; i > 0; i--){
        if(arr[i] <= temp){
            sol++;
            temp = arr[i];
//            cout<<"hi";
        }else{
            break;
        }
    }
    fout<<n-sol;
    return 0;
}
