#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    int counter = 0;

    for (int i = 0; i < text.length(); i++) {

        if (text[i] == 'a')
        {
            counter += 1;
        } else if (text[i] == 'e')
        {
            counter += 2;
        } else if (text[i] == 'i')
        {
            counter += 3;
        } else if (text[i] == 'o')
        {
            counter += 4;
        } else if (text[i] == 'u')
        {
            counter += 5;
        }

    }

    cout << counter << endl;

    return 0;
}