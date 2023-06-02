#include <stdio.h>
#include <string.h>

void changeDigits(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (str[i] == '9') {
                str[i] = '0';
            } else {
                str[i]++;
            }
        }
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    changeDigits(str);
    printf("%s\n", str);
    
    return 0;
}
