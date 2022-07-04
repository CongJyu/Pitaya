//
// Created by Rain Chen on 17/5/2022.
//

#ifndef EXPERIMENT06_ADT_GRAPH_ADT_H
#define EXPERIMENT06_ADT_GRAPH_ADT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Graph {
private:
    // protect assignment
    void operator=(const Graph &) {}

    // protect copy constructor
    Graph(const Graph &) = default;

public:
    // default constructor
    Graph() {}

    // base destructor
    virtual ~Graph() {}

    // initialize a graph of n vertices
    virtual void Init(int n) = 0;

    // return: the number of vertices and edges
    virtual int n() = 0;

    virtual int e() = 0;

    // return v's first neighbor
    virtual int first(int v) = 0;

    // return v's next neighbor
    virtual int next(int v, int w) = 0;

    // set the weight for an edge
    virtual void setEdge(int v1, int v2, int weight) = 0;

    // delete an edge
    virtual void delEdge(int v1, int v2) = 0;

    // determine if an edge is in the graph
    virtual bool isEdge(int i, int j) = 0;

    // return an edge's weight
    virtual int weight(int v1, int v2) = 0;

    // get and set the mark value for a vertex
    virtual int getMark(int v) = 0;

    virtual void setMark(int v, int val) = 0;
};

#endif //EXPERIMENT06_ADT_GRAPH_ADT_H
