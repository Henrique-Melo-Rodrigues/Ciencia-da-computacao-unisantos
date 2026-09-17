#include <stdio.h>

float media2(float a, float b);

int main(){
    float x, y;

    printf("Escreva os dois valores x e y: ");
    scanf("%f %f", &x, &y);

    float media = media2(x, y);

    printf("Media: %.2f\n", media);

    return 0;

}

float media2(float a, float b){
    float media = (a + b) / 2;

    return media;
}