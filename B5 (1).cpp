#include <stdio.h>
#include <string.h>

int main(){
	char str[100];	
	printf("Nhap vao mot chuoi bat ki: ");	
	gets(str);
	int cnt=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i] == ' ')	
		cnt++;
	}
	printf("So tu trong mang la: %d", cnt);
}
