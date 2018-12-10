
#include <iostream>

using namespace std;

char* string_tokenize(char *word,char delimiter)
{
    static char *input_word=word;
    int i=0;
    while(input_word[i]!=' ')
    {
        if(input_word[i]=='\0')
            return '\0';
        cout<<input_word[i];
        i++;
    }
    cout<<endl;
    if(input_word[i]==' '){
    input_word=input_word+i+1;
    return input_word;
    }
    return '\0';
}
int main()
{
    char *word="Hello guys, how are you?";
    char *output_word;
    output_word=string_tokenize(word,' ');
    while(output_word!='\0'){
       output_word=string_tokenize(NULL,' ');
    }
    return 0;
}
