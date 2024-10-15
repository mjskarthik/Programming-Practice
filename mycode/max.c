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
    int max=a[0];
    for (int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];    
        }
        printf("%d", max);
    }
    return 0;
}