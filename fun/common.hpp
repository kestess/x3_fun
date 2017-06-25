/*=============================================================================
    Copyright (c) 2001-2015 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#if !defined(BOOST_SPIRIT_X3_FUN_COMMON_HPP)
#define BOOST_SPIRIT_X3_FUN_COMMON_HPP

#include <boost/spirit/home/x3.hpp>

namespace fun { namespace parser
{
    // COMMON_VISIT_BEGIN
    using x3::raw;
    using x3::lexeme;
    using x3::alpha;
    using x3::alnum;

    // JdG tag that identifies rule - first position below
    struct identifier_class;

    typedef x3::rule<identifier_class, std::string> identifier_type;

    identifier_type const identifier = "identifier";

    // JdG raw directive gives you the first and last iterators
    auto const identifier_def = raw[lexeme[(alpha | '_') >> *(alnum | '_')]];

    // JdG tie together identifier class with definition
    BOOST_SPIRIT_DEFINE(identifier);
    // COMMON_VISIT_END
}}

#endif

// rule id         = identifier_class
// rule type       = identifier_type
// rule definition = identifier_def // required JdG
// rule            = identifier     // required JdG
