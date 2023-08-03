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


#include "Cnine_base.cpp"
#include "Tensor.hpp"
#include "TensorFunctions.hpp"
#include "CnineSession.hpp"
#include "IntersectionSpace.hpp"

using namespace cnine;


int main(int argc, char** argv){

  cnine_session session;

  cout<<endl;

  auto X=Tensr<double>({{1,0},{0,1}});

  auto Y=Tensr<double>({{1,0}});

  auto Z=IntersectionSpace(X,Y)();
  cout<<Z<<endl;

}

