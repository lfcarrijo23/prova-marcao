#include <stdio.h>
#include <stdlib.h>
int soma(){
	int a,b,c;
	c = a+b;
	printf("A soma eh:%d",c);
	
}
int multiplicacao(){
	
	int a,b,c;
	c = a*b;
	printf("A multiplicacao eh:%d",c);
}
int sub(){
	int a,b,c;
	c = a-b;
	printf("A subtracao eh:%d",c);
}
int main() {
	int a,b,c;
	printf("Digite o primeiro numero:\n");
	scanf("%d",&a);
	printf("Digite o segundo numero:\n");
	scanf("%d",&b);
	if(a<b){
	 soma();
	}
	else if(a==b){
		multiplicacao();
	}
	else{
		sub();
	}
}