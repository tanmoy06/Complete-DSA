#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 4, 2, 5, 3};
    // a[0] = 12;
    // a[1] = 3;
    // a[2] = 42;
    // a[3] = 432;
    // a[4] = 14;
    for (int x : a)
    {
        cout << x << endl;
    }
    int n;
    cout << "Enter size";
    cin >> n;
    int b[n];
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (int x : b)
    {
        cout << x << endl;
    }

    return 0;
}
