#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

class abc
{
   const ll length = 20;
    ll width = 6;
public:
    ll rect_result,square_result_1, square_result_2;
    void putdata(void);
};
void abc::putdata()
{
    rect_result = length*width;
    cout<<"The area of rectangular is: "<<rect_result<<endl;
    square_result_1 = length*length;
    cout<<"For square, if we consider length 20 then the area is: "<<square_result_1<<endl;
    square_result_2 = pow(width,2);
    cout<<"For square, if we consider length 6 then the area is: "<<square_result_2<<endl;
}
int main()
{
    abc obj;
    obj.putdata();
    return 0;
}
