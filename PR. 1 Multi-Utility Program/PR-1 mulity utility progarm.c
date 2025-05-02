//Accept Celsius (°C) and convert it into Fahrenheit (°F).

#include<stdio.h>
int main()
{
    float celcius,Fahrenheit;

    printf("enter celcius = ");
    scanf("%f",&celcius);

    Fahrenheit=(celcius * 1.8) + 32;
    printf(" Fahrenheit = %.1f",Fahrenheit);
    return 0;  
}
//Gross salary calcultor

#include<stdio.h>
int main()
{
    float base_salary,hra,da,ta;

    printf(" enter Basic Salary : ");
    scanf("%f",&base_salary);

    hra=0.10*base_salary;
    printf("HRA\t:%.2f\n",hra);
   
    da=0.05*base_salary;
    printf("DA\t:%.2f\n",da);
    
    ta=0.08*base_salary;
    printf("TA\t:%.2f\n",ta);


    printf("Gross Salary :%.2f",base_salary+hra+da+ta);
    return 0;



}
/ right triangle 

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter angle 1 : ");
    scanf("%d",&a);

    printf("enter angle 2 : ");
    scanf("%d",&b);

    c=180-a-b;

    printf("Right Triangle : %d",c);
    return 0;


    
}
