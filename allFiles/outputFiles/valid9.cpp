#include<iostream>                                                                                                                                                      
using namespace std;                                                                                                                                                    
#include<string.h>                                                                                                                                                      
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int c_int,a_int,s_int;                                                                                                                                          
                                                                                                                                                                        
        int a(int x_int, int y_int)     {                                                                                                                               
                c_int = x_int + y_int;                                                                                                                                  
                a_int = c_int % 2;                                                                                                                                      
                if ( c_int == 0  )                                                                                                                                      
                {                                                                                                                                                       
                        cout <<  "Zero" << endl;                                                                                                                        
                }                                                                                                                                                       
                else if ( a_int == 0 )                                                                                                                                  
                {                                                                                                                                                       
                        cout <<  "Even" << endl;                                                                                                                        
                }                                                                                                                                                       
                else                                                                                                                                                    
                {                                                                                                                                                       
                        cout <<  "Odd" << endl;                                                                                                                         
                }                                                                                                                                                       
        }                                                                                                                                                               
        s_int = 20;                                                                                                                                                     
        if ( s_int == 20  )                                                                                                                                             
        {                                                                                                                                                               
                cout <<  20 << endl;                                                                                                                                    
        }                                                                                                                                                               
                                                                                                                                                                        
}