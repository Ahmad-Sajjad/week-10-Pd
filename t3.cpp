#include <iostream>
using namespace std;
bool isRepeatingCycle(int array[], int cycle, int length);
main()
{
    int length, cycle;
    cout << "Enter the length of the array: ";
    cin >> length;
    int array[length];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    cout <<"Output: "<< isRepeatingCycle(array, cycle, length);
}
bool isRepeatingCycle(int array[], int cycle, int length)
{
    bool found = false;
    int k = 0;
    for (int j = 0; j < cycle; j++)
    {
        if (array[j] == array[cycle + k])
        {
            found = true;
        }
        if (length < cycle)
        {
            return true;
        }
        k++;
    }
    return found;
}