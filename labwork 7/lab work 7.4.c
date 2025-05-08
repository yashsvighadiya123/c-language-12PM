#include<stdio.h>
int main (){
    int ch;
    printf("press 1 oder pizza\n");
    printf("press 2 oder dosa\n");
    printf("press 3 oder pani puri\n");
    scanf("%d",&ch);
    switch(ch)
     case 1:
     printf("oder the pizza");
     braak:
     case 2:
     printf("oder the dosa ");
     braak:
     case 3:
     printf("oder the pani puri");
     braak:
     dfault:
     printf("intvlid choise");
}
