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
  
int add(int a, int b)  
{  
    return a + b;  
}  
int minus(int a, int b)  
{  
    return a - b;  
}  
int multiply (int a, int b)  
{  
    return a * b;  
}  
int divide(int a, int b)  
{  
    return a / b;  
}  
  
using pf = decltype(add) *;//using pf = int (*)(int, int)等都可以  
  
int main()  
{  
    vector<pf> pfvec{ add, minus, multiply, divide };  
    for (auto f : pfvec)  
        cout << f(3, 2) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  