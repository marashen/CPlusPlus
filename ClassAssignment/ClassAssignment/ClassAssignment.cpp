#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    Shape triangle;
    triangle.Properties("green", 20, 45);
    triangle.getArea(20, 45);
    cout << triangle.color;
    cout << triangle.height + triangle.width + triangle.areaA;

    Shape rectangle;
    triangle.Properties("blue", 50, 9);
    triangle.getArea(50, 9);
    cout << triangle.color;
    cout << triangle.height + triangle.width + triangle.areaA;

    Shape circle;
    triangle.Properties("green", 3, 14);
    triangle.getArea(3, 14);
    cout << triangle.color;
    cout << triangle.height + triangle.width + triangle.areaA;
};

class Shape
{
public:
    string color;
    int height;
    int width;
    int areaA;
    void Properties(string color, int height, int width)
    {
        return;
    }
    auto getArea(int height, int width)
    {
        areaA = height * width;
        return areaA;
    }
};