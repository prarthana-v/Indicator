#include<stdio.h>
main(){
	

	char str[100];
	
	printf("Enter any string:");
	gets(str);
	
	char *p;
	p=&str;
	
	int i;
	int c=0;
	for(i=0;str[i]!='\0';i++){
		c++;
		p++;
		
	}
	printf("%d",c);

	

	
}
