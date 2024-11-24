#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("nhap 3 canh cua tam giac:\n");
	printf("canh 1 la: ");
	scanf("%d", &a);
	printf("canh 2 la: ");
	scanf("%d", &b);
	printf("canh 3 la: ");
	scanf("%d", &c);
	
	if(a+b>c && a+c>b && b+c>a){
		printf("la 3 canh tam giac.\n");
	} else{
		printf("khong phai 3 canh tam giac.\n");
	}
	return 0;
}  
