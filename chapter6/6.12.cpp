#include "标头.h"  
void exchange(int &a,int &b)  
{  
    a ^= b;  
    b ^= a;  
    a ^= b;  
}  