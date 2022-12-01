# include <stdio.h>
# include "my_mat.h"

int global_mat[10][10];

//The program will copy the user input to the global mat.
void mat_input(){ 
    printf("Please enter the matrix[10][10] value:\n");
    for (int i = 0; i < 10; i++)
    {
    printf("For row %d:\n", i);
    for (int j = 0; j < 10; j++)
    {
        printf("\nmy_mat[%d][%d]: ", i, j);
        scanf("%d", &global_mat[i][j]);
    }
    }
}


//The program will print "true" if there is a route from i to j else "false".
void there_is_a_route(int i, int j){
    int dist_mat[10][10];

for (int i = 0; i < 10; i++)
{
    dist_mat[i][i] = 0;
}

for (int i = 1; i < 10; i++)
{
  dist_mat[i][0] = global_mat[i][0];
  dist_mat[0][i] = global_mat[0][i];  
}

for (int k = 0; k < 10; k++)
{
for (int j = 0; j < 10; j++)
{
    if (k == j)
    {
        break;
    }
for (int i = 0; i < 10; i++)
{
    if (i == k && i == j)
    {
        break;
    }
    
if(dist_mat[i][j] > dist_mat[i][k] + dist_mat[k][j])
{
    dist_mat[i][j] = dist_mat[i][k] + dist_mat[k][j];
}
}
}
}   

if (dist_mat[i][j] != 0)
{
    printf("True");
}
else
{
    printf("False");
}

}

/*  _ 
   1|0
   2| 0
   3|  0
   4|   0
   5|    0
   6|     0
   7|      0
   8|       0
   9|        0
  10|         0
   -
*/

//If the answer is "true" the program will print the shortest route from i to j.
int sortest_route(int i, int j){
int dist_mat[10][10];

for (int i = 0; i < 10; i++)
{
    dist_mat[i][i] = 0;
}

for (int i = 1; i < 10; i++)
{
  dist_mat[i][0] = global_mat[i][0];
  dist_mat[0][i] = global_mat[0][i];  
}

for (int k = 0; k < 10; k++)
{
for (int j = 0; j < 10; j++)
{
    if (k == j)
    {
        break;
    }
for (int i = 0; i < 10; i++)
{
    if (i == k && i == j)
    {
        break;
    }
    
if(dist_mat[i][j] > dist_mat[i][k] + dist_mat[k][j])
{
    dist_mat[i][j] = dist_mat[i][k] + dist_mat[k][j];
}
}
}
}

if (dist_mat[i][j] > 0)
{
    return dist_mat[i][j];
}
else
{
    return -1;
}
}



