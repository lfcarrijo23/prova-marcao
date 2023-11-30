#include <stdio.h>
#include <string.h>

int main() {
    char palavra[30];
    
    printf("Digite uma palavra: ");
    gets(palavra);
    
    int tamanhoDaPalavra = strlen(palavra);
    int palindromo = 1;

    for (int i = 0; i < tamanhoDaPalavra / 2; i++) {
        if (palavra[i] != palavra[tamanhoDaPalavra - i - 1]) {
            palindromo = 0;
            break; 
        }
    }

    if (palindromo) {
        printf("A palavra eh um palindromo. \n");
        return 1;
    } else {
        printf("A palavra nao eh um palindromo. \n");
        return 0;
    }
}
