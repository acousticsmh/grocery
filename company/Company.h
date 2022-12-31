#include<string>
#include<iostream>
using namespace std;

int y = 0;


class Company
{
    public:
        string name;
        int id;

        Company(string Name)
        {
            id = y++;
            name = Name;
        }

};