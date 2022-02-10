#include "iostream"

using namespace std;

struct Node{
    Node *children[26];
    bool isEnd;
    int index;

    Node(){
        index = 0;
        for (int i = 0; i < 26; ++i) {
            children[i] = NULL;
            isEnd = false;
        }
    }
};

class Trie {
    Node *root;
    int cnt;

public:
    Trie() {
        root = new Node();
        cnt = 0;
    }

    void insert(string word) {
        Node *cur = root;
        for (int i = 0; i < word.size(); ++i) {
            int index = word[i] - 'a';
            if(cur->children[index] == NULL){
                cnt++;
                cur->children[index] = new Node();
                cur->children[index]->index = cnt;
            }
            cur = cur->children[index];
        }
        cur->isEnd = true;
    }

    int search(string word) {
        Node *cur = root;
        for (int i = 0; i < word.size(); ++i){
            int index = word[i] - 'a';
            if(cur->children[index] == NULL){
                return 0;
            }
            cur = cur->children[index];
        }
        cnt++;
    }

    int startsWith(string prefix){
        Node *cur = root;
        for (int i = 0; i < prefix.size(); ++i){
            int index = prefix[i] - 'a';
            if(cur->children[index] == NULL){
                return 0;
            }
            cur = cur->children[index];
        }
        return cur->index;
    }
};

int main(){
    Trie bor;
    string s, t;
    int n;
    cin >> s;
    bor.insert(s);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        bor.startsWith(t);
    }
    return 0;
}



//input:
//  abracadabra
//  4
//  abra
//  ab
//  marazm
//  cadabra


