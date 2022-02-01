//
//  main.cpp
//  guessTheAnimal
//
//  Created by Enjia Zhang on 2022/1/23.
//

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("guess.in");
ofstream fout("guess.out");
int main(int argc, const char * argv[]) {
    int n;
    string arr[101][101] = {};
    int st[101][101] = {};
    int tn[101] = {};
    fin>>n;
    string name;
    for(int i = 0; i < n; i++){
        fin>>name;
        fin>>tn[i];
        for(int j = 0; j < tn[i]; j++){
            fin>>arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            if(k!=i){
                for(int j = 0; j < tn[i]; j++){
                    for(int l = 0; l < tn[k]; l++){
                        if(arr[i][j] == arr[k][l]){
                            st[i][k]++;
                        }
                    }
                }
            }
        }
    }
    int m = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(st[i][j]>temp){
                temp = st[i][j];
                m = i;
            }
        }

    }
    
    fout<<temp+1;

    return 0;
}
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//int N;
//vector<string> characteristics[100];
//
//int num_common(int i, int j)
//{
//  int count = 0;
//  vector<string> &v1 = characteristics[i], &v2 = characteristics[j];
//  for (int i=0; i<v1.size(); i++)
//    for (int j=0; j<v2.size(); j++)
//      if (v1[i] == v2[j]) count++;
//  return count;
//}
//
//int main(void)
//{
//  ifstream fin ("guess.in");
//  fin >> N;
//  string s;
//  for (int i=0; i<N; i++) {
//    int K;
//    fin >> s >> K;
//    for (int j=0; j<K; j++) {
//      fin >> s;
//      characteristics[i].push_back(s);
//    }
//  }
//
//  int largest = 0;
//  for (int i=0; i<N; i++)
//    for (int j=i+1; j<N; j++)
//      largest = max(largest, num_common(i,j));
//
//  ofstream fout ("guess.out");
//  fout << largest+1 << "\n";
//  return 0;
//}
//4
//bird 2 flies eatsworms
//cow 4 eatsgrass isawesome makesmilk goesmoo
//sheep 1 eatsgrass
//goat 2 makesmilk eatsgrass
