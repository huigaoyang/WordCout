#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int countChar(char input[]){
    int p_input = 0;
    int count = 0;
    bool word = false;
    char ch;

    while(p_input < strlen(input)){
        ch = input[p_input];
        if(ch==' '){
            if(word){ 
                count++;
                word = false;
            }
        }else{ 
            word = true;
        }
        p_input++;
    }
    return count;
}

int main()
{
    char input[256];
    int p_input = 0;
    int count = 0;
    FILE *fp = fopen("text.txt","r");

    fgets(input,256,fp);
    fclose(fp);

    count = countChar(input);
    printf("µ¥´ÊÊý:\n%d\n",count);

    return 0;
}

