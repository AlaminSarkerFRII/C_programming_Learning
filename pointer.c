
#include<stdio.h>

void main(){

int a = 10;
int b = 20;
int *c ;

c = &a;

printf("the value of a = %d", a);
printf("\nAddress of a  = %d", &a);
printf("\nthe address of a = %d", c);
printf("\nthe address of c = %d", *c); // a er value dekhabe.

}
