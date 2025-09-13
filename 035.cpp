//display area of circle
#include<iostream>
using namespace std;
float AreaOfCircle(float radius){
    float area = 3.14 * radius * radius;
    return area;
}
int main(){
    float radius;
    cin>>radius;
    float area = AreaOfCircle(radius);
    cout<<"Area of circle is "<<area<<endl;
    return 0;
}