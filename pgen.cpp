#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    char a[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*1234567890+-*/";
    short count, times, rnum;
    char choice;
    char y = 'y';
    char n = 'n';
    ofstream file;
    file.open("psw.txt");
    cout << "Enter number of digits you want your password to be.\n";
    cin >> count;
    cout << "How many times do you want to generate this password?\n";
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
    cout << "Do you want to generate more passwords?";
    cin >> choice;
    if (choice == y)
    {
        cout << "Enter number of digits you want your password to be.\n";
    cin >> count;
    cout << "How many times do you want to generate this password?\n";
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
    } else if (choice == n)
    {
        return 0;
    } else
    {
        cout << "Invalid\n\a\v" << endl;
        while (choice != y || choice != n)
        {
            cin >> choice;
            if (choice == y)
            {
                cout << "Enter number of digits you want your password to be.\n";
                cin >> count;
                cout << "How many times do you want to generate this password?\n";
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
            } else if (choice == n)
            {
                cout << "Okay, Relaunch when you need to.";
            } else
            {
                cout << "Still invalid.\n\a\v";
                return 0;
            }
             
        }
        
    }
      
}
