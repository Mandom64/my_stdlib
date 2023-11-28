#include <stdio.h>
#include <stdlib.h>
#include "d_array.h"

struct DynamicArray {
    int *data;
    int size;
    int capacity;
};

DynamicArray *createDynamicArray() {
    DynamicArray *new_array = malloc(sizeof(DynamicArray));
    new_array->size = 0;
    new_array->capacity = 2;
    new_array->data = malloc(sizeof(int) * new_array->capacity);
    
    return new_array;
}

int appendElement(DynamicArray *d_array, int element) {
    if(!d_array) {
        return 0;
    }

    if(d_array->size < d_array->capacity) {
        d_array->data[d_array->size] = element;
        d_array->size++;
    }
    else {
        d_array->capacity *= 2;
        int *p = realloc(d_array->data, sizeof(int) * d_array->capacity);
        if(!p) {
            printf("realloc error at appendElement\n");
            return 0;
        } else {
            d_array->data = p;
        }
        d_array->data[d_array->size] = element;
        d_array->size++;
    }

    return 1;
}

int deleteArray(DynamicArray *d_array) {
    if(d_array == NULL) {
        return 0;
    }

    if(d_array->data != NULL) {
        free(d_array->data);
        d_array->data = NULL;
    }
    d_array->size = 0;
    d_array->capacity = 0;
    if(d_array != NULL) {
        free(d_array);
        d_array = NULL;
    }

    return 1;
}

void printArray(DynamicArray *d_array) {
    int i = 0;

    printf("size=%d capacity=%d\n", d_array->size, d_array->capacity);
    for (i = 0; i < d_array->size; i++) {
        printf("%d ", d_array->data[i]);

        if(i == d_array->size - 1)
            printf("\n");
    }
}