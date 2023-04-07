#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct am { int i, u; };

typedef struct {
    struct am *a;
} MyHashMap;

MyHashMap* myHashMapCreate() {
    MyHashMap *m = malloc(sizeof *m);
    m->a = calloc(1, sizeof(struct am [100000]));
    return m;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    obj->a[key].i = value;
    obj->a[key].u = 1;
}

int myHashMapGet(MyHashMap* obj, int key) {
    return obj->a[key].u ? obj->a[key].i : -1;
}

void myHashMapRemove(MyHashMap* obj, int key) {
    obj->a[key].u = 0;
}

void myHashMapFree(MyHashMap* obj) {
    free(obj->a);
    free(obj);
}