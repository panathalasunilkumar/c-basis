/* All arithmetic Operations */
#include<stdio.h>
void main ()
{ 
int a, b, c,d,e,f,h;

a= 5;
b=2;
c=a+b;
 d=a-b;
 e=a*b;
h= a*(a+1)/2;
f=a*1.0/b;

printf("sum of %d and %d is %d:\n",a,b,c);
printf("difference of %d and %d is %d:\n",a,b,d);
printf("multiply of %d and %d is %d:\n",a,b,e);
printf("divition of %d and %d is %d:\n",a,b,f);
printf("sum of first %d natural numbers is %d:\n",a,h);
}
