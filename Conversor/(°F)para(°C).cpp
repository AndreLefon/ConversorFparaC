#include<iostream>
using namespace std;
float FahrenheitCelsius(float);
int main()
{
    float fahrenheit, celsius;
    cout<<"Digite a temperatura em Fahrenheit: ";
    cin>>fahrenheit;
    celsius = FahrenheitCelsius(fahrenheit);
    cout<<endl<<fahrenheit<<"\370F = "<<celsius<<"\370C";
    cout<<endl;
    return 0;
}
float FahrenheitCelsius(float f)
{
    float c;
    c = (f-32)/1.8;
    return c;
}
