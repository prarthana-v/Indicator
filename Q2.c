#include<stdio.h>
	
main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("Enter array elements:\n");
	
	int i,j;
	int cube=0;
	int *ptr;
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			printf(" enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			cube=a[i][j]*a[i][j]*a[i][j];
			ptr=&cube;
			printf("Cube of a[%d][%d] is:");
			printf("%d ",*ptr);	
			printf("\n\n");	
	     	
		}
	}
	
	


	
	
}
