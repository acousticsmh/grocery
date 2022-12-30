#include<bits/stdc++.h>
using namespace std;

int x = 0;


class Item
{
    public:
        string name;
        int myid;

        Item(string Name)
        {
            myid = x++;
            name = Name;
        }

};