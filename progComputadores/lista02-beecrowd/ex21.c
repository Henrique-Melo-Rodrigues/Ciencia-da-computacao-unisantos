/*
seguinteabendo que o evento pode durar de poucos segundos a vários dias, você
deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um
espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será
informado o momento no qual o evento vai iniciar, no formato hh : mm : ss.
Na terceira e quarta linha de entrada haverá outra informação no mesmo formato
das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)
*/

#include <stdio.h>

int main() {

  int diaEvento;
  scanf("Dia %d", &diaEvento);

  int horasInicioEvento, minInicioEvento, segundosInicioEvento;
  scanf("%d : %d : %d", &horasInicioEvento, &minInicioEvento,
        &segundosInicioEvento);

  int fimEvento;
  scanf(" Dia %d", &fimEvento); // espaço antes de Dia

  int horasFimEvento, minFimEvento, segundosFimEvento;
  scanf("%d : %d : %d", &horasFimEvento, &minFimEvento, &segundosFimEvento);

  int segundosRestantes, minRestantes, horasRestantes, diasRestantes;

  segundosRestantes = segundosFimEvento - segundosInicioEvento;
  minRestantes = minFimEvento - minInicioEvento;
  horasRestantes = horasFimEvento - horasInicioEvento;
  diasRestantes = fimEvento - diaEvento;

  if (segundosRestantes < 0) {
    segundosRestantes += 60;
    minRestantes--;
  }

  if (minRestantes < 0) {
    minRestantes += 60;
    horasRestantes--;
  }

  if (horasRestantes < 0) {
    horasRestantes += 24;
    diasRestantes--;
  }

  printf("%d dia(s)\n", diasRestantes);
  printf("%d hora(s)\n", horasRestantes);
  printf("%d minuto(s)\n", minRestantes);
  printf("%d segundo(s)\n", segundosRestantes);

  return 0;
}
