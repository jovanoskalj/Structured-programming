#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void fillWithZeros(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        array[i] = 0;
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void shiftRight (int * array, int size, int k) {
    int i;
    for (i = size - 1; i >= k; i--) {
        array[i] = array[i - k];
    }
    for (i = 0; i < k; i++) {
        array[i] = 0;
    }
}

void shiftLeft (int * array, int size, int k) {
    int i;
    for (i = 0; i < size - k; i++) {
        array[i] = array[i + k];
    }
    for (i = size - k; i < size; i++) {
        array[i] = 0;
    }
}

int transform(int *array, int size) {
    int i;
    int firstElement = array[0];
    if (abs(firstElement) >= size) {
        fillWithZeros(array, size);
        return 1;
    }
    if (firstElement >= 0) { //positive, shift to right    ex. 1 2 3 4 5 --> 0 1 2 3 4
        shiftRight(array, size, firstElement);

    } else { //negative, shift to left  ex. -1 2 3 4 5 --> 2 3 4 5 0
        shiftLeft(array, size, abs(firstElement));
    }
    return 0;
}

int main() {
    int M, N;
    int i, j;
    int array[100];

    scanf("%d", &M);
    int arraysWithZeros = 0;
    for (i = 0; i < M; i++) {
        scanf("%d", &N);
        for (j = 0; j < N; j++) {
            scanf("%d", &array[j]);
        }

        arraysWithZeros+=transform(array, N);
        printArray(array, N);
    }
    printf("%d", arraysWithZeros);
}