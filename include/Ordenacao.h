class Ordenacao
{
    private:
        int *vetorOriginal, *vetorOrdenado, aux, menor, pos, trocou, verificou;
        bool troca;
    public:
        Ordenacao(int);
        void bolha(int);
        void bolha_melhorada(int);
        void selecao(int);
        void insercao(int);
        void embaralharVetor(int);
        void mostrarVetor(bool, int);
        int getTrocou();
        int getVerificou();

};
