#include<stdio.h>
 main(){
 	int i,n;
 	printf("enter array size :-");
 	scanf("%d",&n);
 	int a[n];
 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]:-",i);
 		scanf("%d",&a[i]);
 		
	 }
	 printf("\n printf event array element \n");
	 for(i=0;i<n;i++){
	 	if(a[i]%2==0){
	 		printf("%d ",a[i]);
		 }
	 }
 	
 	
 }
