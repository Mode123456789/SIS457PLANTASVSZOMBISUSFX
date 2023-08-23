#include "TarjetaDePlantas.h"


TarjetaDePlantas::TarjetaDePlantas()
{
	//TiempoDeRecarga = 10;
	NombreDePlanta = "Carnivora";
	Dimension = 5.0f;
	PosicionX = 50.0f;
	PosicionY = 40.0f;
}
//TarjetaDePlantas::TarjetaDePlantas(int _TiempoDeRecarga, string _NombreDePlanta)
//{
//	TiempoDeRecarga = _TiempoDeRecarga;
//	NombreDePlanta = _NombreDePlanta;
//	Dimension = Dimension;
//	PosicionX = PosicionX;
//	PosicionY = PosicionY;

//}
//void TarjetaDePlantas::LugarTarjetas(float, float)
//{
//	PosicionX += Dimension;
//	PosicionY += Dimension;
//
//}
TarjetaDePlantas::TarjetaDePlantas(int _TiempoDeRecarga, string _NombreDePlanta, float _Dimension, float _PosicionX, int _PosicionY)
{
	TiempoDeRecarga = _TiempoDeRecarga;
	NombreDePlanta = _NombreDePlanta;
	Dimension = _Dimension;
	PosicionX = _PosicionX;
	PosicionY = _PosicionY;
}



void TarjetaDePlantas::LugarTarjetas(float, float)
{
	PosicionX += Dimension;
	PosicionY += Dimension;
}
void TarjetaDePlantas::Recarga(int)
{

}