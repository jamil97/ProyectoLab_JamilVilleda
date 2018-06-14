#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <vector>
#include "Enemigos.h"
#include <chrono>

using namespace std;

vector<Enemigos*> enemigos;

void llenarEnemigos();
void enemigoPrincipal1(int, int);
void imprimeEnemigos();

int main(){

  int x = 41; //Primer Cuadro
  int y = 49; //Primer Cuadro
  int ty = 0;
  int tx = 0;
  int nivel = 1;
  bool seguir = true;
  initscr();
  start_color();
  init_pair(1, COLOR_RED, COLOR_RED);//Inicializa el color
  init_pair(2,COLOR_BLACK, COLOR_BLACK);
  init_pair(3,COLOR_WHITE, COLOR_WHITE);
  init_pair(4, COLOR_BLUE, COLOR_BLUE);
  move(0,0);
  printw("Galaga Infinity War ");
  move(0,30);
  printw("Nombre del jugador: ");
  move(0, 70);
  printw("Nivel: ");
  move(0,90);
  printw("Numero de vidas: ");
    llenarEnemigos();

  while(seguir){

    if(nivel == 1){
      //enemigoPrincipal1(4,6);

      //imprimeEnemigos();
      tx = x;
      ty = y;

      //Primera arma izquierda
      move(x,y+1);
      attron(COLOR_PAIR(3));//Establece el color blanco
      printw(" ");
      move(x-1,y+1);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+1);//blanco
      attron(COLOR_PAIR(1));//blanco
      printw(" ");
      move(x-3,y+1);//blanco
      attron(COLOR_PAIR(1));//blanco
      printw(" ");

      //Segunda arma Izquierda
      move(x-1,y+1);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+1);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-1,y+2);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+3);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-3,y+3);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-4,y+3);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-3,y+5);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-1,y+5);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-2,y+4);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-2,y+5);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-4,y+6);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");

      //ARMA PRINCIPAL MITAD IZQUIERDA
      move(x-1,y+6);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-2,y+6);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-3,y+6);//rojo
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-3,y+7);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+7);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-4,y+7);//blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-5,y+7);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-6,y+8);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-5,y+8);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-4,y+8);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-7,y+9);//ROJO
      attron(COLOR_PAIR(1));//ROJO
      printw(" ");
      move(x-6,y+9);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-5,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-4,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-3,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-4,y+8);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-3,y+8);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-2,y+8);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x-1,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");
      move(x,y+9);//Blanco
      attron(COLOR_PAIR(3));//blanco
      printw(" ");

      //ARMA PRINCIPAL MITAD Derecha
      move(x-6,y+10);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-5,y+10);//ROJO
      attron(COLOR_PAIR(1));//ROJO
      printw(" ");
      move(x-4,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-3,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-2,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-1,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-6,y+11);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-5,y+11);//ROJO
      attron(COLOR_PAIR(3));//ROJO
      printw(" ");
      move(x-4,y+11);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-7,y+10);//rojo
      attron(COLOR_PAIR(1));//ROJO
      printw(" ");
      move(x-5,y+10);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-3,y+11);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-2,y+11);//Blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-5,y+12);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-4,y+12);//blanco
      attron(COLOR_PAIR(3));//Blanco
      printw(" ");
      move(x-3,y+12);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-2,y+12);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-3,y+13);//ROJO
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-2,y+13);//ROJO
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-1,y+13);//ROJO
      attron(COLOR_PAIR(1));//rojo
      printw(" ");
      move(x-4,y+13);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      //Arma enmedio Derecha
      move(x-3,y+14);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-2,y+14);//ROJO
      attron(COLOR_PAIR(1));//ROJO
      printw(" ");
      move(x-1,y+14);//ROJO
      attron(COLOR_PAIR(1));//ROJO
      printw(" ");
      move(x-4,y+16);//Rojo
      attron(COLOR_PAIR(1));//Rojo
      printw(" ");
      move(x-2,y+15);//Azul
      attron(COLOR_PAIR(4));//Azul
      printw(" ");
      move(x-3,y+16);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-2,y+16);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-1,y+17);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x,y+18);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-1,y+18);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-2,y+18);//blanca
      attron(COLOR_PAIR(3));//blanca
      printw(" ");
      move(x-3,y+18);//rojo
      attron(COLOR_PAIR(1));//Rojo
      printw(" ");

      char tecla;
      tecla = getch();

