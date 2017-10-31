#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cout << "Type your string: " << endl;
    getline(cin, s);
    string s1, s2;
    size_t pos1 = 0, pos2 = 0;
    int num = 0;

    for(int i=0; i<s.size(); i++){

        if(s[i] == ' '){
            s1 = s.substr(pos1, i-pos1);
            pos1 = i + 1;
            pos2 = i + 1;
            cout << "1st " << s1 << endl;

            for(int j=i+1; j< s.size(); j++){

                if(s[j] == ' '){
                    s2 = s.substr(pos2, j-pos2);
                    pos2 = j+1;
                    cout << "    2nd " << s2 << endl;
                }

                if( j == s.size()-1){
                    s2 = s.substr(pos2, s.size()-pos2);
                    cout << "    2nd " << s2 << endl;
                }

                if ((s[j] == ' ' || j == s.size()-1) && s2==s1){
                    num++;
                }
            }
        }

    }
    cout << "Answer is: " << num << endl;

    return 0;
}
