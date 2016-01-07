#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
#include <initializer_list>  
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::initializer_list;  
  
int func(int, int)  
{  
    cout << "calling" << endl;  
    return 0;  
}  
using f = int(int, int);  
int main()  
{  
    vector<f *> fvec;  
    fvec.push_back(&func);  
    fvec[0](1, 2);  
  
    getchar();  
    getchar();  
    return 0;  
}  