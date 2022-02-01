//
//  main.cpp
//  milkMeasuring
//
//  Created by Enjia Zhang on 2022/1/26.
//

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("measurement.in");
ofstream fout("measurement.out");
struct entry{
    int day;
    string name;
    int change;
};
bool cmp(entry a, entry b){
    if(a.day>b.day){
        return true;
    }else{
        return false;
    }
}
struct cows{
    string name;
    int milk;
};
bool cmp2(cows a, cows b){
    if(a.milk>=b.milk){
        return true;
    }else{
        return false;
    }
}
int main(int argc, const char * argv[]) {
    int n;
    entry arr[101];
    cows values[3];
    for(int i = 0; i < 3; i++){
        values[i].milk = 7;
    }
    values[0].name = "Bessie";
    values[1].name = "Elsie";
    values[2].name = "Mildred";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i].day>>arr[i].name>>arr[i].change;
    }
    sort(arr,arr+n,cmp);
    //here is not code
    for(int i = 0; i < n; i++){
        cout<<arr[i].day;
    }
    //all jntil here
    string temp = "Bessie";
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].name == "Bessie"){
            values[0].milk+=arr[i].change;
        }else if(arr[i].name == "Elsie"){
            values[1].milk+=arr[i].change;
        }else{
            values[2].milk+=arr[i].change;
        }
        temp = values[2].name;
        sort(values,values+3,cmp2);
        if(values[2].name != temp||values[1].milk == values[2].milk){
            cnt++;
        }
    }
    fout<<cnt;
    cout<<cnt;
    return 0;
}
