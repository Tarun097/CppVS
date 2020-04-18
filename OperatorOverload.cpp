// #include <iostream>
// #include <ostream>

// class Rational 
// {
// 	int m_numerator{};
// 	int m_denominator{};

// public :
// 	Rational(int num = 0, int deno = 1) : m_numerator(num), m_denominator(deno) {}
// 	Rational(const Rational& rhs) : m_numerator(rhs.m_numerator), m_denominator(rhs.m_denominator) {}

// 	inline int numerator() const {return m_numerator;}
// 	inline int denominator() const {return m_denominator;}

// 	Rational operator-(const Rational& rhs) const
// 	{
// 		return Rational( (m_numerator*rhs.m_denominator) - (m_denominator*rhs.m_numerator), m_denominator * rhs.m_denominator);
// 	}

// 	Rational operator*(const Rational& rhs) const
// 	{
// 		return Rational( m_numerator*rhs.m_numerator, m_denominator*rhs.m_denominator);
// 	}

// 	Rational operator/(const Rational& rhs) const
// 	{
// 		return Rational(m_numerator*rhs.m_denominator, m_denominator*rhs.m_numerator);
// 	}
// };


// std::ostream&  operator<<(std::ostream& o, const Rational& rhs)
// {
// 	return o << rhs.numerator() << "/" << rhs.denominator() ;
// }

// Rational operator+(const Rational& lhs,const Rational& rhs)
// {
// 	return Rational( (lhs.numerator()*rhs.denominator()) + (lhs.denominator()*rhs.numerator()),
// 	lhs.denominator() * rhs.denominator());
// }

// int main(int argc, char** argv)
// {

// 	const Rational r1(7), r2 (5,3);

// 	std::cout << "r1/r2 : "<< r1/r2 <<std::endl;
// 	std::cout << "r1*r2 : "<< r1*r2 <<std::endl;
// 	std::cout << "r1+r2 : "<< r1+r2 <<std::endl;
// 	std::cout << "r1-r2 : "<< r1-r2 <<std::endl;
	
// 	std::cout << "r2 + 2 :" << r2+2 << std::endl;
// 	std::cout << "2 + r2 :" << 2 + r2 << std::endl;


// 	return 0;
// }