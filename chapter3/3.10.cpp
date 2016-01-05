#include <iostream>  
#include <string>  
#include <cctype>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
  
string space_delete(string sOrigin)  
{  
    string sNew;  
    for (auto c:sOrigin)  
        if (!ispunct(c))  
        {  
            sNew += c;  
        }  
    return sNew;  
}  
  
int main()  
{  
    string sOrigin;  
    getline(cin,sOrigin);  
    cout << space_delete(sOrigin) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  