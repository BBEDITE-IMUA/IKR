#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {

    int hodx = start.x - finish.x;
    int hody = start.y - finish.y;
    
    if (hodx < 0) {
        hodx = -hodx;
    }
    if (hody < 0) {
        hody = -hody;
    }
    
    if (hodx <= 1 && hody <= 1) {
        return 1;
    } else {
        return 0;
    } 
}

int main() {
    struct Coord start, finish;
    scanf("%d %d", &start.x, &start.y);
    scanf("%d %d", &finish.x, &finish.y);
    
    int result = canGet(start, finish);
    if (result)
        printf("Король может попасть на вторую клетку одним ходом.\n");
    else
        printf("Король не может попасть на вторую клетку одним ходом.\n");
    return 0;
}
