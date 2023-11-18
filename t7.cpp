#include <iostream>
using namespace std;
bool arrange(int array[], int length);
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array: " << endl;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Can be arranged: " << arrange(array, length);
}
bool arrange(int array[], int length)
{
    int count = 0;
    int num;
    for (int j = 0; j < length - 1; j++)
    {
        for (int k = j + 1; k < length; k++)
        {
            if (array[k] > array[j])
            {
                num = array[j];
                array[j] = array[k];
                array[k] = num;
            }
        }
    }
    for (int i = length - 1; i >= 0; i--)
    {
        if ((array[i]) == (array[i - 1] - 1))
        {
            count++;
        }
    }
    if (count == (length - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
