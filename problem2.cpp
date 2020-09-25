#include <iostream>
int main(){
    int n;
    std::cout<<"enter dimension: ";
    std::cin>>n;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<"enter a"<<"["<<i<<"]"<<"["<<j<<"]: ";
            std::cin>>matrix[i][j];
        }
    }

    std::cout<<std::endl;
    std::cout<<"input array a = [ ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<matrix[i][j]<<" ";
        }
        if(i < n-1)
        std::cout<<"\n";
    }
    std::cout<<"]"<<std::endl<<std::endl;


    int outputMatrix[n+1][n+1];
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1 ; j++){
            outputMatrix[i][j] = 0;
        }
    }

    int diagonalOut = 0;
    for(int i = 0; i < n; i++){
        int calculatedValue = 0;
        for(int j = 0; j < n+1; j++){
            if(i==j) diagonalOut+= matrix[i][j];
            if(j==n){
                outputMatrix[i][j] = calculatedValue;
                outputMatrix[n][j] += calculatedValue;

            }else{
                outputMatrix[i][j] = matrix[i][j];
                outputMatrix[n][j] += matrix[i][j];
                calculatedValue += matrix[i][j];
            }
        }
    }
    outputMatrix[n][n] = diagonalOut;

    std::cout<<"output array b = [ ";
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1; j++){
            std::cout<<outputMatrix[i][j]<<" ";
        }
        if(i < n)
        std::cout<<"\n";
    }
    std::cout<<"]";

}
