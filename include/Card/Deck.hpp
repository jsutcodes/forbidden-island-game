#ifndef _DECK_HPP_
#define _DECK_HPP_

#include <math.h>
#include <SFML/Graphics.hpp>

// this needs vectors i think
template <class T> class Deck {
    public:
        Deck();
        ~Deck();

        void shuffle();
	void discard(T t);
        T* draw();
    private:
        T *discardPile;
	T *deck; 
};
#endif

