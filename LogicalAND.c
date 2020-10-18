/*
***********************************************************

Topic   : Program to demonstrate Logical AND ( && ) Operator in c.
Author  : Chpaone09®
Date    : Oct 19, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void main(){
        bool a = true;
        bool b = true;
        bool c = false;
        bool d = false;

        if(a && b){
             printf("\n\n\t Both A and B are True. ");
        }

        if(a && c){
             printf("\n\n\t A is True and C is False. ");
        }

        if(b && c){
             printf("\n\n\t B is True and C is False. ");
        }

        if(c && d){
             printf("\n\n\t Both C and D are FALSE. ");
        }



    
}
