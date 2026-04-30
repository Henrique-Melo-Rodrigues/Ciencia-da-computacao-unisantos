/*
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B 
tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0,
sempre com uma casa decimal. Entrada

O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).
Saída

Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 
dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade. 
Assim como todos os problemas, não esqueça de imprimir o fim de linha após o 
resultado, caso contrário, você receberá "Presentation Error".
*/
#include <stdio.h>

int main(){
    double nota1, nota2, nota3, media;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);

    int pesoNota1 = 2;
    int pesoNota2 = 3;
    int pesoNota3 = 5;
    
    double somaPonderada = (nota1 * pesoNota1) + (nota2 * pesoNota2) + (nota3 * pesoNota3); 
    double mediaPonderada = somaPonderada / (pesoNota1 + pesoNota2 + pesoNota3);

    printf("MEDIA = %.1lf\n", mediaPonderada);
    
    return 0;

}
