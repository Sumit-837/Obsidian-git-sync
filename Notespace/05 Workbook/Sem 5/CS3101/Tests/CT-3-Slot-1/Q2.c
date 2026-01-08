#include <stdio.h>
#include <math.h>

int rec_sq_sum(int n) {
	if(n < 1) {
		return 0;
	}
	return ((n*n) + rec_sq_sum(n-1));
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	int result = rec_sq_sum(n);
	printf("%d\n", result);
}


