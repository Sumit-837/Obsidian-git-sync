#include <stdio.h>

int rec_sum_func(int n) {
	while(n > 0) {
		int sum = n + rec_sum_func(n - 1);
		return sum;
	}
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	if(rec_sum_func(n) < 0) {
		printf("invalid input\n");
		return 1;
	}
	printf("The sum of all natural numbers upto %d is %d\n", n, rec_sum_func(n));
}


