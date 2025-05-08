#include<stdio.h>
int main (){
    int ch;
    printf("press 1 speak english language\n");
    printf("press 2 speak gujrati language\n");
    printf("press 3 speak hindi  languahe\n");
    scanf("%d",&ch);
    switch(ch)
     case 1:
     printf("english language ");
     braak:
     case 2:
     printf("gujrati language");
     braak:
     case 3:
     printf("hinde lauguage");
     braak:
     dfault:
     printf("intvlid choise");

}