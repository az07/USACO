//
//  main.cpp
//  TheGreatRevegetation
//
//  Created by Enjia Zhang on 2022/1/12.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    int a[151], b[151];
    int G[101];
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a[i]>>b[i];
        if(a[i]>b[i]) swap(a[i],b[i]);
    }
    for(int i = 1; i <= n; i++){
        int g;
        for(g = 1; g <= 4; g++){
            bool ok = true;
            for(int j = 0; j < m; j++){
                if(b[j] == i && G[a[j]] == g) ok = false;
            }
            if(ok) break;
        }
        G[i] = g;
        cout<<g;
    }
    cout<<endl;
    return 0;
}
