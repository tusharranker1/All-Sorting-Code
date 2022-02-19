#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n);  //== Selection_sort Function Prototype
void swapping_num(int *num1 , int *num2); //== Swapping Function Prototype

int main()
{
    //=== Inputing the Array Size =========
    printf("Enter the size for the array \n");
    int n;
    cin>>n;

    //=== Inputing the Array Elements =========
    printf("Enter the Elements of the array \n");
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    //=== Printing  Array Before the Sorting ========
    printf("Array before the sorting : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //==== Function Calling Selection Sort ===========
    selection_sort(arr,n);

    //==== Printing  Array After the Sorting
    printf("Array before the sorting : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swapping_num(int *num1 , int *num2)  //== swapping function Defination
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selection_sort(int arr[],int n) //== Selection_sort function declaration
{
    for(int i=0; i<n-1 ; i++)
    {
        int min_index = i;
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swapping_num(&arr[min_index],&arr[i]);
    }
}


