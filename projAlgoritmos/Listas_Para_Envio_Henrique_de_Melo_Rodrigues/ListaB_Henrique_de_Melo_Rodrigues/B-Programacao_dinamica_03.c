#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Top-down vs Bottom-up (Teorico)
 * 
 * Tabela comparativa entre Top-down (Memoization) e Bottom-up (Tabulacao):
 * 1. Facilidade de pensar o problema
 * 2. Simplicidade do codigo
 * 3. Subproblemas resolvidos
 * 4. O que e armazenado na tabela
 */

int main() {
    printf("=========================================================================================\n");
    printf("%-30s | %-25s | %-25s\n", "Quesito", "Top-down (Memoization)", "Bottom-up (Tabulacao)");
    printf("=========================================================================================\n");
    printf("%-30s | %-25s | %-25s\n", 
           "Facilidade de pensar", 
           "Mais natural (recursivo)", 
           "Requer ordem topologica");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-30s | %-25s | %-25s\n", 
           "Simplicidade do codigo", 
           "Recursao + tabela/cache", 
           "Lacos iterativos diretos");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-30s | %-25s | %-25s\n", 
           "Subproblemas resolvidos", 
           "Apenas os necessarios", 
           "Todos, do menor ao maior");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("%-30s | %-25s | %-25s\n", 
           "O que e armazenado", 
           "Respostas sob demanda", 
           "Solucoes sequenciais");
    printf("=========================================================================================\n");

    return 0;
}
