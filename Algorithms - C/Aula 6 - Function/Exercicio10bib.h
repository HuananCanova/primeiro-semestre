void divisao()
{
    int resul, resulSoma = 0;
    for (int i = 1000; i <= 9999; i++)
    {
        resul = ((i / 100) + (i % 100));
        resulSoma = (resul*resul);
    
        if (i == resulSoma)
        {
            printf("Valor final: %d\n", i); 
        }
        
    }
}