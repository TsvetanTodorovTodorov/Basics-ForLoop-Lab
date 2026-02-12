#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++) {
        int leftNum;
        cin >> leftNum;
        leftSum += leftNum;
    }
    for (int i = 0; i < n; i++) {
        int rightNum;
        cin >> rightNum;
        rightSum += rightNum;
    }

    if (leftSum == rightSum)
    {
        cout << "Yes, sum = " << leftSum << endl;
    } else
    {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }
    
    return 0;
}