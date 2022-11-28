#include <iostream>
#include <string>
#include <string.h>
#include <unordered_map>

using namespace std;
int main(int argc, char const *argv[])
{
    string line;
    string delimiter = " ";
    unordered_map<string, int> words;

    getline(cin, line);

    int index1 = 0;
    int index2 = 0;
    int dups = 0;
    line.append(" ");
    for(int i = 0; i < line.length(); i++){
        if(line.at(i) == ' ' || line.at(i) == '\n'){
            string token= "";
            index2 = i;
            token = line.substr(index1, index2 - index1);
            // add the string in to hashmap if its not existing already
            if(words.find(token) == words.end()){
                // token is not in map --> add it to the map
                words[token] = 1;
            }
            else{
                //map contains the key already increment the value of the key
                words[token]+=1;
                dups = 1;
            }
        //    cout << token << ":" << words[token]<< endl;
            
            index1 = i+1;
        }
    }
    if(dups == 0)
        cout << "yes"<< endl;
    else
        cout << "no"<< endl;
    return 0;
}
