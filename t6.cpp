#include <iostream>
using namespace std;
void reverse(string sentence);
main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    reverse(sentence);
}
void reverse(string sentence)
{
    int count = 0;
    cout<<"Reversed string: ";
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        count++;
        if (sentence[i] == char(32))
        {
            for (int j = i + 1; j < i + count; j++)
            {
                cout << sentence[j];
            }
            cout << sentence[i];
            count = 0;
        }
        if (i == 0)
        {
            for (int j = i; j < i + count; j++)
            {
                cout << sentence[j];
            }
        }
    }
}