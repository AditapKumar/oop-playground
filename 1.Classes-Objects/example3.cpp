#include <iostream>
using namespace std;

class BankAccount{
    // private mem - accessible within class
    private:
    string accountNumber;
    double balance;
    
    // public mem - accessible outside the class
    public:
    string accountHolder;
    string bankName;
    
    // member functions to set account details
    // Getter and Setter Method
    void setDetails(double b, string accNo){
        balance = b;
        accountNumber = accNo;
    }
    
    void getDetails(){
        cout << 
        "Mr/Ms. " << accountHolder << 
        " has a bank account in " << bankName << " bank." <<  
        "\nHe/She is having account Number " << accountNumber << 
        " with a current account balance of " << balance << endl;
    }
};

int main() {
    BankAccount b1;
    b1.setDetails(2345600, "PUNB12313242");
    b1.accountHolder = "Neeraj Pepsu";
    b1.bankName = "HDFC";
    b1.getDetails();

    return 0;
}