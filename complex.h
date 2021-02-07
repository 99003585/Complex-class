/**
 * @file complex
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_H
#define __COMPLEX_H

template<typename T>
class Complex {
  T m_real;
  T m_image;

  public:

  Complex();
  Complex(T,T);
  void display();
  T re();
  T img();
};

#endif