#include <stdio.h>

int main(){

	int fact, i, n;
	fact=1;
	printf("Enter the number \n");
	fflush( stdout );
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		fact = fact * i;
	}
	printf("%d's factorial number %d", n, fact);
	return 0;
}

