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
    string rsp;  
    do  
    {  
        string s1, s2;  
        cout << "Please input two strings and will return the shorter one for u:" << endl;  
        cin >> s1 >> s2;  
        cout << ((s1.size() < s2.size()) ? s1 : s2) << endl;  
        cout << "More inputs?(Y/N)" << endl;  
        cin >> rsp;  
    } while (!rsp.empty() && tolower(rsp[0]) != 'n');  
    getchar();  
    getchar();  
    return 0;  
}  