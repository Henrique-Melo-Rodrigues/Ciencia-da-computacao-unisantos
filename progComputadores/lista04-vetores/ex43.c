#include <stdio.h>

int main()
{
    int i;
    double x, number[100];
    scanf("%lf", &x);
    for(i = 0; i < 100; i++){
        if(i == 0){
            number[i] = x;
        }
        else{
            number[i] = (number[i - 1] / 2);
        }
    }
    for(i = 0; i < 100; i ++){
        printf("N[%d] = %.4lf\n", i, number[i]);
    }
}