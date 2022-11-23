#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int a;
    float b , c;
    std::cin >> a;
    float result = 0.0f;
    for(int i = 0; i < a; i++){
            cin >> b >> c;
            result+= b*c;
        
    }    
    cout << result;
    return 0;
}

