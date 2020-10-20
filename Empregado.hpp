#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double salarioHora;  

    double pagamentoMes(double horasTrabalhadas) {
      double horasMes = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double extra = horasTrabalhadas - 8;
        horasMes += extra / 2;
      }
	  return horasMes * salarioHora;
    }
	
};

#endif
