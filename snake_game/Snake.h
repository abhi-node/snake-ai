#ifndef SNAKE_H
#define SNAKE_H

enum Direction {Left, Right, Up, Down};

typedef struct node {
    int x;
    int y;
    Direction d;
} Node;

typedef struct snake {
    Node heads[4096];
} Snake;

void update(Snake* s);
void draw(Snake* s);

#endif
