//
// Copyright (C) 2004-2007 Maciej Sobczak, Stephen Hutton
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_TUPLE_H_INCLUDED
#define BOOST_TUPLE_H_INCLUDED

#include "values.h"
#include "type-conversion-traits.h"

#include <boost/tuple/tuple.hpp>

namespace soci
{

template <typename T0>
struct type_conversion<boost::tuple<T0> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out);
    }

    static void to_base(boost::tuple<T0> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1>
struct type_conversion<boost::tuple<T0, T1> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out);
    }

    static void to_base(boost::tuple<T0, T1> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2>
struct type_conversion<boost::tuple<T0, T1, T2> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3>
struct type_conversion<boost::tuple<T0, T1, T2, T3> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4, T5> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4, T5> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out)
            >> boost::tuples::get<5>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4, T5> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4, T5, T6> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4, T5, T6> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out)
            >> boost::tuples::get<5>(out)
            >> boost::tuples::get<6>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4, T5, T6> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out)
            >> boost::tuples::get<5>(out)
            >> boost::tuples::get<6>(out)
            >> boost::tuples::get<7>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out)
            >> boost::tuples::get<5>(out)
            >> boost::tuples::get<6>(out)
            >> boost::tuples::get<7>(out)
            >> boost::tuples::get<8>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9>
struct type_conversion<boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> >
{
    typedef values base_type;

    static void from_base(base_type const &in, eIndicator ind,
        boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> &out)
    {
        in.reset_get_counter();
        in
            >> boost::tuples::get<0>(out)
            >> boost::tuples::get<1>(out)
            >> boost::tuples::get<2>(out)
            >> boost::tuples::get<3>(out)
            >> boost::tuples::get<4>(out)
            >> boost::tuples::get<5>(out)
            >> boost::tuples::get<6>(out)
            >> boost::tuples::get<7>(out)
            >> boost::tuples::get<8>(out)
            >> boost::tuples::get<9>(out);
    }

    static void to_base(boost::tuple<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> &in,
        base_type &out, eIndicator &ind)
    {
        throw soci_error("Conversions from boost::tuple are not supported.");
    }
};

} // namespace soci

#endif // BOOST_OPTIONAL_H_INCLUDED