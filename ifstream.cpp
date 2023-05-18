#include <iostream>
#include<fstream>
using namespace std;
int main()
{
   
    int x;
    ifstream fin  ("input.txt");
    if (!fin.is_open()) {
        x = -1;
    }
    else
    {
        fin >> x;
    }
        fin >> x;
        cout << x;
        fin.close();
    system("pause>0");
}

