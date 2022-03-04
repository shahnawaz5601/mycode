#include <stdio.h>
int main()
{
  char input;
  float kmsToMiles = 0.621371;
  float inchesToFoot = 0.0833333;
  float cmsToInches = 0.393071;
  float poundToKgs = 0.453592;
  float inchesToMeters = 0.0254;
  float first, second;

  while (1)
  {
    printf("Enter the input charachter. q to quit\n  1.kms t miles\n  2.inches to foot\n  3.cms to inches\n  4.pound to kgs\n  5.inches to metres\n");
    scanf("%c", &input);
    switch (input)
    {

    case 'q':
      printf("Quitting the peogram...");
      goto end;
      break;

    case '1':
      printf("Enter the value in first unit\n");
      scanf("%f", &first);
      second = first * kmsToMiles;
      printf("%f kms is equals to %f in miles\n", first, second);
      break;

    case '2':
      printf("Enter the value in first unit\n");
      scanf("%f", &first);
      second = first * inchesToFoot;
      printf("%f inches is equal to %f in foot\n", first, second);
      break;

    case '3':
      printf("Enter the value in first unit\n");
      scanf("%f", &first);
      second = first * cmsToInches;
      printf("%f cms is equal to %f in inches\n", first, second);
      break;

    case '4':
      printf("Enter the value of first unit\n");
      scanf("%f", &first);
      second = first * poundToKgs;
      printf("%f pound is equals to %f kgs\n", first, second);
      break;

    case '5':
      printf("Enter the value of fist unit\n");
      scanf("%f", &first);
      second = first * inchesToMeters;
      printf("%f inches is equal to %f in Meters\n", first, second);

      break;

    default:

      break;
    }
  }

end:

  return 0;
}
