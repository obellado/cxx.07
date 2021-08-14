#include "whatever.hpp"

class Awesome {
    public:
        Awesome(int n) : _n(n) {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int getN( void ) const {return (_n);}
    private:
        int _n;
};

std::ostream& operator<< ( std::ostream & o, const Awesome & a ) {
	o << a.getN();
	return o;}

int main( void ) { 
    int a = 2;
    int b = 3;

    std::cout << "before swap: " << "a = " << a << ", b = " << b << std::endl;

    ::swap( a, b );
    std::cout << "after swap : "  << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "before swap: " << "c = " << c << ", d = " << d << std::endl;

    ::swap(c, d);
    std::cout << "after swap : " << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Awesome e = Awesome(13);
    Awesome h = Awesome(2);

    std::cout << "before swap: " << "c = " << e << ", d = " << h << std::endl;

    ::swap(e, h);
    std::cout << "after swap : " << "c = " << e << ", d = " << h << std::endl;

    std::cout << "min( e, h ) = " << ::min( e, h ) << std::endl;
    std::cout << "max( e, h ) = " << ::max( e, h ) << std::endl;

    return 0;
 }