#include <30F6014A.h>

// Configuration fuses
#fuses NOWDT, HS, NOPROTECT, NOPUT, NOBROWNOUT

// Clock frequency 
#use delay(clock=20000000)  // 20 MHz external crystal (adjustable)

void main() {
   set_tris_b(0xFFFD);       // Set RB1 as output or set_tris_b(0b1111101)
   output_low(PIN_B1);       

   while(TRUE) {
      output_toggle(PIN_B1); // Toggle the RB1
      delay_ms(500);         
   }
}

