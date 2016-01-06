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
  
void sort(vector<string> svec, vector<int> &iCnt, vector<string> &ordered_svec)  
{  
    int cnt = 1;  
    string pre = *(svec.begin());  
    for (auto iter = svec.begin() + 1; iter != svec.end(); ++iter)  
    {  
        if ((*iter) == pre)  
            ++cnt;  
        else  
        {  
            ordered_svec.push_back(pre);  
            iCnt.push_back(cnt);  
            pre = *iter;  
            cnt = 1;  
        }  
    }  
    ordered_svec.push_back(pre);  
    iCnt.push_back(cnt);  
}  
  
void display(vector<int> iCnt, vector<string> ordered_svec)  
{  
    int index = 0;  
    for (int i = 1; i != iCnt.size() ; ++i)  
        if (iCnt[i] > iCnt[index])  
            index = i;  
    cout << ordered_svec[index] << " occurs " << iCnt[index] << " times." << endl;  
}  
int main()//看github有pair容器的方法，暂时还没看到pair，留着再做  
{  
    vector<string> svec, ordered_svec;  
    vector<int> iCnt;  
    string s;  
    while (cin >> s)  
        svec.push_back(s);  
    sort(svec, iCnt, ordered_svec);  
    display(iCnt, ordered_svec);  
    getchar();  
    getchar();  
    return 0;  
}  