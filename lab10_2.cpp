#include<iostream>
using namespace std;

int N ;
int M ;
int i = 0 ;

int printO(int N , int M);
	while(i < N){
		cout <<  "O"*M "\n"
	}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
