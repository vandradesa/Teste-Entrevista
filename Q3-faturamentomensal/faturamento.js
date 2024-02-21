//3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
//• O menor valor de faturamento ocorrido em um dia do mês;
//• O maior valor de faturamento ocorrido em um dia do mês;
//• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

import { readFileSync } from 'fs';

function calcularFaturamento(faturamento) {

  const diasUteis = faturamento.filter(dia => dia.valor > 0);

  const mediaMensal = diasUteis.reduce((soma, dia) => soma + dia.valor, 0) / diasUteis.length;

  const menorValor = Math.min(...diasUteis.map(dia => dia.valor));

  const maiorValor = Math.max(...diasUteis.map(dia => dia.valor));

  const diasValorMaiorQueMedia = diasUteis.filter(dia => dia.valor > mediaMensal).length;

  return {
    menorValor,
    maiorValor,
    diasValorMaiorQueMedia,
    diasUteis
  };
}

// Leitura do arquivo JSON
const faturamento = JSON.parse(readFileSync('dados.json', 'utf8'));

//Mostrando os valores no terminal
const resultado = calcularFaturamento(faturamento);
console.log("Menor valor de faturamento ocorrido em um dia do mes:", resultado.menorValor);
console.log("Maior valor de faturamento ocorrido em um dia do mes:", resultado.maiorValor);
console.log("Número de dias no mês em que o valor de faturamento diário foi superior à média mensal:", resultado.iasValorMaiorQueMedia);
//console.log(resultado.diasUteis)