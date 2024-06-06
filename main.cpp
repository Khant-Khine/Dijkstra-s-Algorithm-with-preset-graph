// -------------------------------------------------------------------------------------
// Group Number: 6
// Group Members: Mackenzie Thompson, Khant Khine, Navraj Singh
// Course-Section: CS355-Section 1
// Assignment: CS-355 Final Project
// Date due: 04/14/2024
// Description: This program implements Dijkstra's algorithm to find the shortest path
//              between two locations in a graph representing a delivery network. The
//              graph represents distances between various locations, and the algorithm
//              determines the shortest path based on these distances.
// Author: Navraj Singh
// --------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
#include"Vertex.h"
#include"PriorityQueue.h"
using namespace std;

// Represent infinity or no connection
const int INF_NUM = 999;

// Special value indicating no parent
const int NO_PARENT = -1;


// Define graph matrix representing distances between locations
int graph[5][5]={

    {0,   7,   6,   999, 5},	// Row 0
    {3,   0,   1,   999, 3},	// Row 1
    {6,   2,   0,   8,   7},	// Row 2
    {999, 999, 4,   0,   1},	// Row 3
    {5,   10,   7,   1,   0}	// Row 4
};

// ---------------------------------------------------------------------------------------
// isValidInput(string) checks whether the input string correctly refers
// to a valid location in the delivery network.
//      INCOMING DATA: string of location name.
//      OUTGOING DATA: boolean value on whether the input corresponds to a valid location.
// Author: Navraj Singh
// ----------------------------------------------------------------------------------------
bool isValidInput(int input){
    if(input >= 0 && input <= 4)
    {
        // Return true if input is valid
        return true;
    }

    else
        // Return false if input is not valid
        return false;
}

// ---------------------------------------------------------------------------
// intToString(int) changes a integer representation of location name to a
// string of location name.
//      INCOMING DATA: integer representation of location name.
//      OUTGOING DATA: string of location name.
// Author: Navraj Singh
// ---------------------------------------------------------------------------
string intToString(int input)
{
    if(input==0)
    {
        // Return string location
        return("Wendell Gunns Commons");
    }

    else if(input==1)
    {
        // Return string location
        return("GUC");
    }

    else if(input==2)
    {
        // Return string location
        return("Collier Library");
    }

    else if(input==3)
    {
        // Return string location
        return("Rice Hall");
    }

    else if(input==4)
    {
        // Return string location
        return("Flower Hall");
    }
}

// ---------------------------------------------------------------------------
// shortestPath(int, int, const vector<int>, const vector<int>)
//      INCOMING DATA: integer of starting location, integer of ending
//                     location, parent vector containing parent of each
//                     vertex in shortest path, distance vector containing
//                   shortest distance from the starting location to each node.
//      OUTGOING DATA: None. Shortest Path is displayed.
// Author: Navraj Singh
// ---------------------------------------------------------------------------
void shortestPath(int starting, int ending, const vector<int>& parent, const vector<int>& distance)
{
    // Variable to track whether the path has been printed
    bool printed = false;

    if (!printed)
        {
        if (distance[ending] != INF_NUM)
        {
            // Display starting and ending locations
            cout << "Shortest Path from " << intToString(starting) << " to " << intToString(ending) << ": ";
            int i = ending;
            vector<int> path;

            while (i != NO_PARENT) {
                path.push_back(i);
                i = parent[i];
            }

            // Print the nodes visited
            for (int j = path.size() - 1; j > 0; --j)
            {
                cout << intToString(path[j]) << " -> ";
            }
            // Print the last vertex without "->"
            cout << intToString(path[0]);

            // Display shortest distance
            cout << "\nShortest Distance: " << distance[ending] << " miles" << endl;
        } else {

            // Displays this message if no path is found
            cout << "No path found from " << intToString(starting) << " to " << intToString(ending) << endl;
        }
        // Set printed to true to show path has been printed
        printed = true;
    }
}

