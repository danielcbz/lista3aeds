#include <stdio.h>
#include <string.h>
float mediaari(float a, float b, float c){
    float media = (a+b+c)/3;
    return media;
}
float mediapond(float a, float b, float c){
    float media = ((a*5)+(b*3)+(c*2))/10;
    return media;
}
int main(){
    int a;
    float nota1, nota2,nota3;
    char es;
    scanf("%d", &a);
    while(a>=0){
    scanf("%f%f%f", &nota1,&nota2,&nota3);
    scanf(" %c", &es);
    if(es=='A' || es=='a'){
        printf("%.2f", mediaari(nota1,nota2,nota3));
    }   
    else if(es=='P' || es=='p'){
        printf("%.2f", mediapond(nota1,nota2,nota3));

    } 
    a--;
    }
    return 0;
}