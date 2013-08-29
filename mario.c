/****************************************************************************
 * mario.c
 *
 * Vijay Kumar G C
 * vjkmr5492@gmail.com
 *
 * This program recreates the half pyramid of MARIO game using hash(#) 
 * character for blocks.
 *
 ***************************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
      int height = 50;
      
      //Take proper input for height from the user
      while((height<0) || (height>23))
      {
          printf("Height: ");
          height=GetInt();
      }
      
      
      // Recreates the block using hashes.
      // variable i represents the line number here
      for(int i=1;i<=height;i++)
      {
          
          // Print required number of spaces.
          int j=1;
          while(j<=(height-i))
          {
              printf(" ");
              j++;
          }
          
          
          // Print hashes,static variable is used so that variable k doesn't get 
          // initialised on every iteration.
          
          int l=1;
          while(l<=i)
          {
              printf("#");
              l++;
          }
          
          printf("  ");
          l=1;
          while(l<=i)
          {
              printf("#");
              l++;
          }
          
          
          
          //move to next line
          printf("\n");
      }
             
      return 0;
}           
