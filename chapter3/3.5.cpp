#include <iostream>  
#include <string>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
  
int main()  
{  
    string sTotal;  
    for (string sNew; cin >> sNew; sTotal += sNew + ' ');  
    cout << sTotal << endl;  
    getchar();  
    getchar();  
    return 0;  
}  