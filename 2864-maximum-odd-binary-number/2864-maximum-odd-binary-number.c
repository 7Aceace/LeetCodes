char* maximumOddBinaryNumber(char* s){
int z =0, counterone =0, counterzero =0, i;
int length = strlen(s);
for(i =0; i <length; i++)
{

    if(s[i] == '1')
    {
        counterone++;
    }
    else
    {
        counterzero++;
    }
    
}

char* result = (char*)malloc((length + 1) * sizeof(char));
    memset(result, '0', length);
    result[length] = '\0';

    while (z < counterone - 1)
    {
        result[z++] = '1';
    }

    while (z < counterone - 1 + counterzero) {
        result[z++] = '0';
    }

    result[z] = '1';

    return result;

}