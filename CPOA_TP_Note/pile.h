#ifndef __PILE__
#define __PILE__

#include <iostream>
#include <assert.h>

template<typename T>
class Pile{
protected:
    T* data;
    int size;
    int nbr_elem;

public:
    Pile();
    Pile(const Pile& p);

    //Probleme de corruption mémoire et double free
    // Vu avec Monsieur GrosJean

    ~Pile(){
        //std::cout << data << std::endl;
        //delete[] data;
        //std::cout << "destruct" << std::endl;
    }

    T operator[](int index)const;
    T& operator[](int index);

    T operator()(int index)const;

    T* getPtr() const;
    int getSize() const;
    int getNbrElem() const;

    T head();
    Pile<T> push(const T& elem);

    Pile<T> pop();

    bool empty();

    Pile<T> operator+(const Pile<T>& pile);

    inline friend std::ostream& operator<<(std::ostream& os, const Pile<T>& p){
       for(int i=0;i<p.getNbrElem();i++){
        os << p[i] << " ";
       }
       return os;
    }

};


typedef Pile<int> PileInt;
typedef Pile<std::string> PileString;

#include "pile.hpp"

#endif


