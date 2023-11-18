#include <iostream>
using namespace std;
int special(int array[], int length);
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
    int result = special(array, length);
    if (result > 0)
    {

        cout << "Special value: " << result;
    }
    else
    {
        cout << "Special value: "
             << result;
    }
}
int special(int array[], int length)
{

    for (int num = 0; num <= length; num++)
    {
        int count = 0;

        for (int j = 0; j < length; j++)
        {
            if (array[j] >= num)
            {
                count++;
            }
        }
        if (count == num)
        {
            return num;
        }
    }
    return -1;
}