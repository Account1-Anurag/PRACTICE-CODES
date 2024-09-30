#include <bits/stdc++.h>
using namespace std;

int main(){
    string anurag;
    cin>>anurag;
    int n=anurag.size();
    for(int i=0;i<n;i++){
        anurag[i]=tolower(anurag[i]);
    }
    
    for(int i=0;i<n;i++){
        if(anurag[i]!='a'&&anurag[i]!='e'&&anurag[i]!='i'&&anurag[i]!='o'&&anurag[i]!='u'&&anurag[i]!='y'){
            cout<<"."<<anurag[i];
        }
    }
    return 0;
}
/*
#include <iostream>
#include <cctype> // For tolower function

int main() {
    std::string input_str;
    std::cin >> input_str;

    for (char& ch : input_str) {
        ch = std::tolower(ch); // Convert to lowercase

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y') {
            std::cout << "." << ch;
        }
    }

    return 0;
}

*/