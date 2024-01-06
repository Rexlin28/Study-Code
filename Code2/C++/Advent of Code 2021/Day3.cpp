#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    ifstream MyFile("Day3.input.txt");
    const int LENGHT = 12;
    string line;
    int one[12]= {};
    int answerGamma[12];
    int gamma;
    long gammaNumber =0;
    int epsilon;
    int answerEpsilon[12];
    long epsilonNumber =0;
    long total = 0;

   

    while(getline(MyFile,line)){
       
        for(int i=0; i<LENGHT; i++){
            if(line[i]=='1'){
                one[i]++;
            }
        }
        total++;
    }

    for(int i=0; i<LENGHT; i++){
     if(one[i]>(total-one[i])){
        answerGamma[i]=1;
        answerEpsilon[i]=0;
     }else{
        answerGamma[i]=0;
        answerEpsilon[i]=1;
     }
       
    }
    
    for(int i=0; i<LENGHT; i++){
        gammaNumber += (answerGamma[i] * pow(2,i));
    }
      for(int i=0; i<LENGHT; i++){
        epsilonNumber += (answerEpsilon[i] * pow(2,i));
    }

   //
    cout << endl << gammaNumber << endl<< epsilonNumber;
    total = gammaNumber * epsilonNumber;
    cout << endl << total;
    MyFile.close();
}