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
        if (count == 0 )
        {
            int max = 0;
            for (int i = 1; i <= 11; i++)
            {
                if (max < array[i])
                {
                    max = array[i];
                }
            }
            cout<<array[0]<<" ";
            cout << max << endl;
        }
    }
}