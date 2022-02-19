#include<stdio.h>

void swaping_num(int *num1 , int *num2); //== swapping function prototype
void bubble_sort(int arr[] , int n); //== bubble_sort function prototype
int main()
{
    //===== Inputing the size of the array =====
    int size;
    printf("Enter the size for the array : \n");
    scanf("%d",&size);

    //===== Inputing the element of the array ====
    int arr[size];
    printf("Enter the elements for the array : \n");
    for(int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    //==== Printing Element Before the sorting ====
    printf("The Array before the sorting :  ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //==== Function calling for the sorting ====
    bubble_sort(arr,size);
    printf("The array after the sorting : ");

    //==== Printing Element after sorting ====
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0 ;

}

void swaping_num(int *num1, int *num2) //== Function Definition 
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubble_sort(int arr[],int n) //== Function Defination
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<(n-i-1) ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swaping_num(&arr[j] , &arr[j+1]);
            }
        }
    }
    return ; 
}