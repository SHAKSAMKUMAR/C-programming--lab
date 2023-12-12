#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr1 = (int *)malloc(5* sizeof(int));
    printf("Using malloc(): Allocated memory for 5 integers\n");

    for (int i=0; i<5; i++){
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    float *arr2 = (float *)calloc(3, sizeof(float));
    printf("Using calloc(): Allocated memory for 3 floats\n");

    for (int i=0; i<3; i++){
        arr2[i] = (i+1)*1.1;
        printf("%.2f ", arr2[i]);
    }
    printf("\n\n");

    arr1 = (int *)realloc(arr1, 8 * sizeof(int));
    printf("Using realloc(): Resized memory for 8 integers\n");

    for (int i=5; i<8; i++){
        arr1[i] = i+1;
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    free(arr1);
    free(arr2);
    printf("Memory freed using free()\n");

    return 0;
}