#include <stdio.h>
#include <math.h>

void funcion(double theta_1,double theta_2,double theta_3,double *x,double *y,double *z) {
    
    *x = cos(theta_1)*(3.6*cos(theta_2) + 7.7*cos(theta_2 + theta_3));

    *y = sin(theta_1)*(3.6*cos(theta_2) + 7.7*cos(theta_2 + theta_3));

    *z = 8.9 + 3.6*sin(theta_2) + 7.7*sin(theta_2 + theta_3);
}

int main(){

      double theta1 = 0, theta2 = 0, theta3 = 0;
      
      double resultadoX, resultadoY, resultadoZ; 

      funcion(theta1, theta2, theta3, &resultadoX, &resultadoY, &resultadoZ);
      
      printf("X = %lf, Y = %lf, Z = %lf\n", resultadoX, resultadoY, resultadoZ);

      return 0;
}

 