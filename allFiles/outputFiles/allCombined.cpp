#include<iostream>                                                                                                                                                      
using namespace std;                                                                                                                                                    
#include<string.h>                                                                                                                                                      
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int i_int,c_int,check_int,b_int;                                                                                                                                
                                                                                                                                                                        
        int function(int a_int, int b_int)      {                                                                                                                       
                i_int = 0;                                                                                                                                              
                c_int = a_int + b_int;                                                                                                                                  
                if ( c_int == 0 || c_int == 1  )                                                                                                                        
                {                                                                                                                                                       
                        cout <<  c_int <<  "is neither odd nor even" << endl;                                                                                           
                }                                                                                                                                                       
                else if ( c_int > 2 )                                                                                                                                   
                {                                                                                                                                                       
                        for ( i_int =  2 ; i_int <  c_int; i_int =  i_int+ 1)                                                                                           
                        {                                                                                                                                               
                                check_int = c_int % i_int;                                                                                                              
                                if ( c_int == 0  )                                                                                                                      
                                {                                                                                                                                       
                                        cout <<  c_int <<  "is not prime" << endl;                                                                                      
                                        break;                                                                                                                          
                        }                                                                                                                                               
                                }                                                                                                                                       
                        if ( i_int == c_int  )                                                                                                                          
                        {                                                                                                                                               
                                cout <<  c_int <<  "is prime" << endl;                                                                                                  
                }                                                                                                                                                       
                        }                                                                                                                                               
                else                                                                                                                                                    
                {                                                                                                                                                       
                        cout <<  c_int <<  "is too small" << endl;                                                                                                      
                        while ( a_int < b_int )                                                                                                                         
                        {                                                                                                                                               
                                while ( c_int < b_int )                                                                                                                 
                                {                                                                                                                                       
                                        cout <<  a_int << endl;                                                                                                         
                                        c_int = c_int + 1;                                                                                                              
                                }                                                                                                                                       
                                b_int = c_int - 1;                                                                                                                      
                        }                                                                                                                                               
                }                                                                                                                                                       
        }                                                                                                                                                               
                                                                                                                                                                        
} 