#include<string>
#include<iostream>
using namespace std;

int x = 0;


class Item
{
    public:
        string name;
        int id;
        int c_id;
        int size;

        Item(string Name, int cid, int s = 1)
        {
            c_id = cid;
            id = x++;
            name = Name;
            size = s;
        }

};