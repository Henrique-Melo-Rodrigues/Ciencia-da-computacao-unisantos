/* Rosy é uma talentosa professora do Ensino Médio que já ganhou muitos prêmios
pela qualidade de suas aulas. Seu reconhecimento foi tão grande que ela foi
convidada para dar aulas em uma escola da Inglaterra.

Mesmo falando bem inglês, Rosy ficou um pouco apreensiva com a responsabilidade,
mas resolveu aceitar a proposta e encará-la como um bom desafio.

Tudo ocorreu bem até o dia da prova. Acostumada a dar notas de 0 a 100, Rosy fez
o mesmo na primeira prova dos alunos da Inglaterra. No entanto, os alunos
acharam estranho, pois na Inglaterra o sistema de avaliação é diferente: as
notas são representadas por conceitos de A a E.

    A → conceito mais alto
    E → conceito mais baixo

Após conversar com outros professores, Rosy recebeu a sugestão de utilizar uma
tabela que relaciona as notas numéricas com os conceitos.

O problema é que Rosy já atribuiu as notas no sistema numérico e agora precisa
convertê-las para o sistema de letras. Porém, ela precisa preparar as próximas
aulas e não tem tempo para fazer essa conversão manualmente.

Sua tarefa é escrever um programa que receba uma nota numérica e determine o
conceito correspondente.


ENTRADA
------
Um único valor inteiro N (0 ≤ N ≤ 100), representando a nota da prova
no sistema numérico.


SAÍDA
-----
Uma única letra maiúscula (A, B, C, D ou E) representando o conceito
correspondente a nota

*/

#include <stdio.h>

int main() {
  int nota;
  char conceito;
  scanf("%d", &nota);

  if (nota <= 0) {
    conceito = 'E';
  } else if (nota > 0 && nota <= 35) {
    conceito = 'D';
  } else if (nota > 35 && nota <= 60) {
    conceito = 'C';
  } else if (nota > 60 && nota <= 85) {
    conceito = 'B';
  } else if (nota > 85 && nota <= 100) {
    conceito = 'A';
  }

  printf("%c\n", conceito);
  return 0;
}
