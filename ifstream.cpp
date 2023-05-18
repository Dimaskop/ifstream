#include <iostream>
#include<fstream>
using namespace std;
int main()
{
   
    int x;
    ifstream fin;
     fin. open  ("input.txt");
    if (!fin.is_open()) {
        x = -1;
    }
    else
    {
        fin >> x;
    }
        fin >> x;
       
        fin.close();
        ofstream fout("inhut.txt");
        fout << x;


    system("pause>0");
}

