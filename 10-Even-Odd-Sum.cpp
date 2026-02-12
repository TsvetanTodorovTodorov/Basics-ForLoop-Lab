#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int oddPositionSum = 0;
    int evenPositionSum = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (i % 2 == 0)
        {
            evenPositionSum += num;
        } else
        {
            oddPositionSum += num;
        }
    }

    if (oddPositionSum == evenPositionSum)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << evenPositionSum << endl;
    } else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs(evenPositionSum - oddPositionSum) << endl;
    }

    return 0;
}