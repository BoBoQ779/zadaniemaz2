#include <stdio.h>

int main() {
    int numbers[] = {5, 2, 8, 1, 9, 3};
    int n = 6;

    printf("P2 - Zadanie Jenkins\n");
    
    printf("Tablica przed sortowaniem: ");
    for(int i=0;i<n;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // proste sortowanie (bubble sort)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(numbers[i] > numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("Tablica po sortowaniu: ");
    for(int i=0;i<n;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
