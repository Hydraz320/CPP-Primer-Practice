#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
void swap_pointer(int *&pi1, int *&pi2)  
{  
    int *ptemp = pi1;  
    pi1 = pi2;  
    pi2 = ptemp;  
}  
int main()  
{  
    int i1 = 8, i2 = 10, *pi1 = &i1, *pi2 = &i2;  
    swap_pointer(pi1, pi2);  
    cout << *pi1 << " " << *pi2 << endl;  
    getchar();  
    getchar();  
    return 0;  
}  