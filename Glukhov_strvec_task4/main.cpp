#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintVector(vector<int>& vect){
    for(unsigned int i=0 ; i<vect.size(); i++){
        cout << vect[i] << " ";
    }
}
void PrintPositive(vector<int>&, int);

int main()
{
    vector<int> vec;
    unsigned int i = 0;
    int a;
    do{
        cin >> a;
        vec.push_back(a);
        i++;
    }while(vec[i-1] != 0);

    int PositiveCounter = 0;
    for(i = 0; i< vec.size(); i++){
        if(vec[i] > 0){
            PositiveCounter++;
        }
    }
    cout << "Whole vector is: " << endl;
    PrintVector(vec);
    cout << "1st half of positive numbers is: " << endl;
    PrintPositive(vec, PositiveCounter);
    return 0;
}
void PrintPositive(vector<int>& vect, int num_pos){
    int j=0;
    for(int i=0; (i< vect.size() and j < num_pos / 2 ); i++){
        if(vect[i] > 0){
            cout << vect[i] << " ";
            j++;
        }
    }
}

