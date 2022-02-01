//
//  main.cpp
//  HoofPaperScissors
//
//  Created by Enjia Zhang on 2022/1/20.
//

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("hps.in");
ofstream fout("hps.out");
int cow1[101];
int n;
int cow2[101];
int game(int scissors, int hoof, int paper){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(cow1[i] == hoof && cow2[i] == scissors){
            cnt++;
        }else if(cow1[i] == scissors && cow2[i] == paper){
            cnt++;
        }else if(cow1[i] == paper && cow2[i] == hoof){
            cnt++;
        }
    }
    return cnt;
}
int main(int argc, const char * argv[]) {
    fin>>n;
    for(int i = 0; i < n; i++){
        fin>>cow1[i]>>cow2[i];
    }
    int temp = game(1,2,3);
    temp = max(game(1,3,2), temp);
    temp = max(game(2,1,3), temp);
    temp = max(game(2,3,1), temp);
    temp = max(game(3,1,2), temp);
    temp = max(game(3,2,1), temp);
    fout<<temp;
    return 0;

}
//5
//1 2
//2 2
//1 3
//1 1
//3 2

