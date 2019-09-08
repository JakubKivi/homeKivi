#include <TM1637Display.h>
TM1637Display display(CLK, DIO);

void showNumber(int number, bool dots){
  if(dots){
    display.showNumberDecEx(number, (0x80 >> 1), true);
    // liczba, przesuniecie bitowe(kropki na srodku, czy pokazywac zera jesli liczba nie jest 4 cyfrowa)
  }else{
    display.showNumberDecEx(number, true);
  }
}
