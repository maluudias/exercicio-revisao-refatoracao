#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro *eng1 = new Engenheiro();
  std::cout << "Nome: " << eng1.nome << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.50) << std::endl;
  std::cout << "Projetos: " << eng1.projetos << std::endl;
  std::cout << std::endl;
  
 Engenheiro *eng2 = new Engenheiro();
  std::cout << "Nome: " << eng2.nome << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8.00) << std::endl;
  std::cout << "Projetos: " << eng2.projetos << std::endl;  
  std::cout << std::endl;
  
  Engenheiro *eng3 = new Engenheiro();
  std::cout << "Nome: " << eng3.nome << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8.00) << std::endl;
  std::cout << "Projetos: " << eng3.projetos << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor *vend1 = new Vendedor();
  std::cout << "Nome: " << vend1.nome << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6.00) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
 Vendedor *vend2 = new Vendedor();
  std::cout << "Nome: " << vend2.nome << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8.00) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor *vend3 = new Vendedor();
  std::cout << "Nome: " << vend3.nome << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8.00) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}
