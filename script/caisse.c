#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
double payement;
double valeur_a_payer;
double min = 0.50;
double max = 1000;

double caisse_rand(double min, double max)
{
  double random = ((double) rand()) / RAND_MAX;
  double range = (max - min) * random;
  valeur_a_payer = min + range;
  printf("Le montant que vous devez payer est Rs %0.2f\n",valeur_a_payer);
  printf("Entrez le montant du payement: Rs ");
  
    scanf ("%lf",&payement);
    
    if (payement != valeur_a_payer)
    {
      while (payement < valeur_a_payer)
      {
        printf("Ce montant n'est pas suffisant pour faire ce payement.\n");
        printf("Veuillez entrez de nouveau le montant que vous allez payer:Rs ");
        scanf ("%lf",&payement);
      }
        printf("Le payement est valide. Merci pour vos achats!");
    }
}

int main()
{
  caisse_rand(min,max);
  return 0;
}
