#include <stdio.h>
#include <math.h>


int main() {
    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);
    int color_code[5][3]={
        {0,0,0},   
        {255,0,0}, 
        {0,255,0},  
        {0,0,255}, 
        {255,255,255} 
    };
    char color_name[5][10]={
        "Black",
        "Red",
        "Green",
        "Blue",
        "White"
    };
    int distance;
    //calculer la distance entre (r,g,b) et chaque couleur dans color_code
    int min_distance=1000000;
    int closest_color_index=-1;
    for (int i=0;i<5;i++){
        distance=sqrt((r - color_code[i][0]) * (r - color_code[i][0]) +
                 (g - color_code[i][1]) * (g - color_code[i][1]) +
                 (b - color_code[i][2]) * (b - color_code[i][2]));
        if (distance<min_distance){
            min_distance=distance;
            closest_color_index=i;
        }
    }
    printf("The nearest color is %s\n", color_name[closest_color_index]);
    
    return 0;

}
