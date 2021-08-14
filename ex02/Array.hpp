#pragma once
# ifndef __ARRAY__HPP__
# define __ARRAY__HPP__
# include <iostream>
# include <string>

template< typename T >
class	Array {
	private:
		T*  _array;
		int	_size;
	public:

		class NoInArray : public std::exception {
			public:
				virtual const char* what() const throw() { return ("Element is out of the limits!"); }
		};

		Array( void ) { _array = 0; _size = 0; }
		Array( unsigned int n ) {
			this->_array = new T[n];
			_size = n;
		}
		~Array( void ) { delete [] this->_array; }
		T & operator[] ( int i ) {
			if (i < 0 || i >= this->size())
				throw NoInArray(); 
			return (this->_array[i]); 
		}
		Array( Array<T> const & copy ) { 
			this->_size = copy.size();
			this->_array = new T[this->size()];
			int n = copy.size();
			while (--n >= 0)
				this->_array[n] = copy._array[n];
		}
		T * getArray( void ) const { return (this->_array); }
		int size(void) const { return (this->_size); }
};

std::ostream& operator<< ( std::ostream & o, const Array<int> & a ) {
	o << a.getArray();
	return o;}

#endif