#include <math.h>
#include <iostream>
using namespace std;
main()
{
    int a;
    float p,c;
    double s;
    cout<<"Vasha summa vklada - ";
    cin>>s;
    cout<<"Vash srok vklada - ";
    cin>>c
    if((c>365)||(c<0)||(s<10000)){
    cout>> " Vklad nevozmozhen "
    return 1;
    }
    p=c/365;
    if(s<100000) a=1;
    else a=2;
    if (s<=30) 
    {
    s=s*0.9;
    cout<<"Summa vashego vklada - "<<s<<endl;
    system ("PAUSE");
    return 0;
    }
    switch(a)
    {
    case 1: 
    