//
//  main.cpp
//  MeasuringTraffic
//
//  Created by Enjia Zhang on 2022/1/3.
//

#include <iostream>
using namespace std;
struct mile{
    string ramp;
    int min;
    int max;
};
int n;
int main(int argc, const char * argv[]) {
    cin>>n;
    mile arr[n+2];
    for(int i = 0; i < n; i++){
        cin>>arr[i].ramp>>arr[i].min>>arr[i].max;
    }
    int a = -999999999, b = 999999999;
    for(int i = n-1; i >= 0; i--){
        if(arr[i].ramp == "none"){ a = max(a,arr[i].min); b = min(b,arr[i].max);}
        if(arr[i].ramp == "on"){ a -= arr[i].min; b -= arr[i].max;}
        if(arr[i].ramp == "off"){ a += arr[i].max; b += arr[i].min; a = max(0,a);}
    }
    cout<<a<<" "<<b<<endl;
    a = -999999999; b = 999999999;
    for(int i = 0; i < n; i++){
        if(arr[i].ramp == "none"){ a = max(a,arr[i].min); b = min(b,arr[i].max);}
        if(arr[i].ramp == "on"){ a += arr[i].min; b += arr[i].max;}
        if(arr[i].ramp == "off"){ a -= arr[i].max; b -= arr[i].min; a = max(0,a);}
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
//4
//on 1 1
//none 10 14
//none 11 15
//off 2 3

//answer:
//10 13
//8  12
