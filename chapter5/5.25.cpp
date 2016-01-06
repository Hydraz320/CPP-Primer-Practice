#include <iostream>      
#include <string>      
#include <vector>      
#include <iterator>      
#include <cstring>    
#include <exception>  
#include <stdexcept>  
  
using std::cin; using std::cout;  
using std::endl;   
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::strcat; using std::strcpy;  
using std::exception; using std::runtime_error;  
  
int main()  
{  
    int dividend = 1, divisor = 1;  
    cout << "input dividend and divisor:" << endl;  
    while (cin >> dividend >> divisor)  
    {  
        try{  
            if (!divisor)  
                throw runtime_error("divisor is 0");  
            cout << dividend / divisor << endl;  
        }  
        catch(runtime_error err){  
            cout << err.what() << endl << "Do you want to try again?(Y/N)" << endl;  
            char c;  
            cin >> c;  
            if (!cin || tolower(c) == 'n')  
                break;  
        }  
    }  
    getchar();  
    getchar();  
    return 0;  
} 