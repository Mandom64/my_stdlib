#include <stdio.h>
#include <stdlib.h>
#include "d_array.h"


int main() {
    DynamicArray *d_array = createDynamicArray();
    for(int i = 0; i < 1024; i++) {
        appendElement(d_array, 5);   
    }
    printArray(d_array);
    deleteArray(d_array);
}