#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
//note that im not good at c++ and im sorry extremist's.
//made by MxGoody.
//MIT License.
//Version 1.1
int main()
{
    char a[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*1234567890+-*/";
    short count, times, rnum;
    char choice;
    char y = 'y', n = 'n';
    string g;
    ofstream file;
    while (choice != n || choice == y)
    {
        cout << "Enter an extension: ";
        cin >> g;
        file.open(g);
        cout << "\nEnter number of digits you want your passwords to be.\n";
        cin >> count;
        cout << "\nHow many times do you want to generate these passwords?\n";
        cin >> times;
        srand(time(NULL));
        for (int i = 0; i < times; i++)
        {
            for (int i = 0; i <= count; i++)
        {
        rnum = rand() % 75 + 1;
        file << a[rnum];
        }
        file << "\n";
        }
        cout << "\nDone.\n";
        cout << "Do you want to generate more passwords? y/n\nChoice: ";
        cin >> choice;
    }
}
