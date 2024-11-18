#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], produto[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                produto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nProduto das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
