
Points to Remember:

%[^\n] It takes string including spaces till it gets newline character

%s takes the string till the space character

strcmp() will return 0 if both the strings are equal



Constant pointer and pointer to constant:

char str1[] = "hello" -->Tstr1 acts as a constant pointer to a string
        ->str1 = "hi"; constant pointer cannot be changed
        ->str1 = str2; constant pointer connot be changed
        ->str1++;      constant pointer connot be changed
        ->*str = 'H';  works because string is not constant
        ->Here address cannot be changed and the variable value can change

char *p = "Hello" -->p acts as a pointer to constant string
        ->p = "Hi";    works because pointer is not constant
        ->p = s;       
        ->p++;    
        ->*p = 'H'     It will not work because string is constant cannot be changed
        ->Here address can be changed and the variable is constant that cannot be changed



Prototypes:

size_t strlen(const char *s);

strcpy():   strcpy(chat *t,const char *s);
            void xstrcpy(char *t,const char *s)

strncpy():  strncpy(chat *t,const char *s,size_t num);


strcat():   strcat(char *s1,const char *s2);
            void xstrcat(char *s1,const char *s2)

strncat():  strcat(char *s1,const char *s2,size_t num);



strcmp():   strcmp(const char *s1,const char *s2);
            int xstrcmp(const char *s1,const char *s2)

strncmp():   strncmp(const char *s1,const char *s2,size_t num);   



strchr():   strchr(const char *str,int character);
            void xstrchr(const char *str,int character)
            //It finds the first occurance of the character

strrchr():  strrchr(const char *str,int character);
            void xstrrchr(const char *str,int character)
            //This function finds the last occurance of the character in the string

strstr():   strstr(const char *str,const char *substr);
            void xstrstr(const char *str,const char *substr)

strdup():   strdup(const char *s);
            void xstrdup(const char *s)
            //It creates duplicate of the string

strset():   strset(char *str,int ch);
            void xstrset(char *str,int c)
            //It sets all the characters of the string to the character which we have specified

strlwr(),strupr() -->converts string to upper and lower characters
           -> strlwr(char *s);
            void xstrlwr(char *s);
           ->strupr(char *s);
            void xstrupr(char *s);



