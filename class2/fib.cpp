#include <iostream>

using namespace std;

int fib(int N){
	if(N<=1) return N;
	return fib(N-2) + fib(N-1);
}

int main(){
	cout<<fib(5)<<endl;
	return 0;
}
