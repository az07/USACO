#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int start, int end){
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

		}
	}
	e--;
	bubbleSort(arr, s, e);
}
int main(){
	int arr[10] = {1,4,7,2,3,5,8,6,9,10};
	int arrtwo[10] = {1,4,7,2,3,5,8,6,9,10};
	sort(arr, arr+10);
	for(int i = 0; i<10; i++){
		cout<<arr[i];
	}
	cout<<endl;
	bubbleSort(arrtwo, 0, 9);
	for(int j = 0; j<10; j++){
		cout<<arrtwo[j];
	}


}