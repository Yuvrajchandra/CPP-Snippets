#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num=4635, sum=0, temp;

    while(num != 0)
    {
        temp = num%10;
        sum = sum+temp;
        num = num/10;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
