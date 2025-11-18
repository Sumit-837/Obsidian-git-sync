#include <stdio.h>

void rec_pyramid(int n) {
	if(n < 1) {
		return;
	}
	rec_pyramid(n-1);
	printf("\n");
	for(int i = 0; i < n; i++) {
		printf("%d ", i+1);
	}	
}

int main() {

	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	
	rec_pyramid(n);
}
