#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
        printf("program name is %s\n",argv[0]);
        if(argc<2)fprintf(stderr,"there were no arguments\n");
        else{
                for(int i=1;i<argc;i++){
                  double x = atof(argv[i]);
                  printf("x=%g \n sin(x)=%g \n cos(x)\n = %g",x,sin(x),cos(x));
                }
        }
return 0;
}
