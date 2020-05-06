#include<stdio.h>
const int m=10;
const int n=10;

int checkresult(int tab[m][n])
{
    int c=0,i,j;
    //check hàng ngang
    int countngang[10]={-1}, countdoc[10]={-1}, countcheo1[10]={-1},countcheo2[10]={-1},win=1;
    for(i=0;i<10;i++) for(j=0;j<10;j++) 
    {if(tab[i][j]==tab[i][j+1]) countngang[j]++;}
    
    //check hàng dọcF
    if(tab[i][j]==tab[i+1][j]) countdoc[i]=1;
    
    //check chéo lên trái~chéo xuống phải, quy định boundary
    if(i<6&&j<6) {if(tab[i][j]==tab[i+1][j+1] && tab[i][j]!=0) countcheo1[i]=1;}
    
    //check chéo xuống trái~chéo lên phải, quy định boundary
    if(i>3&&j>3) {if(tab[i][j]==tab[i+1][j-1] && tab[i][j]!=0) countcheo2[i]=1;}
    
    //đếm các count xem có >=5 để win
    for(j=0;j<10;j++) {
        if(countngang[j]!=0) {if((countngang[j]!=countngang[j+1] && j<j+4)) win=0; else win=1;}
        if(j>5&&win==0) break; }
    for(i=0;i<10;i++) {
        if(countdoc[i]!=0) {if(countdoc[i]!=countdoc[i+1] && i<i+4) win=0; else win=1;}
        if(i>5&&win==0) break; }
    for(i=0;i<10;i++) {
        if(countcheo1[i]!=0) {if(countcheo1[i]!=countcheo1[i+1] && i<i+4) win=0; else win=1;}
        if(countcheo2[i]!=0) {if(countcheo2[i]!=countcheo2[i+1] && i<i+4) win=0; else win=1;}
        if((i>5||i<4) && win==0) break; }
    
    return(win);
}

int main()
{
    int i,j,repeat,won;
    int table[10][10]={};
    
    for (repeat=0;repeat<99999;repeat++)
    {printf("\nplayer 1 nhập tọa độ x y\n"); scanf("%d %d",&i,&j); table[i][j]=1;
    printf("\n");
    //in bảng
    for(i=0;i<10;i++) {for(j=0;j<10;j++) if(table[i][j]==1) printf("X"); else if(table[i][j]==2) printf("O"); else printf("_"); printf("\n");}
    won=checkresult(table); if(won==1) {printf("player 1 win");break;}
    
    printf("\nplayer 2 nhập tọa độ x y\n"); scanf("%d %d",&i,&j); table[i][j]=2;
    printf("\n");
    //in bảng
    for(i=0;i<10;i++) {for(j=0;j<10;j++) if(table[i][j]==2) printf("o"); else if(table[i][j]==1) printf("X"); else printf("_"); printf("\n");}
    won=checkresult(table); if(won==1) {printf("player 2 win");break;} }
    
    return 0;
}