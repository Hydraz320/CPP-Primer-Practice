#include "标头.h"  
void exchange(int *a,int *b)  
{  
    *a = (*a) ^ (*b);  
    *b = (*b) ^ (*a);  
    *a = (*a) ^ (*b);  
}  