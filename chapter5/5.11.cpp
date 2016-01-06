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
    char c;  
    unsigned int aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;  
    unsigned int spaceCnt = 0, tabCnt = 0, crCnt = 0;  
    while (cin>>std::noskipws>>c)  
    {  
        switch (tolower(c))  
        {  
            case 'a':++aCnt; break;  
            case 'o':++oCnt; break;  
            case 'e':++eCnt; break;  
            case 'i':++iCnt; break;  
            case 'u':++uCnt; break;  
            case ' ':++spaceCnt; break;  
            case '\t':++tabCnt; break;  
            case '\n':++crCnt; break;  
            default:break;  
        }  
    }  
    cout << "'a'&'A' occurs " << aCnt << "times." << endl;  
    cout << "'o'&'O' occurs " << oCnt << "times." << endl;  
    cout << "'e'&'E' occurs " << eCnt << "times." << endl;  
    cout << "'i'&'I' occurs " << iCnt << "times." << endl;  
    cout << "'u'&'U' occurs " << uCnt << "times." << endl;  
    cout << "space occurs " << spaceCnt << "times." << endl;  
    cout << "tab occurs " << tabCnt << "times." << endl;  
    cout << "cr occurs " << crCnt << "times." << endl;  
    //aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;  
    //spaceCnt = 0, tabCnt = 0, crCnt = 0;  
    getchar();  
    getchar();  
    return 0;  
}  