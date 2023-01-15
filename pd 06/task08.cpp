#include <iostream>

using namespace std;

main()
{
    int height;
    int coordinateX;
    int coordinateY;

    cout << "Enter hieght of cube: ";
    cin >> height;
    cout << "Enter x component of point: ";
    cin >> coordinateX;
    cout << "Enter Y component of point: ";
    cin >> coordinateY;

    if (coordinateY == 0)
    {
        if(coordinateX >= 0 && coordinateX <= 3 * height)
        {
            cout << "Point lies on boundary of Figure.";
        }
    }
    else if (coordinateX == 0)
    {
        if(coordinateY >= 0 && coordinateY <= height)
        {
            cout << "Point lies on boundary of Figure.";
        }
    }
    else if(coordinateX == 3 * height)
    {
        if(coordinateY >= 0 && coordinateY <= height)
        {
            cout << "Point lies on boundary of Figure."; 
        }
    }
    else if (coordinateY == height)
    {
        if(coordinateX >= 0 && coordinateX <= height)
        {
            cout << "Point lies on boundary of Figure.";
        }
    }
    else if (coordinateY == height)
    {
        if(coordinateX >= 2 * height && coordinateX <= 3 * height)
        {
            cout << "Point lies on boundary of Figure.";
        }
    }
    else if(coordinateX == height)
    {
        if(coordinateY >= height && coordinateY <= 4 * height)
        {
            cout << "Point lies on boundary of Figure."; 
        }
    }
    else if(coordinateX == 2 * height)
    {
        if(coordinateY >= height && coordinateY <= 4 * height)
        {
            cout << "Point lies on boundary of Figure."; 
        }
    }
    else if(coordinateY == 4 * height)
    {
        if(coordinateX >= height && coordinateX <= 2 * height)
        {
           cout << "Point lies on boundary of Figure."; 
        }
    }
    else if(coordinateX > 0 && coordinateX < 4 * height && coordinateY > 0 && coordinateY < height)
    {
        cout << "Point lies inside the figure.";
    }
    else if(coordinateY > height && coordinateY < 4 * height && coordinateX > height && coordinateX < 2 * height)
    {
        cout << "Point lies inside the figure.";
    }
    else
    {
        cout << "The point lies outside the Figure.";
    }
    

}