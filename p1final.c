#include<stdio.h>
void input(float *base ,float *height)
{
 printf ("enter the base and height\n");
 scanf ("%f%f",base,height);
}
void find_area(float base ,float height,float *area)
{
 *area = 0.5*base*height;
}
void output(float base ,float height ,float area)
{
  printf ("the area of triangle of %f and %f is %f ", base , height , area);
}
void main()
{
  float base , height , area ;
  input(&base ,&height);
  find_area (base , height ,&area);
  output(base , height , area);
  return 0;
}