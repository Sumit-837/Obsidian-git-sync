#include <stdio.h>

int main() {
	int arr[] = {-7, 1, 5, 2, -4, 3, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	int leftsum = 0; 
	int rightsum = 0;
	
	for(int i = 0; i < len; i++) {
		rightsum += arr[i];
	}
	
	 
	for(int i = 0; i < len; i++) {
		leftsum += arr[i];
	
		if(leftsum == rightsum) {
			printf("pt = %i, index = %i\n",arr[i], i);
			return 0;
		}
		rightsum -= arr[i];
	}
	
}
