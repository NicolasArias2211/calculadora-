#include<stdio.h>
#include"calculadora.h"
int main(void)
{
int a,b,c,d,op;
    printf("Que operacion descea realizar:\n 1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n");
	scanf("%d",& a);
	printf("Ingrese el primer numero a operar");
	scanf("%d",& b);
	printf("Ingrese el segundo numero a operar");
	scanf(%d",& c);
switch(a)
{
case 1:
	d=suman(b,c);
	break;
case 2:
	d=resta(b,c);
	break;
case 3:
	d=multiplicar(b,c);
	break;
case 4:
	d=dividir(b,c);
	break;
default: 
	d=0;
}
printf("el resultado es %d","d");
}