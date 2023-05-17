#include <bits/stdc++.h>

using namespace std;

class func_overloading
{
public:
    static int mul(int l, int w){return l*w;}
    static int mul(int l, int w, int h){return l*w*h;}
};

int main()
{
    func_overloading room;

    cout<<"The area of room is: "<<room.mul(50,7)<<" m^2"<<endl;
    cout<<"The volume of room is: "<<room.mul(50,7,15)<<" m^3"<<endl;

    return 0;
}

