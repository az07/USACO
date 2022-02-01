//
//  main.cpp
//  herdle
//
//  Created by Enjia Zhang on 2022/1/29.
//

#include <iostream>
using namespace std;
int num(char a){
    if(a == 'A') return 0;
    if(a == 'B') return 1;
    if(a == 'C') return 2;
    if(a == 'D') return 3;
    if(a == 'E') return 4;
    if(a == 'F') return 5;
    if(a == 'G') return 6;
    if(a == 'H') return 7;
    if(a == 'I') return 8;
    if(a == 'J') return 9;
    if(a == 'K') return 10;
    if(a == 'L') return 11;
    if(a == 'M') return 12;
    if(a == 'N') return 13;
    if(a == 'O') return 14;
    if(a == 'P') return 15;
    if(a == 'Q') return 16;
    if(a == 'R') return 17;
    if(a == 'S') return 18;
    if(a == 'T') return 19;
    if(a == 'U') return 20;
    if(a == 'V') return 21;
    if(a == 'W') return 22;
    if(a == 'X') return 23;
    if(a == 'Y') return 24;
    if(a == 'Z') return 25;
    return 0;
}
int main(int argc, const char * argv[]) {
    char ans[3][3];
    char guess[3][3];
    int la[26] = {};
    int lg[26] = {};
    int g = 0;
    int y = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>ans[i][j];
            int temp = num(ans[i][j]);
            la[temp]++;
            
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>guess[i][j];
            int temp = num(guess[i][j]);
            lg[temp]++;
            if(guess[i][j] == ans[i][j]){
                g++;
                lg[temp]--;
                la[temp]--;
            }
        }
    }
    for(int i = 0; i < 26; i++){
        y+=min(la[i],lg[i]);
    }
    cout<<g<<endl<<y;
    return 0;
}
