#include <fstream>
#include <stdexcept>
#include <iostream>
#include <math.h>
#include <limits>
#include <string>

using namespace std;

void readFile();

int main()
{
    readFile();
    return 0;
}

void readFile()
{
    string line;
    char nums[200];
    ifstream myfile;
    int sum = 0;
    try{

    myfile.open("listaDeEnteros.txt");
    //CHECK **
    //TODO: catch the error in case the file does not exists and and display  a message to the user
    //myfile.excetions throws std::ios_base::failure if the file does not exists
    myfile.exceptions(ifstream::failbit);
    }catch(const exception &e){
    cerr << "No se encontro el archivo, error: "<< e.what()<<endl;
    }
    while (!myfile.eof())
    {
        try{
        getline(myfile, line);


        for (int idx = 0; idx < line.length(); idx++)
        {


            if( atoi(line[idx])>9){
                    cout<<" lineasion "<<line[idx]<<endl;
                throw invalid_argument("Invalid Argument, must be a valid number");
                break;
            }

        }

            //CHECK**
            //TODO: verify each char from the line is a valid digit. (0-9) Use the function isdigit(char)
            //If the read char is not a digit the program must throw std::invalid_argument(With Error Messag to be displayed)
            //If the  read line has a char then this value must be ignored and the reading file must continue.
        }catch(invalid_argument &e){
                cout<<e.what()<<endl;
                line="0";
               //continue;
            }

        int tempInt = atoi(line.c_str());
       /* cout << "Number read: " << line << '\n';
        cout << "Int value: " << tempInt << '\n';*/
        //TODO: verify the power of 2 of the read value is less than the maximum integer allowed
        //If the power of 2 of the read value is greater than the maximum integger allowed then the program must
        //throw a std::overflow_error(WITH THE  ERROR MESSAGE TO BE DISPLAYED)
        //If the exception is  thrown, then the next two statement must NOT be executed
        try{
        if(pow(tempInt,2)>INT_MAX)
            throw overflow_error("Overflow error!, El numero sobrepasa el numero maximo permitido");
        else{
        cout << "Number read: " << line << '\n';
        cout << "Int value: " << tempInt << '\n';
            sum = sum + pow(tempInt, 2);
        }
        }catch(overflow_error &e){
            cout<<e.what()<<" en el numero "<<line<<endl;
        }

        cout << "Total sum: " << sum << '\n \n';

    }
}
