#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int lines;
    cin>>lines;
    map<string, int> girls;
    string pais;
    string name;

    for (int i=0; i<lines; i++){
        cin>>pais;
        getline(cin, name);
        girls[pais]++;
    }

    for (map<string, int>::const_iterator it = girls.begin(); it != girls.end(); ++it){
        cout<<it->first<<" "<< it->second<<"\n";
    }

    return 0;
}
