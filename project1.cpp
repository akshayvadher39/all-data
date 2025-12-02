#include <iostream>
using namespace std;

int main()
{

    // 1. Copy one array into another

    int n1;
    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1], arrCopy[n1];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        arrCopy[i] = arr1[i];
    }

    cout << "\nCopied Array: ";
    for (int i = 0; i < n1; i++)
    {
        cout << arrCopy[i] << " ";
    }
    cout << "\n\n";

    // 2. Find second largest element

    int largest = arr1[0];
    int second = -1;

    for (int i = 1; i < n1; i++)
    {
        if (arr1[i] > largest)
        {
            second = largest;
            largest = arr1[i];
        }
        else if (arr1[i] > second && arr1[i] != largest)
        {
            second = arr1[i];
        }
    }

    cout << "Second Largest Element: " << second << "\n\n";

    // 3. Remove duplicate values

    int temp[n1], size = 0;

    for (int i = 0; i < n1; i++)
    {
        bool found = false;
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == temp[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            temp[size] = arr1[i];
            size++;
        }
    }   

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << "\n\n";

    // 4. Sum of corresponding elements of two arrays

    int n2;
    cout << "Enter size of second array (same as first): ";
    cin >> n2;

    int arr2[n2], sumArr[n2];

    cout << "Enter second array elements:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
        sumArr[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of two arrays: ";
    for (int i = 0; i < n2; i++)
    {
        cout << sumArr[i] << " ";
    }
    cout << "\n\n";

    // 5. Merge two arrays

    int mergeSize = n1 + n2;
    int mergeArr[mergeSize];

    for (int i = 0; i < n1; i++)
    {
        mergeArr[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        mergeArr[n1 + i] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < mergeSize; i++)
    {
        cout << mergeArr[i] << " ";
        
    }
    cout << "\n\n";
    

    return 0;
}
