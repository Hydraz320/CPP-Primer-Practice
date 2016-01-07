string(&func1(string(&arrStr)[10]))[10];  
  
using arrS = string(&)[10];  
arrS func2(arrS arrStr);  
  
auto func3(string(&arrStr)[10])->string(&)[10];  
  
string arrs[10] = { "a" };  
decltype(arrs) &func(arrS arrStr); 