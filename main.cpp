// C++ program to print DFS from geek for geeks 

#include <iostream>
#include <map>
#include <list>

using namespace std;

class Graph {
	// A function used by DFS
	void DFSUtil(int v);

public:
	Graph();
	map<int, bool> visited;
	map<int, list<int> > adj;
	// fungsi menambahkan garis ke graph
	void addEdge(int v, int w);
	// outputkan DFS 
	void DFS();
};

	Graph::Graph(){
		cout << "Strategi Algoritma - Tugas"<<endl;
		cout << "Nama	: Dewa Putra Hernanda" <<endl;
		cout << "Kelas	: H" <<endl;
		cout << "Nim	: 2000018270" <<endl;
		cout << "=================================" <<endl <<endl;
	}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v)
{
	// Mark the current node as visited and print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i);
}

// The function to do DFS traversal. It uses recursive
// DFSUtil()
void Graph::DFS()
{
	// Call the recursive helper function to print DFS
	// traversal starting from all vertices one by one
	for (auto i : adj)
		if (visited[i.first] == false)
			DFSUtil(i.first);
}

int main()
{
	Graph graph;
	graph.addEdge(1, 2);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    graph.addEdge(4, 8);
    graph.addEdge(5, 8);
    graph.addEdge(6, 3);
    graph.addEdge(7, 3); 

	cout << "Urutan simpul2 yang dikunjungi: \n";
	graph.DFS();

	return 0;
}
// improved by Dewa Putra Hernanda 
