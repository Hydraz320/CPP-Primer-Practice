#include <iostream>  
#include <string>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
  
int main()  
{  
    string s1, s2;  
    while (cin >> s1 >> s2)  
    {  
        if (s1 == s2)  
            cout << "same length" << endl;  
        else  
            cout << (s1.size() > s2.size() ? s1 : s2) << endl;  
    }  
    getchar();  
    getchar();  
    return 0;  
}  