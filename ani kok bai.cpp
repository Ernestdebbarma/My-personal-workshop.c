#include<iostream>
using namespace std;

struct bodool
{
   int saiman;
   struct bodool* tai;
};

struct bodool* bohkorok=NULL;

struct bodool* ketalbodool(int bwsek)
{
    struct bodool* senamani;
    senamani=(struct bodool*)malloc(sizeof(struct bodool));
    senamani->saiman=bwsek;
    senamani->tai=NULL; 
    return senamani;
}

struct bodool* dadi(int bwsek)
{
   struct bodool* sorrmani;
   sorrmani = ketalbodool(bwsek);
   sorrmani->tai=bohkorok;
   bohkorok=sorrmani;
   return bohkorok;
}

int main()
{
    int u = 0;
    cout<<"how much data you want to enter? ";
    cin>>u;
    for (int i = 0; i < u; ++i)
    {
        int d=0;
        cout<<"data re d ";
        cin>>d;
        bohkorok=dadi(d);

    }
    
    struct bodool* haino=bohkorok;

    while(haino!=NULL)
    {
        cout<<haino->saiman<<" ";
        haino=haino->tai;
    }

    return 0;
}
