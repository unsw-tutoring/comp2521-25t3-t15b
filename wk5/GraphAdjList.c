#include "Graph.h"

struct node {
    int v;
    struct node *next;
};

struct graph {
    int nV;

    struct node **adjList;
};

Graph GraphNew(int nV) {
    // TODO
    return NULL;
}
