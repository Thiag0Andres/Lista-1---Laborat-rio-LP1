#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <string>


class Invoice{
    private:
        int numItem;
        int quantItem;
        double precoItem;
        std::string descricao;
    public:
    //Construtor
        Invoice(int numItem, int quantItem, double precoItem, std::string descricao);

    //Metodos get
        int getNumItem();
        int getQuantItem();
        double getPrecoItem();
        std::string getDescricao();
        double getInvoiceAmount();
    //Metodos set
        void setNumItem(int numItem);
        void setQuantItem(int quantItem);
        void setPrecoItem(double precoItem);
        void setDescricao(std::string descricao);
        void printInf(Invoice *objeto);
};

#endif // INVOICE_H_INCLUDED
