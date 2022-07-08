<h1 align="center">(AEDS)</h1>


<p align="center"> Ygor Santos Vieira</p>
<p style = "font-size:160%;" align="center">
  <a href="#lista">Hash</a> 
 

</p>
 
# Hash
## Problema
### Implementação de duas tabelas hash: i) endereçamento fechado e; ii) endereçamento aberto por hash dupla. O trabalho deve receber diretamente no seu código um vetor de no mínimo 20 valores inteiros, os quais serão utilizados como entrada  para as duas estruturas que, por sua vez, são criadas com o dobro do tamanho do vetor (i.e., número primo maior que esse valor dobro). Feito isso, como resultado da execução deve-se apresentar o número de colisões ocorridas para ambas as estruturas quando o mesmo vetor é armazenado. Por fim, contemplar no README.mb uma breve discussão dos motivos que levaram uma estrutura a apresentar melhores resultados. 
<br></br>
# Desenvolvimento
 Um termo muito usado na computação é o de função de hash. Função de hash
seria qualquer algoritmo que mapeie dados grandes e de tamanho variável para
pequenos dados de tamanho fixo. Por esse motivo, as funções Hash são conhe-
cidas por resumirem o dado, sendo funções faceis e rápidas de se calcular. A
principal aplicação dessas funções é a comparação de dados grandes ou secretos.
Se tratando de uma função de hash não podemos desconsiderar certas proprie-
dades, como por exemplo a função deve ser unidirecional, ou seja, não é possı́vel
recuperar os dados a partir do resumo gerado pela função, outra propriedade e
a de colições que seria quando dois dados originais geram o mesmo resumo, a
menor quantidade de colições definem as melhores funções de hash, outra pro-
priedade é a de que se um mesmo dado passar pela função de hash mais de uma
vez deve gerar o mesmo resumo.



## Conclusão 
Neste trabalho foi apresentado a função de hash e suas propriedades, o uso do
endereçamento aberto para tratamento de colisões. Para a função de hash foi
utilizado o método de congruência linear e para endereçamento aberto utilizado
a estratégia de sondagem linear, fica claro que com o uso de hash não é ne
cessario saber qual a chave utilizada para armazenar o dado, o que se torna
bastante viável para informações sigilosas, para acesso dos dados a hash traz
uma rapidez considerável na busca sendo apenas O(1), contudo vale resaltar que
a função de hash tem que ser rápida e éficaz, para não demantar muito processo
e permanecer com sua complexidade.



## Referências
http://www.techtudo.com.br/artigos/noticia/2012/07/o-que-e-hash.html
https://pt.wikibooks.org/wiki/AlgoritmoseEstruturasdeDados/TabeladeHashEndere.C3.A7amentoAberto
https://programacaodescomplicada.wordpress.com/




## Executar
* Como executar:

```
  make clean
  make
  make run
```


