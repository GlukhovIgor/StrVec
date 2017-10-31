#include <iostream>

using namespace std;
string upper(string);
string lower(string);
string inverse(string);

int main()
{
    string s;
    cout << "Type your string: " << endl;
    getline(cin, s);
    cout << "String in upper case: " << upper(s) << endl;
    cout << "String in lower case: " << lower(s) << endl;
    cout << "String in inverted case: " << inverse(s) << endl;
    return 0;
}
string upper(string str){
    for(int i=0; i<str.size(); i++){
        if((str[i] >= 'a' and str[i] <= 'z')){
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

string lower(string str){
    for(int i=0; i<str.size(); i++){
        if((str[i] >= 'A' and str[i] <= 'Z')){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

string inverse(string str){
    for(int i=0; i<str.size(); i++){
        if((str[i] >= 'a' and str[i] <= 'z') or ((str[i] >= 'A' and str[i] <= 'Z'))){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
            else{
                str[i] = toupper(str[i]);
            }
        }
    }
    return str;
}
