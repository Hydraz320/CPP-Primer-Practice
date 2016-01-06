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
    unsigned int cnt = 0;  
    while (cin >> c)  
    {  
        if ((c == 'a') || (c == 'o') || (c == 'e') || (c == 'i') || (c == 'u'))  
            ++cnt;  
    }  
    cout << cnt << endl;  
    getchar();  
    getchar();  
    return 0;  
}  