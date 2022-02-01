//
//  main.cpp
//  walkingHome
//
//  Created by Enjia Zhang on 2021/12/18.
//

#include <iostream>
using namespace std;
char arr[51][51];
int n;
int k;
int t;
int pos[50] = {};
int dx[2] = {0,1};
int dy[2] = {1,0};
int flag;
void dfs(int x, int y, int s, int key){
    int fx,fy;
    for(int i = 0; i < 2; i++){
        fx = x + dx[i];
        fy = y + dy[i];
        if(x == 1 && y == 1){
            flag = i;
        }
        if(arr[fx][fy] != 'H'&&fx<=n&&fy<=n){
            if(i != flag){
                key--;
                if(key<0) return;
                if(flag == 1){
                    flag = 0;
                }else{
                    flag = 1;
                }
            }
            if(fx==n&&fy==n){
                pos[s]++;
                return;
            }
            dfs(fx,fy,s,key);
        }
    }
    return;
}
int main(){
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n>>k;
        for(int x = 1; x <= n; x++){
            for(int y = 1; y <= n; y++){
                cin>>arr[x][y];
            }
        }

        dfs(1,1,i,k);
    }
    for(int i = 0; i < t; i++){
        cout<<pos[i]<<endl;
    }
    return 0;
}
