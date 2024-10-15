#include <stdio.h>
int main (){
    int n;
    printf("Enter t;he size of the Array: ")
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the Array: ");
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    return 0;
}