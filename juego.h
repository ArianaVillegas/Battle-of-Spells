#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;



class Mapa{
  typedef bool libre;
  typedef unsigned int dim;

  dim alto;
  dim ancho;
  vector<vector<libre>*> piso;
  friend class Jugador;
  public:
  Mapa(dim alto, dim ancho):alto{alto}, ancho{ancho}{
    for (int i = 0; i<alto; i++ ){
      piso.push_back(new vector<libre>(ancho));
    }
  }
};

class Jugador{
  typedef int puntos, id, coor;
  id i;
  puntos vida = 100;
  list<Hechizo>::iterator actual;
  list<Hechizo> hechizos;
  coor x, y;
public:
  Jugador(id i):i{i}{actual = begin(hechizos);}
  void agregar_hechizo(id h){hechizos.push_back(h); hechizos.unique();}
  void siguiente_hechizo(){
    if((actual + 1 ) != end(hechizos)){actual++;}else{actual = begin(hechizos);}
  }
  void castear_hechizo(){}
  void restar_vida(puntos daño){vida = vida - daño;}
};


class Juego{
  typedef unsigned int cantidad, dim;
  typedef char tecla;
  vector<Jugador*> jugadores;
  Mapa mapa;
  //falta cambiar por numero de teclas, los valores actuales son referenciales
  tecla controles[4][6] = {
    {'d', 'w', 'a', 's', '1', '2'},
    {'j', 'y', 'g', 'h', 'n', 'm'},
    {'>', '^', '<', '+', '.', '-'},

  };
  public:
  Juego(cantidad j, dim x, dim y): mapa(x,y){
    for (int i = 0; i<j; i++){
      jugadores.push_back(new Jugador(i));
    }
  }
  void mover_jugador(id, )
};