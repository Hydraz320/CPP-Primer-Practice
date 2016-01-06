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
    while (cin >> score && score<100)  
    {  
        if (score < 60)  
            grade = grades[0];  
        else  
        {  
            grade = grades[(score - 50) / 10];  
            if (score != 100)  
            {  
                if (score % 10 < 3)  
                    grade += "-";  
                if (score % 10 > 7)  
                    grade += "+";  
            }  
        }  
        cout << grade << endl;  
    }  
    getchar();  
    getchar();  
    return 0;  
}  