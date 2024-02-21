/* //5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse; */

#include <stdio.h>
#include <stdlib.h>

void inverteString(char *str) {

    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho / 2; i++) {
        char aux = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = aux;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);

    inverteString(str);

    printf("String invertida: %s\n", str);

    system("pause");
    return 0;
}
