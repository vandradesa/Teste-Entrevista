//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fibo(int n);
    int num, resultfibo, i, n, x;
    x = 1;

    while (x==1){    
    
        printf("\n Digite o numero (max: 80000): ");
        scanf("%i", &n);
        for (i = 1; i <= 30; i++)
        {
            resultfibo = fibo(i);

            if (fibo(i) == n)
            {
                printf("\n O numero %i faz parte da sequencia de Fibonacci: \n", n);
                break;
            }

            if (fibo(i) > n)
            {
                printf("\n O numero %i nao faz parte da sequencia de Fibonacci: \n", n);
                break;
            }
        }

        printf("\n Deseja verificar outro numero? (1-sim 0-nao): ");
        scanf("%i", &x);

    }

    system("pause");
    return 0;
}

// Função Fibonacci

int fibo(int n)
{
    int fiboresult;

    if (n == 1)
    {
        fiboresult = 0;
    }

    if (n == 2 || n == 3)
    {
        fiboresult = 1;
    }

    if (n > 3)
    {
        fiboresult = fibo(n - 1) + fibo(n - 2);
    }

    return fiboresult;
}