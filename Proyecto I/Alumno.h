#include "Object.h"

class Alumno
{
	public:
		Alumno();
		Alumno(string, string);
		virtual string getCuenta();
		virtual string getNombre();
		virtual void setCuenta(string);
		virtual void setNombre(string);
	protected:
		string cuenta;
		string nombre;	
};