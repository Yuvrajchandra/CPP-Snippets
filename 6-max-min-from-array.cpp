#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {23, 56, 87, 12, 56};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Max element: " << *max_element(arr, arr+size) << endl;
    cout << "Min element: " << *min_element(arr, arr+size) << endl;

    return 0;
}
