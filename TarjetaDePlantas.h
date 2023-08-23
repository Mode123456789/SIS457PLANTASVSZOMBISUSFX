#pragma once
#include<iostream>
using namespace std;


class TarjetaDePlantas
{
private:
	int TiempoDeRecarga = 10;
	string NombreDePlanta;


	float Dimension;
	float PosicionX;
	float PosicionY;

public:
//constructores 


	TarjetaDePlantas();
	TarjetaDePlantas(int _TiempoDeRecarga, string _NombreDePlanta, float _Dimension, float _PosicionX, int _PosicionY);


	//metods accesores


	void setTiempoDeRecarga(int _TiempoDeRecarga) { TiempoDeRecarga = _TiempoDeRecarga; }
	int getTiempoDeRecarga() { return TiempoDeRecarga; }

	void setNombreDePlanta(int _NombreDePlanta) { NombreDePlanta = _NombreDePlanta; }
	string getNombreDePlanta() { return NombreDePlanta; }

	void setDimension(int _Dimension) { Dimension = _Dimension; }
	float getDimension() { return Dimension; }

	void setPosicionX(int _PosicionX) { PosicionX = _PosicionX; }
	float getPosicionX() { return PosicionX; }

	void setPosicionY(int _PosicionY) { PosicionY = _PosicionY; }
	float getPosicionY() { return PosicionY; }

	//Metodos publicos\

	
	void LugarTarjetas(float, float);
	void Recarga(int);

};
