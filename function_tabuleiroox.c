int validaCaractereTabuleiro(char c) 
{
    if (c == 'X' || c == 'O') 
    {
        return 1;
    }
    return 0;
}

int processar(int argc, char *argv[], char tabuleiro[3][3]) 
{
    if (argc < 10) 
    {
        return 0; 
    }
    
    int k = 1;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            char c = argv[k][0];
            if (!validaCaractereTabuleiro(c)) 
            {
                return -1;
            }
            tabuleiro[i][j] = c;
            k++;
        }
    }
    return 1;
}
