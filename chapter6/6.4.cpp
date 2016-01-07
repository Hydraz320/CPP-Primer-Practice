#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
      
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
int fact(void)  
{  
    cout << "n=?" << endl;  
    int n = 0, f = 1;  
    cin >> n;  
    for (size_t i = 1; i < n+1; i++)  
    {  
        f *= i;  
    }  
    return f;  
}  
int main()  
{  
    cout << fact() << endl;  
    getchar();  
    getchar();  
    return 0;  
}  