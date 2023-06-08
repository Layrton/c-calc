#include <stdio.h>

int main()
{
  char operador;
  double num_1, num_2, resultado;

  printf("Digite um operador aritmetico, exemplo: (+, -, * ou /): ");
  scanf(" %c", &operador);

  // Verifica se o operador é válido antes de continuar a execução do programa.
  if (operador != '+' && operador != '-' && operador != '*' && operador != '/')
  {
    printf("Operador Invalido\n");
    return 1;
  }

  printf("Digite dois numeros: ");
  // Verifica se o número é valido.
  if (scanf("%lf %lf", &num_1, &num_2) != 2)
  {
    printf("Por favor, digite apenas numeros.\n");
    return 1;
  }

  switch (operador)
  {
  case '+':
    resultado = num_1 + num_2;
    printf("O resultado de %.1lf + %.1lf é igual a: %.1lf\n", num_1, num_2, resultado);
    break;
  case '-':
    resultado = num_1 - num_2;
    printf("O resultado de %.1lf - %.1lf é igual a: %.1lf\n", num_1, num_2, resultado);
    break;
  case '*':
    resultado = num_1 * num_2;
    printf("O resultado de %.1lf * %.1lf é igual a: %.1lf\n", num_1, num_2, resultado);
    break;
  case '/':
    if (num_2 != 0)
    {
      resultado = num_1 / num_2;
      printf("O resultado de %.1lf / %.1lf é igual a: %.1lf\n", num_1, num_2, resultado);
    }
    else
    {
      printf("Não é permitida a divisão por zero.\n");
    }
    break;
  default:
    printf("Erro na operação.\n");
    break;
  }

  return 0;
}