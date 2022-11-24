#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> sequence;
    int n, k;
    int no;
    cin >> n >> k;

    int j=1;
    for(int i = 0; i < n; i++){
        cin >> no;
        if(j == k){
        sequence.push_back(no);
        j = 0;
        }
        j++;
    }
    
    for(auto i : sequence){
        cout << i << ' ';
    }
    return 0;
}
