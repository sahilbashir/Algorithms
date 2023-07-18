#include<bits/stdc++.h>

using namespace std;

class Graph{


    int numVertices;
    list<int> *adjLists;
    bool *visited;


    public:

    Graph(int V);
    void addEdge(int src,int dest);
    void DFS(int vertex);
};

//Initialize Graph

Graph :: Graph(int vertices){

    numVertices=vertices;
    adjLists=new list<int>[vertices];
    visited=new bool[vertices];
}

//Add Edges

void Graph::addEdge(int src,int dest){

    adjLists[src].push_front(dest);
}

// DFS algorithm
void Graph::DFS(int vertex) {
  visited[vertex] = true;//mark source as visited 
  list<int> adjList = adjLists[vertex];//identify adjacent nodes

  cout << vertex << " ";//print visited node

  list<int>::iterator i;//iterator to iterate over graph
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])//if node is unvisited 
      DFS(*i);//recursively call DFS again until all nodes are visited
}
//driver code
int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  g.DFS(2);

  return 0;
}

//Time Complexity:O(V+E)
//Space Complexity:O(V)