#include <stdio.h>

char *mystrtok (char *str1, const char *str2){
    static char *x, *preRemember;
    if (str1 != '\0'){
	x = str1;
	preRemember = x;
    }
    else {
	preRemember = x;
    }
    while (*x){
	if (*x == str2[0]){
	    *x = '\0';
	    x++;
	    return preRemember;
	}
        x++;
	if (*x == '\0'){
	    return preRemember;
	}
    }
}

int main(){
    char *result;
    char str[20] = "I Love You Always.";
    result = mystrtok (str, " ");

    while (result != NULL){
        printf("%s\n", result);
	result = mystrtok (NULL, " ");
    }
}
