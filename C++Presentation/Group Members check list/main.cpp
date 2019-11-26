#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
cout << "What is your name?" << endl;
    char name[30];
    char Group[30];


     cin.getline(name, 30);

cout << "Which Group are You in?" << endl;
     cin.getline(Group, 30);

     cout<< name << " Is in " <<Group << endl;

    cin.get();
    return 0;
}
