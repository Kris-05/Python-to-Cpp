#include<iostream>                                                                                                                                                      
using namespace std;                                                                                                                                                    
#include<string.h>                                                                                                                                                      
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int a_int,b_int;                                                                                                                                                
                                                                                                                                                                        
        a_int = 7;                                                                                                                                                      
        b_int = a_int % 2;                                                                                                                                              
        switch ( b_int )        {                                                                                                                                       
                case  1:                                                                                                                                                
                        cout <<  "Odd" << endl;                                                                                                                         
                        break;                                                                                                                                          
                case  0:                                                                                                                                                
                        cout <<  "Even" << endl;                                                                                                                        
                        break;                                                                                                                                          
                }                                                                                                                                                       
        }  
