//
//  main.cpp
//  outOfPlace
//
//  Created by Enjia Zhang on 2022/1/22.
//

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("outofplace.in");
ofstream fout("outofplace.out");
int arr[102];
int main(int argc, const char * argv[]) {
    int n;
    bool bs = true;
    int wrong = 0;
    int temp;
//    fin>>n;
    fin>>n;
    int cnt = 0;
    int f = 0;
//    cout<<"here";
    for(int i = 1; i <= n; i++){
        fin>>arr[cnt];
        if(arr[cnt]!=arr[cnt-1]){
            cnt++;
        }else{
            f++;
        }
    }
//    cout<<"here";
    if(n == 2){
//        fout<<1;
        fout<<1;
        return 0;
    }
    temp = arr[1];
//    arr[n+1] = INT_MAX;
//    cout<<"here 2";
    for(int i = 1; i <= n; i++){
        if(arr[i]<temp){
            if(arr[i-2]<arr[i]&&arr[i+1]>arr[i]){
                temp = arr[i-1];
//                cout<<arr[i-1];
//                cout<<i-1;
                wrong = i-1;
//                cout<<temp<<"num1 ";
//                cout<<wrong<<"num1 ";
                bs = true;
                break;
            }else{
                temp = arr[i];
                wrong = i;
//                cout<<temp<<"num2 ";
//                cout<<wrong<<"num2 ";
                bs = false;
                break;
            }
        }else if(arr[i]>temp){
            temp = arr[i];
        }
    }
    arr[n-f+1] = INT8_MAX;
    if(bs == false){
        for(int i = wrong; i >= 0; i--){
            if(arr[i]<temp){
                fout<<wrong-(i+1);
                return 0;
            }
        }
    }else{
        for(int i = wrong; i <= n+1; i++){
            if(arr[i]>temp){
                fout<<(i+1)-wrong;
//                cout<<i;
                return 0;
//            }else{
//                cout<<(n-f+1)-wrong;
//                cout<<n-f+1;
//                return 0;
            }
        }
    }
    fout<<"fail";
    return 0;
}
//6
//2
//4
//7
//7
//9
//3
