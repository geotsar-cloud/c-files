
char *strcat(char *s1,const char *s2){
    
    int i,j,k ;  // i = length of s1 , j = length of s2

    for (i=0;s1[i] != '\0'; i++);
    for (j=0;s2[j] != '\0'; j++);

    for(k=i;(k-i)<=j;k++){
        s1[k] = s2[k-i]; 
    }
    s1[i+j]='\0';
    return s1;
}

unsigned int mystrlen(const char *s){

    unsigned int i=0;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}

/*char *strcpy(char *s1,const char *s2){
    char *origs1 = s1;
    while ( *s1++ = *s2++ );
    return origs1;
}*/

/*char *strcpy(char *s1,const char *s2){
    char *origs1 = s1;
    while ( *s1 != '\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    return origs1;
}*/

char *strcpy(char *s1,const char *s2){
    char *origs1 = s1;
    int i=0;
    while ( s1[i] != '\0' ){
        s1[i]=s2[i];
        i++;
    }
    return origs1;
}



/*
void main(void){
char a0[30];    
char a1[]= "HELLO WORLD" ;
char a2[]= "world hello" ;

printf("\n a1 = %s",a1);
printf("\n a2 = %s\n",a2);

printf("\n a1 length is : %u",mystrlen(a1));
printf("\n a2 length is : %u",mystrlen(a2));

strcpy(a0,"test");
strcat(a0,a1);
strcat(a0,a2);

printf("\n a0 = %s\n",a0);


}
*/