//   VALIDACIONES PARA MOVER LA NAVE
        if(tecla == 'f'){
          seguir = false;
        } else if(tecla == 'C' && y<110){
            //Derecha
            //DEJA QUE TODO LO QUE SE MUEVA SE VUELVA NEGRO DE NUEVO
              attron(COLOR_PAIR(2));
              move(tx,ty);//Hace que el cursor se mueva donde vos queras
              printw("    ");
              attron(COLOR_PAIR(2));//black
              move(tx-1,ty);//black
              printw("    ");
              attron(COLOR_PAIR(2));//black
              move(tx-2,ty);//black
              printw("    ");
              attron(COLOR_PAIR(2));//black
              move(tx-3,ty);//black
              printw("    ");
              attron(COLOR_PAIR(2));//black
              move(tx-4,ty);//black
              printw("    ");
              attron(COLOR_PAIR(2));//black
              move(tx-5,ty);//black
              printw("    ");
              move(tx-3,ty+3);//black
              printw("     ");
              move(tx-4,ty+4);//black
              printw("     ");
              move(tx-5,ty+4);//black
              printw("     ");
              move(tx-6,ty+4);//black
              printw("     ");
              move(tx-7,ty+4);//black
              printw("     ");
              move(tx-6,ty+5);//black
              printw("     ");
              move(tx-7,ty+6);//black
              printw("     ");
              move(tx-1,ty+5);//rojo
              printw("     ");
              move(tx-2,ty+5);//rojo
              printw("     ");
              move(tx-3,ty+6);//rojo
              printw("     ");
              move(tx-3,ty+7);//rojo
              printw("     ");
              move(tx-4,ty+7);//rojo
              printw("     ");
              move(tx-5,ty+7);//rojo
              printw("     ");
              move(tx-8,ty+7);//rojo
              printw("     ");
              move(tx-9,ty+7);//rojo
              printw("     ");
              move(tx-10,ty+7);//rojo
              printw("     ");
              move(tx-11,ty+9);//rojo
              printw("     ");
              move(tx-12,ty+9);//rojo
              printw("     ");
              move(tx-7,ty+9);//rojo
              printw("     ");
              move(tx-2,ty+9);//rojo
              printw("     ");
              move(tx,ty+9);//rojo
              printw("     ");
              move(tx-1,ty+4);//rojo
              printw("     ");
              move(tx-2,ty+4);//rojo
              printw("     ");
              move(tx-10,ty+10);//rojo
              printw("     ");
              move(tx-6,ty+10);//rojo
              printw("     ");
              move(tx-5,ty+10);//rojo
              printw("     ");
              move(tx-1,ty+10);//rojo
              printw("     ");
              move(tx-4,ty+11);//rojo
              printw("     ");
              move(tx-9,ty+11);//rojo
              printw("     ");
              move(tx-7,ty+12);//rojo
              printw("     ");
              move(tx-3,ty+12);//rojo
              printw("     ");
              move(tx-8,ty+12);//rojo
              printw("     ");
              move(tx-6,ty+14);//rojo
              printw("     ");
              move(tx-2,ty+14);//rojo
              printw("     ");
              move(tx-1,ty+14);//rojo
              printw("     ");
              move(tx-7,ty+15);//rojo
              printw("     ");
              move(tx-5,ty+15);//rojo
              printw("     ");
              move(tx-3,ty+15);//rojo
              printw("     ");
              move(tx-3,ty+16);//rojo
              printw("     ");
              move(tx-4,ty+16);//rojo
              printw("     ");
              move(tx-2,ty+16);//rojo
              printw("     ");
              move(tx-2,ty+17);//rojo
              printw("     ");
              move(tx-1,ty+17);//rojo
              printw("     ");
              move(tx,ty+18);//rojo
              printw("     ");
              move(tx-4,ty+18);//rojo
              printw("     ");
              move(tx-5,ty+18);//rojo
              printw("     ");
              y+=3;//Velocidad de la nave a la derecha

          } else if(tecla == 'D' && y > 1){ //Izquierda
              attron(COLOR_PAIR(2));
              move(tx,ty);//blanco
              printw("     ");
              move(tx-1,ty);//blanco
              printw("     ");
              move(tx-2,ty);//blanco
              printw("     ");
              move(tx-3,ty);//blanco
              printw("     ");
              move(tx-4,ty);//blanco
              printw("     ");
              move(tx-5,ty);//blanco
              printw("     ");
              move(tx-3,ty+3);//blanco
              printw("      ");
              move(tx-4,ty+4);//blanco
              printw("      ");
              move(tx-5,ty+4);//black
              printw("     ");
              move(tx-6,ty+4);//black
              printw("     ");
              move(tx-7,ty+4);//black
              printw("     ");
              move(tx-6,ty+5);//black
              printw("     ");
              move(tx-7,ty+6);//black
              printw("     ");
              move(tx-1,ty+5);//rojo
              printw("     ");
              move(tx-2,ty+5);//rojo
              printw("     ");
              move(tx-3,ty+7);//rojo
              printw("     ");
              move(tx-4,ty+7);//rojo
              printw("     ");
              move(tx-5,ty+7);//rojo
              printw("     ");
              move(tx-8,ty+7);//rojo
              printw("     ");
              move(tx-9,ty+7);//rojo
              printw("     ");
              move(tx-10,ty+7);//rojo
              printw("     ");
              move(tx-11,ty+9);//rojo
              printw("     ");
              move(tx-12,ty+9);//rojo
              printw("     ");
              move(tx-7,ty+9);//rojo
              printw("     ");
              move(tx-2,ty+9);//rojo
              printw("     ");
              move(tx,ty+9);//rojo
              printw("     ");
              move(tx-1,ty+4);//rojo
              printw("     ");
              move(tx-2,ty+4);//rojo
              printw("     ");
              move(tx-10,ty+10);//rojo
              printw("     ");
              move(tx-6,ty+10);//rojo
              printw("     ");
              move(tx-5,ty+10);//rojo
              printw("     ");
              move(tx-1,ty+10);//rojo
              printw("     ");
              move(tx-4,ty+11);//rojo
              printw("     ");
              move(tx-9,ty+11);//rojo
              printw("     ");
              move(tx-7,ty+12);//rojo
              printw("     ");
              move(tx-3,ty+12);//rojo
              printw("     ");
              move(tx-8,ty+12);//rojo
              printw("     ");
              move(tx-6,ty+14);//rojo
              printw("     ");
              move(tx-2,ty+14);//rojo
              printw("     ");
              move(tx-1,ty+14);//rojo
              printw("     ");
              move(tx-7,ty+15);//rojo
              printw("     ");
              move(tx-5,ty+15);//rojo
              printw("     ");
              move(tx-3,ty+15);//rojo
              printw("     ");
              move(tx-3,ty+16);//rojo
              printw("     ");
              move(tx-2,ty+16);//rojo
              printw("     ");
              move(tx-4,ty+16);//rojo
              printw("     ");
              move(tx-2,ty+17);//rojo
              printw("     ");
              move(tx-1,ty+17);//rojo
              printw("     ");
              move(tx,ty+18);//rojo
              printw("     ");
              move(tx-4,ty+18);//rojo
              printw("     ");
              move(tx-5,ty+18);//rojo
              printw("     ");
              y-=3;//Velocidad de nave a la izquierda

          }  else if(tecla == 32){ // Valida lo espacios
               //Valida que haga disparos
               int limite = 2;
               bool seguir = true;
                if(tx!=2){
                  for (int i = tx-8; i >= limite; i--) {
                    attron(COLOR_PAIR(3));
                    move(i,ty+10);
                    printw(" ");
                    move(i,ty+9);
                    printw(" ");
                    attron(COLOR_PAIR(2));
                    move(i+1,ty+10);
                    printw(" ");
                    move(i+1,ty+9);
                    printw(" ");
                    usleep(4000);
                    refresh();
                    if(i == 2){
                      attron(COLOR_PAIR(2));
                      move(i, ty+10);
                      printw("  ");
                      attron(COLOR_PAIR(2));
                      move(i, ty+9);
                      printw("  ");
                    }

                 //Colision
                 for (int j = 0; j < enemigos.size(); j++) {
                    if (i==enemigos[j]->getX()) {
                      attron(COLOR_PAIR(2));
                      move(i,y-1);
                      printw(" ");
                      move (i,y);
                      printw(" ");
                      attron(COLOR_PAIR(2));
                      move(i,y+1);
                      printw(" ");
                      attron(COLOR_PAIR(2));
                      move(i,y+2);
                      printw(" ");
                      attron(COLOR_PAIR(2));
                      move(i,y+3);
                      printw(" ");
                      attron(COLOR_PAIR(2));
                      move(i,y+4);
                      printw(" ");
                      move(i,y+5);
                      printw(" ");

                      //Cuerpo Bajo
                      move(i-1,y);
                      printw(" ");
                      move(i-1,y+1);
                      printw(" ");
                      move(i-1,y+2);
                      printw(" ");
                      move(i-1,y+3);
                      printw(" ");
                      attron(COLOR_PAIR(2));
                      move(i-1,y+4);
                      printw(" ");
                      limite = j;
                    }
                    limite = 2;
                  }
                }
            }
        }
    } else if (nivel == 2){

    } else if (nivel == 3){

    }
    refresh();
  }
  endwin();
}

