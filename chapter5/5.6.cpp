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
    vector<string> grades{ "F", "D", "C", "B", "A", "A++" };  
    string grade = "";  
    unsigned int score = 0;  
    while (cin >> score && score<=100)  
    {  
        grade = (score < 60) ? grades[0] : grades[(score - 50) / 10];  
        grade += (score == 100 || score < 60) ? "" : (score % 10 < 3) ? "-" : (score % 10 > 7) ? "+" : "";  
        cout << grade << endl;  
    }  
    getchar();  
    getchar();  
    return 0;  
}  