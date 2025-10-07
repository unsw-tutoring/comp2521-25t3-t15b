#include "Set.h"

#define INITIAL_CAPACITY 8

struct set {
    int *arr;
    int capacity;
    int numElems;
};

// Creates a new empty set
Set SetNew(void) {
    Set s = malloc(sizeof(struct set));
    s->arr = malloc(INITIAL_CAPACITY * sizeof(int));
    s->capacity = INITIAL_CAPACITY;
    s->numElems = 0;
}

// Frees memory allocated to the set
void SetFree(Set s) {
    free(s->arr);
    free(s);
}

// Inserts an element into the set
// O(1) + O(1) + ... + O(n) + O(1) ..... O(2n)
// amortised time complexity = O(1) (excluding the SetContains)
void SetInsert(Set s, int elem) {
    if (SetContains(s, elem)) return;

    if (s->numElems == s->capacity) {
        s->capacity *= 2;
        s->arr = realloc(s->arr, s->capacity * sizeof(int));
    }

    s->arr[s->numElems++] = elem;
}

// Deletes an element from the set
void SetDelete(Set s, int elem) {}

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem) {}

// Returns the number of elements in the set
int SetSize(Set s) {
    return s->numElems;
}