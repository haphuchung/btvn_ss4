#include <stdio.h>
int main() {
	int number;
	
	printf("nhap mot so nguyen");
	scanf("%d", &number);
	
	if(number%2 == 0) {
		printf("so %d la so chan. \n", number);
	}else{
		printf("so %d la so le. \n", number);
	}
	return 0;
}
