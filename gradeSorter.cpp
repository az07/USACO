#include <bits/stdc++.h>
using namespace std;
void gradeSorter(int arr[], char* arrt, int start, int end){
	bool flag = true;
	int s = start;
	int e = end;
	int b = 0;
	if(e-s == 0){
		return;
	}
	for(int b = 0; b< e-s; b++){
		if(arr[b] >= arr[b+1]){
			swap(arr[b], arr[b+1]);
			swap(arrt[b], arrt[b+1]);

		}
	}
	e--;
	gradeSorter(arr, arrt, s, e);
}
int main(){
	int length = 4;
	int arr[length] = {80,90,92,28};
	char arrtwo[length] = {'K','H','J','T'};
	// sort(arr, arr+length);
	// for(int i = 0; i<length; i++){
	// 	cout<<" s "<<arr[i];
	// }
	// cout<<endl;
	gradeSorter(arr, arrtwo, 0, length-1);
	for(int j = length; j>=1; j--){
		cout<<"Initial: "<<arrtwo[j-1];
		cout<<" Grade: "<<arr[j-1]<<endl;
		
	}


}