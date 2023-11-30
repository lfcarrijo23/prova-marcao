#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ss(){
char a[100], b[100];
    int d,f,g;
	printf("Digite um palavra:\n");
	gets(a);
	printf("Digite outra palavra:\n");
	gets(b);
    f =strlen(a);
    g =strlen(b);
    d = (g+f)/2;
    printf("A media eh: %d",d);
}

int main(){
	ss();

}
