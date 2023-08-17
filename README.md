---

# **City Navigator: Preferred Route Calculation**

Dive into the world of interconnected cities! With this program, we model the journey of a citizen navigating through a series of cities to reach a designated destination, avoiding revisiting any city.

## **Context**
- A citizen aims to reach a destination city.
- They can traverse through any city connected to their current location.
- The objective is to always move to the nearest neighboring city from which there's a direct route to the destination without revisiting any city.

## **Key Definitions**
- **Moked:** The originating city.
- **Destination:** The target city.
- **Preferred Route:** A path from Moked to the destination where each step involves selecting the nearest unvisited city that has a direct route to the destination.
- **Preferred Distance:** The total number of passes on the preferred route.

## **Program Description**

### **Input:**
- Total number of cities, \( n \) (cities are numbered from 1 to \( n \)).
- Number of roads.
- Pairs indicating the cities connected by these roads.

### **Output:**
- The program displays the preferred distance calculated via two methods:
  1. Recursive function.
  2. Function using a stack.

## **State Structure**
- An array of linked lists representing the cities and their direct connections.
- Each cell \( i \) in the array has a sorted linked list containing cities directly connected to city \( i \).

## **Algorithm**
- Assign a color (either white or black) to each city.
- Initialize all cities in the state structure.
- Execute the recursive function `TownDistance` (Details not provided in this README).
- Return the computed distance.

## **Data Structures**
- **Stack:** Contains members of the `ItemType` type essential for recursion elimination.
- **ItemType:** The datatype stored within the stack.

---
