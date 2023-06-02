#include <stdio.h>

int main() {
    int newchisla, oldchisl;
    int otvet = 0;
    scanf("%d", &oldchisl);
    while (1) {
        scanf("%d", &newchisla);
        if (newchisla == 0) {
            break;
        }
        if (newchisla > oldchisl * 2) {
            otvet++;
        }
        oldchisl = newchisla;
    }

    printf("%d\n", otvet);
    return 0;
}
