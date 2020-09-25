#include <iostream>

#define pi 3.1415926535898

void computeSphere(float& v, float& s, float r){
    v = (4*pi*r*r*r)/3;
    s = 4*pi*r*r;
}

int main(){
    float v,s,r;
    std::cout<<"input radius : ";
    std::cin>>r;
    computeSphere(v,s,r);
    std::cout<<"volume = "<<v<<std::endl;
    std::cout<<"area = "<<s<<std::endl;
}
