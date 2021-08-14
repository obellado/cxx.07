#pragma once
# ifndef __ITER__HPP__
# define __ITER__HPP__
# include <iostream>
# include <string>

class Awesome {
    public:
        Awesome( void ) : _n(42) { return ;}
        int getN( void ) const {return (_n);}
    private:
        int _n;
};

std::ostream& operator<< ( std::ostream & o, const Awesome & a ) {
	o << a.getN();
	return o;}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return ;}

// template< typename T >
// void	fill( T & x ) {
// 	x = 42;
// }

template< typename T >
void	iter( T * array, int n, void (*f)( T const & ) ) {
	for (int i = 0; i < n; i++){
		f(array[i]);
	}
	return ;
}

#endif