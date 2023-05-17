#include<bits/stdc++.h>

using namespace std;
int main()
{
    string line;
    ifstream file;
    file.open("test.txt");
    while(getline(file,line))
    {
        cout<< line <<endl;
    }
    file.close();
    return 0;
}
