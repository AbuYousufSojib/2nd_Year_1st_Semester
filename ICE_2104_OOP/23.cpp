#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    float height, weight, area;
public:
    void input(float height, float weight)
    {
        this->height = height;
        this->weight = weight;
    }

    void output()
    {
        area = height*weight;
        cout<<"The area of rectangle is: "<<area;
    }
};
int main()
{
    rectangle object;
    rectangle *ptr;
    ptr = &object;
    ptr->input(3.4,4.5);
    ptr->output();

    return 0;
}
