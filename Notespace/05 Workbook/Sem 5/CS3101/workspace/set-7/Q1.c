#include <stdio.h>

void rec_rev_func(int n) {
	if(n < 1) {
		return;
	}
	printf("%d ", n);
	rec_rev_func(n-1);
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	rec_rev_func(n);
	printf("\n");
}


