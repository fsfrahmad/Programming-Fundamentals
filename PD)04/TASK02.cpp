#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );
void PrintMaze();

main(){
  system("cls");
  PrintMaze();
  

}
void PrintMaze(){
  cout << "*************************************" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*                                   *" << endl;
  cout << "*************************************" << endl;
}

void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}