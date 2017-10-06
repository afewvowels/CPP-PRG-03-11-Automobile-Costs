//
//  main.cpp
//  PRG-3-11-Automobile-Costs
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user to enter the monthly costs for the following expenses
//  incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires,
//  and maintenance. The program should then display the total monthly cost of these
//  expenses, and the total amount of these expenses

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    float fltCostLoan,
          fltCostInsurance,
          fltCostGas,
          fltCostOil,
          fltCostTires,
          fltCostMaintenance,
    
          fltCostTotalMonthly,
          fltCostTotalAnnual;
    
    // User input values + data validations
    cout << "Please enter your car's monthly loan costs: " << endl << "$";
    cin >> fltCostLoan;
    while(!cin || fltCostLoan < 0.0f || fltCostLoan > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostLoan;
    }
    
    cout << "Please enter your car's monthly insurance costs: " << endl << "$";
    cin >> fltCostInsurance;
    while(!cin || fltCostInsurance < 0.0f || fltCostInsurance > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostInsurance;
    }
    
    cout << "Please enter your car's monthly gas costs: " << endl << "$";
    cin >> fltCostGas;
    while(!cin || fltCostGas < 0.0f || fltCostGas > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostGas;
    }
    
    cout << "Please enter your car's monthly oil costs: " << endl << "$";
    cin >> fltCostOil;
    while(!cin || fltCostOil < 0.0f || fltCostOil > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostOil;
    }
    
    cout << "Please enter your car's monthly tire costs: " << endl << "$";
    cin >> fltCostTires;
    while(!cin || fltCostTires < 0.0f || fltCostTires > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostTires;
    }
    
    cout << "Please enter your car's monthly maintenance costs: " << endl << "$";
    cin >> fltCostMaintenance;
    while(!cin || fltCostMaintenance < 0.0f || fltCostMaintenance > 10000.0f)
    {
        cout << "Please enter an amount between $0.00 and $10,000.00\n";
        cin.clear();
        cin.ignore();
        cin >> fltCostMaintenance;
    }
    
    // Calculate total monthly cost from user generated inputs
    fltCostTotalMonthly = fltCostLoan +
                          fltCostInsurance +
                          fltCostGas +
                          fltCostOil +
                          fltCostTires +
                          fltCostMaintenance;
    
    fltCostTotalAnnual = fltCostTotalMonthly * 12.0f;
    
    // Set precision for dollar amount
    cout << setprecision(2) << fixed << showpoint;
    
    // Output calculated cost values
    cout << "Your total monthly costs are " << endl << "$" << fltCostTotalMonthly << endl;
    cout << "Your total annual costs are " << endl << "$" << fltCostTotalAnnual << endl;
    
    return 0;
}


