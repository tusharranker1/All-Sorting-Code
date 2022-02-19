#include<iostream>
using namespace std;

void swaping_num(int *num1 , int *num2); //== swapping function prototype
void bubble_sort(int arr[] , int n); //== bubble_sort function prototype
int main()
{
    //===== Inputing the size of the array =====
    cout<<"Enter the size for the array"<<endl;
    int size;
    cin>>size;
    //===== Inputing the element of the array ====
    int arr[size];
    cout<<"Enter the elements for the array"<<endl;
    for(int i = 0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    //==== Printing Element Before the sorting ====
    cout<<"The array before the sorting"<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //==== Function calling for the sorting ====
    bubble_sort(arr,size);

    //==== Printing Element after sorting ====
    cout<<"The array after the sorting"<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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