// Calculate area and volumne
#include<iostream>
using namespace std;


class Room{
public:
    double length;
    double breadth;
    double height;
    
    double calculate_area(){
        return length*breadth;
    }
    
    double calculate_volume(){
        return length*breadth*height;
    }
};

int main() {
    // Creating Object
    Room room1;
    
    // Assigning Values
    room1.length = 42.9;
    room1.breadth = 20;
    room1.height = 12.5;
    
    // Calling functions using object of the class
    cout << "Area of Room : " << room1.calculate_area() << " sq. m." << endl; 
    cout << "Area of Volume : " << room1.calculate_volume() << " cub. m"<< endl; 
    return 0;
}