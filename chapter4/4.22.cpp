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
  
string grade(int point)  
{  
    string final_grade = (point < 75) ?  
        ((point < 60) ? ("fail") : ("low pass"))  
        : ((point < 90) ? ("pass") : ("high pass"));  
    return final_grade;  
}  
int main()  
{  
    vector<int> points{ 66, 100, 48, 88 };  
    for (auto i : points)  
        cout << i << ": " << grade(i) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  