#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> words;
map<char, int> dictionary;

bool cmp(string a, string b){
    for (unsigned i = 0; i < min(a.size(), b.size()); ++i){
        if (dictionary[a.at(i)] < dictionary[b.at(i)])
            return true;
        else if (dictionary[a.at(i)] > dictionary[b.at(i)])
            return false;
    }
    return a.size() == min(a.size(), b.size());
}

bool cmpR(string a, string b){
    return !cmp(a, b);
}

int main() {
    string dict;
    cin >> dict;
    for (unsigned i = 0; i < dict.size(); ++i)
        dictionary[dict.at(i)] = i;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        string tmp;
        cin >> tmp;
        words.push_back(tmp);
    }
    int order;
    cin >> order;
    order == 1 ? sort(words.begin(), words.end(), cmp) : sort(words.begin(), words.end(), cmpR);
    for (const auto i : words)
        cout << i << endl;
}
