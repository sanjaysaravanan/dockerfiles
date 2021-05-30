#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[] = { 10, 3, 5, 6, 2 };
    
    int len = sizeof(arr)/sizeof(arr[0]);

    int* left = (int*)malloc(sizeof(int) * len);
    int* right = (int*)malloc(sizeof(int) * len);
    int* result = (int*)malloc(sizeof(int) * len);
    left[0] = 1;

    right[len - 1] = 1;

    for(int i = 1;i<len;i++  )
        left[i] = arr[i-1] * left[i-1];

    for(int i = len - 2;i>=0;i--  )
        right[i] = arr[i+1] * left[i+1];

    for(int i=0;i<len;i++)
        result[i] = left[i] * right[i];

    for(int i=0;i<len;i++)
        printf("%d ", result[i]);

    

    return 0;
}