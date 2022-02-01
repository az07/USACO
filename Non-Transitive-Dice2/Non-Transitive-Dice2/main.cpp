//
//  main.cpp
//  Non-Transitive-Dice2
//
//  Created by Enjia Zhang on 2022/1/29.
//

#include <iostream>
using namespace std;
int n;
int dice[3][4];
//bool done = false;
bool ans[10];
bool compare(int i){
    int score[3][3];
//    if(done == true){
//        return false;
//    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
//            if(j!=i){
            for(int l = 0; l < 4; l++){
                for(int f = 0; f < 4; f++){
                    if(dice[i][l]>=dice[j][f]){
                        score[i][j]++;
                    }
                }
            }
//            }
        }
    }
    
    if(score[0][1]==score[1][0]||score[0][2] == score[2][0]||score[1][2]==score[2][1]){
        return false;
    }
    if(score[0][1]>score[1][0]){
        if(score[0][2]<score[2][0]&&score[1][2]>score[2][1]){
//            done = true;
            ans[i] = true;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout<<score[i][j];
                }
            }
            return true;
        }
    }else if(score[0][1]<score[1][0]){
        if(score[0][2]>score[2][0]&&score[1][2]<score[2][1]){
//            done = true;
            ans[i] = true;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout<<score[i][j];
                }
            }
            return true;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
//        done = false;
        for(int j = 0; j < 4; j++){
            cin>>dice[0][j];
        }
        for(int j = 0; j < 4; j++){
            cin>>dice[1][j];
        }
        for(int m = 1; m <= 10; m++){
            for(int q = 1; q <= 10; q++){
                for(int c = 1; c <= 10; c++){
                    for(int k = 1; k <= 10; k++){
                        dice[2][0] = m;
                        dice[2][1] = q;
                        dice[2][2] = c;
                        dice[2][3] = k;
                        
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(ans[i] == true){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
//    for(int i = 0; i < n; i++){
//        cout<<ans[i];
//    }
    return 0;
}

