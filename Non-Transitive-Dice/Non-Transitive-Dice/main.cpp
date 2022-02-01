//
//  main.cpp
//  Non-Transitive-Dice
//
//  Created by Enjia Zhang on 2022/1/29.
//

#include <iostream>
using namespace std;
int n;
int dice1[10][4];
int dice2[10][4];
int score[10][2];
int sco3[2];
int dice3[4];
string ans[10];
bool tof[10] = {};
void compare(int i){
    for(int j = 0; j < 4; j++){
        for(int l = 0; l < 4; l++){
            if(dice2[i][l]<dice1[i][j]){
                score[i][0]++;
            }
        }
    }
    for(int j = 0; j < 4; j++){
        for(int l = 0; l < 4; l++){
            if(dice1[i][l]<dice2[i][j]){
                score[i][1]++;
            }
        }
    }
}
int comp(int i){
    if(tof[i] == true){
        return 1;
    }
    for(int j = 0; j < 4; j++){
        for(int l = 0; l < 4; l++){
            if(dice1[i][l]<dice3[j]){
                sco3[0]++;
            }
        }
    }
    for(int j = 0; j < 4; j++){
        for(int l = 0; l < 4; l++){
            if(dice2[i][l]<dice3[j]){
                sco3[1]++;
            }
        }
    }
    int temp,o;
    if(score[i][0]>score[i][1]){
        temp = 0;
        o = 1;
    }else if(score[i][0]<score[i][1]){
        temp = 1;
        o = 0;
    }
    if(sco3[temp]>score[i][temp]&&sco3[temp]<score[i][o]){
        ans[i] = "yes";
        return 1;
    }
    ans[i] = "no";
    return 0;
}
int main(int argc, const char * argv[]) {
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin>>dice1[i][j];
        }
        for(int j = 0; j < 4; j++){
            cin>>dice2[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        compare(i);
        for(int m = 0; m < 10; m++){
            for(int q = 0; q < 10; q++){
                for(int c = 0; c < 10; c++){
                    for(int k = 0; k < 10; k++){
                        dice3[0] = m;
                        dice3[1] = q;
                        dice3[2] = c;
                        dice3[3] = k;
                        if(comp(i) == 1) tof[i] = true;;
                        
                    }
                }
            }
        }
        
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
//3
//4 5 6 7 2 4 5 10
//2 2 2 2 1 1 1 1
//1 1 1 1 2 2 2 2
