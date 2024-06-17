#include <stdio.h>
#include "yksikko_muunnos.h"

void valikko() {
  int iValinta;

  printf("Tämä ohjelma muuntaa yhdysvaltalaisia yksiköitä SI-yksiköiksi\n");

  do {
    printf("Mahdolliset toiminnot:\n");
    printf("1) Pituus\n");
    printf("2) Massa\n");
    printf("3) Tilavuus\n");
    printf("4) Lämpotila\n");
    printf("0) Lopeta\n");
    printf("Anna valintasi: ");
    scanf("%d", &iValinta);

    switch (iValinta) {
      case 0:
        printf("Kiitti\n");
        break;
      case 1:
        muunnaPituus();
        break;
      case 2:
        muunnaMassa();
        break;
      case 3:
        muunnaTilavuus();
        break;
      case 4:
        muunnaLampotila();
        break;
      default:
        printf("ei valinta");
        break;
    }

  }while (iValinta != 0);
}

float kysyArvo() {
  float fLuku;

  printf("\nAnna muutettava arvo: ");
  scanf("%f", &fLuku);

  return fLuku;
}


int muunnaPituus() {
  float fPituus;
  int iPituusValinta;

  printf("\nValitse pituusyksikkö seuraavien joukosta\n");
  printf("1) Tuuma (in)\n");
  printf("2) Jalka (ft)\n");
  printf("3) Jaardi (yd)\n");
  printf("4) Maili (mi)\n");
  printf("Anna valintasi: ");
  scanf("%d", &iPituusValinta);

  switch (iPituusValinta) {
    case 1:
      fPituus = kysyArvo();
      printf("%5.3f in on %5.3f m\n", fPituus, fPituus * in);
      printf("\n");
      break;
    case 2:
      fPituus = kysyArvo();
      printf("%.3f ft on %.3f m\n", fPituus, fPituus * ft);
      printf("\n");
      break;
    case 3:
      fPituus = kysyArvo();
      printf("%.3f yd on %.3f m\n", fPituus, fPituus * yd);
      printf("\n");
      break;
    case 4:
      fPituus = kysyArvo();
      printf("%.3f mi on %.3f m\n", fPituus, fPituus * mi);
      printf("\n");
      break;
    default:
      printf("Yksikkoa ei olemassa.\n");
      printf("\n");
      break;
  }

  return 0;
}

int muunnaMassa() {
  float fMassa;
  int iMassaValinta;

  printf("\nValitse painoyksikkö seuraavien joukosta\n");
  printf("1) Unssi (oz)\n");
  printf("2) Pauna (lb)\n");
  printf("\nAnna valintasi: ");
  scanf("%d", &iMassaValinta);

  switch (iMassaValinta) {
    case 1:
      fMassa = kysyArvo();
      printf("%.3f oz on %.3f g\n", fMassa, fMassa * oz);
      printf("\n");
      break;
    case 2:
      fMassa = kysyArvo();
      printf("%.3f lb on %.3f g\n", fMassa, fMassa * lb);
      printf("\n");
      break;
    default:
      printf("Yksikkoa ei olemassa.\n");
      break;
  }
  return 0;
}

int muunnaTilavuus() {
  float fTilavuus;
  int iTilavuusValinta;

  printf("\nValitse nestetilavuusyksikkö seuraavien joukosta\n");
  printf("1) Kupillinen (cp)\n");
  printf("2) Pintti (pt)\n");
  printf("3) Varttigallona (qt)\n");
  printf("4) Gallona (gal)");
  printf("\nAnna valintasi: ");
  scanf("%d", &iTilavuusValinta);

  switch (iTilavuusValinta) {
    case 1:
      fTilavuus = kysyArvo();
      printf("%.3f cp on %.3f l\n", fTilavuus, fTilavuus * in);
      printf("\n");
      break;
    case 2:
      fTilavuus = kysyArvo();
      printf("%.3f pt on %.3f l\n", fTilavuus, fTilavuus * ft);
      printf("\n");
      break;
    case 3:
      fTilavuus = kysyArvo();
      printf("%.3f qt on %.3f l\n", fTilavuus, fTilavuus * yd);
      printf("\n");
      break;
    case 4:
      fTilavuus = kysyArvo();
      printf("%.3f gal on %.3f l\n", fTilavuus, fTilavuus * mi);
      printf("\n");
      break;
    default:
      printf("Yksikkoa ei olemassa.\n");
      break;
  }
  return 0;
}

int muunnaLampotila() {
  float fCelsius;
  float fFahrenheit;
  printf("Lampotilamuunnos Fahrenheit-asteista Celsius-asteiksi\n");
  
  fFahrenheit = kysyArvo();
  fCelsius = (5.0 / 9.0) * (fFahrenheit - 32);
  printf("%.3f °F on %.3f °C\n", fFahrenheit, fCelsius);
  printf("\n");

  return 0;
}


