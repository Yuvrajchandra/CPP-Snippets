#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 5, y = 10;
    string str1 = "MakeUseOf", str2 = "MUO";

    cout << "Before Swapping: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    swap(x, y);
    swap(str1, str2);

    cout << "After Swapping: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}
