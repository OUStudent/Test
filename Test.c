#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Here is a comment
struct BigInteger {
    int *array;
    int size;
    int sign; // -1 for neg, 1 for pos
};
typedef struct BigInteger BigInteger;

void bigInteger_print(BigInteger *a) {
    if(a->sign==-1) printf("-");
    for(int i = a->size-1; i >= 0; i--) {
        printf("%d", a->array[i]);
    }
    printf("\n");
}

void bigInteger_initialize(BigInteger **a, int size, int array[size], int sign) {
    *a = (BigInteger*) malloc(sizeof(BigInteger));
    (*a)->size = size;
    (*a)->sign = sign;
    (*a)->array = (int*) malloc(sizeof(int)*size);
    int index = 0;
    for(int i = size-1; i >= 0; i--) { // have to store array backwards
        (*a)->array[index] = array[i];
        index++;
    }
}
/*
block comment 1

*/

/*
* block comment 2
*
* */
