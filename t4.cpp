#include <iostream>
using namespace std;
int volume(int array[], int box);
main()
{
    int box;
    cout << "Enter the number of boxes: ";
    cin >> box;
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    int array[box * 3];
    for (int i = 0; i < box * 3; i++)
    {
        cin >> array[i];
    }
    cout << "Total volume of all boxes: " << volume(array, box);
}
int volume(int array[], int box)
{
    int vol = 0;
    for (int j = 0; j < box * 3; j += 3)
    {
        vol = vol + (array[j] * array[j + 1] * array[j + 2]);
    }
    return vol;
}