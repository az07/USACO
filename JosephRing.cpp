#include <iostream>
using namespace std;
int main(){
	int roundNum = 1;
	int callNum = 1;
	int arr[41];
	int numlive = 41;
	cout<<"live = "<<numlive<<endl;
	for(int i = 0; i<41; i++){
		arr[i] = 1;
	}
	while(numlive > 1){
		for(int j = 0; j < 41; j++){
			if(arr[j] != 0){
				if(callNum != 3){
					
					arr[j] = callNum;
					callNum++;
				} else if(callNum == 3){
					callNum = 1;
					arr[j] = 0;
					numlive--;
					cout<<"live = "<< numlive;
					cout<<" dead "<<j+1<<endl;
				}
			}
		}

		cout<<"Round "<<roundNum<< " over!"<<endl;
		roundNum++;
	}
	for(int x = 0; x <= 41; x++){
		if(arr[x] == 1){
			cout<<x+1<<endl;
		}
	}
	
}
