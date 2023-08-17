

---

# 🌍 **City Navigator: Embark on the Ultimate Preferred Route Journey** 🛤️

Dive into a world where cities are intricately linked! Experience a citizen's quest to chart the optimal route, avoiding any déjà vu moments by not revisiting any city. 

## 📖 **Backdrop & Context**
Imagine a citizen, eager to reach their destination city. They navigate through an interconnected web of cities, always opting for the nearest neighboring city that directly routes them to their ultimate target, ensuring no city is visited twice. 

### 📍 **Key Navigational Lexicon**
- **Moked**: The starting point or the city of origin.
- **Destination**: The ultimate target city.
- **Preferred Route**: The optimal pathway from Moked to the destination, characterized by strategically selecting the nearest unvisited city with a direct conduit to the destination.
- **Preferred Distance**: Measures the journey's extent by counting the number of steps on the preferred route.

## 🖥️ **Program Blueprint**
### 📥 **Inputs**:
- **City Count**: Defines the total number of cities, labeled from 1 to n.
- **Roadways**: Indicates the total number of roads.
- **City Pairs**: Represents the connections between cities via these roads.

### 📤 **Outputs**:
The program manifests the preferred distance, unraveled using two distinct methodologies:
1. 🔄 **Recursive Function**
2. 📚 **Function Leveraging a Stack**

## 🧬 **Structural DNA: State Structure**
- A curated array of linked lists encapsulates the cities and their immediate connections.
- Every cell (indexed as i) in this array unfolds into a sorted linked list, revealing cities having a direct nexus to city i.

## 🎛️ **Operational Algorithm**
1. 🎨 Assign a dual-tone color palette: each city basks in either a white or black hue.
2. 🏗️ Lay the foundation by initializing all cities in the architectural state structure.
3. 🔄 Engage the recursive mechanism, invoking the TownDistance function (More granular details have been intentionally omitted for brevity in this README).
4. 📌 Conclude by returning the meticulously computed distance.

## 📦 **Core Data Conduits**
- **Stack 📚**: An organized container holding members of the ItemType genre, crucial for adeptly sidestepping recursion.
- **ItemType 🧩**: The unique datatype entrusted within the stack, forming the backbone of our program.

---




