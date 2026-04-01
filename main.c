#include <stdio.h>

int main() {
    int n, i;

    
    printf("Ingrese el numero de elementos del vector: ");
    scanf("%d", &n);

    int A[n]; 

    for (i = 0; i < n; i++) {
        do {
            printf("Ingrese un numero entero positivo para A[%d]: ", i + 1);
            scanf("%d", &A[i]);
        } while (A[i] <= 0); 
    }

  
    printf("\nElementos del vector:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d] = %d\n", i + 1, A[i]);
    }

    return 0;
}