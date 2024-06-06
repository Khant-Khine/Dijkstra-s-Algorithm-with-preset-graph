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
// -------------------------------------------------------------------
#include<iostream>
#include "Vertex.h"
using namespace std;

// ---------------------------------------------------------------------------
//Vertex() is the default constructor of the Vertex class. It initializes all
//the attributes to -1.
//      INCOMING DATA: None.
//      OUTGOING DATA: None. All attributes set to -1.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
Vertex::Vertex()
{
    Id=-1;
    Distance=-1;
    Changer=-1;
}

// ---------------------------------------------------------------------------
//Vertex(int, int, int) is the overloaded constructor of the Vertex class.
//It initializes all the attributes according to the input values.
//      INCOMING DATA: Integer for Id, integer for Distance, and integer for
//                      Changer.
//      OUTGOING DATA: None. All attributes are set to input data.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
Vertex::Vertex(int id, int dist, int change)
{
    Id=id;
    Distance=dist;
    Changer=change;
}

//--------------------------> Setters <---------------------------------------

// ---------------------------------------------------------------------------
//setId(int) is a setter of the Id attribute.
//      INCOMING DATA: Integer for Id.
//      OUTGOING DATA: None. Attribute Id is set to the input.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
void Vertex::setId(int id)
{
    Id=id;
}

// ---------------------------------------------------------------------------
//setDistance(int) is a setter of the Distance attribute.
//      INCOMING DATA: Integer for Distance.
//      OUTGOING DATA: None. Attribute Distance is set to the input.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
void Vertex::setDistance(int dist)
{
    Distance=dist;
}

// ---------------------------------------------------------------------------
//setChanger(int) is a setter of the Changer attribute.
//      INCOMING DATA: Integer for Changer.
//      OUTGOING DATA: None. Attribute Changer is set to the input.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
void Vertex::setChanger(int change)
{
    Changer=change;
}

//--------------------------> Getters <---------------------------------------

// ---------------------------------------------------------------------------
//getId() is a getter of the Id attribute.
//      INCOMING DATA: None.
//      OUTGOING DATA: Integer. Attribute Id is returned.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
int Vertex::getId()
{
    return Id;
}

// ---------------------------------------------------------------------------
//getDistance() is a getter of the Distance attribute.
//      INCOMING DATA: None.
//      OUTGOING DATA: Integer. Attribute Distance is returned.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
int Vertex::getDistance()
{
    return Distance;
}

// ---------------------------------------------------------------------------
//getChanger() is a getter of the Changer attribute.
//      INCOMING DATA: None.
//      OUTGOING DATA: Integer. Attribute Changer is returned.
//Author: Mackenzie Thompson
// ---------------------------------------------------------------------------
int Vertex::getChanger()
{
    return Changer;
}

