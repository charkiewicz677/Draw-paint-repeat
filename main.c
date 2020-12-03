#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 200
#define number_of_tries 1000000

int box[size];
int number_of_occurances[size];

void clean_box();
int draw_random_until_white();


int main() {

    FILE *fptr;
    fptr = fopen("rozmiar200.txt", "w");

    int seed;
    time_t tt;
    seed = time(&tt);
    srand(seed);

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }


    for(int i=0; i<size; i++) number_of_occurances[i] = 0;

    for(int i=0; i<number_of_tries; i++){
        clean_box();
        int number_of_draws = draw_random_until_white();
        number_of_occurances[number_of_draws]++;
    }

    for(int i=0; i<size; i++) fprintf(fptr, "%d\n", number_of_occurances[i]);
    fclose(fptr);
    return 0;
}
int draw_random_until_white(){
    int counter = 0;
    int random = rand()%size;
    while(!box[random]) {
        counter++;
        box[random] = 1;
        random = rand()%size;
    }
    return counter;

}

void clean_box(){
for(int i=0; i<size; i++) box[i] = 0;
}
