#include<bits/stdc++.h>
using namespace std;
const int N = 26;
int p;
struct TrieNode
{
    int count;
    TrieNode *children[N];
    bool isEndOfWord;

    TrieNode()
    {
        count = 1;
        isEndOfWord = false;
        for (int i = 0; i < N; i++)
            children[i] = NULL;
    }
};

class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *temp = root;
        for (int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if (!temp->children[index])
                temp->children[index] = new TrieNode();
            else
                temp->children[index]->count++;
            temp = temp->children[index];
        }
        temp->isEndOfWord = true;
    }

    int search(string word)
    {
        TrieNode *temp = root;
        for (int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if (!temp->children[index])
                return 0;
            temp = temp->children[index];
        }
        return temp->count;
    }
};

int main()
{
    cin >> p;
    Trie trie;
    while (p--)
    {
        string operation, word;
        cin >> operation;
        if (operation == "add")
        {
            cin >> word;
            trie.insert(word);
        }
        else
        {
            cin >> word;
            cout << trie.search(word) << endl;
        }
    }
    return 0;
}

