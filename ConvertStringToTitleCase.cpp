#include <bits/stdc++.h>
using namespace std;

bool is_upper(const string& word){
    for(char c: word){
        if(isalpha(c) && !isupper(c)){
            return false;
        }
    }
    return true;
}
string Titlt_case(string str){
    stringstream ss(str);
    string word;
    string result;
    bool first_word=true;
    
    while(ss>> word){
        if(is_upper(word)){
            if(!first_word) result+=" ";
            result+=word;
        }else{
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            word[0]=toupper(word[0]);
            if(!first_word) result+=" ";
            result+=word;
        }
        first_word=false;
    }
    return result;
}

int main() {
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string str;
        getline(cin, str);
        cout<<Titlt_case(str)<<endl;
    }

}
