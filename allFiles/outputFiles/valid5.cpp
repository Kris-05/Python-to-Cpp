#include<iostream>
using namespace std;
#include<string.h>
int main()
{
        int a_int,b_int,c_int;

        a_int = 0;
        b_int = 3;
        while ( a_int < 10 )
        {
                c_int = a_int * b_int;
                cout <<  c_int << endl;
                a_int = a_int + 1;
        }

}  