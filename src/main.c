#include "deposit.h"
int main()
{
    int a;
    float p,c;
    double s;
    cout<<"Vasha summa vklada - ";
    cin>>s;
    cout<<"Vash srok vklada - ";
    cin>>c;
    if ((c>365)||(c<0)||(s<10000)){
    cout<<" Vklad nevozmozhen ";
    return 1;
    }
    p=c/365;
    if(s<100000)s=f1(s,c,p);
    else s=f2(s,c,p);
    if (c<=30)
    {
    s=s-s*0.1;
    cout<<"Summa vashego vklada - " <<s<<endl;
    return 0;
    }
    cout<<" Summa vklada posle nachisleniya- "<<s<< endl;
    return 0;
    }
