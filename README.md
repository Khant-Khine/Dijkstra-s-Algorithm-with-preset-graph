Note:
# Dijkstra-s-Algorithm-with-preset-graph
## About the project
This is an implementation of Dijkstra's Algorithm with a preset graph. The user will enter a starting and ending point and will be presented with the shortest path. Future implementation for ad-hoc networks with Dijkstra's algorithm, to be used in disaster management systems, is the ultimate goal of this project. This program has been coded in C++. I have coded this program in CodeBlocks. I hope you enjoy this project. 

## How this works
This program uses two classes, a vertex class to represent vertexes in a graph, and a priority queue class which uses minheap to process Dijkstra's Algorithm.
<ul>
  <li>
    Vertex Class
    This is a class which handles the vertexes in a shortest path finding program. It contains private attributes for storing data and access. It also includes public methods for public access. This class is templated. This allows for flexible usage with different data types.
  </li>
  <li>
    Priority Queue
    This is a class which uses the minheap structure to enable a priority queue in Dijkstra's Algorithm. The minheap structure uses nodes which are of binary nature. Each minheap node, except the root, has a single parent, and possible two children. In a minheap structure, the parent is always smaller than its children. Therefore, the smallest node value is placed at the root, and is used as the next node to be processed by Dijkstra's Algorithm.
  </li>
  <li>
    Main Program
    This main program includes the preset graph and user interface. It also includes the Dijkstra's Algorithm within it. For the user interface, the user will be presented with a list of locations within the university and prompted to enter a starting location. The program will verify the validity of the entered location, and proceed to ask the user for the ending location. After the user has entered the ending location, the user input is verified before any processing occurs. If everything goes well, the user inputs are processed and the shortest path between a user's starting and ending point is found.
  </li>
</ul>
## Programming Language and Compiler
IDE: **CodeBlocks**
<br>
Language: **C++**
## How to Install and Run
<ol>
<li>
This project uses the C++ programming language and was coded on CodeBlocks IDE. Therefore to run this project, please install the CodeBlocks IDE binary release and follow the instructions shown. The version you download will differ based on the operating system of your computer, Windows, macOS, or Linux. <a href=https://www.codeblocks.org/downloads/binaries/>This</a> is the link for the installation. Please follow the instructions shown by the installer.
</li>
<br>

<li>
After suceesful installation of the CodeBlocks IDE, please open the newly installed CodeBlocks IDE. Then, click the "File" icon on the top left-most corner of the screen. From the dropdown menu, please select "New" and select "Project". A pop up window should open, and from that window, please select "Console Application". The following image will help in following the steps mentioned above.
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/af186365-90d5-4839-9d16-bcb3308a863b">
</li>
<br>

<li>
Now, we will create the project. Please select "C++" as the language to be used. Then, click "Next". Afterwards, please provide a suitable name for the project and click "Next". Finally, we click "Finish" to finish creating the project. You have now successfully created the project! Let us now download and import the files provided in this repository to our newly created project. Please download the included files within this repository. They are:
<ul>
<li>
main.cpp (main program) with Dijkstra's Algorithm
</li>
<li>
PriorityQueue.h (MinHeap Priority Queue) for Priority Queue in Dijkstrra's Algorithm
</li>
<li>
Vertex.h (Vertex, which is templated) for Vertexes in Graph which use the class Vertex
</li>
<li>
Vertex.cpp (Templated methods) for implemented Vertex methods
</li>
</ul>
</li>
<br>

<li>
After successful download, please return to the CodeBlocks IDE and go to the management tab located on the left side of the screen. You should see your project name located there. Please right click on your project name and click "Add Files".
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/05da4006-eeb0-4f32-ac93-d4c3cb1515b0">
</li>
<br>

<li>
Select all the files you downloaded from the repository in your Downloads and click "Open". There is an additional file provided by within by the project called "main.cpp". You can delete this file by right clicking the main.cpp file and selecting "Remove file from project". Since we have all the files needed for the program, we can run the program by clicking the "Build and Run" button as shown in the following image:
<img src="https://github.com/Khant-Khine/Sorting-Algorithms-Visualizer/assets/155600182/d5278d54-6c9a-4f1b-af96-f45b15ce0b49">
</li>
</ol>

## Program Run
Run with a case from one location to another in university. This is a mapping relative to different distances within the university. In this instance, I will be using the University of North Alabama as an example. I have made the assumption that I am initially placed at the entrance of the university and all distances within the set graph is relative to my location. I have used some locations within the university as vertexes within the graph. The locations are:
## Test Case
Verify with steps tracked from health app and Google Maps. Confirm the time used with mean time used for distance traversal. Utilize different transportation means to verify the relative time used for distances.
## Future Additions
Additions for direct ad-hoc implementation for location tracking in natural disasters.
Storage efficiency
Data linkage
Low latency
Priority Queuing involved
## Ad-hoc implementation Possibility
In progress...researching how to minimize memory and time complexity for effective program run.
To be soon updated.


<h4>Thank you. The end</h4>

