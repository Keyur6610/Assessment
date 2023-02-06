#include <stdio.h>

int main ()
{

  int a[2][2];
  int b[2][2];
  int c[2][2];
  int i, j, k;

  printf ("Matrix Multiplication \n\n");
  printf ("-------------Matrix 1-----------\n\n");


  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
	{
	  printf ("enter element : ");

	  scanf ("%d", &a[i][j]);

	}
    }
  printf ("\n");
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
	{
	  printf ("%d", a[i][j]);
	  printf (" ");
	}
      printf ("\n");
    }
  printf ("\n");
  printf ("-------------Matrix 2-------------\n\n");


  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{
	  printf ("enter element : ");
	  scanf ("%d", &b[i][j]);
	}
    }
  printf ("\n");
  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{
	  printf ("%d", b[i][j]);
	  printf (" ");
	}

      printf ("\n");

    }

  printf ("\n");
  printf ("-------------Result : Multiplication Matrix--------------- \n\n");

  for (i = 0; i < 2; i++)
    {

      for (j = 0; j < 2; j++)
	{

	  c[i][j] = 0;

	  for (k = 0; k < 2; k++)
	    {


	      c[i][j] += a[i][k] * b[k][j];


	    }

	  printf ("%d", c[i][j]);
	  printf ("   ");

	}
      printf ("\n");
    }

  printf ("\n\n-----------------------");

  return 0;
}
