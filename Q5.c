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
