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
  
inline bool isShorter(const string &s1, const string &s2)  
{  
    return s1.size() < s2.size();  
}  
int main()  
{  
    cout << std::boolalpha << isShorter("hhhh", "23333");  
    getchar();  
    getchar();  
    return 0;  
}  