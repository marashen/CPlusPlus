

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    Dog dog1;
    dogs doggie;
    dog1.breed = doggie.breed;
    dog1.color = doggie.color;
    dog1.height = doggie.height;
    dog1.weight = doggie.weight;

    cout << dog1.breed;
    cout << dog1.color;
    cout << dog1.height;
    cout << dog1.weight;
    return 0;
};

class Dog
{
public:
    string breed;
    string color;
    double height;
    int weight;
};

class dogs: public Dog
{
public:
    string breed = "Hound";
    string color = "Snow";
    double height = 2.5;
    int weight = 25;
};

