#include<iostream>
#include <bits/stdc++.h>

int main(){
    int num;
    std::cout<<"number of inputs: ";
    std::cin>>num;
    int arr[num];

    for(int i=0; i<num; i++){
        std::cin>>*(arr+i);
    }

    int maxv = INT_MIN;
    int minv = INT_MAX;
    int total = 0;

     for(int i=0; i<num; i++){
        if(maxv < *(arr+i)){
            maxv = *(arr+i);
        }

        if(minv > *(arr+i)){
            minv = *(arr+i);
        }

        total += *(arr+i);
    }

    std::cout<<"max: "<<maxv<<std::endl;
    std::cout<<"min: "<<minv<<std::endl;
    std::cout<<"average: "<<total/num<<std::endl;
}
