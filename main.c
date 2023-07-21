#include <stdio.h>
#include <stdlib.h>
#include "d_array/d_array.h"


int main() {
    DynamicArray *d_array = NULL;
    d_array = createDynamicArray();
    appendElement(d_array, 5);
    appendElement(d_array, 2);
    appendElement(d_array, 7);
    appendElement(d_array, 9);
    appendElement(d_array, 165);
    appendElement(d_array, 5);
    appendElement(d_array, 2);
    appendElement(d_array, 2);
    appendElement(d_array, 2);
    deleteArray(d_array);
    printArray(d_array);
}