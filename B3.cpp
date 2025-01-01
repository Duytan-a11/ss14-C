#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Nhap vao mot chuoi bat ki: ");	
	gets(str);
	printf("Chuoi cua ban sau khi dao nguoc la:\n");
	
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
