#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int arr[], int size)
{
    int pass = 1;

    while(pass < size)
    {
        for(int i=0; i<size; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }
}
void InsertionSort(int arr[], int size)
{
    for(int i = 1; i<size; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void SelectionSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] =  temp;

    }
}
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<endl;

    int arr[size];
    for(int i=0; i<size; i++)
    {
        cout<<"enter value at index "<<i<<": ";
        cin>>arr[i];
    }

    cout<<endl<<"Original Array :-  ";
    printArray(arr, size);
    cout<<endl;

    int choise;
    
    cout<<endl<<"1 for Bubble sort ";
    cout<<endl<<"2 for Insertion sort ";
    cout<<endl<<"3 for Selection sort ";
    
    cout<<endl<<endl<<"Select Any Sorting Technique : ";
    cin>>choise;
    switch (choise)
    {  
    case 1:
        BubbleSort(arr, size);
        cout<<endl<<"\tArray Sorted using Bubble sort : ";
        break;
    case 2:
        InsertionSort(arr, size);
        cout<<endl<<"\tArray Sorted using Insertion sort : ";
        break;
    case 3:
        SelectionSort(arr, size);
        cout<<endl<<"\tArray Sorted using Selection sort : ";
        break;
    default:
        break;
    }

    printArray(arr,size);


     return 0;
}