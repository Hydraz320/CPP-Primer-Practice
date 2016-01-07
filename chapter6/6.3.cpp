#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
      
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
int fact(int n)  
{  
    if (n == 1 || n==0)  
        return 1;  
    return n*fact(n - 1);  
}  
int main()  
{  
    cout << fact(4) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  