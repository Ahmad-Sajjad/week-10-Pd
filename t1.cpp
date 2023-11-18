#include <iostream>
using namespace std;
int checkProgress(int array[], int num);
main()
{
    int num;
    cout << "Enter the number of Saturdays: ";
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Total progress days: " << checkProgress(array, num);
}
int checkProgress(int array[], int num)
{
    int count = 0;
    for (int j = 0; j < num - 1; j++)
    {
        if (array[j + 1] > array[j])
        {
            count++;
        }
    }
    return count;
}