#include <stdio.h>

void rec_fwd_func(int n) {
	if(n < 1) {
		return;
	}
	rec_fwd_func(n-1);
	printf("%d ", n);
	
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	rec_fwd_func(n);
	printf("\n");
}


