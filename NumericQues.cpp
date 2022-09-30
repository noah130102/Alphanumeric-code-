#include <iostream>
#include <string>
using namespace std;
void alphanumericNumber(string st){
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    for (int i = 0; i < st.length(); i++)
    {
        int x = 'z' - st[i] + 1; 
        cout<< str[26-x]; 
    }
    
    
}
int main (){
    
    string stk = "geeksforgeeks";
    alphanumericNumber(stk);
    return 0;
}