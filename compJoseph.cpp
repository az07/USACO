

#include <iostream>

using namespace std;
int main(){
	int numPeep;
	int startPeep;
	int FirstNum;
	int SecondNum;
	int last = numPeep;
	bool Direct = true;
	int arr[100];
	numPeep = 8;
	startPeep = 1;
	FirstNum = 3;
	SecondNum = 2;
	int temp = startPeep;
	int cnt = 0;
	int numDead = 0;
	for(int x = 0; x < numPeep; x++){
		arr[x] = 1;
	}
	while(numDead <= numPeep){
		if(Direct = true){
			if(cnt!= FirstNum){
				//cout<<"not FirstNum"<<endl;
				for(int i = temp; i < last; i++){
					if(i != numPeep){
						//cout<<"not numPeep"<<endl;
					
						if(arr[i] == 1){
							cnt++;
							if(cnt == FirstNum){
								numDead++;
								arr[i] = 0;
								cout<<i+1;
								temp = i--;
								last--;
								cnt = 0;

								break;

							}
						}
					}else{
						i = 1;
						if(arr[i] == 1){
							cnt++;
							if(cnt == FirstNum){
								numDead++;
								arr[i] = 0;
								cout<<i+1;
								temp = i--;
								last--;
								cnt = 0;
								break;

							}
						}
					}
				}
			
			}
		}else if(Direct == false){
			if(cnt != SecondNum){
				//cout<<"not SecondNum"<<endl;
				for(int j = temp; j >= 1; j--){
					if(j != 1){
						if(arr[j] == 1){
							//cout<<"not one"<<endl;
							cnt++;
							if(cnt == SecondNum){
								numDead++;
								arr[j] = 0;
								cout<<j+1;
								temp = j++;
								last--;
								cnt = 0;
								break;
							}
						}
					}else{
						j = numPeep;
						if(arr[j] == 1){
							cnt++;
							if(cnt == SecondNum){
								numDead++;
								arr[j] = 0;
								cout<<j+1;
								temp = j++;
								cnt = 0;
								last--;
								break;
							}
						}
					}
				}
			}

		}
	}
	for(int t = 0; t < numPeep; t++){
		if(arr[t] = 1){
			cout<<t+1;
		}
	}


}