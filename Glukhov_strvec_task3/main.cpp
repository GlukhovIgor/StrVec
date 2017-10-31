#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector<int>&);

int main()
{
    int N = 5;
    vector<int> vec;
    for(int i=0 ; i < N; i++){
        vec.push_back(i);
    }
    PrintVector(vec);
    return 0;
}

void PrintVector(vector<int>& vect){
    for(int i=0 ; i<vect.size(); i++){
        cout << vect[i] << " ";
    }
}
