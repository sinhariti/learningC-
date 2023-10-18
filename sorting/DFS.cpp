// DFS algorithm in C++

#include <iostream>
#include <list>
using namespace std;

class Graph {
  int Vertex;
  list<int> *adjLists;
  bool *visit;

   public:
  Graph(int V);
  void addEdge(int srcNode, int destNode);
  void DFS(int vertex);
};

// Initialize graph
Graph::Graph(int vertices) {
  Vertex = vertices;
  adjLists = new list<int>[vertices];
  visit = new bool[vertices];
}

// Add edges
void Graph::addEdge(int srcNode, int destNode) {
  adjLists[srcNode].push_front(destNode);
  adjLists[destNode].push_front(srcNode);
}

// DFS algorithm
void Graph::DFS(int vertex) {
  visit[vertex] = true;
  list<int> adjList = adjLists[vertex];

  cout << vertex <<" "<<endl;

  list<int>::iterator i; //helps in iterating through a list
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visit[*i])
      DFS(*i);
  
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  g.DFS(0);

  return 0;
}