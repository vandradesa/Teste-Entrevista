#include <stdio.h>
#include <stdlib.h>

float calcularPercentual(float faturamentoEstado, float total) {
    return (faturamentoEstado / total) * 100;
}

int main() {
   
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float total = sp + rj + mg + es + outros;

    float percentualSP = calcularPercentual(sp, total);
    float percentualRJ = calcularPercentual(rj, total);
    float percentualMG = calcularPercentual(mg, total);
    float percentualES = calcularPercentual(es, total);
    float percentualOutros = calcularPercentual(outros, total);

    printf("Percentual de representacao de cada estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);

    system("pause");

    return 0;
}


