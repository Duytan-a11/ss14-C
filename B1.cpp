#include <stdio.h>
#include <string.h>

int main(){
	char c[100];
	printf("Nhap vao mot chuoi bat ki: ");	
	gets(c);
	
	printf("Chuoi cua ban la: %s\nDo dai cua chuoi la: %d",c,strlen(c));
}
