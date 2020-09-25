#include <bits/stdc++.h>
#include<iostream>
#include <string>
#include <algorithm>

int main(){
    std::cout<<"input sentence: ";
    std::string fullInput="";
    std::getline(std::cin,fullInput);

    std::string inputWord;
    std::cout<<"input word: ";
    std::cin>>inputWord;

    fullInput.erase(std::remove(fullInput.begin(), fullInput.end(), '.'), fullInput.end());

    std::stringstream ss(fullInput);
    int cnt=0;
    while(ss>>fullInput)
    {
        if(fullInput==inputWord)
          cnt++;
    }

    std::cout<<"number of counts : "<<cnt<<std::endl;
}
