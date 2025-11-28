#include <stdio.h>

int rec_max_finder(int *arr, int len) {
	if(len == 1) {return arr[0];}
	if(arr[0] >= rec_max_finder((arr+1), len-1) ) {
		return arr[0];
	}
}

int main() {
	int arr[] = {6,52,56,321,420,69,126,41,2778};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	printf("%d \n", rec_max_finder(arr, len));
	
}
