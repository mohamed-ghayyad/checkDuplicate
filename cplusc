/*
* Container inside a Container
* Example:
* Enter the number of edges: 6
* Enter the nodes: 2 1
* Enter the nodes: 2 3
* Enter the nodes: 3 4
* Enter the nodes: 3 5
* Enter the nodes: 5 6
* Enter the nodes: 5 7
* Node: 0 
* Node: 1
* Node: 2 1 3
* Node: 3 4 5
* Node: 4
* Node: 5 6 7
*
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> Tree;
    int edge,n1,n2;
    cout << "Enter the number of edges: ";
    cin >> edge;
    Tree.resize(edge);
    for(int i =0; i<edge; i++){
        cout << "Enter the nodes: ";
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for(int i=0; i<Tree.size(); i++){
        cout << "Node: " << i << " ";
        for(const auto e2: Tree[i]){
            cout << e2 << " ";
        }
        cout << endl;
    }
    return 0;
}
