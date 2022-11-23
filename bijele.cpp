#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int set[6];
    int setcorrect[6]={1,1,2,2,2,8};
    int missing[6];
    for(int i = 0 ; i < 6; i++) {
        cin >> set[i];
    }

    for(int i = 0; i < 6; i++) {
        if(set[i] != setcorrect[i])
            cout << setcorrect[i] -set[i] << " ";
        else
            cout << 0 << " ";
    }
    return 0;

}
