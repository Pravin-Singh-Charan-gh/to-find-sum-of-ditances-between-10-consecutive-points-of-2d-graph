#include <stdio.h>
#include <math.h>
void main(){
    float x[10],y[10],sum_of_dis=0;
    int i;
    for(i=0;i<10;i++){
        printf("Enter x and y coordinates of point %d:",i+1);
        scanf("%f%f",&x[i],&y[i]);
    }
    for(i=0;i<9;i++)
    sum_of_dis+=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
    printf("Sum of distances between point 1 and point 10=%f\n",sum_of_dis);
}
