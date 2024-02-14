
public class Frazione 
{
    // Campi
    private int numeratore;
    private int denominatore;
    // Costruttore

    public static void main(String[] args)
    {
        Frazione f1(8,12)
        Frazione f2(10,21)

    }

    public Frazione() {
        this.numeratore = 0;
        this.denominatore = 1;
    }

    public Frazione(int numeratore, int denominatore) 
    {
        this.numeratore = numeratore;
        this.denominatore = denominatore;
    }

    // Metodo per ottenere il numeratore
    public int getNumeratore()
    {
        return numeratore;
    }

// Metodo per ottenere il denominatore
    public int getDenominatore() 
    {
        return denominatore;
    }

    // Metodo per ottenere la rappresentazione testuale della frazione
    @Override
    public String toString() 
    {
        return numeratore + "/" + denominatore;
    }

    // Metodo per sommare due frazioni
    public Frazione somma(Frazione altraFrazione) 
    {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore
                + altraFrazione.numeratore * this.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;

        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }

    // Metodo per calcolare il Massimo Comune Divisore (MCD) con l'algoritmo di Euclide
    private int calcolaMCD(int a, int b)
    {
        int z, r;
        if (a<b)
        {
            z = a;
            a = b;
            b = z;
        }
        do
        {
            r = a % b;
            if (r == 0) return b;
            a = b;
            b = r;
        }
        while(r!=0);

        return 0;
    }

    // Metodo per semplificare la frazione
    public void semplifica()
    {
        int mcd = calcolaMCD(this.numeratore, this.denominatore);
        if(mcd != 0)
        {
        this.numeratore /= mcd;
        this.denominatore /= mcd;
        }
    }

    // Metodo per moltipicare la frazione
    public Frazione moltiplica(Frazione altraFrazione)
    {
        int nuovoNumeratore = this.numeratore * altraFrazione.numeratore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;
        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }

    // Metodo per sottrarre due frazioni
    public Frazione sottrai(Frazione altraFrazione)
    {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore - altraFrazione.numeratore * this.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;
        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }

    // Metodo per dividere due frazioni
    public Frazione dividi(Frazione altraFrazione)
    {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.numeratore;
        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }
}
