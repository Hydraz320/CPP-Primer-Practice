#include "标头.h"  
  
#include <string>  
#include <cctype>//用iostream即可使用isupper()  
  
using std::string;  
using std::isupper;  
  
bool find_super(const string &s)//判断string对象中是否含有大写字母  
{  
    for (auto c : s)  
        if (isupper(c))  
            return true;  
    return false;  
}  
void lower(string &s)//把string对象全都改成小写形式  
{  
    for (auto &c : s)  
        c = tolower(c);  
}  