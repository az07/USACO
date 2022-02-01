//
//  main.cpp
//  blockGame
//
//  Created by Enjia Zhang on 2022/1/18.
//

#include <iostream>
using namespace std;
struct blocky{
    char face1[11];
    char face2[11];
};
int numberCode(char c){
    if(c == 'a') return 1;
    if(c == 'b') return 2;
    if(c == 'c') return 3;
    if(c == 'd') return 4;
    if(c == 'e') return 5;
    if(c == 'f') return 6;
    if(c == 'g') return 7;
    if(c == 'h') return 8;
    if(c == 'i') return 9;
    if(c == 'j') return 10;
    if(c == 'k') return 11;
    if(c == 'l') return 12;
    if(c == 'm') return 13;
    if(c == 'n') return 14;
    if(c == 'o') return 15;
    if(c == 'p') return 16;
    if(c == 'q') return 17;
    if(c == 'r') return 18;
    if(c == 's') return 19;
    if(c == 't') return 20;
    if(c == 'u') return 21;
    if(c == 'v') return 22;
    if(c == 'w') return 23;
    if(c == 'x') return 24;
    if(c == 'y') return 25;
    if(c == 'z') return 26;
    if(c == ' '){
        return 0;
    }else{
        return 0;
    }
}
int alf[27] = {};
void alfabet(char a[11],char b[11]){
    int alf1[27] = {};
    int alf2[27] = {};
    for(int i = 0; i < 11; i++){
        alf1[numberCode(a[i])]++;

        alf2[numberCode(b[i])]++;
        
    }
    for(int i = 0; i < 26; i++){
        alf[i]+=max(alf1[i],alf2[i]);
    }
}

int main(int argc, const char * argv[]) {
    int n; cin>>n;
    blocky arr[100];
    for(int i = 0; i < n; i++){
        scanf("%s",arr[i].face1);
        scanf("%s",arr[i].face2);

    }
    for(int i = 0; i < n; i++){
        alfabet(arr[i].face1, arr[i].face2);
    }
//    for(int i = 0; i < n; i++){
//        printf("%s",arr[i].face1);
//        cout<<" ";
//        printf("%s",arr[i].face2);
//        cout<<endl;
//
//    }
    for(int i = 1; i <= 26; i++){
        cout<<alf[i]<<endl;
    }
    return 0;
}
//3
//fox box
//dog cat
//car bus
