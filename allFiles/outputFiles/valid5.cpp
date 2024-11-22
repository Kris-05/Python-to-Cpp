#include<iostream>                                                                                                                                                      
using namespace std;                                                                                                                                                    
#include<string.h>                                                                                                                                                      
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int a_int,b_int;                                                                                                                                                
                                                                                                                                                                        
        a_int = 5;                                                                                                                                                      
        b_int = 0;                                                                                                                                                      
        while ( a_int > 0 )                                                                                                                                             
        {                                                                                                                                                               
                cout <<  a_int << endl;                                                                                                                                 
                while ( b_int < 5 )                                                                                                                                     
                {                                                                                                                                                       
                        cout <<  b_int << endl;                                                                                                                         
                        b_int = b_int + 1;                                                                                                                              
                }                                                                                                                                                       
                a_int = a_int - 1;                                                                                                                                      
        }                                                                                                                                                               
                                                                                                                                                                        
}
