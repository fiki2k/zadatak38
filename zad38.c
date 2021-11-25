// Program ce izracunat permutaciju od 2 broja koja korisnik unese.

#include <stdio.h>
 
int main()
{
    int n, r, npr_var;
 
    printf("Unesi vrijednost n:");
    scanf("%d", &n);
    printf("\nUnesi vrijednost  r:");
    scanf("%d", &r);
    
    /*  P(n,r),  formula je:
     * P(n,r) = n! / (n - r)! For 0 <= r <= n.
     */
    npr_var = fact(n) / fact(n - r);
    printf("\nVrijednost od P(%d,%d) je: %d",n,r,npr_var);
    return 0;
}
// Funckcija za izracunjavanje faktorijela.
int fact(int br)
{
    int k = 1, i;
    
    // factorijel od 0 je 1
    if (br == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= br; i++)
    {
            k = k * i;
	}
    }
    return(k);
}
