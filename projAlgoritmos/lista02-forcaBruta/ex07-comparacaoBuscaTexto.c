#include <stdio.h>
#include <string.h>

int buscar_forca_bruta(char texto[], char palavra[], int *comparacoes);
int buscar_kmp(char texto[], char palavra[], int *comparacoes);
void comparar_buscas(char texto[], char palavra[]);

int main(){
    char texto[]   = "abababcababababcabc";
    char palavra[] = "ababc";

    comparar_buscas(texto, palavra);

    return 0;
}



int buscar_forca_bruta(char texto[], char palavra[], int *comparacoes){
    int tam_texto   = strlen(texto);
    int tam_palavra = strlen(palavra);
    *comparacoes = 0;

    for (int i = 0; i <= tam_texto - tam_palavra; i++){
        int j = 0;
        while (j < tam_palavra){
            (*comparacoes)++;
            if (texto[i + j] != palavra[j]){
                break;
            }
            j++;
        }
        if (j == tam_palavra){
            return i;
        }
    }

    return -1;
}

static void construir_lps(char palavra[], int tam_palavra, int lps[]){
    int comprimento = 0;
    lps[0] = 0;

    int i = 1;
    while (i < tam_palavra){
        if (palavra[i] == palavra[comprimento]){
            comprimento++;
            lps[i] = comprimento;
            i++;
        } else if (comprimento != 0){
            comprimento = lps[comprimento - 1];
        } else {
            lps[i] = 0;
            i++;
        }
    }
}

int buscar_kmp(char texto[], char palavra[], int *comparacoes){
    int tam_texto   = strlen(texto);
    int tam_palavra = strlen(palavra);
    *comparacoes = 0;

    int lps[tam_palavra];
    construir_lps(palavra, tam_palavra, lps);

    int i = 0;
    int j = 0;
    while (i < tam_texto){
        (*comparacoes)++;
        if (texto[i] == palavra[j]){
            i++;
            j++;
            if (j == tam_palavra){
                return i - j;
            }
        } else if (j != 0){
            j = lps[j - 1];
        } else {
            i++;
        }
    }

    return -1;
}

void comparar_buscas(char texto[], char palavra[]){
    int comparacoes_fb  = 0;
    int comparacoes_kmp = 0;

    int pos_fb  = buscar_forca_bruta(texto, palavra, &comparacoes_fb);
    int pos_kmp = buscar_kmp(texto, palavra, &comparacoes_kmp);

    printf("Texto:   \"%s\"\n", texto);
    printf("Palavra: \"%s\"\n\n", palavra);

    printf("Forca bruta -> posicao: %d | comparacoes: %d\n", pos_fb, comparacoes_fb);
    printf("KMP         -> posicao: %d | comparacoes: %d\n", pos_kmp, comparacoes_kmp);

    if (comparacoes_kmp < comparacoes_fb){
        printf("\nO KMP foi mais eficiente (%d comparacoes a menos).\n",
               comparacoes_fb - comparacoes_kmp);
    } else if (comparacoes_kmp == comparacoes_fb){
        printf("\nEmpate no numero de comparacoes neste caso.\n");
    } else {
        printf("\nA forca bruta fez menos comparacoes neste caso.\n");
    }
}
