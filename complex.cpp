#include"complex.h"
#include <iostream>
using namespace std;

/**
 * @brief Constructed Complex< T>:: Complex object
 * 
 * @tparam T 
 */
template<typename T>
Complex<T>::Complex():m_real(0),m_image(0){}

/**
 * @brief Constructed Complex< T>:: Complex object
 * 
 * @tparam T 
 * @param x1 
 * @param y1 
 */
template<typename T>
Complex<T>::Complex(T x1,T y1):m_real(x1),m_image(y1)
{
}

/**
 * @brief Function to return real no
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>
T Complex<T>::re()
{
    return m_real;
}

/**
 * @brief Function to return imaginary no
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>
T Complex<T>::img()
{
    return m_image;
}

/**
 * @brief Function to display complex no
 * 
 * @tparam T 
 */
template <typename T>
void Complex<T>::display()
{
    cout<<re()<<img();
}