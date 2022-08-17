// Polynomial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <fstream>
using namespace std;
 
 // Done by Muhammad Khuzaima Abbasi <u2019341> and  Shahab Afridi <2019464>


class polynomials {

public:

   


    polynomials(char poly[])//constructor
    {

        for (int i = 0; i < 5; i++)
        {
            Var[i] = poly[i];
            
        }



    }
    
    polynomials operator+(polynomials pr)//adding polynomials
    {

        polynomials temp(Var);


        for (int i = 0; i < 5; i++)
        {

            temp.Var[i] = Var[i] + pr.Var[i];

        }

        return temp;

    }

    void print()//printing them
    {
        ofstream Add("result_addition.txt");


        for (int i = 0; i < 5; i++)
        {
            if(i==0)
            Add << Var[i] << "x^" << i;
            else
                Add <<"+"<< Var[i] << "x^" << i;


       }

    }
private:

    char Var[5] = { '0','0','0','0','0' };

};


int main()
{

    ifstream poly;

    poly.open("Page.txt");


    char arr[5];



    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];
        
    }

    polynomials p1(arr);



    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p2(arr);



    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p3(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p4(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p5(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p6(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p7(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p8(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p9(arr);


    for (int i = 0; i < 5; i++)
    {
        poly >> arr[i];

    }

    polynomials p10(arr);



    polynomials Result(arr);

    Result = p1 + p2;//calling add function 

    Result = Result + p3;


    Result = Result + p4;

    Result = Result + p5;

    Result = Result + p6;

    Result = Result + p7;

    Result = Result + p8;

    Result = Result + p9;

    Result = Result + p10;

    poly.close();


    Result.print();//printing result
    


}

