#include<stdio.h>

int main() {
    int lenOfArray;
    scanf("%d", &lenOfArray);
    int arr[lenOfArray];
    for(int i = 0; i < lenOfArray; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = lenOfArray - 1; i >= 0; i--) {
        if(i % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
