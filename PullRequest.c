/********************************************************

This code is not for execution but rather for demonstrating changes made by contributors before merging.

At each PR, you MUST inform the information including your order of PR, name, date, a general purpose of your PR and a verification that you have tested your code in main.c

NOTE: To run the code in main.c, you'll have to COMMENT all of the code below

********************************************************/

// PR 1: 
// Author: Khanh
// Date: May 5th, 2020
// Purpose: Refractor old code for better readability
// Test: Successfully but NOT the same as the old code

// for (repeat=0;repeat<99999;repeat++){
//   printf("player 1 nhập tọa độ x y\n"); 
//   scanf("%d %d\n",&i,&j); 
//   table[i][j]=1;
//   //in bảng
//   for(i=0;i<10;i++){
//     for(j=0;j<10;j++){
//       if(table[i][j]==1){ printf("X"); 
//       }else if(table[i][j]==2){ printf("O"); 
//       }else{ printf("_"); }
//     }
//       printf("\n");
//   }
//   won=checkresult(table); 
//   if(won==1) {
//     printf("player 1 win");break;
//   }
  
//   printf("player 2 nhập tọa độ x y\n"); 
//   scanf("%d %d\n",&i,&j); 
//   table[i][j]=2;
//   //in bảng
//   for(i=0;i<10;i++) {
//     for(j=0;j<10;j++){
//       if(table[i][j]==2){
//         printf("O"); 
//       }else if(table[i][j]==1){
//         printf("X"); 
//       }else {printf("_");}
//     }
//       printf("\n");
//   }
//   won=checkresult(table); 
//   if(won==1){
//     printf("player 2 win");
//     break;
//   }
// }
