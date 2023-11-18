#include <iostream>
using namespace std;

void ascending(int array[]);

main()
{
    cout << "Enter the weights of the 10 packages: " << endl;
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    ascending(array);
}

void ascending(int array[])
{
    int num;
    cout << "Sorted array in ascending order: [";

    for (int j = 0; j < 10 - 1; j++)
    {
        for (int x = j + 1; x < 10; x++)
        {
            if (array[x] > array[j])
            {
                num = array[j];
                array[j] = array[x];
                array[x] = num;
            }
        }
    }

    for (int x = 9; x >= 0; x--)
    {
        cout << array[x];
        if (x != 0)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
