#include <stdio.h>


int findthatmf(int *arr, int len) {
	int sum, act_sum, result;
	
	act_sum = (len*(len+1))/2;
	sum = 0;
	for(int i = 0; i < len; i++) {
		sum += arr[i];
	}
	result = act_sum - sum;
	return result;
}

 int main() {
 	int arr[] = {0,3,5,2,1,4};
 	int len = sizeof(arr)/sizeof(arr[0]);
 	
 	printf("%d ", findthatmf(arr, len));
 	printf("\n");
 	return 0;
 }
