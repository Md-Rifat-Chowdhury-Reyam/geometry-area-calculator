#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"\nCircle:\n";
    
    double circleArea;
    double r,pi;
    pi=3.14159;
    cout<< "Enter radius value"<<endl;
    cin>>r;
    cout<<"So your radius value, r = "<<r<<endl;
    circleArea= 2*r*pi;
    cout<< "Circle area is "<< circleArea <<" squremeter."<<endl;
    
    cout<<"\nTriangle:\n";
    
    double triangleArea;
    double h,b;
    cout<< "Enter your triangle height and base values"<<endl;
    cout<<"Height"<<endl;
    cin>>h;
    cout<<"Base"<<endl;
    cin>>b;
    triangleArea = (h*b)/2;
    cout<< "Triangle area is " << triangleArea<< " squremeter."<<endl;
    
    cout<<"\nSqure:\n";
    
    double squreArea;
    double a;
    cout<< "Enter your squre side values"<<endl;
    cout<<"Side,a"<<endl;
    cin>>a;
    squreArea = a*a;
    cout<< "Squre area is " << squreArea<< " squremeter."<<endl;
    
    cout<<"\nTrapizoid/ Trapizium:\n";
    
    double trapizoidArea;
    double Ta,Tb,Th;
    cout<< "Enter your triangle bases and height values"<<endl;
    cout<<"Top base"<<endl;
    cin>>Ta;
    cout<<"buttom base"<<endl;
    cin>>Tb;
    cout<<"Height"<<endl;
    cin>>Th;
    trapizoidArea = ((Ta+Tb)*Th)/2 ;
    cout<< "Trapizium area is " << trapizoidArea<< " squremeter."<<endl;
    
    cout<<"\nParallelogram:\n";
    
    double parallelogramArea;
    double Pb,Ph;
    cout<< "Enter your base and height values"<<endl;
    cout<<"Base"<<endl;
    cin>>Pb;
    cout<<"height"<<endl;
    cin>>Ph;
    
    parallelogramArea = Pb*Ph;
    cout<< "Parallelogram area is " << parallelogramArea<< " squremeter."<<endl;
    
    cout<<"\nRhombus\n";
    
    double rhombusArea;
    double Rp,Rq;
    cout<< "Enter your vertical diagonal and horizontal diagonal values"<<endl;
    cout<<"Vertical diagonal"<<endl;
    cin>>Rp;
    cout<<"Horizontal diagonal"<<endl;
    cin>>Rq;
    rhombusArea = (Rp*Rq)/2 ;
    cout<< "Rhombus area is " << rhombusArea<< " squremeter."<<endl;
    
    cout<<"\nCylinder:\n";
    
    double cylinderArea;
    double Cr,Ch;
    cout<< "Enter cylinder radius value"<<endl;
    cin>>Cr;
    cout<< "Enter cylinder height value"<<endl;
    cin>>Ch;
    cout<<"So your radius & height value  = "<<Cr<<" ,"<<Ch<<endl;
    cylinderArea= (2*Cr*pi*Ch)+ (2*pi*(Cr*Cr));
    cout<< "Cylinder area is "<< cylinderArea<<" squremeter."<<endl;
    
    cout<<"\nCone:\n";
    
    float pi=3.14159;
    double coneArea;
    double Cor,Coh;
    cout<< "Enter cylinder radius value"<<endl;
    cin>>Cor;
    cout<< "Enter cylinder height value"<<endl;
    cin>>Coh;
    cout<<"So your radius & height value  = "<<Cor<<" ,"<<Coh<<endl;
    coneArea= (Cor*pi)*(Cor + sqrt((Coh*Coh)+(Cor*Cor)));
    cout<< "Cone area is "<< coneArea<<" squremeter."<<endl;
    
    
    return 0;
}