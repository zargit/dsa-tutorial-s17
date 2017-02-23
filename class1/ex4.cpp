#include <iostream>

using namespace std;

int main(){
	int nums[] = {5, -5, 10, 5, -15, 15, 10, -25, 3, 1};
	int c_sum[10];
	
	c_sum[0] = nums[0];
	for(int i=1;i<10;i++){
		c_sum[i] = c_sum[i-1] + nums[i];
	}

	for(int i=0;i<10;i++){
		cout<<c_sum[i]<<" ";
	}
	cout<<endl;
	return 0;
}
