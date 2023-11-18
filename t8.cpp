#include <iostream>
using namespace std;
int rotations(string array[], int length);
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array (\"left\" or \"right\"): "<<endl;
    string array[length];
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Number of full rotations: " << rotations(array, length);
}
int rotations(string array[], int length)
{
    int value = 90;
    for (int j = 0; j < length - 1; j++)
    {
        if (array[j] == array[j + 1])
        {
            value = value + 90;
        }
        else if (array[j] == "left" && array[j + 1] == "right")
        {
            value = value + 90;
        }
        else if (array[j] == "right" && array[j + 1] == "left")
        {
            value = value - 90;
        }
    }
    int answer = value / 360;
}