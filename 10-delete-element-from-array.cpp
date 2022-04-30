#include<bits/stdc++.h>

using namespace std;


int deleteElementFromArray(int arr[], int size, int elementToBeDeleted)
{
    int i, j;

    // Search if elementToBeDeleted is present
    // in the array or not
    for (i=0; i<size; i++)
    {
        if (arr[i] == elementToBeDeleted)
        {
            break;
        }

    }

    // If elementToBeDeleted is found in the array
    if (i < size)
    {
        // We need to reduce the size of the array
        // and shift the rest elements
    	size = size - 1;
    	for (j=i; j<size; j++)
        {
            arr[j] = arr[j+1];
        }
    }

    // New array size is returned
    return size;
}

void printArrayElements(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: " << endl;
    printArrayElements(arr, size);

	int elementToBeDeleted = 3;
	size = deleteElementFromArray(arr, size, elementToBeDeleted);

	cout << "New array: " << endl;
    printArrayElements(arr, size);

	return 0;
}
