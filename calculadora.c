// C# program to illustrate the calculator
int main(void){
    float x=0, y=0, resultado=0;
    int op=0;
    do{
        printf("\n###################################################\n");
        printf("\n###   FIAP CALCULATOR - BY GIOVANNI - RM87960   ###");
        printf("\n");
        printf("\n\t1 - SUM\n\t2 - SUB\n\t3 - MULT\n\t4 - DIV\n");
        printf("\n");
        printf("SELECT THE OPTION: ");
        scanf("%i", &op);
        printf("\nTYPE THE FIRST NUMBER: ");
        scanf("%f", &x);
        printf("\nTYPE THE SECOND NUMBER: ");
        scanf("%f", &y);

        switch(op){
            case 1:
                resultado = x+y;
                break;
            case 2:
                resultado = x-y;
                break;
            case 3:
                resultado = x*y;
                break;
            case 4:
                resultado = x/y;
                break;
            default:
                printf("\n SELECT A VALID OPTION\n");
                break;
        }
        printf("\n\THE RESULT IS: %0.2f", resultado);
        printf("\n");
        printf("\n\TYPE ANY KEY TO CONTINUE: ");
        // basic use of "Console.ReadKey()" method
        getch();
        //break;
        op=1;
        system("cls || clear");
    }while(op==1);
}
