#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
int compare_int_pointer(const int i, const int *pi)  
{  
    return (i > *pi) ? i : *pi;  
}  
int main()  
{  
    int i = 8, ii = 10, *pi = ⅈ  
    cout << compare_int_pointer(i, pi) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  