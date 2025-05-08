#include <stdio.h>

int main() {
    int no,cnt=1;
    
    printf("Enter no :- ");
    scanf("%d",&no);
    
    while(no > 0){
    	cnt++;
    	no=no/10;
	}
	printf("Count :- %d",cnt);

	

}

