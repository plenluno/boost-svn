//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//  Adaptation to Boost of the libcxx
//  Copyright 2010 Vicente J. Botet Escriba
//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

#include <boost/ratio.hpp>
#include <boost/integer_traits.hpp>

#define BOOST_RATIO_INTMAX_T_MAX boost::integer_traits<boost::intmax_t>::const_max

typedef boost::ratio<BOOST_RATIO_INTMAX_T_MAX, 1> R1;
typedef boost::ratio<1, 1> R2;
typedef boost::ratio_add<R1, R2>::type RT;

BOOST_RATIO_STATIC_ASSERT(BOOST_RATIO_INTMAX_T_MAX <= BOOST_RATIO_INTMAX_T_MAX - 1 , BOOST_RATIO_OVERFLOW_IN_ADD, ());