#include <iostream>
using namespace std;
bool isPythagoreanTriplet(int a, int b, int c)
{
    int x, y, z;
    x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if ((x * x) == (y * y) + (z * z))
    {
        return true;
    }
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (isPythagoreanTriplet(a, b, c))
    {
        cout << "Is a Pythagorean Triplet";
    }
    else
    {
        cout << "Not a Pythagorean Triplet";
    }
    return 0;
}