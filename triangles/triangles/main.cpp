//
//  main.cpp
//  triangles
//
//  Created by Enjia Zhang on 2022/1/13.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin>>n;
    int x[10000];
    int y[10000];
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(y[i] == y[j] && x[i] == x[k]){
                    int area = abs((x[j]-x[i])+(y[k]-y[i]));
                    ans = max(ans, area);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
