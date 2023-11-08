/*
 * This file is part of cnine, a lightweight C++ tensor library. 
 *  
 * Copyright (c) 2023, Imre Risi Kondor
 *
 * This source code file is subject to the terms of the noncommercial 
 * license distributed with cnine in the file LICENSE.TXT. Commercial 
 * use is prohibited. All redistributed versions of this file (in 
 * original or modified form) must retain this copyright notice and 
 * must be accompanied by a verbatim copy of the license. 
 *
 */

#ifndef _CnineLtensorPackSpec
#define _CnineLtensorPackSpec

#include "LtensorPackSpecBase.hpp"


namespace cnine{

  template<typename TYPE>
  class LtensorPack;


  template<typename TYPE>
  class LtensorPackSpec: public LtensorPackSpecBase<LtensorPackSpec<TYPE>>{
  public:

    typedef LtensorPackSpecBase<LtensorPackSpec<TYPE>> BASE;
    using BASE::BASE;
    LtensorPackSpec(){}
    LtensorPackSpec(const BASE& x): BASE(x){}

    LtensorPack<TYPE> operator()(){
      return LtensorPack<TYPE>(*this);
    }
    
  };

}

#endif 



