#include<iostream>
using namespace std;
#include<string.h>
int main()
{
        int i_int,limit_int,num_int,is_prime_int,check_int;

        i_int = 0;
        limit_int = 20;
        num_int = 2;
        while ( num_int <= limit_int )
        {
                is_prime_int = 1;
                for ( i_int =  2 ; i_int <  num_int; i_int =  i_int+ 1)
                {
                        check_int = num_int % i_int;
                        if ( check_int == 0  )
                        {
                                is_prime_int = 0;
                                break;
                }
                        }
                if ( is_prime_int == 1  )
                {
                        cout <<  num_int <<  "is a prime number" << endl;
                }
                num_int = num_int + 1;
        }

}