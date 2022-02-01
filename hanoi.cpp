#include <iostream>
#include<cstdio>
using namespace std;
int step = 1;
//hanoi º¯Êý£ºº¯Êý¹¦ÄÜÎª£ºÄ³¸ùÖù×ÓÉÏµÄn¸öÅÌ×Ó£¬´ÓstartÖù½èÖúdepend_onÖùµ½´ïendÖù 
void hanoi(int n,char start,char depend_on,char end)
{
	if(n == 1){
		cout<<"step "<<step<<" "<<start<<"-->"<<end<<endl;
		step = step + 1;
	}
	else if(n>1)
	{
		hanoi(n-1,start,end,depend_on);
		cout<<"step "<<step<<" "<<start<<"-->"<<end<<endl;
		step++;
		hanoi(n-1,depend_on,start,end);

	}
} 

int main(){
	int n;
	// cin>>n;
	n = 3;
	hanoi(n,'A','B','C');
    return 0;
}

