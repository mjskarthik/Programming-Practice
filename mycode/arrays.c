// This is a C program for printing an Array 
#include <stdio.h>
int main (){
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the Array: ");
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}