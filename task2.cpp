#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    std::string text;
    ifstream MyFile("student.txt");
    while (getline(MyFile, text)) {
  cout << text<<endl;
    }
MyFile.close();
    }