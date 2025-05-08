#include <stdio.h>

int main() {
    int score;
    printf("Enter marks :- ");
    scanf("%d",&score);
    char grade;
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';
            
            
            
    switch(grade){
    	case 'A':
    		printf("Excellent work");
    	break;
    	
    	case 'B':
    		printf("well done");
    		
    	break;
    	case 'c':
    		printf("good job");
    		break;
    		case 'd':
    		   printf("you passed");
    		   break;
    		 case 'e':
			 printf("do better");
			  break;  
    	
	}
            
            
            
}
    
    
        
            
            
            
        

    


    


   
