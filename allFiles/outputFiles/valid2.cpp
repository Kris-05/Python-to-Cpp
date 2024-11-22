#include<iostream>                                                                                                                                                      
using namespace std;                                                                                                                                                    
#include<string.h>                                                                                                                                                      
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int a_int,b_int;                                                                                                                                                
                                                                                                                                                                        
        a_int = 5;                                                                                                                                                      
        b_int = a_int % 2;                                                                                                                                              
        if ( a_int == 0  )                                                                                                                                              
        {                                                                                                                                                               
                cout <<  "ZERO" << endl;                                                                                                                                
        }                                                                                                                                                               
        else if ( b_int == 0 )                                                                                                                                          
        {                                                                                                                                                               
                cout <<  "EVEN" << endl;                                                                                                                                
        }                                                                                                                                                               
        else                                                                                                                                                            
        {                                                                                                                                                               
                cout <<  "ODD" << endl;                                                                                                                                 
        }                                                                                                                                                               
                                                                                                                                                                        
}  
