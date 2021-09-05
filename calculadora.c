int main(void)
{
        float num1,
              num2;
        char oper;

        do
        {
            printf("\t\tCalculadora da bagaça da FIAP\n\n");

            printf("Digite o primeiro número");
            scanf("%f", &num1);
                        
            printf("Digite operação\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf("'*' : multiplicao\n");
            printf("'/' : divisao\n");
            printf("'%%' : resto da divisao\n");
            scanf(" %c",&oper);
            
            printf("Digite o segundo número");
            scanf("%f", &num2);



            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);


            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

}