#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
void first_upper(vector<string> &svec)  
{  
    for (auto &citer : (*svec.begin()))  
        citer = toupper(citer);  
    for (auto siter = svec.begin(); siter != svec.end() && !siter->empty(); ++siter)  
        cout << *siter;  
    cout << endl;  
}  
int main()  
{  
    vector<string> svec;  
    for (string sentence = ""; getline(cin,sentence);svec.push_back(sentence));  
    first_upper(svec);  
    getchar();  
    return 0;  
}  