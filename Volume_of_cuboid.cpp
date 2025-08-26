Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

class cuboid
{
private:
double height=22.0,width=20.0,length=220.0;
public:
double volume()
{
double v;
v=height*width*length;
return v;
}
};
int main()
{
cuboid c1;
double vol=c1.volume();
cout<<"Volume:"<<vol<<endl;
}
Output:
Volume:96800
