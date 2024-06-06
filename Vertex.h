// ---------------------------------------------------------------------------
// Group Number: 6
// Group Members: Mackenzie Thompson, Khant Khine, Navraj Singh
// Course-Section: CS355-Section 1
// Assignment: CS-355 Final Project
// Date due: 04/14/2024
// Description: This is the Vertex class, which represents a vertex
//              and is used in a heap based priority queue.
//              Each vertex has an ID, distance, and changer attributes,
//              and related setters and getters.
//Author: Mackenzie Thompson
// --------------------------------------------------------------------------
#include<iostream>
using namespace std;

class Vertex {
private:
    int Id;
    int Distance;
    int Changer;

public:
    Vertex();
    Vertex(int id, int dist, int change);

    //Setters
    void setId(int id);
    void setDistance(int dist);
    void setChanger(int change);

    //Getters
    int getId();
    int getDistance();
    int getChanger();
};
