#include<stdio.h>
void insertion_sort(int arr[] , int n); //function prototype

int main()
{
    //=======Declaration of the size of the array================
    printf("Enter the size of the array \n");
    int size;
    scanf("%d",&size);

    //=============Inputing the element of the array=============
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    //============Printing the elememt before the sorting==========
    printf("The array before sorting : ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //=============Function calling of the array ================
    insertion_sort(arr,size);

    //=============Printing the element after the sortig =========
    printf("The array before sorting : ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertion_sort(int arr[] , int n)  //function defination
{
    for(int i=1 ; i<n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
