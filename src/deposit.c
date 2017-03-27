#include "deposit.h"
double f1(double s, float c,float p) {
    if(c<121) s=s+p*s*0.02;
    if(c<240) s=s+p*s*0.06;
    else s=s+p*s*0.12;
    return s;
    }
double f2(double s, float c,float p)  {
    if (c<121) s=s+p*s*0.03;
    if(c<240) s=s+p*s*0.08;
    else s=s+p*s*0.15;
    return s;
    }