void enemigoPrincipal1(int x1, int y1){
  int x;
  int y;
  x = x1;
  y = y1;

  start_color();
  init_pair(5,COLOR_RED, COLOR_RED);
  init_pair(6,COLOR_WHITE, COLOR_WHITE);

    //Cuerpo enmedio
    attron(COLOR_PAIR(6));
    move(x,y-1);
    printw(" ");
    move (x,y);
    printw(" ");
    attron(COLOR_PAIR(5));
    move(x,y+1);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x,y+2);
    printw(" ");
    attron(COLOR_PAIR(5));
    move(x,y+3);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x,y+4);
    printw(" ");
    move(x,y+5);
    printw(" ");

    //Cuerpo Bajo
    move(x-1,y);
    printw(" ");
    move(x-1,y+1);
    printw(" ");
    move(x-1,y+2);
    printw(" ");
    move(x-1,y+3);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x-1,y+4);
    printw(" ");
    y+=3;
}

void llenarEnemigos(){
  //Llena de enemigos
  int tempX = 4;
  int tempY = 12;
  int contador = 0;
  for (int i = 0; i < 30; i++) {
      Enemigos* enemigoTemp;
      enemigoTemp = new Enemigos(tempX,tempY);
      enemigos.push_back(enemigoTemp);
      tempY+=9;
      if (i==10) {
        tempX+=3;
        tempY = 12;
      } else if(i==21){
        tempX+=3;
        tempY = 12;
      }
  }
  /*while(contador<11){
    contador++;
  } if(contador == 10){
    tempX++;
    contador = 0;
  }*/
}

/*void imprimeEnemigos(){

  for (int i = 0; i < enemigos.size(); i++) {
    llenarEnemigos(tempX,tempY);
    tempY+=8;
  }
}*/
