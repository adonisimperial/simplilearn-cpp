#include<iostream>
using namespace std;

// Sample Class 1
class Franchise
{
    public:
    void KFC()
    {
        cout<< "We have the best chicken!" << endl;
    }

    void BurgerKing()
    {
        cout<< "We have the best burger!" << endl;
    }
};

// Sample Class 2
class Billboard
{
    private:
    string title;

    public:
    void setTitle(string x)
    {
        title = x;
    }

    string getTitle()
    {
        return title;
    }
};

// Sample Class 3: Destructor
class Constructor
{
    private:
    string title;

    public:
    Constructor(string b)   // Constructor: should be same name with the class
    {
        setTitle(b);
    }

    void setTitle(string a)
    {
        title = a;
    }

    string getTitle()
    {
        return title;
    }
};

// Sample Class 4: Destructor
class Gambit
{
    public:
    Gambit()
    {
        cout<< "Initializing..." << endl;
    }

    ~Gambit()
    {
        cout<< "Closing..." << endl;
    }

    void processing()
    {
        cout<< "Processing..." << endl;
    }
};

int main()
{
    // Class 1
    Franchise fran;

    fran.KFC();
    fran.BurgerKing();

    // Class 2
    Billboard bill;
    bill.setTitle("Top 5 songs of 2020");
    cout<< bill.getTitle() << endl;

    // Class 3
    Constructor cons("Sample Title");
    cout<< cons.getTitle() << endl;

    // Class 4
    Gambit gam;
    gam.processing();

    return 0;
}

/*
Compile: g++ class.cpp -o class
Run: .\class.exe
*/