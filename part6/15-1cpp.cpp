#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:

    typedef struct node {
        char leftChar;
        char rightChar;
        int length;
        int prefix;
        int suffix;
        int best;
    }Node;
    vector<Node> tree;
    Node mergeNodes(const Node& left, const Node& right) { // 자식 노드 두개를 합쳐 부모 노드 생성하는 것
        
        Node res;
        res.leftChar = left.leftChar;
        res.rightChar = right.rightChar;
        res.length = left.length + right.length;

        res.prefix = left.prefix; // prefix는 왼쪽 노드의 퍼픽스 

        if (left.rightChar == right.leftChar && left.prefix == left.length){  //근데 왼쪽 노드 오른쪽 == 오른 쪽 노드 왼쪽이랑 같고 왼쪽길이가 prefix랑 같을 때
            res.prefix = left.length + right.prefix;
        }

        res.suffix = right.suffix; // suffix는 오른 쪽 노드의 suffix
        if (left.rightChar == right.leftChar && right.suffix == right.length){ // 위와 같은 개념.
            res.suffix = left.suffix + right.suffix;
        }

        res.best = max(left.best, right.best);  //best를 구하는 거 
        if (left.rightChar == right.leftChar){ //위와 같은 개념.
            res.best = max(res.best, (left.suffix + right.prefix));
        }
        return res;
    }

    void build (int node, int start, int end, const string& s){
        if (start == end){
            tree[node] = {s[start], s[start], 1, 1, 1, 1};
            return;
        }
        int mid = (start + end) / 2;

        build(node * 2, start, mid, s);
        build(node * 2 + 1, mid + 1, end, s);
        
        tree[node] = mergeNodes(tree[node * 2], tree[node * 2 + 1]);
    }
    void update(int node, int start, int end, int index, const char& ch){
        if (start == end){
            tree[node] = {ch, ch, 1, 1, 1, 1};
            return;
        }
        int mid = (start + end) / 2;

        if (index <= mid) {
            update(node * 2, start, mid, index, ch);
        }else {
            update(node * 2 + 1, mid+1, end, index, ch);
        }
        tree[node] = mergeNodes(tree[node * 2], tree[node * 2 + 1]);

    }

public:
    vector<int> longestRepeating( string s, string queryCharacters, vector<int>& queryIndices) {
        int size = s.length();
        tree.resize(size * 4);
        build(1, 0, size-1, s);
        vector<int> result;

        for (int i = 0; i < queryIndices.size(); i++){
            update(1, 0, size-1, queryIndices[i], queryCharacters[i]);
            result.push_back(tree[1].best);
        }
        return result;
    }
};
int main() {
    string s = "babacc";
    string q = "bcb";

    vector<int> quer = vector<int>({1,3,3});

    Solution sol;
    vector<int> a = sol.longestRepeating(s, q, quer);
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << '\t';
    }
}