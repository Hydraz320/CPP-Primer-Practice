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
    char ch;  
    unsigned int aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;  
    while (cin >> ch)  
    {  
        switch (tolower(ch)){  
            case 'a':++aCnt; break;  
            case 'o':++oCnt; break;  
            case 'e':++eCnt; break;  
            case 'i':++iCnt; break;  
            case 'u':++uCnt; break;  
            default:break;  
        }  
    }  
    cout << "'a'&'A' occurs " << aCnt << "times." << endl;  
    cout << "'o'&'O' occurs " << oCnt << "times." << endl;  
    cout << "'e'&'E' occurs " << eCnt << "times." << endl;  
    cout << "'i'&'I' occurs " << iCnt << "times." << endl;  
    cout << "'u'&'u' occurs " << uCnt << "times." << endl;  
    getchar();  
    getchar();  
    return 0;  
}  