#include <iostream>      
#include <string>      
#include <vector>      
#include <iterator>      
#include <cstring>    
  
using std::cin; using std::cout;  
using std::endl;   
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::strcat; using std::strcpy;  
  
int main()  
{  
    string s, pre("");  
    bool flag = true;  
    while (cin >> s && !s.empty())  
    {  
        if (!isupper(s[0]))continue;  
        if (s == pre)  
        {  
            cout << "Word '" << s << "' shows 2 times." << endl;  
            flag = false;  
            break;  
        }  
        else  
        {  
            pre = s;  
        }  
    }  
    if (flag)  
        cout << "No duplicate." << endl;  
    getchar();  
    getchar();  
    return 0;  
}  