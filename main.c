#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    const int N=5;
    int persone[N];
    int maggiorenni=0;
    int i=0;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    while (i<N) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &persone[i]);
        if (persone[i]>=18) {
            maggiorenni++;
        }
        i++;
    }
    printf("\n");
    printf("I maggiorenni sono: %d\n", maggiorenni);
    return (EXIT_SUCCESS);
}
