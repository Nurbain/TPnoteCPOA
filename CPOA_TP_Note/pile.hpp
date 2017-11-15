#include <cassert>

#ifndef PILE_HPP
#define PILE_HPP

#include "pile.h"
#include <stdlib.h>

template<typename T>
Pile<T>::Pile(){
    //data = NULL;
    data = new T[100];
    //std::cout << data << std::endl;
    int size = 25;
    int nbr_elem = 0;
}

template<typename T>
Pile<T>::Pile(const Pile& p){
    this->data =p.getPtr();
    this->size = p.getSize();
    this->nbr_elem = p.getNbrElem();
}

template<typename T>
T Pile<T>::operator()(int index)const {
    return data[index];
}

template<typename T>
T Pile<T>::operator[](int index)const{
    return data[index];
}

template<typename T>
T& Pile<T>::operator[](int index){
    return data[index];
}

template<typename T>
T* Pile<T>::getPtr() const{
    return data;
}

template<typename T>
int Pile<T>::getSize() const{
    return size;
}

template<typename T>
int Pile<T>::getNbrElem() const{
    return nbr_elem;
}

template<typename T>
T Pile<T>::head(){
    return data[nbr_elem-1];
}

template<typename T>
Pile<T> Pile<T>::push(const T& elem){
    /*if((*this).size<(*this).nbr_elem){
        (*this).size += 10;
        (*this).data = (T*) realloc (data, size*sizeof(T));
    }*/
    //std::cout << data << std::endl;
    data[(*this).nbr_elem++] = elem;

    return *this;
}

template<typename T>
Pile<T> Pile<T>::pop(){
    nbr_elem --;
    return *this;
}

template<typename T>
bool Pile<T>::empty(){
    if(nbr_elem == 0){
        return true;
    }
    else return false;
}


template<typename T>
Pile<T> Pile<T>::operator+(const Pile<T>& pile){
    Pile<T> newPile;
    for(int i=0;i<(*this).getNbrElem();i++){
        newPile.push((*this).getPtr()[i]);
    }

    for(int j=0; j<pile.getNbrElem();j++){
        newPile.push(pile.getPtr()[j]);
    }

    return newPile;
}

template<typename T, typename T2>
Pile<T> convert(const Pile<T2>& p){
    Pile<T> newPile = Pile<T>();
    for(int i=0;i<p.getNbrElem();i++){
        p.push((T)p.getPtr()[i]);
    }
}







#endif
