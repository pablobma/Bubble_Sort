#include <stdio.h>
// Bubble sort tem complexidade n^2

int main(void) {
    void bubbleSort(int lista[], int tamanho);

    int lista[] = {5, 3, 10, 4, 1, 9};
    int tamanho = sizeof(lista)/sizeof(lista[0]);

    bubbleSort(lista, tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
}

void bubbleSort(int lista[], int tamanho) {
    for(int i = 0; i < tamanho-1; i++) {
        for(int j = 0; j < tamanho-i-1; j++) {
            if(lista[j]>lista[j+1]) {
                int temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
}