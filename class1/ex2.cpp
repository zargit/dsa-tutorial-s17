#include <iostream>

using  namespace std;

int main(){
	for(int r=0;r<10;r++){
		for(int c=0;c<10;c++){
			if(c>=(10-r-1)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
