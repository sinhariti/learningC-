// BFS algorithm in C++

#include <iostream>
#include <list>

using namespace std;

class graph {
  int Vertex;
  list<int>* queueList;
  bool* vist;

   public:
  graph(int vertices);
  void addEdge(int srcNodeNode, int destNodeNode);
  void BFS(int startVertex);
};

// Create a graph with given vertices,
// and maintain an adjacency list
graph::graph(int vertices) {
  Vertex = vertices;
  queueList = new list<int>[vertices];
}

// Add edges to the graph
void graph::addEdge(int srcNodeNode, int destNodeNode) {
  queueList[srcNodeNode].push_back(destNodeNode);
  queueList[destNodeNode].push_back(srcNodeNode); //undirected graph 
}

// BFS algorithm
void graph::BFS(int startVertex) {
  vist = new bool[Vertex]; 
  for (int i = 0; i < Vertex; i++)
    vist[i] = false; //putting checker that this is not been iterated through the BFS graph yet

  list<int> queue;

  vist[startVertex] = true; 
  queue.push_back(startVertex);

  list<int>::iterator i;
  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << "vist " << currVertex <<" "<<endl;;
    queue.pop_front();

    for (i = queueList[currVertex].begin(); i != queueList[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!vist[adjVertex]) {
        vist[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main() {
  graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(3);

  return 0;
}