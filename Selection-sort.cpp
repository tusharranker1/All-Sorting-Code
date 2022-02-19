#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n);  //== Selection_sort Function Prototype
void swapping_num(int *num1 , int *num2); //== Swapping Function Prototype

int main()
{
    //=== Inputing the Array Size =========
    cout<<"Enter the size for the array"<<endl;
    int n;
    cin>>n;

    //=== Inputing the Array Elements =========
    cout<<"Enter the Elements of the array"<<endl;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    //=== Printing  Array Before the Sorting ========
    cout<<"Array before the sorting : ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //==== Function Calling Selection Sort ===========
    selection_sort(arr,n);

    //==== Printing  Array After the Sorting
    cout<<"Array after the sorting : ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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


