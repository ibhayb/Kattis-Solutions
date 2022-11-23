#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int cases = 0;
    vector<string> words;
    string word;
    cin >> cases;
    for(int i = 1; i <= cases; i++){
        cin >> word;
        words.push_back(word);
    }
    for(int i =0; i < cases; i++){
        if((i+1)%2 != 0)
            cout << words.at(i) << endl;
    }
        
    return 0;
}
