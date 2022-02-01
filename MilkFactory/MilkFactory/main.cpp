//
//  main.cpp
//  MilkFactory
//
//  Created by Enjia Zhang on 2022/1/20.
//

#include <iostream>
#include <fstream>
using namespace std;
int n;
int arr[101];
int main(int argc, const char * argv[]) {
    ifstream fin("factory.in");
    fin>>n;
    int a,b;
    for(int i = 0; i < n-1; i++){
        fin>>a>>b;
        arr[a]++;
    }
    ofstream fout("factory.out");
    int ans = -1;
    for(int i = 1; i <= n; i++){
        if(arr[i] == 0 && ans!=-1){
            fout<<-1;
            return 0;
        }else if(arr[i] == 0 && ans == -1){
            ans = i;
        }
    }
    fout<<ans;
    return 0;
}
//3
//1 2
//3 2
