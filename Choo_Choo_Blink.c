/* 
 * File:   train.c
 * Author: snk_win
 *
 * Created on October 1, 2026, 7:39 PM
 */
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#pragma config WDTE = OFF
void delay(void)
{
    for (unsigned long i = 0; i < 50000; i++);
}
void main(void) {
      TRISD = 0x00;
      PORTD = 0x00;
      int count =0;
      unsigned int wait = 0;
  while(1){
      
   if(++wait >= 50000){
       wait = 0;
      if(count++<8){
            
             PORTD =(PORTD>>1)|0X80;     
             
      }
      else if(count < 16){
           
              PORTD = PORTD << 1;
           
      }
      else if(count < 24 ) {
          
           PORTD = (PORTD << 1)|1;  
      }          
      else if(count < 32){
          PORTD = PORTD << 1;
      }
      else{
          count = 0;
      }
       
   }
      
     
  }
}
      


 
