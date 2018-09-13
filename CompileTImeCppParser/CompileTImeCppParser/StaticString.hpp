#ifndef CPP_PARSER_STATIC_STRING_HPP_
#define CPP_PARSER_STATIC_STRING_HPP_

#define FUNC_STATIC_STRING(func, str) func([](){return str;})

#endif