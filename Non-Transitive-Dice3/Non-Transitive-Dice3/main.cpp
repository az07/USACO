//
//  main.cpp
//  Non-Transitive-Dice3
//
//  Created by Enjia Zhang on 2022/1/29.
//

#include <iostream>
using  namespace std;
int main(int argc, const char * argv[]) {
    string ans[10];
    int n;
    int dice[3][4];
    cin>>n;
    for(int i = 0; i < n; i++){
        int s1 = 0, s2 = 0;
        for(int j = 0; j < 4; j++){
            cin>>dice[0][j];
        }
        for(int j = 0; j < 4; j++){
            cin>>dice[1][j];
        }
        for(int l = 0; l < 4; l++){
            for(int j = 0; j < 4; j++){
                if(dice[0][l]>dice[1][j]){
                    s1++;
                }
                if(dice[1][l]>dice[0][j]){
                    s2++;
                }
            }
        }
        for(int m = 1; m <= 10; m++){
            for(int q = 1; q <= 10; q++){
                for(int c = 1; c <= 10; c++){
                    for(int k = 1; k <= 10; k++){
                        int s31 = 0,s32=0, s13 = 0,s23 = 0;
                        dice[2][0] = m;
                        dice[2][1] = q;
                        dice[2][2] = c;
                        dice[2][3] = k;
                        for(int l = 0; l < 4; l++){
                            for(int j = 0; j < 4; j++){
                                if(dice[2][l]>dice[1][j]){
                                    s32++;
                                }
                                if(dice[2][l]>dice[0][j]){
                                    s31++;
                                }
                                if(dice[0][l]>dice[2][j]){
                                    s13++;
                                }
                                if(dice[1][l]>dice[2][j]){
                                    s23++;
                                }
                            }
                        }
                        if(s1>s2){
                            if(s13<s31&&s23>s32){
                                ans[i] = "yes";
//                                cout<<i<<endl;
//                                for(int a = 0; a < 3; a++){
//                                    for(int b = 0; b < 4; b++){
//                                        cout<<dice[a][b]<<" ";
//                                    }
//                                    cout<<endl;
//                                }
                            }
                        }else if(s2>s1){
                            if(s23<s32&&s13>s31){
                                ans[i] = "yes";
//                                cout<<i<<endl;
//                                for(int a = 0; a < 3; a++){
//                                    for(int b = 0; b < 4; b++){
//                                        cout<<dice[a][b]<<" ";
//                                    }
//                                    cout<<endl;
//                                }
                            }
                        }
                    }
                }
            }
        }
//        cout<<s1<<" "<<s2<<endl;
    }
    for(int i = 0; i < n; i++){
        if(ans[i] == "yes"){
            cout<<ans[i]<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
