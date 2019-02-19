#include<stdio.h>
int main(){

    char note;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    while(note!='p'){

        printf("Enter a note: ");
        scanf("%c", &note);
        fflush(stdin);

        if(note=='a'){
            a++;
        } else if(note=='b'){
            b++;
        } else if(note=='c'){
            c++;
        } else if(note=='d'){
            d++;
        } else if(note=='e'){
            e++;
        }

    }

    printf("The amount of notes A is: %d\n", a);
    printf("The amount of notes B is: %d\n", b);
    printf("The amount of notes C is: %d\n", c);
    printf("The amount of notes D is: %d\n", d);
    printf("The amount of notes E is: %d\n", e);

    system("pause");
    return(0);

}
