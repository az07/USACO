//
//  main.cpp
//  lonelyPhotos
//
//  Created by Enjia Zhang on 2021/12/18.
//

#include <iostream>
using namespace std;
long long n;
char arr[500000];
long long lonelyPhoto = 0;
int main() {
    cin>>n;
    for(long long i = 1; i <= n; i++){
        cin>>arr[i];
    }
    long long gcount;
    for(long long i = 1; i <= n-2; i++){
        gcount = 0;
        for(long long j = i; j <= n; j++){
            if(arr[j] == 'G'){
                gcount++;
            }
            if(j-i >= 2){
                if(gcount == 1 || gcount == j-i){
                    lonelyPhoto++;
                }
            }
        }
    }
    cout<<lonelyPhoto;
    return 0;
}

