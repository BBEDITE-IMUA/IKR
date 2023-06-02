#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

float averageStudents(struct University data[], int n) {
    float kolichstydentov = 0;
    
    for (int i = 0; i < n; i++) {
        kolichstydentov += data[i].numberOfStudents;
    }
    
    if (n > 0) {
        return kolichstydentov / n;
    } else {
        return 0;
    }
}

int main() {
    struct University data[] = {
        {"Универ1", 100, 2},
        {"Универ2", 200, 4},
        {"Универ3", 300, 5},
    };
    
    int size = sizeof(data) / sizeof(data[0]);
    
    float result = averageStudents(data, size);
    printf("%f\n", result);
    
    return 0;
}