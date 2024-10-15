//This is a C program to Search For an Element in an array and tell whether the element is present in the array or not

//This method is also called as LINEAR SEARCH Algorithm 
#include <stdio.h>
int main (){
    int n;
    int a[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter target element: ");
    scanf("%d", &target);
    int is_target_found=0;
    for (int i=0;i<n;i++){
        if(a[i]==target)
        {
            is_target_found=1;
            break;
        }

    }
    if(is_target_found==1)
    {
        printf("Target Element is found");
    }
    else{
        printf("Target Element is Not Found");
    }
    return 0;
}