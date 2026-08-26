#include <stdio.h>

int mochila_forca_bruta(int pesos[], int valores[], int num_itens, int capacidade);

int main(){
    char *nomes[] = {"Radio", "Notebook", "Violao"};
    int valores[]  = {3000, 2000, 1500};
    int pesos[]    = {13, 9, 6};
    int num_itens  = 3;
    int capacidade = 16;

    int melhor_valor = mochila_forca_bruta(pesos, valores, num_itens, capacidade);

    printf("Capacidade da mochila: %dkg\n", capacidade);
    printf("Melhor valor possivel: R$%d\n", melhor_valor);

    (void)nomes;

    return 0;
}

int mochila_forca_bruta(int pesos[], int valores[], int num_itens, int capacidade){
    int melhor_valor = 0;
    int melhor_comb  = 0;

    int total_combinacoes = 1 << num_itens;   

    for (int comb = 0; comb < total_combinacoes; comb++){
        int peso_total  = 0;
        int valor_total = 0;

        for (int i = 0; i < num_itens; i++){
          
            if (comb & (1 << i)){
                peso_total  += pesos[i];
                valor_total += valores[i];
            }
        }

        if (peso_total <= capacidade && valor_total > melhor_valor){
            melhor_valor = valor_total;
            melhor_comb  = comb;
        }
    }

    char *nomes[] = {"Radio", "Notebook", "Violao"};
    printf("Itens escolhidos: ");
    for (int i = 0; i < num_itens; i++){
        if (melhor_comb & (1 << i)){
            printf("%s (%dkg, R$%d) ", nomes[i], pesos[i], valores[i]);
        }
    }
    printf("\n");

    return melhor_valor;
}
