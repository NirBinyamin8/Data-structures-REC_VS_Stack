A citizen who wants to reach his destination can pass through any of the cities connected to his city, and from there continue to the cities
to which those cities are connected. The citizens of the country always prefer to move to a nearby city with a very small number,
from which there is a road to the destination that does not pass through the city twice.
Definitions :
Moked - a city from which the citizen originates.
Destination - a city where the citizen wants to go.
Preferred route - a route from the hub to the destination which at each pass selects the city with the least number of all
The cities through which there is a route to the destination that does not go through a city that has already been visited.
Preferred distance - the number of passes on the preferred route.

Program description:
Input: The program will receive as input the number of cities, n, for the sake of simplicity let's assume they are numbered from 1 to n. Additionally,
In the same line, the program will receive the number of roads.
In the next line you will get pairs describing the locations of the roads, where each number is separated by a space.
Output: the program will print the preferred distance between the focus and the target as obtained from the recursive function and as
received from the function that uses the stack. The result of each function will be on a separate line.

The state structure: The state structure will be stored in an array of linked lists as follows: The array will be of size n and all
Cell i in the array will contain a sorted, linked list of cities to which city i has a direct road. This is called the "state structure".

Algorithm for calculating the distance between the focal point and the destination:
We will create a set of colors for all the cities - each city can be white or black.
• We will initialize all the cities in the state structure as "builders".
• We will activate the recursive function TownDistance, the description of which is given below.
• At the end we will return the calculated distance.

The data structures
1. Stack - a stack of members of the ItemType type that will contain the necessary data
for the purpose of canceling the recursion.
2. ItemType member - the members that will be stored in the stack.