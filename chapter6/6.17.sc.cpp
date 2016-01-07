#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
#include "标头.h"  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
  
int main()  
{  
    cout << std::boolalpha << find_super("hello,Boy!") << endl;  
    string s("gagaGGG");  
    lower(s);  
    cout << s << endl;  
    getchar();  
    getchar();  
    return 0;  
}  