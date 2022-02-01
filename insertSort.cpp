#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = {1,2,3,4,6,7,8,9,10};
	int b[10] = {1,2,3,4,5,5,6,7,8,9};
	int i = 5;
	int j = 5;
	int temp;
	int one = 4;
	// for(int x = 0; x<10; x++){
	// 	if(i-a[x]==1){
	// 		cout<<x+1;
	// 		one = x;
	// 	}
	// }
	for(int y = 10; y >= 4; y--){
		a[y] = a[y-1];

	}
	a[4] = 5;
	for(int m = 0; m < 10; m++){
		cout<<a[m]<<" ";
	}
	for(int k = 4; k <=10; k++){
		b[k] = b[k+1];
	}
	cout<<endl;
	for(int l = 0; l < 10; l++){
		if(b[l]!=0){
			cout<<b[l]<<" ";
		}
		
	}
}


