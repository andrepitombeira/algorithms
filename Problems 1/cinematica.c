#include<stdio.h>
void calc_posicao_velocidade(float *v, float *s,float s0,float v0,float a,float t);

int main(void){

    float s0, v0, a, t, v, s;
    printf("Digite o espaco inical\n");
    scanf("%f", &s0);
    printf("Digite a velocidade inicial\n");
    scanf("%f", &v0);
    printf("Digite a aceleracao\n");
    scanf("%f", &a);
    printf("Digite o tempo\n");
    scanf("%f", &t);
    calc_posicao_velocidade(&v, &s, s0, v0, a, t);
    printf("O espaco e: %f\n", s);
    printf("A velocidade e: %f\n", v);
}
 
 void calc_posicao_velocidade(float *v, float *s,float s0,float v0,float a,float t){
      
      *v = v0 + a * t;
      *s = s0 + v0 * t + (a * t * t/2);

}
