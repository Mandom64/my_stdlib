#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct DynamicArray DynamicArray;

DynamicArray *createDynamicArray();
int appendElement(DynamicArray *d_array, int element);
int deleteArray(DynamicArray *d_array);
void printArray(DynamicArray *d_array);


#endif /* DYNAMIC_ARRAY_H */