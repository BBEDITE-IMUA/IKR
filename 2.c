#include <stdio.h>

int sumFoo(int n) {
    int symm = 0;
    int stepen = 0;
    for (int i = 1; i <= n; i++) {
        stepen = i * i * i * i;
        symm += stepen;
    }
    return symm;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sumFoo(n);
    printf("%d\n", result);
    return 0;
}
