#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct list {
    struct node *head;
};

int doListLength(struct node *l) {
    if (l == NULL) return 0;
    return 1 + doListLength(l->next);
}

int listLength(struct list *l) {
    return doListLength(l->head);
}
