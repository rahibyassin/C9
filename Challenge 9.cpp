#include <unistd.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv){
    int distance , x1 , y1 , x2 , y2;
    printf("donner la coordoner de x1:\n");
    scanf("%d",&x1);
    printf("donner la coordoner de y1\n");
    scanf("%d",&y1);
    printf("donner la coordoner de x2\n");
    scanf("%d",&x2);
    printf("donner la coordoner de y2\n");
    scanf("%d",&y2);
    distance=sqrt((x2-x1)^2+(y2-y1)^2);
    printf("distance=%d",distance);
    
    return 0;
}
