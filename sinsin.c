#include <stdio.h>
#include <math.h>

int main(int argc,char **argv){
  double a=atof(argv[1]);
  double f=atof(argv[2]);
  double n=atof(argv[3]);
  int i;
  for(i=0;i<n;i++){
    short b=a*sin(2*pi*f*i/44100);
    printf("%d %d\n",i,(int)b);
  }
  return 0;
}
