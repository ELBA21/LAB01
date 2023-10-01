#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    do {
        printf("Ingrese un número n: ");
        scanf("%d", &n); // Agregado & antes de n para obtener la entrada correctamente
    } while (n < 1);
    for(int i=1;i<= n;i++)
    printf(" %d ", fib(i));
    return 0;
}
