#include "item/Item.h"
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x = "Nestle";
    Item k(x);
    Item l("Parle");
    cout<<k.myid<<endl;
    cout<<l.name<<endl;
    return 0;
}