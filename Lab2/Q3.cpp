#include <iostream>
#include <string>
using namespace std;
string vowels = "aeiou";
bool is_vowel(char c){
    for(int i = 0; i < vowels.length(); i++){
        if(c == vowels[i]) return true;
    }
    return false;
}
string remove_vowels(string str){
    string temp = "";
    for(int i = 0; i < str.length(); i++){
        if(!is_vowel(str[i])) temp += str.substr(i,1);
    }
    str = temp;
    return str;
}
int main(){
    string str = "There";
    cout<<"Input string: ";
    cin>>str;
    cout<<remove_vowels(str);
    return 0;
}