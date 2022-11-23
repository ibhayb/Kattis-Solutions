#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    int i = 1;
    int b;
    int result = 0;
    while(i <= a){
        cin >> b;
        result += b;
        i++;
    }
    cout << result- (a-1);
    return 0;
}
