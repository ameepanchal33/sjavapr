#include<iostream>
using namespace std;
int main(){
	int i=0;
	while(i<=100){
		i++;
		if(i%2==0){
		   continue;	
			}
		else{
				cout<<i<<"\t";
		}
	}
	
}
