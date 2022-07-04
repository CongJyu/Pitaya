#ifndef GRAPH_TEST_H_INCLUDED
#define GRAPH_TEST_H_INCLUDED
#define INFINITY 1000000

#include <queue>
#include "graph.h"
#include "grlist.h"
#include "grmat.h"

class option {
private:
    Graph *G;
public:
// Start with some implementations for the abstract functions
    option(Graph *g) {
        G = g;
    }


    void DFS(int v, void (*PreVisit)(int v), void (*PostVisit)(int v), void (*Visiting)(int v)) {
        // dfs 算法
        // Write......
        PreVisit(v);
        Visiting(v);
        G->setMark(v, VISITED);
        for (int w = G->first(v); w < G->n(); w = G->next(v, w)) {
            if (G->getMark(w) == UNVISITED) {
                G->setMark(w, VISITED);
            }
            PostVisit(v);
        }
    }

    void BFS(int start, void (*PreVisit)(int v), void (*PostVisit)(int v), void (*Visiting)(int v)) {
        // bfs 算法
        // Write......
        int v, w;
        queue<int> q;
        q.push(start);
        PreVisit(start);
        G->setMark(start, VISITED);
        while (!q.empty()) {
            v = q.front();
            q.pop();
            Visiting(v);
            for (w = G->first(v); w < G->n(); w = G->next(v, w)) {
                if (G->getMark(w) == UNVISITED) {
                    G->setMark(w, VISITED);
                    PreVisit(w);
                    q.push(w);
                }
            }
            PostVisit(v);
        }
    }

    void Dijkstra1(int *D, int s) {
        // dijkstra 算法
        // Write......
        /*
        int i, v, w;
        for (i = 0; i < G->n(); ++i) {
            v = minVertex(D);
            if (D[v] == INFINITY) {
                return;
            }
            G->setMark(v, VISITED);
            for (w = G->first(v); w < G->n(); w = G->next(v, w)) {
                if (D[w] > (D[v] + G->weight(v, w))) {
                    D[w] = D[v] + G->weight(v, w);
                }
            }
        }
         */
        int i, v, w;
        for (i = 0; i < G->n(); ++i) {
            v = minVertex(D);
            if (D[v] == INFINITY) {
                return;
            }
            G->setMark(v, VISITED);
            for (w = G->first(v); w < G->n(); w = G->next(v, w)) {
                if (D[w] > (D[v] + G->weight(v, w))) {
                    D[w] = D[v] + G->weight(v, w);
                }
            }
        }
    }

    int minVertex(int *D)   // Find min cost vertex
    {
        int i, v = -1;
        // Initialize v to some unvisited vertex
        for (i = 0; i < G->n(); i++)
            if (G->getMark(i) == UNVISITED) {
                v = i;
                break;
            }
        for (i++; i < G->n(); i++) // Now find smallest D value
            if ((G->getMark(i) == UNVISITED) && (D[i] < D[v]))
                v = i;
        return v;
    }

    void AddEdgetoMST(int v1, int v2) {
        cout << "Add edge " << v1 << " to " << v2 << "\n";
    }

    void Prim(int *D, int s) {
        // Prim algorithm
        // Write......
        /*
        int V[G->n()];  // Store closest vertex
        int i, w;
        for (i = 0; i < G->n(); ++i) {
            // Process the vertices
            int v = minVertex(D);
            G->setMark(v, VISITED);
            if (v != s) {
                AddEdgetoMST(V[v], v);  // Add edge to MST
            }
            if (D[v] == INFINITY) {
                return;  // Unreachable vertices
            }
            for (w = G->first(v); w < G->n(); w = G->next(v, w)) {
                if (D[w] > G->weight(v, w)) {
                    D[w] = G->weight(v, w);  // Update distance
                    V[w] = v;  // Where it came from
                }
            }
        }
         */
        int V[G->n()];
        int i, w;
        for (i = 0; i < G->n(); ++i) {
            int v = minVertex(D);
            G->setMark(v, VISITED);
            if (v != s) {
                AddEdgetoMST(V[v], v);
            }
            if (D[v] == INFINITY) {
                return;
            }
            for (w = G->first(v); w < G->n(); w = G->next(v, w)) {
                if (D[w] > G->weight(v, w)) {
                    D[w] = G->weight(v, w);
                    V[w] = v;
                }
            }
        }
    }
};

#endif // GRAPH_TEST_H_INCLUDED
