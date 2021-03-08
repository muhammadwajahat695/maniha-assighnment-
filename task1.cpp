#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    std::string text;
    ofstream MyFile("student.txt");
    MyFile << "Roll NO.\t";
    MyFile << "Name\t";
    MyFile << "Marks\n";
    MyFile <<"--------------------------\n";
    int x;
    cout << "enter value" << endl;
    cin >> x;
   
    while (x != -999)
    {
        cout<<"enter the roll no of ";cout<<x<<endl;
        cin>>text;
        MyFile << text <<"\t";
        
        cout<<"enter the  first Name  of ";cout<<x<<endl;
        cin>>text;
        MyFile <<text << " ";
        
        cout<<"enter the  Last Name  of ";cout<<x<<endl;
        cin>>text;
        MyFile <<text << "\t";
        
        cout<<"enter the Marks of ";cout<<x<<endl;
        cin>>text;
        MyFile << text<<endl;

        cout << "enter value" << endl;
        cin >> x;

    }

    MyFile.close();
}