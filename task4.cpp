#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int size = 20;
    int array[size];
    int count = 0;
    int x;
    ifstream myfile("input.txt");
    while (count < size && myfile >> x)
    {
        array[count++] = x;
        // cout<<array[count]<<endl;
        if (count == 11)
        {
            count = 0;
        }
        if (count == 0)
        {
            int i, j, temp;
            for (i = 1; i < 11; i++)
            {
                for (j = i + 1; j < 11; j++)
                {
                    if (array[i] > array[j])
                    {
                        temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }
            cout << array[0] << " ";
            cout << array[10] << " ";
            cout << array[9] << endl;
        }
    }
}