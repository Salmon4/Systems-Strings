#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "str.h"

int main() {

  char s1[100];
  char s2[100] = "hello";
  char s3[100] = "goodbye";

  printf("start strings:\n");
  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n", s3);

  printf("\nTesting strlen(s2):\n");
  printf("[standard]:\t%lu\n", strlen(s2) );
  printf("[mine]:\t\t%d\n", strlen1(s2) );

  printf("\nTesting strcpy(s1, s2):\n");
  printf("[standard]:\t[%s]\n", strcpy(s1, s2) );
  printf("[mine]:\t\t[%s]\n", strcpy1(s1, s2) );

  printf("\nTesting strncat(s1, s2, 3):\n");
  printf("[standard]:\t[%s]\n", strncat(s1, s2, 3) );
  s1[12] = 0;
  printf("[mine]:\t\t[%s]\n", strncat1(s1, s2, 3) );

  printf("\nTesting strchr(s1, 'l'):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 'l') );
  printf("[mine]:\t\t[%p]\n", strchr1(s1, 'l') );

  printf("\nTesting strchr(s1, 0):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 0) );
  printf("[mine]:\t\t[%p]\n", strchr1(s1, 0) );

  printf("\nTesting strchr(s1, 'z'):\n");
  printf("[standard]:\t[%p]\n", strchr(s1, 'z') );
  printf("[mine]:\t\t[%p]\n", strchr1(s1, 'z') );

  printf("\nTesting strcmp\n");
  printf("\tComparting ab to abc:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("ab", "abc") );
  printf("\t\t[mine]:\t\t[%d]\n", strcmp1("ab", "abc") );
  printf("\tComparting abc to ab:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("abc", "ab") );
  printf("\t\t[mine]:\t\t[%d]\n", strcmp1("abc", "ab") );
  printf("\tComparting abc to abc:\n");
  printf("\t\t[standard]:\t[%d]\n", strcmp("abc", "abc") );
  printf("\t\t[mine]:\t\t[%d]\n", strcmp1("abc", "abc") );

  return 0;
}
/**
int main(){
  char *word1 = "Word";
  char word2[] = "Another";
  char word3[] = "NotAnother";
  char reset1[] = "Another";
  char reset2[] = "NotAnother";
  printf("word1: [%s]\n",word1);
  printf("word2: [%s]\n",word2);
  printf("word3: [%s]\n\n",word3);

  printf("Testing strlen and strlen1 (word1): \n");
  printf("The length of Word using strlen is: %d\n", strlen(word1));
  printf("The length of Word using strlen1 is: %d\n\n", strlen1(word1));

  printf("Testing strcpy and strcpy1 (word3, word2): \n");
  printf("The copied word using strcpy is %s\n",strcpy(word3,word2));
  strcpy(word2,reset1);
  strcpy(word3,reset2);
  printf("The copied word using strcpy1 is %s\n\n",strcpy1(word3,word2));
  strcpy(word2,reset1);
  strcpy(word3,reset2);

  printf("Testing strncat and strncat1 (word3, word2, 7): \n");
  printf("The final word using strncat is %s\n", strncat(word3,word2,7));
  strcpy(word2,reset1);
  strcpy(word3,reset2);
  printf("The final word using strncat1 is %s\n\n", strncat1(word3,word2,7));
  strcpy(word2,reset1);
  strcpy(word3,reset2);

  printf("Testing strcmp and strcmp1: \n");
  printf("Comparing Another and NotAnother using strcmp gives %d\n",strcmp(word2,word3));
  printf("Comparing Another and NotAnother using strcmp1 gives %d\n",strcmp1(word2,word3));
  printf("Comparing NotAnother and Another using strcmp gives %d\n",strcmp(word3,word2));
  printf("Comparing NotAnother and Another using strcmp1 gives %d\n",strcmp1(word3,word2));
  printf("Comparing Another and Another using strcmp gives %d\n",strcmp(word2,word2));
  printf("Comparing Another and Another using strcmp1 gives %d\n\n",strcmp1(word2,word2));

  printf("Testing strchar and strchar1 (word2,'e'): \n");
  printf("The pointer using strchar is %p \n", strchr(word2,'e'));
  printf("The pointer using strchar1 is %p \n\n", strchr1(word2,'e'));

  printf("Testing strstr and strstr1 (word3, word2): \n");
  printf("The pointer using strstr is %p\n", strstr(word3,word2));
  printf("The pointer using strstr1 is %p\n\n", strstr1(word3,word2));
}
**/
