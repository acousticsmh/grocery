#include "item/Item.h"
#include "company/Company.h"
#include<iostream>

using namespace std;

int main()
{
    string x = "Parle";
    Company m(x);
    Item i("Marie Gold",m.id,100);
    cout<<i.id<<endl;
    cout<<i.size<<endl;
    return 0;
}