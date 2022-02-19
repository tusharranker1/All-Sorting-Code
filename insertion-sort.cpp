#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n); //function prototype

int main()
{
    //=======Declaration of the size of the array================
    cout<<"Enter the Size of the array"<<endl;
    int size;
    cin>>size;

    //======Inputing the Element of the array====================
    cout<<"Enter the Element of the array"<<endl;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    //====== Printing the Element Before the sorting ===========
    cout<<"Array Before the sorting : "<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //=========  Function calling  ==================
    insertion_sort(arr,size);

    //=========Printing the Element after the Sorting===========
    cout<<"Array Before the sorting : "<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int arr[] , int n)
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
