#include <stdio.h>

void main() {

    float vnumero1, vnumero2, vadicao, vsub, vmult, vdiv;
    int vcodigo;

    printf("Digite o primeiro numero: ");
    scanf("%f", &vnumero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &vnumero2);

    printf("Agora, digite o codigo da operacao, sendo:\n 1 ---- adicao\n 2 ---- subtracao\n 3 ---- multiplicacao\n 4 ---- divisao\n Digite aqui: ");
    scanf("%i", &vcodigo);

    if (vcodigo < 1 || vcodigo > 4)
    {
        printf("Codigo inexistente!");
    }
    else if (vcodigo == 1)
    {
        /* code */
        vadicao = vnumero1 + vnumero2;
        printf("O valor total da adicao e: %f", vadicao);
    }
    else if (vcodigo == 2)
    {
        /* code */
        vsub = vnumero1 - vnumero2;
        printf("O valor total da subtracao e: %f", vsub);
    }
    else if (vcodigo == 3)
    {
        /* code */
        vmult = vnumero1 * vnumero2;
        printf("O valor total da multiplicacao e: %f", vmult);
    }
    else if (vcodigo == 4 && vnumero2 != 0)
    {
        /* code */
        vdiv = vnumero1 / vnumero2;
        printf("O valor total da divisao e: %f", vdiv);
    }
    else if (vnumero2 == 0)
    {
        printf("Nao se pode fazer divisao por zero!");
    }

}
