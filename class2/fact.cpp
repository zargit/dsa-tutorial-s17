#include <iostream>

using namespace std;

int fact(int N){
	if(N==0) return 1;
	return N * fact(N-1);
}

int main(){
	cout<<fact(5)<<endl;
	return 0;
}