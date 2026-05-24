#include<iostream>
using namespace std;

// Multiple Inheritance
class Party
{
    public:
    int meal;

    void food()
    {
        cout<< "Enter the number of meals: ";
        cin>> meal;
    }
};

class Drinks
{
    public:
    int drink;

    void liquor()
    {
        cout<< "Enter the number of drinks: ";
        cin>> drink;
    }
};

class Bill: public Party, public Drinks
{
    int total_meal;
    int total_drink;
    int total_bill;

    public:
    void total()
    {
        total_meal = meal * 90;
        total_drink = drink * 60;

        total_bill = total_meal + total_drink;

        cout<< "Total bill for the party is: " << total_bill <<endl;
    }
};

// Multi-Level Inheritance
// Base Class 1 (Grandparent)
class Chemistry 
{
    public:
    int marks1;
    
    void chemistryMarks() 
    {
        cout << "Enter the marks scored in Chemistry: ";
        cin >> marks1;
    }
};

// Base Class 2 (Parent - derived from Chemistry)
class Physics : public Chemistry 
{
    public:
    int marks2;
    
    void physicsMarks() 
    {
        cout << "Enter the marks scored in Physics: ";
        cin >> marks2;
    }
};

// Derived Class (Child - derived from Physics)
class Maths : public Physics 
{
    public:
    int marks3;
    int total;
    
    void mathsMarks() 
    {
        cout << "Enter the marks scored in Maths: ";
        cin >> marks3;
    }
    
    void result() 
    {
        // Accesses variables from all inherited ancestors
        total = marks1 + marks2 + marks3;
        cout << "Total marks scored by the student: " << total << endl;
    }
};

int main()
{
    // Multiple Inheritance
    Bill b;
    b.food();
    b.liquor();
    b.total();

    // Multi-level Inheritance
    // Creating object of final derived Child Class
    Maths m;
    
    m.chemistryMarks();
    m.physicsMarks();
    m.mathsMarks();
    m.result();

    return 0;
}