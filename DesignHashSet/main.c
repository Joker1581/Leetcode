#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    char h[1000001];
} MyHashSet;

MyHashSet* myHashSetCreate() {
    return calloc(1, sizeof(MyHashSet));
}

void myHashSetAdd(MyHashSet* obj, int key) {
    obj->h[key] = 1;
}

void myHashSetRemove(MyHashSet* obj, int key) {
    obj->h[key] = 0;
}

bool myHashSetContains(MyHashSet* obj, int key) {
    return obj->h[key];
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
}