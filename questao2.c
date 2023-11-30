#include <stdio.h>
#include <stdlib.h>
int numero(){
	int a, b, c, d,f;
	printf("Digite um numero para saber o fatorial:\n");
	scanf("%d",&a);
	f=a;
	d =f;
	for(b=1;b<d;b++){
		c = a * (f -b);
		a = c;
	
}
  printf("O fatorial eh: %d",c);

}
int main(){
	
	  numero();
	
}
