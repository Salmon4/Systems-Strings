#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen1(char *s){
  int counter = 0;
  while (s[counter] != '\0'){//keeps going until the null/end is encountered
    counter++;
  }
  return counter;
}

char * strcpy1( char *dest, char *source ){
  int counter = 0;
  while(source[counter] != '\0'){
    dest[counter] = source[counter]; //copies over char as the while loop goes through source
    counter++;
  }
  dest[counter] = '\0'; //add a ending null to the dest
  return dest;
}

char * strncat1( char *dest, char *source, int n){
  int counter = strlen(dest); //this is the length of dest
  int counter2 = 0; //position of the currrent index of source
  while (n != 0){ //the amount of char that is added
    dest[counter] = source[counter2]; //adds to the end of dest
    counter++; //the end index increases
    counter2++; //the index of the char needed to copy over is increased by 1
    n--; //amount of char left to copy over is decreased by 1 everytime
  }
  dest[counter] = '\0'; //add a ending null to the dest
  return dest;
}

int strcmp1( char *s1, char *s2 ){
  int length1 = strlen(s1);
  int length2 = strlen(s2);
  if (length1 < length2){ //first case
    int i;
    for (i = 0; s1[i] != '\0'; i++){
      if (s1[i] < s2[i]){
        return -1; //returns -1 if s1<s2 and stops there
      }
      if (s1[i] > s2[i]){
        return 1; //returns 1 if s1>s2 and stops
      }
    }
    return -1; //because s2 has the longer length and the first portion of both words are the same, s2 is larger by default
  }

  if (length2 < length1){ //second case
    int k;
    for (k = 0; s2[k] != '\0'; k++){
      if (s2[k] < s1[k]){
        return 1;
      }
      if (s2[k] > s1[k]){
        return -1;
      }
    }
    return 1;
  }

  if (length1 == length2){ //third case
    int h;
    for (h = 0; s1[h] != '\0'; h++){
      if (s1[h] < s2[h]){
        return -1;
      }
      if (s1[h] > s2[h]){
        return 1;
      }
    }
    return 0;
  }
}

char * strchr1( char *s, char c ){
  int i;
  for (int i = 0; s[i] != '\0'; i++){ //goes through entire word
    if (s[i] == c){
      return s + i; //if c is found, pointer of index is returned
    }
  }
  return '\0'; //returned null if no c is found
}

char * strstr1( char *s1, char * s2){
  int k;
  int i;
  int cont; //acts as a boolean. 0 is false and everything else is true
  for (k = 0;k < strlen(s1) - strlen(s2) + 1; k++){ //loops through s1 but doesn't go over the limit of where s2 could be
    cont = 1; //continue = true
    for (i = 0;cont && i < strlen(s2); i++){
      if (s1[k + i] != s2[i]){
        cont = 0; //if not found, stops immediately and for loop continues
      }
    }
    if (cont){ //if cont never becomes false, it means the entire word was found in s1 starting at s1+k;
      return s1 + k;
    }
  }
  return '\0'; // if nothing is found, null is returned
}
