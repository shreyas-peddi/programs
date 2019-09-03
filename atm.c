#include <stdio.h>
int main()
{
  int amount;float bal;
  scanf("%d\n",&amount);
  scanf("%f\n",&bal);
  if(amount%5==0&&amount<=bal)
    {
      bal=bal-amount-0.5;
    }
  printf("%f",bal);
  return 0;
}
