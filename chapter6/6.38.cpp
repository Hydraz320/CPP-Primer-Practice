#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
#include <initializer_list>  
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::initializer_list;  
  
int odd[] = { 1, 3, 5, 7, 9 };  
int even[] = { 0, 2, 4, 6, 8 };  
decltype(odd) &arrPtr(int i)  
{  
    return (i % 2) ? odd : even;  
}  
  
int main()  
{  
    cout << arrPtr(1)[0] << endl;  
    getchar();  
    getchar();  
    return 0;  
}  