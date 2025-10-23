#include<stdio.h>
void TicTakToe();
char Board[] = {'0','1','2','3','4','5','6','7','8','9'};


int main() {
    int player=1,inputone,inputtwo,input3,input4,input5,input6,input7,input8,input9;
    TicTakToe();
    char mark1=(player=1) ? 'X' : 'O';
    printf("write the number player 1 on which position you want to print : ");
    scanf("%d",&inputone);
    Board[inputone]= mark1;
    if (inputone < 1 || inputone > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark2=(player=2) ? 'O' : 'X';
    printf("write the number player 2 on which position you want to print : ");
    scanf("%d",&inputtwo);
    Board[inputtwo]= mark2;
    if (inputtwo < 1 || inputtwo > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark3=(player=1) ? 'X' : 'O';
    printf("write the number player 1 on which position you want to print : ");
    scanf("%d",&input3);
    Board[input3]= mark3;
    if (input3 < 1 || input3 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark4=(player=2) ? 'O' : 'X';
    printf("write the number player 2 on which position you want to print : ");
    scanf("%d",&input4);
    Board[input4]= mark4;
    if (input4 < 1 || input4 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark5=(player=1) ? 'X' : 'O';
    printf("write the number player 1 on which position you want to print : ");
    scanf("%d",&input5);
    Board[input5]= mark5;
    if (input5 < 1 || input5 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark6=(player=2) ? 'O' : 'X';
    printf("write the number player 2 on which position you want to print : ");
    scanf("%d",&input6);
    Board[input6]= mark6;
    if (input6 < 1 || input6 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark7=(player=1) ? 'X' : 'O';
    printf("write the number player 1 on which position you want to print : ");
    scanf("%d",&input7);
    Board[input7]= mark7;
    if (input7 < 1 || input7 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark8=(player=2) ? 'O' : 'X';
    printf("write the number player 2 on which position you want to print : ");
    scanf("%d",&input8);
    Board[input8]= mark8;
    if (input8 < 1 || input8 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    char mark9=(player=1) ? 'X' : 'O';
    printf("write the number player 1 on which position you want to print : ");
    scanf("%d",&input9);
    Board[input9]= mark9;
    if (input9 < 1 || input9 > 9) {
        printf("INVALID INPUT WRITE FROM THE GIVEN NUMBER");
    }
    TicTakToe();
    int checkWin();
    }

void TicTakToe() {
   printf("\n");
   printf(" **TIC TAK TOE**\n\n");
   printf("     |     |     \n");
   printf("  %c  |  %c  |  %c  \n",Board[1],Board[2],Board[3]);
   printf("_____|_____|_____\n");
   printf("     |     |     \n");
   printf("  %c  |  %c  |  %c  \n",Board[4],Board[5],Board[6]);
   printf("_____|_____|_____\n");-
   printf("     |     |     \n");
   printf("  %c  |  %c  |  %c  \n",Board[7],Board[8],Board[9]);
   printf("     |     |     \n\n");
}

int checkWin() {
    if (Board[1]==Board[2] && Board[2]==Board[3]) {
        return 1;
    }
    if (Board[1]==Board[4] && Board[4]==Board[7]) {
        return 1;
    }
    if (Board[4]==Board[5] && Board[5]==Board[6]) {
        return 1;
    }
    if (Board[2]==Board[5] && Board[5]==Board[8]) {
        return 1;
    }
    if (Board[7]==Board[8] && Board[8]==Board[9]) {
        return 1;
    }
    if (Board[3]==Board[6] && Board[6]==Board[9]) {
        return 1;
    }
    if (Board[1]==Board[5] && Board[5]==Board[9]) {
        return 1;
    }
    if (Board[3]==Board[5] && Board[5]==Board[7]) {
        return 1;
    }
}