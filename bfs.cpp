// BFS algorithm in C++

#include <iostream>
#include <list>

using namespace std;

class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
};

// Create a graph with given vertices,
// and maintain an adjacency list
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex) {
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)//mark all as unvisited
    visited[i] = false;

  list<int> queue;//create a queue

  visited[startVertex] = true;//mark source as visited
  queue.push_back(startVertex);//push source into queue

  list<int>::iterator i;//iterator

  while (!queue.empty()) {//queue is not empty
    int currVertex = queue.front();
    cout << "Visited " << currVertex << " ";//mark front element as visited and print it
    queue.pop_front();//pop the front element

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
      int adjVertex = *i;//first adjacent node to source
      if (!visited[adjVertex]) {//not visited
        visited[adjVertex] = true;//mark visited 
        queue.push_back(adjVertex);//push into queue
      }
    }
  }
}
//driver code
int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}


//Time Complexity:O(V+E)
//Space Complexity:O(V)