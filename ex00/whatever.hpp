#pragma once
# ifndef __WHATEVER__HPP__
# define __WHATEVER__HPP__
# include <iostream>
# include <string>

template< typename T >
T	max( T const & x, T const & y ) {
	return ( (x > y) ? x : y );
}

template< typename T >
T	min( T const & x, T const & y ) {
	return ( (x < y) ? x : y );
}

template< typename T >
void	swap( T & x, T & y ) {
	T	tmp = x;
	tmp = x;
	x = y;
	y = tmp;
	return ;
}

#endif