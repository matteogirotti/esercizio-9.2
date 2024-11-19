# include <stdio.h>
float prezzoScontato(float prezzo, float sconto);
int main(void) {
    float prezzo,sconto;
    printf("inserisci il prezzo di vendita: ");
    scanf("%f",&prezzo);
    printf("inserisci lo sconto: ");
    scanf("%f",&sconto);
    printf("%f",prezzoScontato(prezzo,sconto));
    float prezzoScontato(float prezzo,float sconto){
        return prezzo-prezzo/100.0*sconto;
    }
}
