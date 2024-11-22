#include<iostream>
using namespace std;
#include<string.h>
int main()
{
        int a_int,b_int,c_int;

        a_int = 10;
        b_int = 20;
        c_int = 15;
        if ( a_int == b_int && b_int == c_int )
        {
                cout <<  "All are Equal" << endl;
        }
        else if ( a_int > b_int )
        {
                if ( a_int > c_int  )
                {
                        cout <<  "a is the largest" << endl;
                }
                else
                {
                        cout <<  "c is the largest" << endl;
        }
                }
        else
        {
                if ( b_int > c_int  )
                {
                        cout <<  "b is the largest" << endl;
                }
                else
                {
                        cout <<  "c is the largest" << endl;
                }
        }

}
