#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string hey;
    cin >> hey;
    int count = 0;
    for(int i = 0; i < hey.length(); i++){
        if(i==0)
            cout << 'h';
        if(hey.at(i) == 'e')
            cout << 'e' << 'e';
        if(i == hey.length()-1)
            cout << 'y';
            
    }
    return 0;
}
