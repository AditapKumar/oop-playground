#include <iostream>
using namespace std;

class Car{
    public:
    // Data Members
    string brand;
    string model;
    string engineType;
    int mileage = 0;
    int distanceTravelled = 0;
    
    // Member functon
    void drive(int distance){
        distanceTravelled += distance;
    }
    
    // Functions to display info
    void show_data(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Type: " << engineType << endl;
        cout << "Distance driven: " << distanceTravelled << " kilometers" << endl;
    }
};


int main() {
    // Create Obj
    Car my_car;
    
    // Initialize obj attributes
    my_car.brand = "Audi";
    my_car.model = "R8";
    my_car.engineType = "BSVIII";
    my_car.drive(69);
    
    // Display object information
    my_car.show_data();
    
    return 0;
}