// ------------------------------------------------------------------------------
// dijkstraAlgorithm(int, int) implements Dijkstra's algorithm
// to find the shortest path between two locations in the delivery network.
//      INCOMING DATA: integer for starting location, integer for ending location.
//      OUTGOING DATA: None.
// Author: Navraj Singh
// --------------------------------------------------------------------------------
void dijkstraAlgorithm(int startingPoint, int endingPoint)
{
    // Number of locations in the network
    int locationNumbers = 5;

    // Priority queue to store vertices
    PriorityQueue<Vertex> priorityQueue;

    // Array to store shortest distance from source.
    vector<int> distance(locationNumbers, INF_NUM);	// Vector to store shortest distances initialized with infinity (999)
    // Array to store parent node of each node in the shortest path.
    vector<int> parent(locationNumbers, NO_PARENT);	// Vector to store parent nodes initialized with -1

    // Distance from startingPoint to itself is 0.
    distance[startingPoint] = 0;

    // Push the startingPoint vertex to the priority queue, with changerVertex -1.
    priorityQueue.push(Vertex(startingPoint, 0, NO_PARENT));

    // Loop until priority queue is empty
    while (!priorityQueue.empty())
    {
        // Get the vertex with the shortest distance.
        int vertexShortest = priorityQueue.top().getId();

        // Get the previous vertex
        int vertexChanger = priorityQueue.top().getChanger();

        // Remove vertex from priority queue
        priorityQueue.pop();

        // Update the distance of adjacent vertex of picked vertex
        for (int i = 0; i < locationNumbers; i++)
        {
            // If there is an edge and it forms a shorter path
            if (graph[vertexShortest][i] != INF_NUM && distance[vertexShortest] + graph[vertexShortest][i] < distance[i])
            {
                // Update distance to vertex i
                distance[i] = distance[vertexShortest] + graph[vertexShortest][i];

                // Update parent node for vertex i
                parent[i] = vertexShortest;

                // Push updated vertex to the priority queue with previous vertex.
                priorityQueue.push(Vertex(i, distance[i], vertexShortest));
            }
        }
    }

    // Find and display shortest path
    shortestPath(startingPoint, endingPoint, parent, distance);
}

// ---------------------------------------------------------------------------
// displayMenu() displays the menu and instructions for using the application.
//      INCOMING DATA: None.
//      OUTGOING DATA: None.
// Author: Navraj Singh
// ---------------------------------------------------------------------------
void displayMenu()
{
    //Displays welcome message
    cout<<"**********************************************************"<<endl;
    cout<<"Welcome to Shortest Delivery App, where we help you get to"<<endl;
    cout<<"your delivery location through the fastest way possible."<<endl;
    cout<<"Please review the locations we have available below, and"<<endl;
    cout<<"enter your starting and ending locations below. Thank you."<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<endl;
    cout<<"Available Locations:"<<endl;
    cout<<"********************"<<endl;
    cout<<"0. Wendell Gunns Commons"<<endl;
    cout<<"1. GUC"<<endl;
    cout<<"2. Collier Library"<<endl;
    cout<<"3. Rice Hall"<<endl;
    cout<<"4. Flower Hall"<<endl;
    cout<<"********************"<<endl;
    cout<<endl;

}

int main()
{
    // Variable to store starting location
    int startingLocationInt;

    // Variable to store ending location
    int endingLocationInt;

    // Variable to track input correctness
    bool correctInput=false;

    // Display menu and instructions
    displayMenu();

    // Loop until starting location input is correct
    while(correctInput==false)
    {
        // Prompt user to enter starting location
        cout<<"Please enter the starting location: ";

        // Get starting location input from user
        cin >> startingLocationInt;

        // Check if input is valid
        correctInput=isValidInput(startingLocationInt);
    }

    // Reset correctInput
    correctInput=false;

    // Loop until ending location input is correct
    while(correctInput==false)
    {
        // Prompt user to enter ending location
        cout<<"Please enter your ending location: ";

        // Get ending location input from user
        cin >> endingLocationInt;

        // Check if input is valid
        correctInput=isValidInput(endingLocationInt);
    }
    // Display blank line
    cout<<endl;

    // Find and display shortest path
    dijkstraAlgorithm(startingLocationInt, endingLocationInt);

    cout<<"Thank you for using Shortest Delivery App. Have a nice day."<< endl;
}
