#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double totalReg;
    bool customer = false;
    double bill;
    double billTotal = 0; //declare and initialize the total sum of every transaction
    string payment;
    int custCount = 0; //declare and initialize the number of customers taken
    string checkBack;
    double moneyBack = 0;
    string checkCust;
    double finalBal;
    
    cout << "How much cash is in the register: "; //enter amount of starting cash in register and initialize to totalReg
    cin >> totalReg;
    
    while(!customer){ //while there are customers in the store run the following loop
        
        custCount++; //updates number of customers taken
        
        cout << "How much is the bill? "; //enter amount of bill and initialize amount to bill
        cin >> bill;
        cout << "Is the customer paying with cash, credit, or debit? "; //determine if paying cash or debit and initialize to payment
        cin >> payment;
        
        if(payment == "cash"){
            billTotal += bill; //if payment is in cash then add bill to billTotal
            } else if(payment == "debit"){
            cout << "Does customer want cash back? Yes or no? "; //if payment is in debit then ask if they want cash back and declare it to checkBack
            cin >> checkBack;
        } else if(payment == "credit"){
            exit;
        }
        if (checkBack == "yes" || checkBack == "Yes") {
            cout << "How much cash back do they want? "; //if they do want cashBack then ask the amount and initialize to moneyBack
            cin >> moneyBack;
            totalReg -= moneyBack; //subtracts the amount of moneyBack from totalReg
        } else
            exit;
        
        cout << "Anymore customers left? Yes or no? "; //Are there any customers left in the store and initialize it to checkCust
        cin >> checkCust;
        
        if (checkCust == "no" || checkCust == "No") {
            customer = true; //if there are no customers left then reinitialize customer to true to break out of loop
        } else
            continue; //if there are still customers left then continue with next iteration of loop
    }
    
    finalBal = totalReg + billTotal; //initialize finalBal to the amount in totalReg plus billTotal
    
    cout << "Total amount of customers taken: " << custCount << endl;
    cout << "Total amount of cash paid to register: " << billTotal << endl;
    cout << "Total amount of cash given to customers: " << moneyBack << endl;
    cout << "Final balance in the register: " << finalBal << endl;
    
    return 0;
}
