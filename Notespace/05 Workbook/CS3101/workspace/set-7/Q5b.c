#include <stdio.h>

void rec_rev_pyramid(int n) {
	if(n < 1) {
		return;
	}
	for(int i = 0; i < n; i++) {
		printf("%d ", i+1);
	}
	printf("\n");
	rec_rev_pyramid(n-1);
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	rec_rev_pyramid(n);
}
