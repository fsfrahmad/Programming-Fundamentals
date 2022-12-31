#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );
void PrintMaze();
void playerMove(int,int);

main(){
  system("cls");
  PrintMaze();
  int x = 3;
  int y = 3;
  playerMove(x,y);

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
void playerMove(int x,int y){
  gotoxy(x - 1,y);
  cout << " ";
  gotoxy( x , y);
  cout << "P";
  Sleep(200);
}