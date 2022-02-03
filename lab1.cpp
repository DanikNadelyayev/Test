#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    string colour;
    string fuel;

public:
void Print()
{
    cout<<"route A"<<endl;
}
};

class truck : public car
{
public:
    string cargo;

};
