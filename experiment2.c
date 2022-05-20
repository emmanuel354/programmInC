#include<stdio.h>

int main(){
    /*
    char name[20];
    char color[10];
    char noun[15];
    char verb[15];
    printf("enter your name \n");
    scanf("%s", name);
    printf("my name is %s", name);

    */
    /*
    printf("Enter a color of your choice: ");
    scanf("%s", color);
    printf("Enter a noun of your choice: ");
    scanf("%s", noun);
    printf("Enter a verb of your choice: ");
    scanf("%s", verb);
    printf("Roses are %s \n", color);
    printf("%s are blue. \n", noun);
    printf("I love %s", verb);
    */
    //finding size of an array
    /*
    int i;
    int sizeofArray;
    int myArray[] = {43, 5, 34, 434, 67, 60};//6 entities
    int length = sizeof(myArray);
    printf("the size is : %d", length);
    // length of an array =sizeof(arr)/sizeof(int)
    sizeofArray = sizeof(myArray)/sizeof(int);
    printf("the size of my array is : %d", sizeofArray);
    */

    //printing arrays
    /*
    int i, sizeofArray;
    int myArray[] = {43, 5, 34, 434, 67, 60};//6 entities
    sizeofArray = sizeof(myArray)/sizeof(int);
    for(i=0; i<sizeofArray; i++){
        printf("%d ", myArray[i]);
    }*/
    //2d array and nested loop
    //int my2DArr[3][2] = {{45, 34}, {34, 80}, {444, 455}};
    //printing multi dimensional array
    /*
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d ", my2DArr[i][j]);
        }
        printf("\n");
    }
    */
    //pointers
    /*
    int x;
    x =5;
    int *ptr;
    ptr = &x;//assigns address of x to pointer ptr
    *ptr = 6;// changing value of object x
    printf("%d\n", *ptr); //we can also say printf("%d\n", *ptr); which will give similar output
    */


    return 0 ;
}
