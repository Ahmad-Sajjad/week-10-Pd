#include <iostream>
using namespace std;
int countLetter(string array[], int num, char letter);
main()
{
    int num;
    char letter;
    cout << "Enter how many words you want to enter: ";
    cin >> num;
    string array[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    cout << letter << " shows up " << countLetter(array, num, letter) << " times in the data.";
}
int countLetter(string array[], int num, char letter)
{
    int count = 0;
    int k = 0;
    string word;
    for (int j = 0; j < num; j++)
    {
        word = array[j];
        for (int k = 0; k < word.length(); k++)
        {

            if (word[k] == letter)
            {
                count++;
            }
        }
    }
    return count;
}