#include <iostream>

using namespace std;

int gcd(int x, int y){
	if(y==0) return x;
	return gcd(y, x%y);
}

int main(){
	cout<<gcd(2,24)<<endl;
	cout<<gcd(7,20)<<endl;
}
