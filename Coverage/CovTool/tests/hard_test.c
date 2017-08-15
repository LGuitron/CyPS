# 1 "Instrumentation code beginning"
struct __CvT__module_info____                                   
{                                                               
    char const **file;                                          
    int files;                                                  
    void const **str;   // string version of file names above   
    int *  line;  // pairs of ints stored here                  
                  // the first is the index into file           
                  // the second is the line number in that file 
    int lines;    // count of PAIRS not ints at line            
                                                                
    int struct_size;    // validates this struct                
    int * inst;   // counts of instrumented lines per file      
                                                                
    void construct();                                           
                                                                
    __CvT__module_info____(char const **f, int fs,              
                           int   *l, int ls,                    
                           int *i                               
                          )                                     
    : file(f), files(fs), str(0), line(l), lines(ls),           
      struct_size(sizeof(__CvT__module_info____)), inst(i)      
    {                                                           
      construct();                                              
    }                                                           
                                                                
    ~__CvT__module_info____();                                  
                                                                
};

static __CvT__module_info____* __CvT_miT;
extern void __CvT__record_line____(__CvT__module_info____ const*, int,int);
# 1 "hard.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4 
# 1 "<command-line>" 2 
# 1 "hard.c" 
# 1 "/usr/include/c++/7.1.1/string" 1 3 
# 36 "/usr/include/c++/7.1.1/string" 3 

# 37 "/usr/include/c++/7.1.1/string" 3 

# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 1 3 
# 229 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 3 

# 229 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 3 
namespace std 
{ 
typedef long unsigned int size_t ; 
typedef long int ptrdiff_t ; 


typedef decltype ( nullptr ) nullptr_t ; 

} 
# 251 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 3 
namespace std 
{ 
inline namespace __cxx11 { } 
} 
namespace __gnu_cxx 
{ 
inline namespace __cxx11 { __CvT__record_line____(__CvT_miT,5,257);} 
} 
# 533 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/os_defines.h" 1 3 
# 39 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/os_defines.h" 3 
# 1 "/usr/include/features.h" 1 3 4 
# 410 "/usr/include/features.h" 3 4 
# 1 "/usr/include/sys/cdefs.h" 1 3 4 
# 441 "/usr/include/sys/cdefs.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 442 "/usr/include/sys/cdefs.h" 2 3 4 
# 1 "/usr/include/bits/long-double.h" 1 3 4 
# 443 "/usr/include/sys/cdefs.h" 2 3 4 
# 411 "/usr/include/features.h" 2 3 4 
# 434 "/usr/include/features.h" 3 4 
# 1 "/usr/include/gnu/stubs.h" 1 3 4 
# 10 "/usr/include/gnu/stubs.h" 3 4 
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4 
# 11 "/usr/include/gnu/stubs.h" 2 3 4 
# 435 "/usr/include/features.h" 2 3 4 
# 40 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/os_defines.h" 2 3 
# 534 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 2 3 


# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/cpu_defines.h" 1 3 
# 537 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h" 2 3 
# 39 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/stringfwd.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/stringfwd.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/stringfwd.h" 3 


# 1 "/usr/include/c++/7.1.1/bits/memoryfwd.h" 1 3 
# 46 "/usr/include/c++/7.1.1/bits/memoryfwd.h" 3 

# 47 "/usr/include/c++/7.1.1/bits/memoryfwd.h" 3 



namespace std 
{ 

# 63 "/usr/include/c++/7.1.1/bits/memoryfwd.h" 3 
template < typename > 
class allocator ; 

template <> 
class allocator < void > ; 


template < typename , typename > 
struct uses_allocator ; 




} 
# 41 "/usr/include/c++/7.1.1/bits/stringfwd.h" 2 3 

namespace std 
{ 








template < class _CharT > 
struct char_traits ; 

template <> struct char_traits < char > ; 


template <> struct char_traits < wchar_t > ; 




template <> struct char_traits < char16_t > ; 
template <> struct char_traits < char32_t > ; 


namespace __cxx11 { 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_string ; 


typedef basic_string < char > string ; 



typedef basic_string < wchar_t > wstring ; 





typedef basic_string < char16_t > u16string ; 


typedef basic_string < char32_t > u32string ; 


} 




} 
# 40 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/char_traits.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/char_traits.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/char_traits.h" 3 

# 1 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 1 3 
# 60 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
# 1 "/usr/include/c++/7.1.1/bits/functexcept.h" 1 3 
# 40 "/usr/include/c++/7.1.1/bits/functexcept.h" 3 
# 1 "/usr/include/c++/7.1.1/bits/exception_defines.h" 1 3 
# 41 "/usr/include/c++/7.1.1/bits/functexcept.h" 2 3 

namespace std 
{ 



void 
__throw_bad_exception ( void ) ; 


void 
__throw_bad_alloc ( void ) ; 


void 
__throw_bad_cast ( void ) ; 

void 
__throw_bad_typeid ( void ) ; 


void 
__throw_logic_error ( const char * ) ; 

void 
__throw_domain_error ( const char * ) ; 

void 
__throw_invalid_argument ( const char * ) ; 

void 
__throw_length_error ( const char * ) ; 

void 
__throw_out_of_range ( const char * ) ; 

void 
__throw_out_of_range_fmt ( const char * , ... ) 
; 

void 
__throw_runtime_error ( const char * ) ; 

void 
__throw_range_error ( const char * ) ; 

void 
__throw_overflow_error ( const char * ) ; 

void 
__throw_underflow_error ( const char * ) ; 


void 
__throw_ios_failure ( const char * ) ; 

void 
__throw_system_error ( int ) ; 

void 
__throw_future_error ( int ) ; 


void 
__throw_bad_function_call ( ) ; 


} 
# 61 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 1 3 
# 35 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 3 

# 36 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 3 
# 67 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 3 
extern "C++" { 

namespace std 
{ 


struct __true_type { } ; 
struct __false_type { } ; 

template < bool > 
struct __truth_type 
{ typedef __false_type __type ; } ; 

template <> 
struct __truth_type < true > 
{ typedef __true_type __type ; } ; 



template < class _Sp , class _Tp > 
struct __traitor 
{ 
enum { __value = bool ( _Sp :: __value ) || bool ( _Tp :: __value ) } ; 
typedef typename __truth_type < __value >:: __type __type ; 
} ; 


template < typename , typename > 
struct __are_same 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __are_same < _Tp , _Tp > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_void 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_void < void > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_integer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 





template <> 
struct __is_integer < bool > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_integer < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 



template <> 
struct __is_integer < char16_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < char32_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_integer < short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 
# 261 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 3 
template <> struct __is_integer < __int128 > { enum { __value = 1 } ; typedef __true_type __type ; } ; template <> struct __is_integer < unsigned __int128 > { enum { __value = 1 } ; typedef __true_type __type ; } ; 
# 278 "/usr/include/c++/7.1.1/bits/cpp_type_traits.h" 3 
template < typename _Tp > 
struct __is_floating 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 


template <> 
struct __is_floating < float > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < long double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_pointer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __is_pointer < _Tp *> 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_arithmetic 
: public __traitor < __is_integer < _Tp > , __is_floating < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_scalar 
: public __traitor < __is_arithmetic < _Tp > , __is_pointer < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_char 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_char < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_char < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_byte 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_byte < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_move_iterator 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 



template < typename _Iterator > 
inline _Iterator 
__miter_base ( _Iterator __it ) 
{ __CvT__record_line____(__CvT_miT,20,409);return __it ; } 


} 
} 
# 62 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/ext/type_traits.h" 1 3 
# 32 "/usr/include/c++/7.1.1/ext/type_traits.h" 3 

# 33 "/usr/include/c++/7.1.1/ext/type_traits.h" 3 




extern "C++" { 

namespace __gnu_cxx 
{ 



template < bool , typename > 
struct __enable_if 
{ } ; 

template < typename _Tp > 
struct __enable_if < true , _Tp > 
{ typedef _Tp __type ; } ; 



template < bool _Cond , typename _Iftrue , typename _Iffalse > 
struct __conditional_type 
{ typedef _Iftrue __type ; } ; 

template < typename _Iftrue , typename _Iffalse > 
struct __conditional_type < false , _Iftrue , _Iffalse > 
{ typedef _Iffalse __type ; } ; 



template < typename _Tp > 
struct __add_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __add_unsigned < char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < signed char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < short > 
{ typedef unsigned short __type ; } ; 

template <> 
struct __add_unsigned < int > 
{ typedef unsigned int __type ; } ; 

template <> 
struct __add_unsigned < long > 
{ typedef unsigned long __type ; } ; 

template <> 
struct __add_unsigned < long long > 
{ typedef unsigned long long __type ; } ; 


template <> 
struct __add_unsigned < bool > ; 

template <> 
struct __add_unsigned < wchar_t > ; 



template < typename _Tp > 
struct __remove_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __remove_unsigned < char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned short > 
{ typedef short __type ; } ; 

template <> 
struct __remove_unsigned < unsigned int > 
{ typedef int __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long > 
{ typedef long __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long long > 
{ typedef long long __type ; } ; 


template <> 
struct __remove_unsigned < bool > ; 

template <> 
struct __remove_unsigned < wchar_t > ; 



template < typename _Type > 
inline bool 
__is_null_pointer ( _Type * __ptr ) 
{ __CvT__record_line____(__CvT_miT,21,153);return __ptr == 0 ; } 

template < typename _Type > 
inline bool 
__is_null_pointer ( _Type ) 
{ __CvT__record_line____(__CvT_miT,21,158);return false ; } 


inline bool 
__is_null_pointer ( std :: nullptr_t ) 
{ __CvT__record_line____(__CvT_miT,21,163);return true ; } 



template < typename _Tp , bool = std :: __is_integer < _Tp >:: __value > 
struct __promote 
{ typedef double __type ; } ; 




template < typename _Tp > 
struct __promote < _Tp , false > 
{ } ; 

template <> 
struct __promote < long double > 
{ typedef long double __type ; } ; 

template <> 
struct __promote < double > 
{ typedef double __type ; } ; 

template <> 
struct __promote < float > 
{ typedef float __type ; } ; 

template < typename _Tp , typename _Up , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type > 
struct __promote_2 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type > 
struct __promote_3 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , typename _Wp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type , 
typename _Wp2 = typename __promote < _Wp >:: __type > 
struct __promote_4 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) + _Wp2 ( ) ) __type ; 
} ; 


} 
} 
# 63 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/ext/numeric_traits.h" 1 3 
# 32 "/usr/include/c++/7.1.1/ext/numeric_traits.h" 3 

# 33 "/usr/include/c++/7.1.1/ext/numeric_traits.h" 3 




namespace __gnu_cxx 
{ 

# 54 "/usr/include/c++/7.1.1/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_integer 
{ 

static const _Value __min = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( _Value ) 1 << ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) : ( _Value ) 0 ) ; 
static const _Value __max = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( ( ( ( ( _Value ) 1 << ( ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) - 1 ) ) - 1 ) << 1 ) + 1 ) : ~ ( _Value ) 0 ) ; 



static const bool __is_signed = ( ( _Value ) ( - 1 ) < 0 ) ; 
static const int __digits = ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) ; 
} ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __min ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __max ; 

template < typename _Value > 
const bool __numeric_traits_integer < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_integer < _Value >:: __digits ; 
# 99 "/usr/include/c++/7.1.1/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_floating 
{ 

static const int __max_digits10 = ( 2 + ( std :: __are_same < _Value , float >:: __value ? 24 : std :: __are_same < _Value , double >:: __value ? 53 : 64 ) * 643L / 2136 ) ; 


static const bool __is_signed = true ; 
static const int __digits10 = ( std :: __are_same < _Value , float >:: __value ? 6 : std :: __are_same < _Value , double >:: __value ? 15 : 18 ) ; 
static const int __max_exponent10 = ( std :: __are_same < _Value , float >:: __value ? 38 : std :: __are_same < _Value , double >:: __value ? 308 : 4932 ) ; 
} ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_digits10 ; 

template < typename _Value > 
const bool __numeric_traits_floating < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __digits10 ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_exponent10 ; 

template < typename _Value > 
struct __numeric_traits 
: public __conditional_type < std :: __is_integer < _Value >:: __value , 
__numeric_traits_integer < _Value > , 
__numeric_traits_floating < _Value > >:: __type 
{ } ; 


} 
# 64 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/stl_pair.h" 1 3 
# 59 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
# 1 "/usr/include/c++/7.1.1/bits/move.h" 1 3 
# 34 "/usr/include/c++/7.1.1/bits/move.h" 3 
# 1 "/usr/include/c++/7.1.1/bits/concept_check.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/concept_check.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/concept_check.h" 3 
# 35 "/usr/include/c++/7.1.1/bits/move.h" 2 3 

namespace std 
{ 







template < typename _Tp > 
inline constexpr _Tp * 
__addressof ( _Tp & __r ) noexcept 
{ return __builtin_addressof ( __r ) ; } 


} 


# 1 "/usr/include/c++/7.1.1/type_traits" 1 3 
# 32 "/usr/include/c++/7.1.1/type_traits" 3 

# 33 "/usr/include/c++/7.1.1/type_traits" 3 
# 42 "/usr/include/c++/7.1.1/type_traits" 3 
namespace std 
{ 
typedef short unsigned int uint_least16_t ; 
typedef unsigned int uint_least32_t ; 
} 





namespace std 
{ 

# 68 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp , _Tp __v > 
struct integral_constant 
{ 
static constexpr _Tp value = __v ; 
typedef _Tp value_type ; 
typedef integral_constant < _Tp , __v > type ; 
constexpr operator value_type ( ) const { __CvT__record_line____(__CvT_miT,26,74);return value ; } 




constexpr value_type operator ( ) ( ) const { __CvT__record_line____(__CvT_miT,26,79);return value ; } 

} ; 

template < typename _Tp , _Tp __v > 
constexpr _Tp integral_constant < _Tp , __v >:: value ; 


typedef integral_constant < bool , true > true_type ; 


typedef integral_constant < bool , false > false_type ; 

template < bool __v > 
using __bool_constant = integral_constant < bool , __v > ; 
# 103 "/usr/include/c++/7.1.1/type_traits" 3 
template < bool , typename , typename > 
struct conditional ; 

template < typename ... > 
struct __or_ ; 

template <> 
struct __or_ <> 
: public false_type 
{ } ; 

template < typename _B1 > 
struct __or_ < _B1 > 
: public _B1 
{ } ; 

template < typename _B1 , typename _B2 > 
struct __or_ < _B1 , _B2 > 
: public conditional < _B1 :: value , _B1 , _B2 >:: type 
{ } ; 

template < typename _B1 , typename _B2 , typename _B3 , typename ... _Bn > 
struct __or_ < _B1 , _B2 , _B3 , _Bn ... > 
: public conditional < _B1 :: value , _B1 , __or_ < _B2 , _B3 , _Bn ... >>:: type 
{ } ; 

template < typename ... > 
struct __and_ ; 

template <> 
struct __and_ <> 
: public true_type 
{ } ; 

template < typename _B1 > 
struct __and_ < _B1 > 
: public _B1 
{ } ; 

template < typename _B1 , typename _B2 > 
struct __and_ < _B1 , _B2 > 
: public conditional < _B1 :: value , _B2 , _B1 >:: type 
{ } ; 

template < typename _B1 , typename _B2 , typename _B3 , typename ... _Bn > 
struct __and_ < _B1 , _B2 , _B3 , _Bn ... > 
: public conditional < _B1 :: value , __and_ < _B2 , _B3 , _Bn ... > , _B1 >:: type 
{ } ; 

template < typename _Pp > 
struct __not_ 
: public integral_constant < bool , ! _Pp :: value > 
{ } ; 
# 195 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp > 
struct __success_type 
{ typedef _Tp type ; } ; 

struct __failure_type 
{ } ; 



template < typename > 
struct remove_cv ; 

template < typename > 
struct __is_void_helper 
: public false_type { } ; 

template <> 
struct __is_void_helper < void > 
: public true_type { } ; 


template < typename _Tp > 
struct is_void 
: public __is_void_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 

template < typename > 
struct __is_integral_helper 
: public false_type { } ; 

template <> 
struct __is_integral_helper < bool > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < char > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < signed char > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned char > 
: public true_type { } ; 


template <> 
struct __is_integral_helper < wchar_t > 
: public true_type { } ; 


template <> 
struct __is_integral_helper < char16_t > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < char32_t > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < short > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned short > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < int > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned int > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < long > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned long > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < long long > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned long long > 
: public true_type { } ; 




template <> 
struct __is_integral_helper < __int128 > 
: public true_type { } ; 

template <> 
struct __is_integral_helper < unsigned __int128 > 
: public true_type { } ; 
# 327 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp > 
struct is_integral 
: public __is_integral_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 

template < typename > 
struct __is_floating_point_helper 
: public false_type { } ; 

template <> 
struct __is_floating_point_helper < float > 
: public true_type { } ; 

template <> 
struct __is_floating_point_helper < double > 
: public true_type { } ; 

template <> 
struct __is_floating_point_helper < long double > 
: public true_type { } ; 


template <> 
struct __is_floating_point_helper < __float128 > 
: public true_type { } ; 



template < typename _Tp > 
struct is_floating_point 
: public __is_floating_point_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 


template < typename > 
struct is_array 
: public false_type { } ; 

template < typename _Tp , std :: size_t _Size > 
struct is_array < _Tp [ _Size ] > 
: public true_type { } ; 

template < typename _Tp > 
struct is_array < _Tp [ ] > 
: public true_type { } ; 

template < typename > 
struct __is_pointer_helper 
: public false_type { } ; 

template < typename _Tp > 
struct __is_pointer_helper < _Tp *> 
: public true_type { } ; 


template < typename _Tp > 
struct is_pointer 
: public __is_pointer_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 


template < typename > 
struct is_lvalue_reference 
: public false_type { } ; 

template < typename _Tp > 
struct is_lvalue_reference < _Tp &> 
: public true_type { } ; 


template < typename > 
struct is_rvalue_reference 
: public false_type { } ; 

template < typename _Tp > 
struct is_rvalue_reference < _Tp &&> 
: public true_type { } ; 

template < typename > 
struct is_function ; 

template < typename > 
struct __is_member_object_pointer_helper 
: public false_type { } ; 

template < typename _Tp , typename _Cp > 
struct __is_member_object_pointer_helper < _Tp _Cp ::*> 
: public integral_constant < bool , ! is_function < _Tp >:: value > { } ; 


template < typename _Tp > 
struct is_member_object_pointer 
: public __is_member_object_pointer_helper < 
typename remove_cv < _Tp >:: type >:: type 
{ } ; 

template < typename > 
struct __is_member_function_pointer_helper 
: public false_type { } ; 

template < typename _Tp , typename _Cp > 
struct __is_member_function_pointer_helper < _Tp _Cp ::*> 
: public integral_constant < bool , is_function < _Tp >:: value > { } ; 


template < typename _Tp > 
struct is_member_function_pointer 
: public __is_member_function_pointer_helper < 
typename remove_cv < _Tp >:: type >:: type 
{ } ; 


template < typename _Tp > 
struct is_enum 
: public integral_constant < bool , __is_enum ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_union 
: public integral_constant < bool , __is_union ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_class 
: public integral_constant < bool , __is_class ( _Tp ) > 
{ } ; 


template < typename > 
struct is_function 
: public false_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) volatile > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) volatile & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) volatile && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) volatile > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) volatile & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) volatile && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const volatile > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const volatile & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ... ) const volatile && > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const volatile > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const volatile & > 
: public true_type { } ; 

template < typename _Res , typename ... _ArgTypes > 
struct is_function < _Res ( _ArgTypes ...... ) const volatile && > 
: public true_type { } ; 



template < typename > 
struct __is_null_pointer_helper 
: public false_type { } ; 

template <> 
struct __is_null_pointer_helper < std :: nullptr_t > 
: public true_type { } ; 


template < typename _Tp > 
struct is_null_pointer 
: public __is_null_pointer_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 


template < typename _Tp > 
struct __is_nullptr_t 
: public is_null_pointer < _Tp > 
{ } ; 




template < typename _Tp > 
struct is_reference 
: public __or_ < is_lvalue_reference < _Tp > , 
is_rvalue_reference < _Tp >>:: type 
{ } ; 


template < typename _Tp > 
struct is_arithmetic 
: public __or_ < is_integral < _Tp > , is_floating_point < _Tp >>:: type 
{ } ; 


template < typename _Tp > 
struct is_fundamental 
: public __or_ < is_arithmetic < _Tp > , is_void < _Tp > , 
is_null_pointer < _Tp >>:: type 
{ } ; 


template < typename _Tp > 
struct is_object 
: public __not_ < __or_ < is_function < _Tp > , is_reference < _Tp > , 
is_void < _Tp >>>:: type 
{ } ; 

template < typename > 
struct is_member_pointer ; 


template < typename _Tp > 
struct is_scalar 
: public __or_ < is_arithmetic < _Tp > , is_enum < _Tp > , is_pointer < _Tp > , 
is_member_pointer < _Tp > , is_null_pointer < _Tp >>:: type 
{ } ; 


template < typename _Tp > 
struct is_compound 
: public integral_constant < bool , ! is_fundamental < _Tp >:: value > { } ; 

template < typename _Tp > 
struct __is_member_pointer_helper 
: public false_type { } ; 

template < typename _Tp , typename _Cp > 
struct __is_member_pointer_helper < _Tp _Cp ::*> 
: public true_type { } ; 


template < typename _Tp > 
struct is_member_pointer 
: public __is_member_pointer_helper < typename remove_cv < _Tp >:: type >:: type 
{ } ; 



template < typename _Tp > 
struct __is_referenceable 
: public __or_ < is_object < _Tp > , is_reference < _Tp >>:: type 
{ } ; 

template < typename _Res , typename ... _Args > 
struct __is_referenceable < _Res ( _Args ... ) > 
: public true_type 
{ } ; 

template < typename _Res , typename ... _Args > 
struct __is_referenceable < _Res ( _Args ...... ) > 
: public true_type 
{ } ; 




template < typename > 
struct is_const 
: public false_type { } ; 

template < typename _Tp > 
struct is_const < _Tp const > 
: public true_type { } ; 


template < typename > 
struct is_volatile 
: public false_type { } ; 

template < typename _Tp > 
struct is_volatile < _Tp volatile > 
: public true_type { } ; 


template < typename _Tp > 
struct is_trivial 
: public integral_constant < bool , __is_trivial ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_trivially_copyable 
: public integral_constant < bool , __is_trivially_copyable ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_standard_layout 
: public integral_constant < bool , __is_standard_layout ( _Tp ) > 
{ } ; 



template < typename _Tp > 
struct is_pod 
: public integral_constant < bool , __is_pod ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_literal_type 
: public integral_constant < bool , __is_literal_type ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_empty 
: public integral_constant < bool , __is_empty ( _Tp ) > 
{ } ; 


template < typename _Tp > 
struct is_polymorphic 
: public integral_constant < bool , __is_polymorphic ( _Tp ) > 
{ } ; 




template < typename _Tp > 
struct is_final 
: public integral_constant < bool , __is_final ( _Tp ) > 
{ } ; 



template < typename _Tp > 
struct is_abstract 
: public integral_constant < bool , __is_abstract ( _Tp ) > 
{ } ; 

template < typename _Tp , 
bool = is_arithmetic < _Tp >:: value > 
struct __is_signed_helper 
: public false_type { } ; 

template < typename _Tp > 
struct __is_signed_helper < _Tp , true > 
: public integral_constant < bool , _Tp ( - 1 ) < _Tp ( 0 ) > 
{ } ; 


template < typename _Tp > 
struct is_signed 
: public __is_signed_helper < _Tp >:: type 
{ } ; 


template < typename _Tp > 
struct is_unsigned 
: public __and_ < is_arithmetic < _Tp > , __not_ < is_signed < _Tp >>> 
{ } ; 




template < typename > 
struct add_rvalue_reference ; 





template < typename _Tp > 
typename add_rvalue_reference < _Tp >:: type declval ( ) noexcept ; 

template < typename , unsigned = 0 > 
struct extent ; 

template < typename > 
struct remove_all_extents ; 

template < typename _Tp > 
struct __is_array_known_bounds 
: public integral_constant < bool , ( extent < _Tp >:: value > 0 ) > 
{ } ; 

template < typename _Tp > 
struct __is_array_unknown_bounds 
: public __and_ < is_array < _Tp > , __not_ < extent < _Tp >>> 
{ } ; 






struct __do_is_destructible_impl 
{ 
template < typename _Tp , typename = decltype ( declval < _Tp &> ( ) . ~ _Tp ( ) ) > 
static true_type __test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 
} ; 

template < typename _Tp > 
struct __is_destructible_impl 
: public __do_is_destructible_impl 
{ 
typedef decltype ( __test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _Tp , 
bool = __or_ < is_void < _Tp > , 
__is_array_unknown_bounds < _Tp > , 
is_function < _Tp >>:: value , 
bool = __or_ < is_reference < _Tp > , is_scalar < _Tp >>:: value > 
struct __is_destructible_safe ; 

template < typename _Tp > 
struct __is_destructible_safe < _Tp , false , false > 
: public __is_destructible_impl < typename 
remove_all_extents < _Tp >:: type >:: type 
{ } ; 

template < typename _Tp > 
struct __is_destructible_safe < _Tp , true , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_destructible_safe < _Tp , false , true > 
: public true_type { } ; 


template < typename _Tp > 
struct is_destructible 
: public __is_destructible_safe < _Tp >:: type 
{ } ; 





struct __do_is_nt_destructible_impl 
{ 
template < typename _Tp > 
static integral_constant < bool , noexcept ( declval < _Tp &> ( ) . ~ _Tp ( ) ) > 
__test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 
} ; 

template < typename _Tp > 
struct __is_nt_destructible_impl 
: public __do_is_nt_destructible_impl 
{ 
typedef decltype ( __test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _Tp , 
bool = __or_ < is_void < _Tp > , 
__is_array_unknown_bounds < _Tp > , 
is_function < _Tp >>:: value , 
bool = __or_ < is_reference < _Tp > , is_scalar < _Tp >>:: value > 
struct __is_nt_destructible_safe ; 

template < typename _Tp > 
struct __is_nt_destructible_safe < _Tp , false , false > 
: public __is_nt_destructible_impl < typename 
remove_all_extents < _Tp >:: type >:: type 
{ } ; 

template < typename _Tp > 
struct __is_nt_destructible_safe < _Tp , true , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_nt_destructible_safe < _Tp , false , true > 
: public true_type { } ; 


template < typename _Tp > 
struct is_nothrow_destructible 
: public __is_nt_destructible_safe < _Tp >:: type 
{ } ; 

struct __do_is_default_constructible_impl 
{ 
template < typename _Tp , typename = decltype ( _Tp ( ) ) > 
static true_type __test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 
} ; 

template < typename _Tp > 
struct __is_default_constructible_impl 
: public __do_is_default_constructible_impl 
{ 
typedef decltype ( __test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _Tp > 
struct __is_default_constructible_atom 
: public __and_ < __not_ < is_void < _Tp >> , 
__is_default_constructible_impl < _Tp >> 
{ } ; 

template < typename _Tp , bool = is_array < _Tp >:: value > 
struct __is_default_constructible_safe ; 






template < typename _Tp > 
struct __is_default_constructible_safe < _Tp , true > 
: public __and_ < __is_array_known_bounds < _Tp > , 
__is_default_constructible_atom < typename 
remove_all_extents < _Tp >:: type >> 
{ } ; 

template < typename _Tp > 
struct __is_default_constructible_safe < _Tp , false > 
: public __is_default_constructible_atom < _Tp >:: type 
{ } ; 


template < typename _Tp > 
struct is_default_constructible 
: public __is_default_constructible_safe < _Tp >:: type 
{ } ; 
# 939 "/usr/include/c++/7.1.1/type_traits" 3 
struct __do_is_static_castable_impl 
{ 
template < typename _From , typename _To , typename 
= decltype ( static_cast < _To > ( declval < _From > ( ) ) ) > 
static true_type __test ( int ) ; 

template < typename , typename > 
static false_type __test ( ... ) ; 
} ; 

template < typename _From , typename _To > 
struct __is_static_castable_impl 
: public __do_is_static_castable_impl 
{ 
typedef decltype ( __test < _From , _To > ( 0 ) ) type ; 
} ; 

template < typename _From , typename _To > 
struct __is_static_castable_safe 
: public __is_static_castable_impl < _From , _To >:: type 
{ } ; 


template < typename _From , typename _To > 
struct __is_static_castable 
: public integral_constant < bool , ( __is_static_castable_safe < 
_From , _To >:: value ) > 
{ } ; 






struct __do_is_direct_constructible_impl 
{ 
template < typename _Tp , typename _Arg , typename 
= decltype ( :: new _Tp ( declval < _Arg > ( ) ) ) > 
static true_type __test ( int ) ; 

template < typename , typename > 
static false_type __test ( ... ) ; 
} ; 

template < typename _Tp , typename _Arg > 
struct __is_direct_constructible_impl 
: public __do_is_direct_constructible_impl 
{ 
typedef decltype ( __test < _Tp , _Arg > ( 0 ) ) type ; 
} ; 

template < typename _Tp , typename _Arg > 
struct __is_direct_constructible_new_safe 
: public __and_ < is_destructible < _Tp > , 
__is_direct_constructible_impl < _Tp , _Arg >> 
{ } ; 

template < typename , typename > 
struct is_same ; 

template < typename , typename > 
struct is_base_of ; 

template < typename > 
struct remove_reference ; 

template < typename _From , typename _To , bool 
= __not_ < __or_ < is_void < _From > , 
is_function < _From >>>:: value > 
struct __is_base_to_derived_ref ; 

template < typename _Tp , typename ... _Args > 
struct is_constructible ; 



template < typename _From , typename _To > 
struct __is_base_to_derived_ref < _From , _To , true > 
{ 
typedef typename remove_cv < typename remove_reference < _From 
>:: type >:: type __src_t ; 
typedef typename remove_cv < typename remove_reference < _To 
>:: type >:: type __dst_t ; 
typedef __and_ < __not_ < is_same < __src_t , __dst_t >> , 
is_base_of < __src_t , __dst_t > , 
__not_ < is_constructible < __dst_t , _From >>> type ; 
static constexpr bool value = type :: value ; 
} ; 

template < typename _From , typename _To > 
struct __is_base_to_derived_ref < _From , _To , false > 
: public false_type 
{ } ; 

template < typename _From , typename _To , bool 
= __and_ < is_lvalue_reference < _From > , 
is_rvalue_reference < _To >>:: value > 
struct __is_lvalue_to_rvalue_ref ; 



template < typename _From , typename _To > 
struct __is_lvalue_to_rvalue_ref < _From , _To , true > 
{ 
typedef typename remove_cv < typename remove_reference < 
_From >:: type >:: type __src_t ; 
typedef typename remove_cv < typename remove_reference < 
_To >:: type >:: type __dst_t ; 
typedef __and_ < __not_ < is_function < __src_t >> , 
__or_ < is_same < __src_t , __dst_t > , 
is_base_of < __dst_t , __src_t >>> type ; 
static constexpr bool value = type :: value ; 
} ; 

template < typename _From , typename _To > 
struct __is_lvalue_to_rvalue_ref < _From , _To , false > 
: public false_type 
{ } ; 







template < typename _Tp , typename _Arg > 
struct __is_direct_constructible_ref_cast 
: public __and_ < __is_static_castable < _Arg , _Tp > , 
__not_ < __or_ < __is_base_to_derived_ref < _Arg , _Tp > , 
__is_lvalue_to_rvalue_ref < _Arg , _Tp > 
>>> 
{ } ; 

template < typename _Tp , typename _Arg > 
struct __is_direct_constructible_new 
: public conditional < is_reference < _Tp >:: value , 
__is_direct_constructible_ref_cast < _Tp , _Arg > , 
__is_direct_constructible_new_safe < _Tp , _Arg > 
>:: type 
{ } ; 

template < typename _Tp , typename _Arg > 
struct __is_direct_constructible 
: public __is_direct_constructible_new < _Tp , _Arg >:: type 
{ } ; 






struct __do_is_nary_constructible_impl 
{ 
template < typename _Tp , typename ... _Args , typename 
= decltype ( _Tp ( declval < _Args > ( ) ... ) ) > 
static true_type __test ( int ) ; 

template < typename , typename ... > 
static false_type __test ( ... ) ; 
} ; 

template < typename _Tp , typename ... _Args > 
struct __is_nary_constructible_impl 
: public __do_is_nary_constructible_impl 
{ 
typedef decltype ( __test < _Tp , _Args ... > ( 0 ) ) type ; 
} ; 

template < typename _Tp , typename ... _Args > 
struct __is_nary_constructible 
: public __is_nary_constructible_impl < _Tp , _Args ... >:: type 
{ 
static_assert ( sizeof ... ( _Args ) > 1 , 
"Only useful for > 1 arguments" ) ; 
} ; 

template < typename _Tp , typename ... _Args > 
struct __is_constructible_impl 
: public __is_nary_constructible < _Tp , _Args ... > 
{ } ; 

template < typename _Tp , typename _Arg > 
struct __is_constructible_impl < _Tp , _Arg > 
: public __is_direct_constructible < _Tp , _Arg > 
{ } ; 

template < typename _Tp > 
struct __is_constructible_impl < _Tp > 
: public is_default_constructible < _Tp > 
{ } ; 


template < typename _Tp , typename ... _Args > 
struct is_constructible 
: public __is_constructible_impl < _Tp , _Args ... >:: type 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_copy_constructible_impl ; 

template < typename _Tp > 
struct __is_copy_constructible_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_copy_constructible_impl < _Tp , true > 
: public is_constructible < _Tp , const _Tp &> 
{ } ; 


template < typename _Tp > 
struct is_copy_constructible 
: public __is_copy_constructible_impl < _Tp > 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_move_constructible_impl ; 

template < typename _Tp > 
struct __is_move_constructible_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_move_constructible_impl < _Tp , true > 
: public is_constructible < _Tp , _Tp &&> 
{ } ; 


template < typename _Tp > 
struct is_move_constructible 
: public __is_move_constructible_impl < _Tp > 
{ } ; 

template < typename _Tp > 
struct __is_nt_default_constructible_atom 
: public integral_constant < bool , noexcept ( _Tp ( ) ) > 
{ } ; 

template < typename _Tp , bool = is_array < _Tp >:: value > 
struct __is_nt_default_constructible_impl ; 

template < typename _Tp > 
struct __is_nt_default_constructible_impl < _Tp , true > 
: public __and_ < __is_array_known_bounds < _Tp > , 
__is_nt_default_constructible_atom < typename 
remove_all_extents < _Tp >:: type >> 
{ } ; 

template < typename _Tp > 
struct __is_nt_default_constructible_impl < _Tp , false > 
: public __is_nt_default_constructible_atom < _Tp > 
{ } ; 


template < typename _Tp > 
struct is_nothrow_default_constructible 
: public __and_ < is_default_constructible < _Tp > , 
__is_nt_default_constructible_impl < _Tp >> 
{ } ; 

template < typename _Tp , typename ... _Args > 
struct __is_nt_constructible_impl 
: public integral_constant < bool , noexcept ( _Tp ( declval < _Args > ( ) ... ) ) > 
{ } ; 

template < typename _Tp , typename _Arg > 
struct __is_nt_constructible_impl < _Tp , _Arg > 
: public integral_constant < bool , 
noexcept ( static_cast < _Tp > ( declval < _Arg > ( ) ) ) > 
{ } ; 

template < typename _Tp > 
struct __is_nt_constructible_impl < _Tp > 
: public is_nothrow_default_constructible < _Tp > 
{ } ; 


template < typename _Tp , typename ... _Args > 
struct is_nothrow_constructible 
: public __and_ < is_constructible < _Tp , _Args ... > , 
__is_nt_constructible_impl < _Tp , _Args ... >> 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_nothrow_copy_constructible_impl ; 

template < typename _Tp > 
struct __is_nothrow_copy_constructible_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_nothrow_copy_constructible_impl < _Tp , true > 
: public is_nothrow_constructible < _Tp , const _Tp &> 
{ } ; 


template < typename _Tp > 
struct is_nothrow_copy_constructible 
: public __is_nothrow_copy_constructible_impl < _Tp > 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_nothrow_move_constructible_impl ; 

template < typename _Tp > 
struct __is_nothrow_move_constructible_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_nothrow_move_constructible_impl < _Tp , true > 
: public is_nothrow_constructible < _Tp , _Tp &&> 
{ } ; 


template < typename _Tp > 
struct is_nothrow_move_constructible 
: public __is_nothrow_move_constructible_impl < _Tp > 
{ } ; 

template < typename _Tp , typename _Up > 
class __is_assignable_helper 
{ 
template < typename _Tp1 , typename _Up1 , 
typename = decltype ( declval < _Tp1 > ( ) = declval < _Up1 > ( ) ) > 
static true_type 
__test ( int ) ; 

template < typename , typename > 
static false_type 
__test ( ... ) ; 

public : 
typedef decltype ( __test < _Tp , _Up > ( 0 ) ) type ; 
} ; 


template < typename _Tp , typename _Up > 
struct is_assignable 
: public __is_assignable_helper < _Tp , _Up >:: type 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_copy_assignable_impl ; 

template < typename _Tp > 
struct __is_copy_assignable_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_copy_assignable_impl < _Tp , true > 
: public is_assignable < _Tp & , const _Tp &> 
{ } ; 


template < typename _Tp > 
struct is_copy_assignable 
: public __is_copy_assignable_impl < _Tp > 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_move_assignable_impl ; 

template < typename _Tp > 
struct __is_move_assignable_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_move_assignable_impl < _Tp , true > 
: public is_assignable < _Tp & , _Tp &&> 
{ } ; 


template < typename _Tp > 
struct is_move_assignable 
: public __is_move_assignable_impl < _Tp > 
{ } ; 

template < typename _Tp , typename _Up > 
struct __is_nt_assignable_impl 
: public integral_constant < bool , noexcept ( declval < _Tp > ( ) = declval < _Up > ( ) ) > 
{ } ; 


template < typename _Tp , typename _Up > 
struct is_nothrow_assignable 
: public __and_ < is_assignable < _Tp , _Up > , 
__is_nt_assignable_impl < _Tp , _Up >> 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_nt_copy_assignable_impl ; 

template < typename _Tp > 
struct __is_nt_copy_assignable_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_nt_copy_assignable_impl < _Tp , true > 
: public is_nothrow_assignable < _Tp & , const _Tp &> 
{ } ; 


template < typename _Tp > 
struct is_nothrow_copy_assignable 
: public __is_nt_copy_assignable_impl < _Tp > 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __is_nt_move_assignable_impl ; 

template < typename _Tp > 
struct __is_nt_move_assignable_impl < _Tp , false > 
: public false_type { } ; 

template < typename _Tp > 
struct __is_nt_move_assignable_impl < _Tp , true > 
: public is_nothrow_assignable < _Tp & , _Tp &&> 
{ } ; 


template < typename _Tp > 
struct is_nothrow_move_assignable 
: public __is_nt_move_assignable_impl < _Tp > 
{ } ; 


template < typename _Tp , typename ... _Args > 
struct is_trivially_constructible 
: public __and_ < is_constructible < _Tp , _Args ... > , integral_constant < bool , 
__is_trivially_constructible ( _Tp , _Args ... ) >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_default_constructible 
: public is_trivially_constructible < _Tp >:: type 
{ } ; 

struct __do_is_implicitly_default_constructible_impl 
{ 
template < typename _Tp > 
static void __helper ( const _Tp & ) ; 

template < typename _Tp > 
static true_type __test ( const _Tp & , 
decltype ( __helper < const _Tp &> ( { } ) ) * = 0 ) ; 

static false_type __test ( ... ) ; 
} ; 

template < typename _Tp > 
struct __is_implicitly_default_constructible_impl 
: public __do_is_implicitly_default_constructible_impl 
{ 
typedef decltype ( __test ( declval < _Tp > ( ) ) ) type ; 
} ; 

template < typename _Tp > 
struct __is_implicitly_default_constructible_safe 
: public __is_implicitly_default_constructible_impl < _Tp >:: type 
{ } ; 

template < typename _Tp > 
struct __is_implicitly_default_constructible 
: public __and_ < is_default_constructible < _Tp > , 
__is_implicitly_default_constructible_safe < _Tp >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_copy_constructible 
: public __and_ < is_copy_constructible < _Tp > , 
integral_constant < bool , 
__is_trivially_constructible ( _Tp , const _Tp & ) >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_move_constructible 
: public __and_ < is_move_constructible < _Tp > , 
integral_constant < bool , 
__is_trivially_constructible ( _Tp , _Tp && ) >> 
{ } ; 


template < typename _Tp , typename _Up > 
struct is_trivially_assignable 
: public __and_ < is_assignable < _Tp , _Up > , 
integral_constant < bool , 
__is_trivially_assignable ( _Tp , _Up ) >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_copy_assignable 
: public __and_ < is_copy_assignable < _Tp > , 
integral_constant < bool , 
__is_trivially_assignable ( _Tp & , const _Tp & ) >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_move_assignable 
: public __and_ < is_move_assignable < _Tp > , 
integral_constant < bool , 
__is_trivially_assignable ( _Tp & , _Tp && ) >> 
{ } ; 


template < typename _Tp > 
struct is_trivially_destructible 
: public __and_ < is_destructible < _Tp > , integral_constant < bool , 
__has_trivial_destructor ( _Tp ) >> 
{ } ; 



template < typename _Tp > 
struct has_virtual_destructor 
: public integral_constant < bool , __has_virtual_destructor ( _Tp ) > 
{ } ; 





template < typename _Tp > 
struct alignment_of 
: public integral_constant < std :: size_t , __alignof__ ( _Tp ) > { } ; 


template < typename > 
struct rank 
: public integral_constant < std :: size_t , 0 > { } ; 

template < typename _Tp , std :: size_t _Size > 
struct rank < _Tp [ _Size ] > 
: public integral_constant < std :: size_t , 1 + rank < _Tp >:: value > { } ; 

template < typename _Tp > 
struct rank < _Tp [ ] > 
: public integral_constant < std :: size_t , 1 + rank < _Tp >:: value > { } ; 


template < typename , unsigned _Uint > 
struct extent 
: public integral_constant < std :: size_t , 0 > { } ; 

template < typename _Tp , unsigned _Uint , std :: size_t _Size > 
struct extent < _Tp [ _Size ] , _Uint > 
: public integral_constant < std :: size_t , 
_Uint == 0 ? _Size : extent < _Tp , 
_Uint - 1 >:: value > 
{ } ; 

template < typename _Tp , unsigned _Uint > 
struct extent < _Tp [ ] , _Uint > 
: public integral_constant < std :: size_t , 
_Uint == 0 ? 0 : extent < _Tp , 
_Uint - 1 >:: value > 
{ } ; 





template < typename , typename > 
struct is_same 
: public false_type { } ; 

template < typename _Tp > 
struct is_same < _Tp , _Tp > 
: public true_type { } ; 


template < typename _Base , typename _Derived > 
struct is_base_of 
: public integral_constant < bool , __is_base_of ( _Base , _Derived ) > 
{ } ; 

template < typename _From , typename _To , 
bool = __or_ < is_void < _From > , is_function < _To > , 
is_array < _To >>:: value > 
struct __is_convertible_helper 
{ typedef typename is_void < _To >:: type type ; } ; 

template < typename _From , typename _To > 
class __is_convertible_helper < _From , _To , false > 
{ 
template < typename _To1 > 
static void __test_aux ( _To1 ) ; 

template < typename _From1 , typename _To1 , 
typename = decltype ( __test_aux < _To1 > ( std :: declval < _From1 > ( ) ) ) > 
static true_type 
__test ( int ) ; 

template < typename , typename > 
static false_type 
__test ( ... ) ; 

public : 
typedef decltype ( __test < _From , _To > ( 0 ) ) type ; 
} ; 



template < typename _From , typename _To > 
struct is_convertible 
: public __is_convertible_helper < _From , _To >:: type 
{ } ; 





template < typename _Tp > 
struct remove_const 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct remove_const < _Tp const > 
{ typedef _Tp type ; } ; 


template < typename _Tp > 
struct remove_volatile 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct remove_volatile < _Tp volatile > 
{ typedef _Tp type ; } ; 


template < typename _Tp > 
struct remove_cv 
{ 
typedef typename 
remove_const < typename remove_volatile < _Tp >:: type >:: type type ; 
} ; 


template < typename _Tp > 
struct add_const 
{ typedef _Tp const type ; } ; 


template < typename _Tp > 
struct add_volatile 
{ typedef _Tp volatile type ; } ; 


template < typename _Tp > 
struct add_cv 
{ 
typedef typename 
add_const < typename add_volatile < _Tp >:: type >:: type type ; 
} ; 






template < typename _Tp > 
using remove_const_t = typename remove_const < _Tp >:: type ; 


template < typename _Tp > 
using remove_volatile_t = typename remove_volatile < _Tp >:: type ; 


template < typename _Tp > 
using remove_cv_t = typename remove_cv < _Tp >:: type ; 


template < typename _Tp > 
using add_const_t = typename add_const < _Tp >:: type ; 


template < typename _Tp > 
using add_volatile_t = typename add_volatile < _Tp >:: type ; 


template < typename _Tp > 
using add_cv_t = typename add_cv < _Tp >:: type ; 





template < typename _Tp > 
struct remove_reference 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct remove_reference < _Tp &> 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct remove_reference < _Tp &&> 
{ typedef _Tp type ; } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __add_lvalue_reference_helper 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct __add_lvalue_reference_helper < _Tp , true > 
{ typedef _Tp & type ; } ; 


template < typename _Tp > 
struct add_lvalue_reference 
: public __add_lvalue_reference_helper < _Tp > 
{ } ; 

template < typename _Tp , bool = __is_referenceable < _Tp >:: value > 
struct __add_rvalue_reference_helper 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct __add_rvalue_reference_helper < _Tp , true > 
{ typedef _Tp && type ; } ; 


template < typename _Tp > 
struct add_rvalue_reference 
: public __add_rvalue_reference_helper < _Tp > 
{ } ; 



template < typename _Tp > 
using remove_reference_t = typename remove_reference < _Tp >:: type ; 


template < typename _Tp > 
using add_lvalue_reference_t = typename add_lvalue_reference < _Tp >:: type ; 


template < typename _Tp > 
using add_rvalue_reference_t = typename add_rvalue_reference < _Tp >:: type ; 





template < typename _Unqualified , bool _IsConst , bool _IsVol > 
struct __cv_selector ; 

template < typename _Unqualified > 
struct __cv_selector < _Unqualified , false , false > 
{ typedef _Unqualified __type ; } ; 

template < typename _Unqualified > 
struct __cv_selector < _Unqualified , false , true > 
{ typedef volatile _Unqualified __type ; } ; 

template < typename _Unqualified > 
struct __cv_selector < _Unqualified , true , false > 
{ typedef const _Unqualified __type ; } ; 

template < typename _Unqualified > 
struct __cv_selector < _Unqualified , true , true > 
{ typedef const volatile _Unqualified __type ; } ; 

template < typename _Qualified , typename _Unqualified , 
bool _IsConst = is_const < _Qualified >:: value , 
bool _IsVol = is_volatile < _Qualified >:: value > 
class __match_cv_qualifiers 
{ 
typedef __cv_selector < _Unqualified , _IsConst , _IsVol > __match ; 

public : 
typedef typename __match :: __type __type ; 
} ; 


template < typename _Tp > 
struct __make_unsigned 
{ typedef _Tp __type ; } ; 

template <> 
struct __make_unsigned < char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __make_unsigned < signed char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __make_unsigned < short > 
{ typedef unsigned short __type ; } ; 

template <> 
struct __make_unsigned < int > 
{ typedef unsigned int __type ; } ; 

template <> 
struct __make_unsigned < long > 
{ typedef unsigned long __type ; } ; 

template <> 
struct __make_unsigned < long long > 
{ typedef unsigned long long __type ; } ; 


template <> 
struct __make_unsigned < wchar_t > : __make_unsigned < int > 
{ } ; 



template <> 
struct __make_unsigned < __int128 > 
{ typedef unsigned __int128 __type ; } ; 
# 1774 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp , 
bool _IsInt = is_integral < _Tp >:: value , 
bool _IsEnum = is_enum < _Tp >:: value > 
class __make_unsigned_selector ; 

template < typename _Tp > 
class __make_unsigned_selector < _Tp , true , false > 
{ 
typedef __make_unsigned < typename remove_cv < _Tp >:: type > __unsignedt ; 
typedef typename __unsignedt :: __type __unsigned_type ; 
typedef __match_cv_qualifiers < _Tp , __unsigned_type > __cv_unsigned ; 

public : 
typedef typename __cv_unsigned :: __type __type ; 
} ; 

template < typename _Tp > 
class __make_unsigned_selector < _Tp , false , true > 
{ 

typedef unsigned char __smallest ; 
static const bool __b0 = sizeof ( _Tp ) <= sizeof ( __smallest ) ; 
static const bool __b1 = sizeof ( _Tp ) <= sizeof ( unsigned short ) ; 
static const bool __b2 = sizeof ( _Tp ) <= sizeof ( unsigned int ) ; 
static const bool __b3 = sizeof ( _Tp ) <= sizeof ( unsigned long ) ; 
typedef conditional < __b3 , unsigned long , unsigned long long > __cond3 ; 
typedef typename __cond3 :: type __cond3_type ; 
typedef conditional < __b2 , unsigned int , __cond3_type > __cond2 ; 
typedef typename __cond2 :: type __cond2_type ; 
typedef conditional < __b1 , unsigned short , __cond2_type > __cond1 ; 
typedef typename __cond1 :: type __cond1_type ; 

typedef typename conditional < __b0 , __smallest , __cond1_type >:: type 
__unsigned_type ; 
typedef __match_cv_qualifiers < _Tp , __unsigned_type > __cv_unsigned ; 

public : 
typedef typename __cv_unsigned :: __type __type ; 
} ; 





template < typename _Tp > 
struct make_unsigned 
{ typedef typename __make_unsigned_selector < _Tp >:: __type type ; } ; 


template <> 
struct make_unsigned < bool > ; 



template < typename _Tp > 
struct __make_signed 
{ typedef _Tp __type ; } ; 

template <> 
struct __make_signed < char > 
{ typedef signed char __type ; } ; 

template <> 
struct __make_signed < unsigned char > 
{ typedef signed char __type ; } ; 

template <> 
struct __make_signed < unsigned short > 
{ typedef signed short __type ; } ; 

template <> 
struct __make_signed < unsigned int > 
{ typedef signed int __type ; } ; 

template <> 
struct __make_signed < unsigned long > 
{ typedef signed long __type ; } ; 

template <> 
struct __make_signed < unsigned long long > 
{ typedef signed long long __type ; } ; 
# 1863 "/usr/include/c++/7.1.1/type_traits" 3 
template <> 
struct __make_signed < char16_t > : __make_signed < uint_least16_t > 
{ } ; 
template <> 
struct __make_signed < char32_t > : __make_signed < uint_least32_t > 
{ } ; 



template <> 
struct __make_signed < unsigned __int128 > 
{ typedef __int128 __type ; } ; 
# 1893 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp , 
bool _IsInt = is_integral < _Tp >:: value , 
bool _IsEnum = is_enum < _Tp >:: value > 
class __make_signed_selector ; 

template < typename _Tp > 
class __make_signed_selector < _Tp , true , false > 
{ 
typedef __make_signed < typename remove_cv < _Tp >:: type > __signedt ; 
typedef typename __signedt :: __type __signed_type ; 
typedef __match_cv_qualifiers < _Tp , __signed_type > __cv_signed ; 

public : 
typedef typename __cv_signed :: __type __type ; 
} ; 

template < typename _Tp > 
class __make_signed_selector < _Tp , false , true > 
{ 
typedef typename __make_unsigned_selector < _Tp >:: __type __unsigned_type ; 

public : 
typedef typename __make_signed_selector < __unsigned_type >:: __type __type ; 
} ; 





template < typename _Tp > 
struct make_signed 
{ typedef typename __make_signed_selector < _Tp >:: __type type ; } ; 


template <> 
struct make_signed < bool > ; 



template < typename _Tp > 
using make_signed_t = typename make_signed < _Tp >:: type ; 


template < typename _Tp > 
using make_unsigned_t = typename make_unsigned < _Tp >:: type ; 





template < typename _Tp > 
struct remove_extent 
{ typedef _Tp type ; } ; 

template < typename _Tp , std :: size_t _Size > 
struct remove_extent < _Tp [ _Size ] > 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct remove_extent < _Tp [ ] > 
{ typedef _Tp type ; } ; 


template < typename _Tp > 
struct remove_all_extents 
{ typedef _Tp type ; } ; 

template < typename _Tp , std :: size_t _Size > 
struct remove_all_extents < _Tp [ _Size ] > 
{ typedef typename remove_all_extents < _Tp >:: type type ; } ; 

template < typename _Tp > 
struct remove_all_extents < _Tp [ ] > 
{ typedef typename remove_all_extents < _Tp >:: type type ; } ; 



template < typename _Tp > 
using remove_extent_t = typename remove_extent < _Tp >:: type ; 


template < typename _Tp > 
using remove_all_extents_t = typename remove_all_extents < _Tp >:: type ; 




template < typename _Tp , typename > 
struct __remove_pointer_helper 
{ typedef _Tp type ; } ; 

template < typename _Tp , typename _Up > 
struct __remove_pointer_helper < _Tp , _Up *> 
{ typedef _Up type ; } ; 


template < typename _Tp > 
struct remove_pointer 
: public __remove_pointer_helper < _Tp , typename remove_cv < _Tp >:: type > 
{ } ; 


template < typename _Tp , bool = __or_ < __is_referenceable < _Tp > , 
is_void < _Tp >>:: value > 
struct __add_pointer_helper 
{ typedef _Tp type ; } ; 

template < typename _Tp > 
struct __add_pointer_helper < _Tp , true > 
{ typedef typename remove_reference < _Tp >:: type * type ; } ; 

template < typename _Tp > 
struct add_pointer 
: public __add_pointer_helper < _Tp > 
{ } ; 



template < typename _Tp > 
using remove_pointer_t = typename remove_pointer < _Tp >:: type ; 


template < typename _Tp > 
using add_pointer_t = typename add_pointer < _Tp >:: type ; 


template < std :: size_t _Len > 
struct __aligned_storage_msa 
{ 
union __type 
{ 
unsigned char __data [ _Len ] ; 
struct { } __align ; 
} ; 
} ; 
# 2039 "/usr/include/c++/7.1.1/type_traits" 3 
template < std :: size_t _Len , std :: size_t _Align = 
__alignof__ ( typename __aligned_storage_msa < _Len >:: __type ) > 
struct aligned_storage 
{ 
union type 
{ 
unsigned char __data [ _Len ] ; 
struct { } __align ; 
} ; 
} ; 

template < typename ... _Types > 
struct __strictest_alignment 
{ 
static const size_t _S_alignment = 0 ; 
static const size_t _S_size = 0 ; 
} ; 

template < typename _Tp , typename ... _Types > 
struct __strictest_alignment < _Tp , _Types ... > 
{ 
static const size_t _S_alignment = 
alignof ( _Tp ) > __strictest_alignment < _Types ... >:: _S_alignment 
? alignof ( _Tp ) : __strictest_alignment < _Types ... >:: _S_alignment ; 
static const size_t _S_size = 
sizeof ( _Tp ) > __strictest_alignment < _Types ... >:: _S_size 
? sizeof ( _Tp ) : __strictest_alignment < _Types ... >:: _S_size ; 
} ; 
# 2078 "/usr/include/c++/7.1.1/type_traits" 3 
template < size_t _Len , typename ... _Types > 
struct aligned_union 
{ 
private : 
static_assert ( sizeof ... ( _Types ) != 0 , "At least one type is required" ) ; 

using __strictest = __strictest_alignment < _Types ... > ; 
static const size_t _S_len = _Len > __strictest :: _S_size 
? _Len : __strictest :: _S_size ; 
public : 

static const size_t alignment_value = __strictest :: _S_alignment ; 

typedef typename aligned_storage < _S_len , alignment_value >:: type type ; 
} ; 

template < size_t _Len , typename ... _Types > 
const size_t aligned_union < _Len , _Types ... >:: alignment_value ; 



template < typename _Up , 
bool _IsArray = is_array < _Up >:: value , 
bool _IsFunction = is_function < _Up >:: value > 
struct __decay_selector ; 


template < typename _Up > 
struct __decay_selector < _Up , false , false > 
{ typedef typename remove_cv < _Up >:: type __type ; } ; 

template < typename _Up > 
struct __decay_selector < _Up , true , false > 
{ typedef typename remove_extent < _Up >:: type * __type ; } ; 

template < typename _Up > 
struct __decay_selector < _Up , false , true > 
{ typedef typename add_pointer < _Up >:: type __type ; } ; 


template < typename _Tp > 
class decay 
{ 
typedef typename remove_reference < _Tp >:: type __remove_type ; 

public : 
typedef typename __decay_selector < __remove_type >:: __type type ; 
} ; 

template < typename _Tp > 
class reference_wrapper ; 


template < typename _Tp > 
struct __strip_reference_wrapper 
{ 
typedef _Tp __type ; 
} ; 

template < typename _Tp > 
struct __strip_reference_wrapper < reference_wrapper < _Tp > > 
{ 
typedef _Tp & __type ; 
} ; 

template < typename _Tp > 
struct __decay_and_strip 
{ 
typedef typename __strip_reference_wrapper < 
typename decay < _Tp >:: type >:: __type __type ; 
} ; 




template < bool , typename _Tp = void > 
struct enable_if 
{ } ; 


template < typename _Tp > 
struct enable_if < true , _Tp > 
{ typedef _Tp type ; } ; 

template < typename ... _Cond > 
using _Require = typename enable_if < __and_ < _Cond ... >:: value >:: type ; 



template < bool _Cond , typename _Iftrue , typename _Iffalse > 
struct conditional 
{ typedef _Iftrue type ; } ; 


template < typename _Iftrue , typename _Iffalse > 
struct conditional < false , _Iftrue , _Iffalse > 
{ typedef _Iffalse type ; } ; 


template < typename ... _Tp > 
struct common_type ; 



struct __do_common_type_impl 
{ 
template < typename _Tp , typename _Up > 
static __success_type < typename decay < decltype 
( true ? std :: declval < _Tp > ( ) 
: std :: declval < _Up > ( ) ) >:: type > _S_test ( int ) ; 

template < typename , typename > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _Tp , typename _Up > 
struct __common_type_impl 
: private __do_common_type_impl 
{ 
typedef decltype ( _S_test < _Tp , _Up > ( 0 ) ) type ; 
} ; 

struct __do_member_type_wrapper 
{ 
template < typename _Tp > 
static __success_type < typename _Tp :: type > _S_test ( int ) ; 

template < typename > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _Tp > 
struct __member_type_wrapper 
: private __do_member_type_wrapper 
{ 
typedef decltype ( _S_test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _CTp , typename ... _Args > 
struct __expanded_common_type_wrapper 
{ 
typedef common_type < typename _CTp :: type , _Args ... > type ; 
} ; 

template < typename ... _Args > 
struct __expanded_common_type_wrapper < __failure_type , _Args ... > 
{ typedef __failure_type type ; } ; 

template < typename _Tp > 
struct common_type < _Tp > 
{ typedef typename decay < _Tp >:: type type ; } ; 

template < typename _Tp , typename _Up > 
struct common_type < _Tp , _Up > 
: public __common_type_impl < _Tp , _Up >:: type 
{ } ; 

template < typename _Tp , typename _Up , typename ... _Vp > 
struct common_type < _Tp , _Up , _Vp ... > 
: public __expanded_common_type_wrapper < typename __member_type_wrapper < 
common_type < _Tp , _Up >>:: type , _Vp ... >:: type 
{ } ; 


template < typename _Tp > 
struct underlying_type 
{ 
typedef __underlying_type ( _Tp ) type ; 
} ; 

template < typename _Tp > 
struct __declval_protector 
{ 
static const bool __stop = false ; 
static typename add_rvalue_reference < _Tp >:: type __delegate ( ) ; 
} ; 

template < typename _Tp > 
inline typename add_rvalue_reference < _Tp >:: type 
declval ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,26,2258);
__CvT__record_line____(__CvT_miT,26,2259);static_assert ( __declval_protector < _Tp >:: __stop , 
"declval() must not be used!" ) ; 
__CvT__record_line____(__CvT_miT,26,2261);return __declval_protector < _Tp >:: __delegate ( ) ; 
} 


template < typename _Signature > 
class result_of ; 





struct __invoke_memfun_ref { } ; 
struct __invoke_memfun_deref { } ; 
struct __invoke_memobj_ref { } ; 
struct __invoke_memobj_deref { } ; 
struct __invoke_other { } ; 


template < typename _Tp , typename _Tag > 
struct __result_of_success : __success_type < _Tp > 
{ using __invoke_type = _Tag ; } ; 


struct __result_of_memfun_ref_impl 
{ 
template < typename _Fp , typename _Tp1 , typename ... _Args > 
static __result_of_success < decltype ( 
( std :: declval < _Tp1 > ( ) .*std :: declval < _Fp > ( ) ) ( std :: declval < _Args > ( ) ... ) 
) , __invoke_memfun_ref > _S_test ( int ) ; 

template < typename ... > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _MemPtr , typename _Arg , typename ... _Args > 
struct __result_of_memfun_ref 
: private __result_of_memfun_ref_impl 
{ 
typedef decltype ( _S_test < _MemPtr , _Arg , _Args ... > ( 0 ) ) type ; 
} ; 


struct __result_of_memfun_deref_impl 
{ 
template < typename _Fp , typename _Tp1 , typename ... _Args > 
static __result_of_success < decltype ( 
( ( * std :: declval < _Tp1 > ( ) ) .*std :: declval < _Fp > ( ) ) ( std :: declval < _Args > ( ) ... ) 
) , __invoke_memfun_deref > _S_test ( int ) ; 

template < typename ... > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _MemPtr , typename _Arg , typename ... _Args > 
struct __result_of_memfun_deref 
: private __result_of_memfun_deref_impl 
{ 
typedef decltype ( _S_test < _MemPtr , _Arg , _Args ... > ( 0 ) ) type ; 
} ; 


struct __result_of_memobj_ref_impl 
{ 
template < typename _Fp , typename _Tp1 > 
static __result_of_success < decltype ( 
std :: declval < _Tp1 > ( ) .*std :: declval < _Fp > ( ) 
) , __invoke_memobj_ref > _S_test ( int ) ; 

template < typename , typename > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _MemPtr , typename _Arg > 
struct __result_of_memobj_ref 
: private __result_of_memobj_ref_impl 
{ 
typedef decltype ( _S_test < _MemPtr , _Arg > ( 0 ) ) type ; 
} ; 


struct __result_of_memobj_deref_impl 
{ 
template < typename _Fp , typename _Tp1 > 
static __result_of_success < decltype ( 
( * std :: declval < _Tp1 > ( ) ) .*std :: declval < _Fp > ( ) 
) , __invoke_memobj_deref > _S_test ( int ) ; 

template < typename , typename > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _MemPtr , typename _Arg > 
struct __result_of_memobj_deref 
: private __result_of_memobj_deref_impl 
{ 
typedef decltype ( _S_test < _MemPtr , _Arg > ( 0 ) ) type ; 
} ; 

template < typename _MemPtr , typename _Arg > 
struct __result_of_memobj ; 

template < typename _Res , typename _Class , typename _Arg > 
struct __result_of_memobj < _Res _Class ::* , _Arg > 
{ 
typedef typename remove_cv < typename remove_reference < 
_Arg >:: type >:: type _Argval ; 
typedef _Res _Class ::* _MemPtr ; 
typedef typename conditional < __or_ < is_same < _Argval , _Class > , 
is_base_of < _Class , _Argval >>:: value , 
__result_of_memobj_ref < _MemPtr , _Arg > , 
__result_of_memobj_deref < _MemPtr , _Arg > 
>:: type :: type type ; 
} ; 

template < typename _MemPtr , typename _Arg , typename ... _Args > 
struct __result_of_memfun ; 

template < typename _Res , typename _Class , typename _Arg , typename ... _Args > 
struct __result_of_memfun < _Res _Class ::* , _Arg , _Args ... > 
{ 
typedef typename remove_cv < typename remove_reference < 
_Arg >:: type >:: type _Argval ; 
typedef _Res _Class ::* _MemPtr ; 
typedef typename conditional < __or_ < is_same < _Argval , _Class > , 
is_base_of < _Class , _Argval >>:: value , 
__result_of_memfun_ref < _MemPtr , _Arg , _Args ... > , 
__result_of_memfun_deref < _MemPtr , _Arg , _Args ... > 
>:: type :: type type ; 
} ; 






template < typename _Tp , typename _Up = typename decay < _Tp >:: type > 
struct __inv_unwrap 
{ 
using type = _Tp ; 
} ; 

template < typename _Tp , typename _Up > 
struct __inv_unwrap < _Tp , reference_wrapper < _Up >> 
{ 
using type = _Up & ; 
} ; 

template < bool , bool , typename _Functor , typename ... _ArgTypes > 
struct __result_of_impl 
{ 
typedef __failure_type type ; 
} ; 

template < typename _MemPtr , typename _Arg > 
struct __result_of_impl < true , false , _MemPtr , _Arg > 
: public __result_of_memobj < typename decay < _MemPtr >:: type , 
typename __inv_unwrap < _Arg >:: type > 
{ } ; 

template < typename _MemPtr , typename _Arg , typename ... _Args > 
struct __result_of_impl < false , true , _MemPtr , _Arg , _Args ... > 
: public __result_of_memfun < typename decay < _MemPtr >:: type , 
typename __inv_unwrap < _Arg >:: type , _Args ... > 
{ } ; 


struct __result_of_other_impl 
{ 
template < typename _Fn , typename ... _Args > 
static __result_of_success < decltype ( 
std :: declval < _Fn > ( ) ( std :: declval < _Args > ( ) ... ) 
) , __invoke_other > _S_test ( int ) ; 

template < typename ... > 
static __failure_type _S_test ( ... ) ; 
} ; 

template < typename _Functor , typename ... _ArgTypes > 
struct __result_of_impl < false , false , _Functor , _ArgTypes ... > 
: private __result_of_other_impl 
{ 
typedef decltype ( _S_test < _Functor , _ArgTypes ... > ( 0 ) ) type ; 
} ; 


template < typename _Functor , typename ... _ArgTypes > 
struct __invoke_result 
: public __result_of_impl < 
is_member_object_pointer < 
typename remove_reference < _Functor >:: type 
>:: value , 
is_member_function_pointer < 
typename remove_reference < _Functor >:: type 
>:: value , 
_Functor , _ArgTypes ... 
>:: type 
{ } ; 

template < typename _Functor , typename ... _ArgTypes > 
struct result_of < _Functor ( _ArgTypes ... ) > 
: public __invoke_result < _Functor , _ArgTypes ... > 
{ } ; 



template < size_t _Len , size_t _Align = 
__alignof__ ( typename __aligned_storage_msa < _Len >:: __type ) > 
using aligned_storage_t = typename aligned_storage < _Len , _Align >:: type ; 

template < size_t _Len , typename ... _Types > 
using aligned_union_t = typename aligned_union < _Len , _Types ... >:: type ; 


template < typename _Tp > 
using decay_t = typename decay < _Tp >:: type ; 


template < bool _Cond , typename _Tp = void > 
using enable_if_t = typename enable_if < _Cond , _Tp >:: type ; 


template < bool _Cond , typename _Iftrue , typename _Iffalse > 
using conditional_t = typename conditional < _Cond , _Iftrue , _Iffalse >:: type ; 


template < typename ... _Tp > 
using common_type_t = typename common_type < _Tp ... >:: type ; 


template < typename _Tp > 
using underlying_type_t = typename underlying_type < _Tp >:: type ; 


template < typename _Tp > 
using result_of_t = typename result_of < _Tp >:: type ; 


template < typename ... > using __void_t = void ; 




template < typename ... > using void_t = void ; 



template < typename _Default , typename _AlwaysVoid , 
template < typename ... > class _Op , typename ... _Args > 
struct __detector 
{ 
using value_t = false_type ; 
using type = _Default ; 
} ; 


template < typename _Default , template < typename ... > class _Op , 
typename ... _Args > 
struct __detector < _Default , __void_t < _Op < _Args ... >> , _Op , _Args ... > 
{ 
using value_t = true_type ; 
using type = _Op < _Args ... > ; 
} ; 


template < typename _Default , template < typename ... > class _Op , 
typename ... _Args > 
using __detected_or = __detector < _Default , void , _Op , _Args ... > ; 


template < typename _Default , template < typename ... > class _Op , 
typename ... _Args > 
using __detected_or_t 
= typename __detected_or < _Default , _Op , _Args ... >:: type ; 
# 2551 "/usr/include/c++/7.1.1/type_traits" 3 
template < typename _Tp > 
struct __is_swappable ; 

template < typename _Tp > 
struct __is_nothrow_swappable ; 

template < typename ... _Elements > 
class tuple ; 

template < typename > 
struct __is_tuple_like_impl : false_type 
{ } ; 

template < typename ... _Tps > 
struct __is_tuple_like_impl < tuple < _Tps ... >> : true_type 
{ } ; 


template < typename _Tp > 
struct __is_tuple_like 
: public __is_tuple_like_impl < typename remove_cv < 
typename remove_reference < _Tp >:: type >:: type >:: type 
{ } ; 

template < typename _Tp > 
inline 
typename enable_if < __and_ < __not_ < __is_tuple_like < _Tp >> , 
is_move_constructible < _Tp > , 
is_move_assignable < _Tp >>:: value >:: type 
swap ( _Tp & , _Tp & ) 
noexcept ( __and_ < is_nothrow_move_constructible < _Tp > , 
is_nothrow_move_assignable < _Tp >>:: value ) ; 

template < typename _Tp , size_t _Nm > 
inline 
typename enable_if < __is_swappable < _Tp >:: value >:: type 
swap ( _Tp ( & __a ) [ _Nm ] , _Tp ( & __b ) [ _Nm ] ) 
noexcept ( __is_nothrow_swappable < _Tp >:: value ) ; 

namespace __swappable_details { 
using std :: swap ; 

struct __do_is_swappable_impl 
{ 
template < typename _Tp , typename 
= decltype ( swap ( std :: declval < _Tp &> ( ) , std :: declval < _Tp &> ( ) ) ) > 
static true_type __test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 
} ; 

struct __do_is_nothrow_swappable_impl 
{ 
template < typename _Tp > 
static __bool_constant < 
noexcept ( swap ( std :: declval < _Tp &> ( ) , std :: declval < _Tp &> ( ) ) ) 
> __test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 
} ; 

} 

template < typename _Tp > 
struct __is_swappable_impl 
: public __swappable_details :: __do_is_swappable_impl 
{ 
typedef decltype ( __test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _Tp > 
struct __is_nothrow_swappable_impl 
: public __swappable_details :: __do_is_nothrow_swappable_impl 
{ 
typedef decltype ( __test < _Tp > ( 0 ) ) type ; 
} ; 

template < typename _Tp > 
struct __is_swappable 
: public __is_swappable_impl < _Tp >:: type 
{ } ; 

template < typename _Tp > 
struct __is_nothrow_swappable 
: public __is_nothrow_swappable_impl < _Tp >:: type 
{ } ; 






template < typename _Tp > 
struct is_swappable 
: public __is_swappable_impl < _Tp >:: type 
{ } ; 


template < typename _Tp > 
struct is_nothrow_swappable 
: public __is_nothrow_swappable_impl < _Tp >:: type 
{ } ; 



template < typename _Tp > 
constexpr bool is_swappable_v = 
is_swappable < _Tp >:: value ; 


template < typename _Tp > 
constexpr bool is_nothrow_swappable_v = 
is_nothrow_swappable < _Tp >:: value ; 


namespace __swappable_with_details { 
using std :: swap ; 

struct __do_is_swappable_with_impl 
{ 
template < typename _Tp , typename _Up , typename 
= decltype ( swap ( std :: declval < _Tp > ( ) , std :: declval < _Up > ( ) ) ) , 
typename 
= decltype ( swap ( std :: declval < _Up > ( ) , std :: declval < _Tp > ( ) ) ) > 
static true_type __test ( int ) ; 

template < typename , typename > 
static false_type __test ( ... ) ; 
} ; 

struct __do_is_nothrow_swappable_with_impl 
{ 
template < typename _Tp , typename _Up > 
static __bool_constant < 
noexcept ( swap ( std :: declval < _Tp > ( ) , std :: declval < _Up > ( ) ) ) 
&& 
noexcept ( swap ( std :: declval < _Up > ( ) , std :: declval < _Tp > ( ) ) ) 
> __test ( int ) ; 

template < typename , typename > 
static false_type __test ( ... ) ; 
} ; 

} 

template < typename _Tp , typename _Up > 
struct __is_swappable_with_impl 
: public __swappable_with_details :: __do_is_swappable_with_impl 
{ 
typedef decltype ( __test < _Tp , _Up > ( 0 ) ) type ; 
} ; 


template < typename _Tp > 
struct __is_swappable_with_impl < _Tp & , _Tp &> 
: public __swappable_details :: __do_is_swappable_impl 
{ 
typedef decltype ( __test < _Tp &> ( 0 ) ) type ; 
} ; 

template < typename _Tp , typename _Up > 
struct __is_nothrow_swappable_with_impl 
: public __swappable_with_details :: __do_is_nothrow_swappable_with_impl 
{ 
typedef decltype ( __test < _Tp , _Up > ( 0 ) ) type ; 
} ; 


template < typename _Tp > 
struct __is_nothrow_swappable_with_impl < _Tp & , _Tp &> 
: public __swappable_details :: __do_is_nothrow_swappable_impl 
{ 
typedef decltype ( __test < _Tp &> ( 0 ) ) type ; 
} ; 


template < typename _Tp , typename _Up > 
struct is_swappable_with 
: public __is_swappable_with_impl < _Tp , _Up >:: type 
{ } ; 


template < typename _Tp , typename _Up > 
struct is_nothrow_swappable_with 
: public __is_nothrow_swappable_with_impl < _Tp , _Up >:: type 
{ } ; 



template < typename _Tp , typename _Up > 
constexpr bool is_swappable_with_v = 
is_swappable_with < _Tp , _Up >:: value ; 


template < typename _Tp , typename _Up > 
constexpr bool is_nothrow_swappable_with_v = 
is_nothrow_swappable_with < _Tp , _Up >:: value ; 






template < typename _Result , typename _Ret , typename = void > 
struct __is_invocable_impl : false_type { } ; 

template < typename _Result , typename _Ret > 
struct __is_invocable_impl < _Result , _Ret , __void_t < typename _Result :: type >> 
: __or_ < is_void < _Ret > , is_convertible < typename _Result :: type , _Ret >>:: type 
{ } ; 

template < typename _Fn , typename ... _ArgTypes > 
struct __is_invocable 
: __is_invocable_impl < __invoke_result < _Fn , _ArgTypes ... > , void >:: type 
{ } ; 

template < typename _Fn , typename _Tp , typename ... _Args > 
constexpr bool __call_is_nt ( __invoke_memfun_ref ) 
{ 
using _Up = typename __inv_unwrap < _Tp >:: type ; 
return noexcept ( ( std :: declval < _Up > ( ) .*std :: declval < _Fn > ( ) ) ( 
std :: declval < _Args > ( ) ... ) ) ; 
} 

template < typename _Fn , typename _Tp , typename ... _Args > 
constexpr bool __call_is_nt ( __invoke_memfun_deref ) 
{ 
return noexcept ( ( ( * std :: declval < _Tp > ( ) ) .*std :: declval < _Fn > ( ) ) ( 
std :: declval < _Args > ( ) ... ) ) ; 
} 

template < typename _Fn , typename _Tp > 
constexpr bool __call_is_nt ( __invoke_memobj_ref ) 
{ 
using _Up = typename __inv_unwrap < _Tp >:: type ; 
return noexcept ( std :: declval < _Up > ( ) .*std :: declval < _Fn > ( ) ) ; 
} 

template < typename _Fn , typename _Tp > 
constexpr bool __call_is_nt ( __invoke_memobj_deref ) 
{ 
return noexcept ( ( * std :: declval < _Tp > ( ) ) .*std :: declval < _Fn > ( ) ) ; 
} 

template < typename _Fn , typename ... _Args > 
constexpr bool __call_is_nt ( __invoke_other ) 
{ 
return noexcept ( std :: declval < _Fn > ( ) ( std :: declval < _Args > ( ) ... ) ) ; 
} 

template < typename _Result , typename _Fn , typename ... _Args > 
struct __call_is_nothrow 
: __bool_constant < 
std :: __call_is_nt < _Fn , _Args ... > ( typename _Result :: __invoke_type { } ) 
> 
{ } ; 

template < typename _Fn , typename ... _Args > 
using __call_is_nothrow_ 
= __call_is_nothrow < __invoke_result < _Fn , _Args ... > , _Fn , _Args ... > ; 


template < typename _Fn , typename ... _Args > 
struct __is_nothrow_invocable 
: __and_ < __is_invocable < _Fn , _Args ... > , 
__call_is_nothrow_ < _Fn , _Args ... >>:: type 
{ } ; 

struct __nonesuch { 
__nonesuch ( ) = delete ; 
~ __nonesuch ( ) = delete ; 
__nonesuch ( __nonesuch const & ) = delete ; 
void operator = ( __nonesuch const & ) = delete ; 
} ; 
# 3089 "/usr/include/c++/7.1.1/type_traits" 3 

} 
# 55 "/usr/include/c++/7.1.1/bits/move.h" 2 3 

namespace std 
{ 

# 71 "/usr/include/c++/7.1.1/bits/move.h" 3 
template < typename _Tp > 
constexpr _Tp && 
forward ( typename std :: remove_reference < _Tp >:: type & __t ) noexcept 
{ return static_cast < _Tp &&> ( __t ) ; } 







template < typename _Tp > 
constexpr _Tp && 
forward ( typename std :: remove_reference < _Tp >:: type && __t ) noexcept 
{ 
static_assert ( ! std :: is_lvalue_reference < _Tp >:: value , "template argument" 
" substituting _Tp is an lvalue reference type" ) ; 
return static_cast < _Tp &&> ( __t ) ; 
} 






template < typename _Tp > 
constexpr typename std :: remove_reference < _Tp >:: type && 
move ( _Tp && __t ) noexcept 
{ return static_cast < typename std :: remove_reference < _Tp >:: type &&> ( __t ) ; } 


template < typename _Tp > 
struct __move_if_noexcept_cond 
: public __and_ < __not_ < is_nothrow_move_constructible < _Tp >> , 
is_copy_constructible < _Tp >>:: type { } ; 
# 115 "/usr/include/c++/7.1.1/bits/move.h" 3 
template < typename _Tp > 
constexpr typename 
conditional < __move_if_noexcept_cond < _Tp >:: value , const _Tp & , _Tp &&>:: type 
move_if_noexcept ( _Tp & __x ) noexcept 
{ return std :: move ( __x ) ; } 
# 135 "/usr/include/c++/7.1.1/bits/move.h" 3 
template < typename _Tp > 
inline _Tp * 
addressof ( _Tp & __r ) noexcept 
{ return std :: __addressof ( __r ) ; } 



template < typename _Tp > 
const _Tp * addressof ( const _Tp && ) = delete ; 


template < typename _Tp , typename _Up = _Tp > 
inline _Tp 
__exchange ( _Tp & __obj , _Up && __new_val ) 
{ 
_Tp __old_val = std :: move ( __obj ) ; 
__obj = std :: forward < _Up > ( __new_val ) ; 
return __old_val ; 
} 



} 
# 166 "/usr/include/c++/7.1.1/bits/move.h" 3 
namespace std 
{ 

# 181 "/usr/include/c++/7.1.1/bits/move.h" 3 
template < typename _Tp > 
inline 

typename enable_if < __and_ < __not_ < __is_tuple_like < _Tp >> , 
is_move_constructible < _Tp > , 
is_move_assignable < _Tp >>:: value >:: type 
swap ( _Tp & __a , _Tp & __b ) 
noexcept ( __and_ < is_nothrow_move_constructible < _Tp > , 
is_nothrow_move_assignable < _Tp >>:: value ) 




{ 



_Tp __tmp = std :: move ( __a ) ; 
__a = std :: move ( __b ) ; 
__b = std :: move ( __tmp ) ; 
} 




template < typename _Tp , size_t _Nm > 
inline 

typename enable_if < __is_swappable < _Tp >:: value >:: type 
swap ( _Tp ( & __a ) [ _Nm ] , _Tp ( & __b ) [ _Nm ] ) 
noexcept ( __is_nothrow_swappable < _Tp >:: value ) 




{ 
for ( size_t __n = 0 ; __n < _Nm ; ++ __n ) 
swap ( __a [ __n ] , __b [ __n ] ) ; 
} 



} 
# 60 "/usr/include/c++/7.1.1/bits/stl_pair.h" 2 3 





namespace std 
{ 

# 76 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
struct piecewise_construct_t { explicit piecewise_construct_t ( ) = default ; } ; 


constexpr piecewise_construct_t piecewise_construct = 
piecewise_construct_t ( ) ; 


template < typename ... > 
class tuple ; 

template < std :: size_t ... > 
struct _Index_tuple ; 






template < bool , typename _T1 , typename _T2 > 
struct _PCC 
{ 
template < typename _U1 , typename _U2 > 
static constexpr bool _ConstructiblePair ( ) 
{ 
return __and_ < is_constructible < _T1 , const _U1 &> , 
is_constructible < _T2 , const _U2 &>>:: value ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _ImplicitlyConvertiblePair ( ) 
{ 
return __and_ < is_convertible < const _U1 & , _T1 > , 
is_convertible < const _U2 & , _T2 >>:: value ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _MoveConstructiblePair ( ) 
{ 
return __and_ < is_constructible < _T1 , _U1 &&> , 
is_constructible < _T2 , _U2 &&>>:: value ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _ImplicitlyMoveConvertiblePair ( ) 
{ 
return __and_ < is_convertible < _U1 && , _T1 > , 
is_convertible < _U2 && , _T2 >>:: value ; 
} 

template < bool __implicit , typename _U1 , typename _U2 > 
static constexpr bool _CopyMovePair ( ) 
{ 
using __do_converts = __and_ < is_convertible < const _U1 & , _T1 > , 
is_convertible < _U2 && , _T2 >> ; 
using __converts = typename conditional < __implicit , 
__do_converts , 
__not_ < __do_converts >>:: type ; 
return __and_ < is_constructible < _T1 , const _U1 &> , 
is_constructible < _T2 , _U2 &&> , 
__converts 
>:: value ; 
} 

template < bool __implicit , typename _U1 , typename _U2 > 
static constexpr bool _MoveCopyPair ( ) 
{ 
using __do_converts = __and_ < is_convertible < _U1 && , _T1 > , 
is_convertible < const _U2 & , _T2 >> ; 
using __converts = typename conditional < __implicit , 
__do_converts , 
__not_ < __do_converts >>:: type ; 
return __and_ < is_constructible < _T1 , _U1 &&> , 
is_constructible < _T2 , const _U2 &&> , 
__converts 
>:: value ; 
} 
} ; 

template < typename _T1 , typename _T2 > 
struct _PCC < false , _T1 , _T2 > 
{ 
template < typename _U1 , typename _U2 > 
static constexpr bool _ConstructiblePair ( ) 
{ 
return false ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _ImplicitlyConvertiblePair ( ) 
{ 
return false ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _MoveConstructiblePair ( ) 
{ 
return false ; 
} 

template < typename _U1 , typename _U2 > 
static constexpr bool _ImplicitlyMoveConvertiblePair ( ) 
{ 
return false ; 
} 
} ; 




struct __nonesuch_no_braces : std :: __nonesuch { 
explicit __nonesuch_no_braces ( const __nonesuch & ) = delete ; 
} ; 
# 197 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
template < typename _T1 , typename _T2 > 
struct pair 
{ 
typedef _T1 first_type ; 
typedef _T2 second_type ; 

_T1 first ; 
_T2 second ; 






template < typename _U1 = _T1 , 
typename _U2 = _T2 , 
typename enable_if < __and_ < 
__is_implicitly_default_constructible < _U1 > , 
__is_implicitly_default_constructible < _U2 >> 
:: value , bool >:: type = true > 

constexpr pair ( ) 
: first ( ) , second ( ) { } 


template < typename _U1 = _T1 , 
typename _U2 = _T2 , 
typename enable_if < __and_ < 
is_default_constructible < _U1 > , 
is_default_constructible < _U2 > , 
__not_ < 
__and_ < __is_implicitly_default_constructible < _U1 > , 
__is_implicitly_default_constructible < _U2 >>>> 
:: value , bool >:: type = false > 
explicit constexpr pair ( ) 
: first ( ) , second ( ) { } 
# 241 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
using _PCCP = _PCC < true , _T1 , _T2 > ; 

template < typename _U1 = _T1 , typename _U2 = _T2 , typename 
enable_if < _PCCP :: template 
_ConstructiblePair < _U1 , _U2 > ( ) 
&& _PCCP :: template 
_ImplicitlyConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = true > 
constexpr pair ( const _T1 & __a , const _T2 & __b ) 
: first ( __a ) , second ( __b ) { } 

template < typename _U1 = _T1 , typename _U2 = _T2 , typename 
enable_if < _PCCP :: template 
_ConstructiblePair < _U1 , _U2 > ( ) 
&& ! _PCCP :: template 
_ImplicitlyConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = false > 
explicit constexpr pair ( const _T1 & __a , const _T2 & __b ) 
: first ( __a ) , second ( __b ) { } 
# 269 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
template < typename _U1 , typename _U2 > 
using _PCCFP = _PCC <! is_same < _T1 , _U1 >:: value 
|| ! is_same < _T2 , _U2 >:: value , 
_T1 , _T2 > ; 

template < typename _U1 , typename _U2 , typename 
enable_if < _PCCFP < _U1 , _U2 >:: template 
_ConstructiblePair < _U1 , _U2 > ( ) 
&& _PCCFP < _U1 , _U2 >:: template 
_ImplicitlyConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = true > 
constexpr pair ( const pair < _U1 , _U2 >& __p ) 
: first ( __p . first ) , second ( __p . second ) { } 

template < typename _U1 , typename _U2 , typename 
enable_if < _PCCFP < _U1 , _U2 >:: template 
_ConstructiblePair < _U1 , _U2 > ( ) 
&& ! _PCCFP < _U1 , _U2 >:: template 
_ImplicitlyConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = false > 
explicit constexpr pair ( const pair < _U1 , _U2 >& __p ) 
: first ( __p . first ) , second ( __p . second ) { } 

constexpr pair ( const pair & ) = default ; 
constexpr pair ( pair && ) = default ; 


template < typename _U1 , typename 
enable_if < _PCCP :: template 
_MoveCopyPair < true , _U1 , _T2 > ( ) , 
bool >:: type = true > 
constexpr pair ( _U1 && __x , const _T2 & __y ) 
: first ( std :: forward < _U1 > ( __x ) ) , second ( __y ) { } 

template < typename _U1 , typename 
enable_if < _PCCP :: template 
_MoveCopyPair < false , _U1 , _T2 > ( ) , 
bool >:: type = false > 
explicit constexpr pair ( _U1 && __x , const _T2 & __y ) 
: first ( std :: forward < _U1 > ( __x ) ) , second ( __y ) { } 

template < typename _U2 , typename 
enable_if < _PCCP :: template 
_CopyMovePair < true , _T1 , _U2 > ( ) , 
bool >:: type = true > 
constexpr pair ( const _T1 & __x , _U2 && __y ) 
: first ( __x ) , second ( std :: forward < _U2 > ( __y ) ) { } 

template < typename _U2 , typename 
enable_if < _PCCP :: template 
_CopyMovePair < false , _T1 , _U2 > ( ) , 
bool >:: type = false > 
explicit pair ( const _T1 & __x , _U2 && __y ) 
: first ( __x ) , second ( std :: forward < _U2 > ( __y ) ) { } 

template < typename _U1 , typename _U2 , typename 
enable_if < _PCCP :: template 
_MoveConstructiblePair < _U1 , _U2 > ( ) 
&& _PCCP :: template 
_ImplicitlyMoveConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = true > 
constexpr pair ( _U1 && __x , _U2 && __y ) 
: first ( std :: forward < _U1 > ( __x ) ) , second ( std :: forward < _U2 > ( __y ) ) { } 

template < typename _U1 , typename _U2 , typename 
enable_if < _PCCP :: template 
_MoveConstructiblePair < _U1 , _U2 > ( ) 
&& ! _PCCP :: template 
_ImplicitlyMoveConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = false > 
explicit constexpr pair ( _U1 && __x , _U2 && __y ) 
: first ( std :: forward < _U1 > ( __x ) ) , second ( std :: forward < _U2 > ( __y ) ) { } 


template < typename _U1 , typename _U2 , typename 
enable_if < _PCCFP < _U1 , _U2 >:: template 
_MoveConstructiblePair < _U1 , _U2 > ( ) 
&& _PCCFP < _U1 , _U2 >:: template 
_ImplicitlyMoveConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = true > 
constexpr pair ( pair < _U1 , _U2 >&& __p ) 
: first ( std :: forward < _U1 > ( __p . first ) ) , 
second ( std :: forward < _U2 > ( __p . second ) ) { } 

template < typename _U1 , typename _U2 , typename 
enable_if < _PCCFP < _U1 , _U2 >:: template 
_MoveConstructiblePair < _U1 , _U2 > ( ) 
&& ! _PCCFP < _U1 , _U2 >:: template 
_ImplicitlyMoveConvertiblePair < _U1 , _U2 > ( ) , 
bool >:: type = false > 
explicit constexpr pair ( pair < _U1 , _U2 >&& __p ) 
: first ( std :: forward < _U1 > ( __p . first ) ) , 
second ( std :: forward < _U2 > ( __p . second ) ) { } 

template < typename ... _Args1 , typename ... _Args2 > 
pair ( piecewise_construct_t , tuple < _Args1 ... > , tuple < _Args2 ... > ) ; 

pair & 
operator = ( typename conditional < 
__and_ < is_copy_assignable < _T1 > , 
is_copy_assignable < _T2 >>:: value , 
const pair & , const __nonesuch_no_braces &>:: type __p ) 
{ 
first = __p . first ; 
second = __p . second ; 
return * this ; 
} 

pair & 
operator = ( typename conditional < 
__not_ < __and_ < is_copy_assignable < _T1 > , 
is_copy_assignable < _T2 >>>:: value , 
const pair & , const __nonesuch_no_braces &>:: type __p ) = delete ; 

pair & 
operator = ( typename conditional < 
__and_ < is_move_assignable < _T1 > , 
is_move_assignable < _T2 >>:: value , 
pair && , __nonesuch_no_braces &&>:: type __p ) 
noexcept ( __and_ < is_nothrow_move_assignable < _T1 > , 
is_nothrow_move_assignable < _T2 >>:: value ) 
{ 
first = std :: forward < first_type > ( __p . first ) ; 
second = std :: forward < second_type > ( __p . second ) ; 
return * this ; 
} 

template < typename _U1 , typename _U2 > 
typename enable_if < __and_ < is_assignable < _T1 & , const _U1 &> , 
is_assignable < _T2 & , const _U2 &>>:: value , 
pair &>:: type 
operator = ( const pair < _U1 , _U2 >& __p ) 
{ 
first = __p . first ; 
second = __p . second ; 
return * this ; 
} 

template < typename _U1 , typename _U2 > 
typename enable_if < __and_ < is_assignable < _T1 & , _U1 &&> , 
is_assignable < _T2 & , _U2 &&>>:: value , 
pair &>:: type 
operator = ( pair < _U1 , _U2 >&& __p ) 
{ 
first = std :: forward < _U1 > ( __p . first ) ; 
second = std :: forward < _U2 > ( __p . second ) ; 
return * this ; 
} 

void 
swap ( pair & __p ) 
noexcept ( __and_ < __is_nothrow_swappable < _T1 > , 
__is_nothrow_swappable < _T2 >>:: value ) 
{ 
using std :: swap ; 
swap ( first , __p . first ) ; 
swap ( second , __p . second ) ; 
} 

private : 
template < typename ... _Args1 , std :: size_t ... _Indexes1 , 
typename ... _Args2 , std :: size_t ... _Indexes2 > 
pair ( tuple < _Args1 ... >& , tuple < _Args2 ... >& , 
_Index_tuple < _Indexes1 ... > , _Index_tuple < _Indexes2 ... > ) ; 

} ; 






template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator == ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return __x . first == __y . first && __x . second == __y . second ; } 


template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator < ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return __x . first < __y . first 
|| ( ! ( __y . first < __x . first ) && __x . second < __y . second ) ; } 


template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator != ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return ! ( __x == __y ) ; } 


template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator > ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return __y < __x ; } 


template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator <= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return ! ( __y < __x ) ; } 


template < typename _T1 , typename _T2 > 
inline constexpr bool 
operator >= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ return ! ( __x < __y ) ; } 





template < typename _T1 , typename _T2 > 
inline 


typename enable_if < __and_ < __is_swappable < _T1 > , 
__is_swappable < _T2 >>:: value >:: type 



swap ( pair < _T1 , _T2 >& __x , pair < _T1 , _T2 >& __y ) 
noexcept ( noexcept ( __x . swap ( __y ) ) ) 
{ __x . swap ( __y ) ; } 


template < typename _T1 , typename _T2 > 
typename enable_if <! __and_ < __is_swappable < _T1 > , 
__is_swappable < _T2 >>:: value >:: type 
swap ( pair < _T1 , _T2 >& , pair < _T1 , _T2 >& ) = delete ; 
# 516 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 
template < typename _T1 , typename _T2 > 
constexpr pair < typename __decay_and_strip < _T1 >:: __type , 
typename __decay_and_strip < _T2 >:: __type > 
make_pair ( _T1 && __x , _T2 && __y ) 
{ 
typedef typename __decay_and_strip < _T1 >:: __type __ds_type1 ; 
typedef typename __decay_and_strip < _T2 >:: __type __ds_type2 ; 
typedef pair < __ds_type1 , __ds_type2 > __pair_type ; 
return __pair_type ( std :: forward < _T1 > ( __x ) , std :: forward < _T2 > ( __y ) ) ; 
} 
# 535 "/usr/include/c++/7.1.1/bits/stl_pair.h" 3 

} 
# 65 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 1 3 
# 62 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 

# 63 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 







namespace std 
{ 

# 89 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 
struct input_iterator_tag { } ; 


struct output_iterator_tag { } ; 


struct forward_iterator_tag : public input_iterator_tag { } ; 



struct bidirectional_iterator_tag : public forward_iterator_tag { } ; 



struct random_access_iterator_tag : public bidirectional_iterator_tag { } ; 
# 116 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 
template < typename _Category , typename _Tp , typename _Distance = ptrdiff_t , 
typename _Pointer = _Tp * , typename _Reference = _Tp &> 
struct iterator 
{ 

typedef _Category iterator_category ; 

typedef _Tp value_type ; 

typedef _Distance difference_type ; 

typedef _Pointer pointer ; 

typedef _Reference reference ; 
} ; 
# 143 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 
template < typename _Iterator , typename = __void_t <>> 
struct __iterator_traits { } ; 

template < typename _Iterator > 
struct __iterator_traits < _Iterator , 
__void_t < typename _Iterator :: iterator_category , 
typename _Iterator :: value_type , 
typename _Iterator :: difference_type , 
typename _Iterator :: pointer , 
typename _Iterator :: reference >> 
{ 
typedef typename _Iterator :: iterator_category iterator_category ; 
typedef typename _Iterator :: value_type value_type ; 
typedef typename _Iterator :: difference_type difference_type ; 
typedef typename _Iterator :: pointer pointer ; 
typedef typename _Iterator :: reference reference ; 
} ; 

template < typename _Iterator > 
struct iterator_traits 
: public __iterator_traits < _Iterator > { } ; 
# 177 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 
template < typename _Tp > 
struct iterator_traits < _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef _Tp & reference ; 
} ; 


template < typename _Tp > 
struct iterator_traits < const _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef const _Tp * pointer ; 
typedef const _Tp & reference ; 
} ; 





template < typename _Iter > 
inline typename iterator_traits < _Iter >:: iterator_category 
__iterator_category ( const _Iter & ) 
{ return typename iterator_traits < _Iter >:: iterator_category ( ) ; } 
# 230 "/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h" 3 
template < typename _InIter > 
using _RequireInputIter = typename 
enable_if < is_convertible < typename 
iterator_traits < _InIter >:: iterator_category , 
input_iterator_tag >:: value >:: type ; 



} 
# 66 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 1 3 
# 62 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 3 

# 63 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 3 


# 1 "/usr/include/c++/7.1.1/debug/assertions.h" 1 3 
# 66 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 2 3 

namespace std 
{ 


template < typename > struct _List_iterator ; 
template < typename > struct _List_const_iterator ; 




template < typename _InputIterator > 
inline constexpr 
typename iterator_traits < _InputIterator >:: difference_type 
__distance ( _InputIterator __first , _InputIterator __last , 
input_iterator_tag ) 
{ 



typename iterator_traits < _InputIterator >:: difference_type __n = 0 ; 
while ( __first != __last ) 
{ 
++ __first ; 
++ __n ; 
} 
return __n ; 
} 

template < typename _RandomAccessIterator > 
inline constexpr 
typename iterator_traits < _RandomAccessIterator >:: difference_type 
__distance ( _RandomAccessIterator __first , _RandomAccessIterator __last , 
random_access_iterator_tag ) 
{ 



return __last - __first ; 
} 



template < typename _Tp > 
ptrdiff_t 
__distance ( std :: _List_iterator < _Tp > , 
std :: _List_iterator < _Tp > , 
input_iterator_tag ) ; 

template < typename _Tp > 
ptrdiff_t 
__distance ( std :: _List_const_iterator < _Tp > , 
std :: _List_const_iterator < _Tp > , 
input_iterator_tag ) ; 
# 135 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator > 
inline 
typename iterator_traits < _InputIterator >:: difference_type 
distance ( _InputIterator __first , _InputIterator __last ) 
{ 

return std :: __distance ( __first , __last , 
std :: __iterator_category ( __first ) ) ; 
} 

template < typename _InputIterator , typename _Distance > 
inline constexpr void 
__advance ( _InputIterator & __i , _Distance __n , input_iterator_tag ) 
{ 


; 
while ( __n -- ) 
++ __i ; 
} 

template < typename _BidirectionalIterator , typename _Distance > 
inline constexpr void 
__advance ( _BidirectionalIterator & __i , _Distance __n , 
bidirectional_iterator_tag ) 
{ 



if ( __n > 0 ) 
while ( __n -- ) 
++ __i ; 
else 
while ( __n ++ ) 
-- __i ; 
} 

template < typename _RandomAccessIterator , typename _Distance > 
inline constexpr void 
__advance ( _RandomAccessIterator & __i , _Distance __n , 
random_access_iterator_tag ) 
{ 



__i += __n ; 
} 
# 195 "/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator , typename _Distance > 
inline void 
advance ( _InputIterator & __i , _Distance __n ) 
{ 

typename iterator_traits < _InputIterator >:: difference_type __d = __n ; 
std :: __advance ( __i , __d , std :: __iterator_category ( __i ) ) ; 
} 



template < typename _ForwardIterator > 
inline _ForwardIterator 
next ( _ForwardIterator __x , typename 
iterator_traits < _ForwardIterator >:: difference_type __n = 1 ) 
{ 



std :: advance ( __x , __n ) ; 
return __x ; 
} 

template < typename _BidirectionalIterator > 
inline _BidirectionalIterator 
prev ( _BidirectionalIterator __x , typename 
iterator_traits < _BidirectionalIterator >:: difference_type __n = 1 ) 
{ 



std :: advance ( __x , - __n ) ; 
return __x ; 
} 




} 
# 67 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 1 3 
# 66 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
# 1 "/usr/include/c++/7.1.1/bits/ptr_traits.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/ptr_traits.h" 3 
namespace std 
{ 


class __undefined ; 


template < typename _Tp > 
struct __get_first_arg 
{ using type = __undefined ; } ; 

template < template < typename , typename ... > class _Template , typename _Tp , 
typename ... _Types > 
struct __get_first_arg < _Template < _Tp , _Types ... >> 
{ using type = _Tp ; } ; 

template < typename _Tp > 
using __get_first_arg_t = typename __get_first_arg < _Tp >:: type ; 


template < typename _Tp , typename _Up > 
struct __replace_first_arg 
{ } ; 

template < template < typename , typename ... > class _Template , typename _Up , 
typename _Tp , typename ... _Types > 
struct __replace_first_arg < _Template < _Tp , _Types ... > , _Up > 
{ using type = _Template < _Up , _Types ... > ; } ; 

template < typename _Tp , typename _Up > 
using __replace_first_arg_t = typename __replace_first_arg < _Tp , _Up >:: type ; 

template < typename _Tp > 
using __make_not_void 
= typename conditional < is_void < _Tp >:: value , __undefined , _Tp >:: type ; 





template < typename _Ptr > 
struct pointer_traits 
{ 
private : 
template < typename _Tp > 
using __element_type = typename _Tp :: element_type ; 

template < typename _Tp > 
using __difference_type = typename _Tp :: difference_type ; 

template < typename _Tp , typename _Up , typename = void > 
struct __rebind : __replace_first_arg < _Tp , _Up > { } ; 

template < typename _Tp , typename _Up > 
struct __rebind < _Tp , _Up , __void_t < typename _Tp :: template rebind < _Up >>> 
{ using type = typename _Tp :: template rebind < _Up > ; } ; 

public : 

using pointer = _Ptr ; 


using element_type 
= __detected_or_t < __get_first_arg_t < _Ptr > , __element_type , _Ptr > ; 


using difference_type 
= __detected_or_t < ptrdiff_t , __difference_type , _Ptr > ; 


template < typename _Up > 
using rebind = typename __rebind < _Ptr , _Up >:: type ; 

static _Ptr 
pointer_to ( __make_not_void < element_type >& __e ) 
{ return _Ptr :: pointer_to ( __e ) ; } 

static_assert ( ! is_same < element_type , __undefined >:: value , 
"pointer type defines element_type or is like SomePointer<T, Args>" ) ; 
} ; 





template < typename _Tp > 
struct pointer_traits < _Tp *> 
{ 

typedef _Tp * pointer ; 

typedef _Tp element_type ; 

typedef ptrdiff_t difference_type ; 

template < typename _Up > 
using rebind = _Up * ; 






static pointer 
pointer_to ( __make_not_void < element_type >& __r ) noexcept 
{ return std :: addressof ( __r ) ; } 
} ; 


template < typename _Ptr , typename _Tp > 
using __ptr_rebind = typename pointer_traits < _Ptr >:: template rebind < _Tp > ; 


} 
# 67 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 2 3 





namespace std 
{ 

# 100 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Iterator > 
class reverse_iterator 
: public iterator < typename iterator_traits < _Iterator >:: iterator_category , 
typename iterator_traits < _Iterator >:: value_type , 
typename iterator_traits < _Iterator >:: difference_type , 
typename iterator_traits < _Iterator >:: pointer , 
typename iterator_traits < _Iterator >:: reference > 
{ 
protected : 
_Iterator current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: pointer pointer ; 
typedef typename __traits_type :: reference reference ; 








reverse_iterator ( ) : current ( ) { } 




explicit 
reverse_iterator ( iterator_type __x ) : current ( __x ) { } 





reverse_iterator ( const reverse_iterator & __x ) 
: current ( __x . current ) { } 





template < typename _Iter > 

reverse_iterator ( const reverse_iterator < _Iter >& __x ) 
: current ( __x . base ( ) ) { } 




iterator_type 
base ( ) const 
{ return current ; } 
# 167 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
reference 
operator * ( ) const 
{ 
_Iterator __tmp = current ; 
return *-- __tmp ; 
} 






pointer 
operator -> ( ) const 
{ return & ( operator * ( ) ) ; } 






reverse_iterator & 
operator ++ ( ) 
{ 
-- current ; 
return * this ; 
} 






reverse_iterator 
operator ++ ( int ) 
{ 
reverse_iterator __tmp = * this ; 
-- current ; 
return __tmp ; 
} 






reverse_iterator & 
operator -- ( ) 
{ 
++ current ; 
return * this ; 
} 






reverse_iterator 
operator -- ( int ) 
{ 
reverse_iterator __tmp = * this ; 
++ current ; 
return __tmp ; 
} 






reverse_iterator 
operator + ( difference_type __n ) const 
{ return reverse_iterator ( current - __n ) ; } 







reverse_iterator & 
operator += ( difference_type __n ) 
{ 
current -= __n ; 
return * this ; 
} 






reverse_iterator 
operator - ( difference_type __n ) const 
{ return reverse_iterator ( current + __n ) ; } 







reverse_iterator & 
operator -= ( difference_type __n ) 
{ 
current += __n ; 
return * this ; 
} 






reference 
operator [ ] ( difference_type __n ) const 
{ return * ( * this + __n ) ; } 
} ; 
# 297 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Iterator > 
inline bool 
operator == ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator < ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator != ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _Iterator > 
inline bool 
operator > ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y < __x ; } 

template < typename _Iterator > 
inline bool 
operator <= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _Iterator > 
inline bool 
operator >= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x < __y ) ; } 



template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator == ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator < ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator != ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator > ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y < __x ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator <= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator >= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x < __y ) ; } 
# 387 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _IteratorL , typename _IteratorR > 
inline auto 
operator - ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
-> decltype ( __y . base ( ) - __x . base ( ) ) 
{ return __y . base ( ) - __x . base ( ) ; } 


template < typename _Iterator > 
inline reverse_iterator < _Iterator > 
operator + ( typename reverse_iterator < _Iterator >:: difference_type __n , 
const reverse_iterator < _Iterator >& __x ) 
{ return reverse_iterator < _Iterator > ( __x . base ( ) - __n ) ; } 



template < typename _Iterator > 
inline reverse_iterator < _Iterator > 
__make_reverse_iterator ( _Iterator __i ) 
{ return reverse_iterator < _Iterator > ( __i ) ; } 







template < typename _Iterator > 
inline reverse_iterator < _Iterator > 
make_reverse_iterator ( _Iterator __i ) 
{ return reverse_iterator < _Iterator > ( __i ) ; } 




template < typename _Iterator > 
auto 
__niter_base ( reverse_iterator < _Iterator > __it ) 
-> decltype ( __make_reverse_iterator ( __niter_base ( __it . base ( ) ) ) ) 
{ return __make_reverse_iterator ( __niter_base ( __it . base ( ) ) ) ; } 

template < typename _Iterator > 
struct __is_move_iterator < reverse_iterator < _Iterator > > 
: __is_move_iterator < _Iterator > 
{ } ; 

template < typename _Iterator > 
auto 
__miter_base ( reverse_iterator < _Iterator > __it ) 
-> decltype ( __make_reverse_iterator ( __miter_base ( __it . base ( ) ) ) ) 
{ return __make_reverse_iterator ( __miter_base ( __it . base ( ) ) ) ; } 
# 451 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container > 
class back_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit 
back_insert_iterator ( _Container & __x ) 
: container ( std :: __addressof ( __x ) ) { } 
# 486 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
back_insert_iterator & 
operator = ( const typename _Container :: value_type & __value ) 
{ 
container -> push_back ( __value ) ; 
return * this ; 
} 

back_insert_iterator & 
operator = ( typename _Container :: value_type && __value ) 
{ 
container -> push_back ( std :: move ( __value ) ) ; 
return * this ; 
} 



back_insert_iterator & 
operator * ( ) 
{ return * this ; } 


back_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


back_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 528 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container > 
inline back_insert_iterator < _Container > 
back_inserter ( _Container & __x ) 
{ return back_insert_iterator < _Container > ( __x ) ; } 
# 543 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container > 
class front_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit front_insert_iterator ( _Container & __x ) 
: container ( std :: __addressof ( __x ) ) { } 
# 577 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
front_insert_iterator & 
operator = ( const typename _Container :: value_type & __value ) 
{ 
container -> push_front ( __value ) ; 
return * this ; 
} 

front_insert_iterator & 
operator = ( typename _Container :: value_type && __value ) 
{ 
container -> push_front ( std :: move ( __value ) ) ; 
return * this ; 
} 



front_insert_iterator & 
operator * ( ) 
{ return * this ; } 


front_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


front_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 619 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container > 
inline front_insert_iterator < _Container > 
front_inserter ( _Container & __x ) 
{ return front_insert_iterator < _Container > ( __x ) ; } 
# 638 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container > 
class insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 
typename _Container :: iterator iter ; 

public : 

typedef _Container container_type ; 





insert_iterator ( _Container & __x , typename _Container :: iterator __i ) 
: container ( std :: __addressof ( __x ) ) , iter ( __i ) { } 
# 689 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
insert_iterator & 
operator = ( const typename _Container :: value_type & __value ) 
{ 
iter = container -> insert ( iter , __value ) ; 
++ iter ; 
return * this ; 
} 

insert_iterator & 
operator = ( typename _Container :: value_type && __value ) 
{ 
iter = container -> insert ( iter , std :: move ( __value ) ) ; 
++ iter ; 
return * this ; 
} 



insert_iterator & 
operator * ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 733 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Container , typename _Iterator > 
inline insert_iterator < _Container > 
inserter ( _Container & __x , _Iterator __i ) 
{ 
return insert_iterator < _Container > ( __x , 
typename _Container :: iterator ( __i ) ) ; 
} 




} 

namespace __gnu_cxx 
{ 

# 757 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
using std :: iterator_traits ; 
using std :: iterator ; 
template < typename _Iterator , typename _Container > 
class __normal_iterator 
{ 
protected : 
_Iterator _M_current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: iterator_category iterator_category ; 
typedef typename __traits_type :: value_type value_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: reference reference ; 
typedef typename __traits_type :: pointer pointer ; 

constexpr __normal_iterator ( ) noexcept 
: _M_current ( _Iterator ( ) ) { } 

explicit 
__normal_iterator ( const _Iterator & __i ) noexcept 
: _M_current ( __i ) { } 


template < typename _Iter > 
__normal_iterator ( const __normal_iterator < _Iter , 
typename __enable_if < 
( std :: __are_same < _Iter , typename _Container :: pointer >:: __value ) , 
_Container >:: __type >& __i ) noexcept 
: _M_current ( __i . base ( ) ) { } 


reference 
operator * ( ) const noexcept 
{ return * _M_current ; } 

pointer 
operator -> ( ) const noexcept 
{ return _M_current ; } 

__normal_iterator & 
operator ++ ( ) noexcept 
{ 
++ _M_current ; 
return * this ; 
} 

__normal_iterator 
operator ++ ( int ) noexcept 
{ return __normal_iterator ( _M_current ++ ) ; } 


__normal_iterator & 
operator -- ( ) noexcept 
{ 
-- _M_current ; 
return * this ; 
} 

__normal_iterator 
operator -- ( int ) noexcept 
{ return __normal_iterator ( _M_current -- ) ; } 


reference 
operator [ ] ( difference_type __n ) const noexcept 
{ return _M_current [ __n ] ; } 

__normal_iterator & 
operator += ( difference_type __n ) noexcept 
{ _M_current += __n ; return * this ; } 

__normal_iterator 
operator + ( difference_type __n ) const noexcept 
{ return __normal_iterator ( _M_current + __n ) ; } 

__normal_iterator & 
operator -= ( difference_type __n ) noexcept 
{ _M_current -= __n ; return * this ; } 

__normal_iterator 
operator - ( difference_type __n ) const noexcept 
{ return __normal_iterator ( _M_current - __n ) ; } 

const _Iterator & 
base ( ) const noexcept 
{ return _M_current ; } 
} ; 
# 857 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) != __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) != __rhs . base ( ) ; } 


template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) >= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) >= __rhs . base ( ) ; } 





template < typename _IteratorL , typename _IteratorR , typename _Container > 


inline auto 
operator - ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) noexcept 
-> decltype ( __lhs . base ( ) - __rhs . base ( ) ) 





{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline typename __normal_iterator < _Iterator , _Container >:: difference_type 
operator - ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
noexcept 
{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline __normal_iterator < _Iterator , _Container > 
operator + ( typename __normal_iterator < _Iterator , _Container >:: difference_type 
__n , const __normal_iterator < _Iterator , _Container >& __i ) 
noexcept 
{ return __normal_iterator < _Iterator , _Container > ( __i . base ( ) + __n ) ; } 


} 

namespace std 
{ 


template < typename _Iterator , typename _Container > 
_Iterator 
__niter_base ( __gnu_cxx :: __normal_iterator < _Iterator , _Container > __it ) 
{ return __it . base ( ) ; } 


} 



namespace std 
{ 

# 1009 "/usr/include/c++/7.1.1/bits/stl_iterator.h" 3 
template < typename _Iterator > 
class move_iterator 
{ 
protected : 
_Iterator _M_current ; 

typedef iterator_traits < _Iterator > __traits_type ; 
typedef typename __traits_type :: reference __base_ref ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: iterator_category iterator_category ; 
typedef typename __traits_type :: value_type value_type ; 
typedef typename __traits_type :: difference_type difference_type ; 

typedef _Iterator pointer ; 


typedef typename conditional < is_reference < __base_ref >:: value , 
typename remove_reference < __base_ref >:: type && , 
__base_ref >:: type reference ; 


move_iterator ( ) 
: _M_current ( ) { } 

explicit 
move_iterator ( iterator_type __i ) 
: _M_current ( __i ) { } 

template < typename _Iter > 

move_iterator ( const move_iterator < _Iter >& __i ) 
: _M_current ( __i . base ( ) ) { } 

iterator_type 
base ( ) const 
{ return _M_current ; } 

reference 
operator * ( ) const 
{ return static_cast < reference > ( * _M_current ) ; } 

pointer 
operator -> ( ) const 
{ return _M_current ; } 

move_iterator & 
operator ++ ( ) 
{ 
++ _M_current ; 
return * this ; 
} 

move_iterator 
operator ++ ( int ) 
{ 
move_iterator __tmp = * this ; 
++ _M_current ; 
return __tmp ; 
} 

move_iterator & 
operator -- ( ) 
{ 
-- _M_current ; 
return * this ; 
} 

move_iterator 
operator -- ( int ) 
{ 
move_iterator __tmp = * this ; 
-- _M_current ; 
return __tmp ; 
} 

move_iterator 
operator + ( difference_type __n ) const 
{ return move_iterator ( _M_current + __n ) ; } 

move_iterator & 
operator += ( difference_type __n ) 
{ 
_M_current += __n ; 
return * this ; 
} 

move_iterator 
operator - ( difference_type __n ) const 
{ return move_iterator ( _M_current - __n ) ; } 

move_iterator & 
operator -= ( difference_type __n ) 
{ 
_M_current -= __n ; 
return * this ; 
} 

reference 
operator [ ] ( difference_type __n ) const 
{ return std :: move ( _M_current [ __n ] ) ; } 
} ; 




template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator == ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator == ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator != ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _Iterator > 
inline bool 
operator != ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator < ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return __x . base ( ) < __y . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator < ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return __x . base ( ) < __y . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator <= ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _Iterator > 
inline bool 
operator <= ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator > ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return __y < __x ; } 

template < typename _Iterator > 
inline bool 
operator > ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return __y < __x ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator >= ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
{ return ! ( __x < __y ) ; } 

template < typename _Iterator > 
inline bool 
operator >= ( const move_iterator < _Iterator >& __x , 
const move_iterator < _Iterator >& __y ) 
{ return ! ( __x < __y ) ; } 


template < typename _IteratorL , typename _IteratorR > 
inline auto 
operator - ( const move_iterator < _IteratorL >& __x , 
const move_iterator < _IteratorR >& __y ) 
-> decltype ( __x . base ( ) - __y . base ( ) ) 
{ return __x . base ( ) - __y . base ( ) ; } 

template < typename _Iterator > 
inline move_iterator < _Iterator > 
operator + ( typename move_iterator < _Iterator >:: difference_type __n , 
const move_iterator < _Iterator >& __x ) 
{ return __x + __n ; } 

template < typename _Iterator > 
inline move_iterator < _Iterator > 
make_move_iterator ( _Iterator __i ) 
{ return move_iterator < _Iterator > ( __i ) ; } 

template < typename _Iterator , typename _ReturnType 
= typename conditional < __move_if_noexcept_cond 
< typename iterator_traits < _Iterator >:: value_type >:: value , 
_Iterator , move_iterator < _Iterator >>:: type > 
inline _ReturnType 
__make_move_if_noexcept_iterator ( _Iterator __i ) 
{ return _ReturnType ( __i ) ; } 



template < typename _Tp , typename _ReturnType 
= typename conditional < __move_if_noexcept_cond < _Tp >:: value , 
const _Tp * , move_iterator < _Tp *>>:: type > 
inline _ReturnType 
__make_move_if_noexcept_iterator ( _Tp * __i ) 
{ return _ReturnType ( __i ) ; } 



template < typename _Iterator > 
auto 
__niter_base ( move_iterator < _Iterator > __it ) 
-> decltype ( make_move_iterator ( __niter_base ( __it . base ( ) ) ) ) 
{ return make_move_iterator ( __niter_base ( __it . base ( ) ) ) ; } 

template < typename _Iterator > 
struct __is_move_iterator < move_iterator < _Iterator > > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template < typename _Iterator > 
auto 
__miter_base ( move_iterator < _Iterator > __it ) 
-> decltype ( __miter_base ( __it . base ( ) ) ) 
{ return __miter_base ( __it . base ( ) ) ; } 


} 
# 68 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 

# 1 "/usr/include/c++/7.1.1/debug/debug.h" 1 3 
# 48 "/usr/include/c++/7.1.1/debug/debug.h" 3 
namespace std 
{ 
namespace __debug { } 
} 




namespace __gnu_debug 
{ 
using namespace std :: __debug ; 
} 
# 70 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 

# 1 "/usr/include/c++/7.1.1/bits/predefined_ops.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/predefined_ops.h" 3 
namespace __gnu_cxx 
{ 
namespace __ops 
{ 
struct _Iter_less_iter 
{ 
template < typename _Iterator1 , typename _Iterator2 > 
constexpr 
bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) const 
{ return * __it1 < * __it2 ; } 
} ; 

constexpr 
inline _Iter_less_iter 
__iter_less_iter ( ) 
{ return _Iter_less_iter ( ) ; } 

struct _Iter_less_val 
{ 

constexpr _Iter_less_val ( ) = default ; 




explicit 
_Iter_less_val ( _Iter_less_iter ) { } 

template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) const 
{ return * __it < __val ; } 
} ; 

inline _Iter_less_val 
__iter_less_val ( ) 
{ return _Iter_less_val ( ) ; } 

inline _Iter_less_val 
__iter_comp_val ( _Iter_less_iter ) 
{ return _Iter_less_val ( ) ; } 

struct _Val_less_iter 
{ 

constexpr _Val_less_iter ( ) = default ; 




explicit 
_Val_less_iter ( _Iter_less_iter ) { } 

template < typename _Value , typename _Iterator > 
bool 
operator ( ) ( _Value & __val , _Iterator __it ) const 
{ return __val < * __it ; } 
} ; 

inline _Val_less_iter 
__val_less_iter ( ) 
{ return _Val_less_iter ( ) ; } 

inline _Val_less_iter 
__val_comp_iter ( _Iter_less_iter ) 
{ return _Val_less_iter ( ) ; } 

struct _Iter_equal_to_iter 
{ 
template < typename _Iterator1 , typename _Iterator2 > 
bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) const 
{ return * __it1 == * __it2 ; } 
} ; 

inline _Iter_equal_to_iter 
__iter_equal_to_iter ( ) 
{ return _Iter_equal_to_iter ( ) ; } 

struct _Iter_equal_to_val 
{ 
template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) const 
{ return * __it == __val ; } 
} ; 

inline _Iter_equal_to_val 
__iter_equal_to_val ( ) 
{ return _Iter_equal_to_val ( ) ; } 

inline _Iter_equal_to_val 
__iter_comp_val ( _Iter_equal_to_iter ) 
{ return _Iter_equal_to_val ( ) ; } 

template < typename _Compare > 
struct _Iter_comp_iter 
{ 
_Compare _M_comp ; 

explicit constexpr 
_Iter_comp_iter ( _Compare __comp ) 
: _M_comp ( std :: move ( __comp ) ) 
{ } 

template < typename _Iterator1 , typename _Iterator2 > 
constexpr 
bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) 
{ return bool ( _M_comp ( * __it1 , * __it2 ) ) ; } 
} ; 

template < typename _Compare > 
constexpr 
inline _Iter_comp_iter < _Compare > 
__iter_comp_iter ( _Compare __comp ) 
{ return _Iter_comp_iter < _Compare > ( std :: move ( __comp ) ) ; } 

template < typename _Compare > 
struct _Iter_comp_val 
{ 
_Compare _M_comp ; 

explicit 
_Iter_comp_val ( _Compare __comp ) 
: _M_comp ( std :: move ( __comp ) ) 
{ } 

explicit 
_Iter_comp_val ( const _Iter_comp_iter < _Compare >& __comp ) 
: _M_comp ( __comp . _M_comp ) 
{ } 


explicit 
_Iter_comp_val ( _Iter_comp_iter < _Compare >&& __comp ) 
: _M_comp ( std :: move ( __comp . _M_comp ) ) 
{ } 


template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) 
{ return bool ( _M_comp ( * __it , __val ) ) ; } 
} ; 

template < typename _Compare > 
inline _Iter_comp_val < _Compare > 
__iter_comp_val ( _Compare __comp ) 
{ return _Iter_comp_val < _Compare > ( std :: move ( __comp ) ) ; } 

template < typename _Compare > 
inline _Iter_comp_val < _Compare > 
__iter_comp_val ( _Iter_comp_iter < _Compare > __comp ) 
{ return _Iter_comp_val < _Compare > ( std :: move ( __comp ) ) ; } 

template < typename _Compare > 
struct _Val_comp_iter 
{ 
_Compare _M_comp ; 

explicit 
_Val_comp_iter ( _Compare __comp ) 
: _M_comp ( std :: move ( __comp ) ) 
{ } 

explicit 
_Val_comp_iter ( const _Iter_comp_iter < _Compare >& __comp ) 
: _M_comp ( __comp . _M_comp ) 
{ } 


explicit 
_Val_comp_iter ( _Iter_comp_iter < _Compare >&& __comp ) 
: _M_comp ( std :: move ( __comp . _M_comp ) ) 
{ } 


template < typename _Value , typename _Iterator > 
bool 
operator ( ) ( _Value & __val , _Iterator __it ) 
{ return bool ( _M_comp ( __val , * __it ) ) ; } 
} ; 

template < typename _Compare > 
inline _Val_comp_iter < _Compare > 
__val_comp_iter ( _Compare __comp ) 
{ return _Val_comp_iter < _Compare > ( std :: move ( __comp ) ) ; } 

template < typename _Compare > 
inline _Val_comp_iter < _Compare > 
__val_comp_iter ( _Iter_comp_iter < _Compare > __comp ) 
{ return _Val_comp_iter < _Compare > ( std :: move ( __comp ) ) ; } 

template < typename _Value > 
struct _Iter_equals_val 
{ 
_Value & _M_value ; 

explicit 
_Iter_equals_val ( _Value & __value ) 
: _M_value ( __value ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return * __it == _M_value ; } 
} ; 

template < typename _Value > 
inline _Iter_equals_val < _Value > 
__iter_equals_val ( _Value & __val ) 
{ return _Iter_equals_val < _Value > ( __val ) ; } 

template < typename _Iterator1 > 
struct _Iter_equals_iter 
{ 
_Iterator1 _M_it1 ; 

explicit 
_Iter_equals_iter ( _Iterator1 __it1 ) 
: _M_it1 ( __it1 ) 
{ } 

template < typename _Iterator2 > 
bool 
operator ( ) ( _Iterator2 __it2 ) 
{ return * __it2 == * _M_it1 ; } 
} ; 

template < typename _Iterator > 
inline _Iter_equals_iter < _Iterator > 
__iter_comp_iter ( _Iter_equal_to_iter , _Iterator __it ) 
{ return _Iter_equals_iter < _Iterator > ( __it ) ; } 

template < typename _Predicate > 
struct _Iter_pred 
{ 
_Predicate _M_pred ; 

explicit 
_Iter_pred ( _Predicate __pred ) 
: _M_pred ( std :: move ( __pred ) ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return bool ( _M_pred ( * __it ) ) ; } 
} ; 

template < typename _Predicate > 
inline _Iter_pred < _Predicate > 
__pred_iter ( _Predicate __pred ) 
{ return _Iter_pred < _Predicate > ( std :: move ( __pred ) ) ; } 

template < typename _Compare , typename _Value > 
struct _Iter_comp_to_val 
{ 
_Compare _M_comp ; 
_Value & _M_value ; 

_Iter_comp_to_val ( _Compare __comp , _Value & __value ) 
: _M_comp ( std :: move ( __comp ) ) , _M_value ( __value ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return bool ( _M_comp ( * __it , _M_value ) ) ; } 
} ; 

template < typename _Compare , typename _Value > 
_Iter_comp_to_val < _Compare , _Value > 
__iter_comp_val ( _Compare __comp , _Value & __val ) 
{ 
return _Iter_comp_to_val < _Compare , _Value > ( std :: move ( __comp ) , __val ) ; 
} 

template < typename _Compare , typename _Iterator1 > 
struct _Iter_comp_to_iter 
{ 
_Compare _M_comp ; 
_Iterator1 _M_it1 ; 

_Iter_comp_to_iter ( _Compare __comp , _Iterator1 __it1 ) 
: _M_comp ( std :: move ( __comp ) ) , _M_it1 ( __it1 ) 
{ } 

template < typename _Iterator2 > 
bool 
operator ( ) ( _Iterator2 __it2 ) 
{ return bool ( _M_comp ( * __it2 , * _M_it1 ) ) ; } 
} ; 

template < typename _Compare , typename _Iterator > 
inline _Iter_comp_to_iter < _Compare , _Iterator > 
__iter_comp_iter ( _Iter_comp_iter < _Compare > __comp , _Iterator __it ) 
{ 
return _Iter_comp_to_iter < _Compare , _Iterator > ( 
std :: move ( __comp . _M_comp ) , __it ) ; 
} 

template < typename _Predicate > 
struct _Iter_negate 
{ 
_Predicate _M_pred ; 

explicit 
_Iter_negate ( _Predicate __pred ) 
: _M_pred ( std :: move ( __pred ) ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return ! bool ( _M_pred ( * __it ) ) ; } 
} ; 

template < typename _Predicate > 
inline _Iter_negate < _Predicate > 
__negate ( _Iter_pred < _Predicate > __pred ) 
{ return _Iter_negate < _Predicate > ( std :: move ( __pred . _M_pred ) ) ; } 

} 
} 
# 72 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 2 3 

namespace std 
{ 

# 118 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
inline void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ 




# 148 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
swap ( * __a , * __b ) ; 

} 
# 164 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
_ForwardIterator2 
swap_ranges ( _ForwardIterator1 __first1 , _ForwardIterator1 __last1 , 
_ForwardIterator2 __first2 ) 
{ 





; 

for ( ; __first1 != __last1 ; ++ __first1 , ( void ) ++ __first2 ) 
std :: iter_swap ( __first1 , __first2 ) ; 
return __first2 ; 
} 
# 192 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _Tp > 
constexpr 
inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b ) 
{ 



if ( __b < __a ) 
return __b ; 
return __a ; 
} 
# 216 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _Tp > 
constexpr 
inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b ) 
{ 



if ( __a < __b ) 
return __b ; 
return __a ; 
} 
# 240 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 
constexpr 
inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ 

if ( __comp ( __b , __a ) ) 
return __b ; 
return __a ; 
} 
# 262 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 
constexpr 
inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ 

if ( __comp ( __a , __b ) ) 
return __b ; 
return __a ; 
} 



template < typename _Iterator > 
inline _Iterator 
__niter_base ( _Iterator __it ) 
{ return __it ; } 







template < bool , bool , typename > 
struct __copy_move 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ 
for ( ; __first != __last ; ++ __result , ( void ) ++ __first ) 
* __result = * __first ; 
return __result ; 
} 
} ; 


template < typename _Category > 
struct __copy_move < true , false , _Category > 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ 
for ( ; __first != __last ; ++ __result , ( void ) ++ __first ) 
* __result = std :: move ( * __first ) ; 
return __result ; 
} 
} ; 


template <> 
struct __copy_move < false , false , random_access_iterator_tag > 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,320);
typedef typename iterator_traits < _II >:: difference_type _Distance ; 
__CvT__record_line____(__CvT_miT,17,322);for ( _Distance __n = __last - __first ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,17,324);* __result = * __first ; 
__CvT__record_line____(__CvT_miT,17,325);++ __first ; 
__CvT__record_line____(__CvT_miT,17,326);++ __result ; 
} 
}__CvT__record_line____(__CvT_miT,17,328);return __result ; 
} 
} ; 


template <> 
struct __copy_move < true , false , random_access_iterator_tag > 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,339);
typedef typename iterator_traits < _II >:: difference_type _Distance ; 
__CvT__record_line____(__CvT_miT,17,341);for ( _Distance __n = __last - __first ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,17,343);* __result = std :: move ( * __first ) ; 
__CvT__record_line____(__CvT_miT,17,344);++ __first ; 
__CvT__record_line____(__CvT_miT,17,345);++ __result ; 
} 
}__CvT__record_line____(__CvT_miT,17,347);return __result ; 
} 
} ; 


template < bool _IsMove > 
struct __copy_move < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_m ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,17,358);

using __assignable = conditional < _IsMove , 
is_move_assignable < _Tp > , 
is_copy_assignable < _Tp >> ; 

__CvT__record_line____(__CvT_miT,17,364);static_assert ( __assignable :: type :: value , "type is not assignable" ) ; 

__CvT__record_line____(__CvT_miT,17,366);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,17,367);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,17,368);__builtin_memmove ( __result , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,17,369);return __result + _Num ; 
} 
} ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,376);
typedef typename iterator_traits < _II >:: value_type _ValueTypeI ; 
typedef typename iterator_traits < _OI >:: value_type _ValueTypeO ; 
typedef typename iterator_traits < _II >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,17,380);const bool __simple = ( __is_trivial ( _ValueTypeI ) 
&& __is_pointer < _II >:: __value 
&& __is_pointer < _OI >:: __value 
&& __are_same < _ValueTypeI , _ValueTypeO >:: __value ) ; 

__CvT__record_line____(__CvT_miT,17,385);return std :: __copy_move < _IsMove , __simple , 
_Category >:: __copy_m ( __first , __last , __result ) ; 
} 



template < typename _CharT > 
struct char_traits ; 

template < typename _CharT , typename _Traits > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits > 
class ostreambuf_iterator ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( _CharT * , _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( const _CharT * , const _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT , char_traits < _CharT > > , 
istreambuf_iterator < _CharT , char_traits < _CharT > > , _CharT * ) ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a2 ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,421);
__CvT__record_line____(__CvT_miT,17,422);return _OI ( std :: __copy_move_a < _IsMove > ( std :: __niter_base ( __first ) , 
std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 444 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II , typename _OI > 
inline _OI 
copy ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,447);




; 

__CvT__record_line____(__CvT_miT,17,454);return ( std :: __copy_move_a2 < __is_move_iterator < _II >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 477 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II , typename _OI > 
inline _OI 
move ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,17,480);




; 

__CvT__record_line____(__CvT_miT,17,487);return std :: __copy_move_a2 < true > ( std :: __miter_base ( __first ) , 
std :: __miter_base ( __last ) , __result ) ; 
} 






template < bool , bool , typename > 
struct __copy_move_backward 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,502);
__CvT__record_line____(__CvT_miT,17,503);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,17,504);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,17,505);return __result ; 
} 
} ; 


template < typename _Category > 
struct __copy_move_backward < true , false , _Category > 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,516);
__CvT__record_line____(__CvT_miT,17,517);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,17,518);*-- __result = std :: move ( *-- __last ) ; 
}__CvT__record_line____(__CvT_miT,17,519);return __result ; 
} 
} ; 


template <> 
struct __copy_move_backward < false , false , random_access_iterator_tag > 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,530);
__CvT__record_line____(__CvT_miT,17,531);typename iterator_traits < _BI1 >:: difference_type __n ; 
__CvT__record_line____(__CvT_miT,17,532);for ( __n = __last - __first ; __n > 0 ; -- __n ) 
{__CvT__record_line____(__CvT_miT,17,533);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,17,534);return __result ; 
} 
} ; 


template <> 
struct __copy_move_backward < true , false , random_access_iterator_tag > 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,545);
__CvT__record_line____(__CvT_miT,17,546);typename iterator_traits < _BI1 >:: difference_type __n ; 
__CvT__record_line____(__CvT_miT,17,547);for ( __n = __last - __first ; __n > 0 ; -- __n ) 
{__CvT__record_line____(__CvT_miT,17,548);*-- __result = std :: move ( *-- __last ) ; 
}__CvT__record_line____(__CvT_miT,17,549);return __result ; 
} 
} ; 


template < bool _IsMove > 
struct __copy_move_backward < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_move_b ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,17,560);

using __assignable = conditional < _IsMove , 
is_move_assignable < _Tp > , 
is_copy_assignable < _Tp >> ; 

__CvT__record_line____(__CvT_miT,17,566);static_assert ( __assignable :: type :: value , "type is not assignable" ) ; 

__CvT__record_line____(__CvT_miT,17,568);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,17,569);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,17,570);__builtin_memmove ( __result - _Num , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,17,571);return __result - _Num ; 
} 
} ; 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,578);
typedef typename iterator_traits < _BI1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _BI2 >:: value_type _ValueType2 ; 
typedef typename iterator_traits < _BI1 >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,17,582);const bool __simple = ( __is_trivial ( _ValueType1 ) 
&& __is_pointer < _BI1 >:: __value 
&& __is_pointer < _BI2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,17,587);return std :: __copy_move_backward < _IsMove , __simple , 
_Category >:: __copy_move_b ( __first , 
__last , 
__result ) ; 
} 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a2 ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,596);
__CvT__record_line____(__CvT_miT,17,597);return _BI2 ( std :: __copy_move_backward_a < _IsMove > 
( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 620 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _BI1 , typename _BI2 > 
inline _BI2 
copy_backward ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,623);






; 

__CvT__record_line____(__CvT_miT,17,632);return ( std :: __copy_move_backward_a2 < __is_move_iterator < _BI1 >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 656 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _BI1 , typename _BI2 > 
inline _BI2 
move_backward ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,17,659);






; 

__CvT__record_line____(__CvT_miT,17,668);return std :: __copy_move_backward_a2 < true > ( std :: __miter_base ( __first ) , 
std :: __miter_base ( __last ) , 
__result ) ; 
} 






template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,683);
__CvT__record_line____(__CvT_miT,17,684);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,17,685);* __first = __value ; 
}} 

template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,693);
__CvT__record_line____(__CvT_miT,17,694);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,17,695);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,17,696);* __first = __tmp ; 
}} 


template < typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , void >:: __type 
__fill_a ( _Tp * __first , _Tp * __last , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,17,704);
__CvT__record_line____(__CvT_miT,17,705);const _Tp __tmp = __c ; 
__CvT__record_line____(__CvT_miT,17,706);if ( const size_t __len = __last - __first ) 
{__CvT__record_line____(__CvT_miT,17,707);__builtin_memset ( __first , static_cast < unsigned char > ( __tmp ) , __len ) ; 
}} 
# 722 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline void 
fill ( _ForwardIterator __first , _ForwardIterator __last , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,725);



; 

__CvT__record_line____(__CvT_miT,17,731);std :: __fill_a ( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
__value ) ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,739);
__CvT__record_line____(__CvT_miT,17,740);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,17,742);* __first = __value ; 
}__CvT__record_line____(__CvT_miT,17,743);return __first ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,750);
__CvT__record_line____(__CvT_miT,17,751);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,17,752);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,17,754);* __first = __tmp ; 
}__CvT__record_line____(__CvT_miT,17,755);return __first ; 
} 

template < typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , _Tp *>:: __type 
__fill_n_a ( _Tp * __first , _Size __n , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,17,762);
__CvT__record_line____(__CvT_miT,17,763);std :: __fill_a ( __first , __first + __n , __c ) ; 
__CvT__record_line____(__CvT_miT,17,764);return __first + __n ; 
} 
# 782 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _OI , typename _Size , typename _Tp > 
inline _OI 
fill_n ( _OI __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,17,785);



__CvT__record_line____(__CvT_miT,17,789);return _OI ( std :: __fill_n_a ( std :: __niter_base ( __first ) , __n , __value ) ) ; 
} 

template < bool _BoolType > 
struct __equal 
{ 
template < typename _II1 , typename _II2 > 
static bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,17,798);
__CvT__record_line____(__CvT_miT,17,799);for ( ; __first1 != __last1 ; ++ __first1 , ( void ) ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,17,800);if ( ! ( * __first1 == * __first2 ) ) 
{__CvT__record_line____(__CvT_miT,17,801);return false ; 
}}__CvT__record_line____(__CvT_miT,17,802);return true ; 
} 
} ; 

template <> 
struct __equal < true > 
{ 
template < typename _Tp > 
static bool 
equal ( const _Tp * __first1 , const _Tp * __last1 , const _Tp * __first2 ) 
{ __CvT__record_line____(__CvT_miT,17,812);
__CvT__record_line____(__CvT_miT,17,813);if ( const size_t __len = ( __last1 - __first1 ) ) 
{__CvT__record_line____(__CvT_miT,17,814);return ! __builtin_memcmp ( __first1 , __first2 , sizeof ( _Tp ) * __len ) ; 
}__CvT__record_line____(__CvT_miT,17,815);return true ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__equal_aux ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,17,822);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,17,825);const bool __simple = ( ( __is_integer < _ValueType1 >:: __value 
|| __is_pointer < _ValueType1 >:: __value ) 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,17,831);return std :: __equal < __simple >:: equal ( __first1 , __last1 , __first2 ) ; 
} 

template < typename , typename > 
struct __lc_rai 
{ 
template < typename _II1 , typename _II2 > 
static _II1 
__newlast1 ( _II1 , _II1 __last1 , _II2 , _II2 ) 
{ __CvT__record_line____(__CvT_miT,17,840);return __last1 ; } 

template < typename _II > 
static bool 
__cnd2 ( _II __first , _II __last ) 
{ __CvT__record_line____(__CvT_miT,17,845);return __first != __last ; } 
} ; 

template <> 
struct __lc_rai < random_access_iterator_tag , random_access_iterator_tag > 
{ 
template < typename _RAI1 , typename _RAI2 > 
static _RAI1 
__newlast1 ( _RAI1 __first1 , _RAI1 __last1 , 
_RAI2 __first2 , _RAI2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,855);
__CvT__record_line____(__CvT_miT,17,856);const typename iterator_traits < _RAI1 >:: difference_type 
__diff1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,17,858);const typename iterator_traits < _RAI2 >:: difference_type 
__diff2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,17,860);return __diff2 < __diff1 ? __first1 + __diff2 : __last1 ; 
} 

template < typename _RAI > 
static bool 
__cnd2 ( _RAI , _RAI ) 
{ __CvT__record_line____(__CvT_miT,17,866);return true ; } 
} ; 

template < typename _II1 , typename _II2 , typename _Compare > 
bool 
__lexicographical_compare_impl ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 , 
_Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,17,874);
typedef typename iterator_traits < _II1 >:: iterator_category _Category1 ; 
typedef typename iterator_traits < _II2 >:: iterator_category _Category2 ; 
typedef std :: __lc_rai < _Category1 , _Category2 > __rai_type ; 

__CvT__record_line____(__CvT_miT,17,879);__last1 = __rai_type :: __newlast1 ( __first1 , __last1 , __first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,17,880);for ( ; __first1 != __last1 && __rai_type :: __cnd2 ( __first2 , __last2 ) ; 
++ __first1 , ( void ) ++ __first2 ) 
{{ 
__CvT__record_line____(__CvT_miT,17,883);if ( __comp ( __first1 , __first2 ) ) 
{__CvT__record_line____(__CvT_miT,17,884);return true ; 
}__CvT__record_line____(__CvT_miT,17,885);if ( __comp ( __first2 , __first1 ) ) 
{__CvT__record_line____(__CvT_miT,17,886);return false ; 
}} 
}__CvT__record_line____(__CvT_miT,17,888);return __first1 == __last1 && __first2 != __last2 ; 
} 

template < bool _BoolType > 
struct __lexicographical_compare 
{ 
template < typename _II1 , typename _II2 > 
static bool __lc ( _II1 , _II1 , _II2 , _II2 ) ; 
} ; 

template < bool _BoolType > 
template < typename _II1 , typename _II2 > 
bool 
__lexicographical_compare < _BoolType >:: 
__lc ( _II1 __first1 , _II1 __last1 , _II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,903);
__CvT__record_line____(__CvT_miT,17,904);return std :: __lexicographical_compare_impl ( __first1 , __last1 , 
__first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_less_iter ( ) ) ; 
} 

template <> 
struct __lexicographical_compare < true > 
{ 
template < typename _Tp , typename _Up > 
static bool 
__lc ( const _Tp * __first1 , const _Tp * __last1 , 
const _Up * __first2 , const _Up * __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,916);
__CvT__record_line____(__CvT_miT,17,917);const size_t __len1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,17,918);const size_t __len2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,17,919);if ( const size_t __len = std :: min ( __len1 , __len2 ) ) 
{__CvT__record_line____(__CvT_miT,17,920);if ( int __result = __builtin_memcmp ( __first1 , __first2 , __len ) ) 
{__CvT__record_line____(__CvT_miT,17,921);return __result < 0 ; 
}}__CvT__record_line____(__CvT_miT,17,922);return __len1 < __len2 ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__lexicographical_compare_aux ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,930);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,17,933);const bool __simple = 
( __is_byte < _ValueType1 >:: __value && __is_byte < _ValueType2 >:: __value 
&& ! __gnu_cxx :: __numeric_traits < _ValueType1 >:: __is_signed 
&& ! __gnu_cxx :: __numeric_traits < _ValueType2 >:: __is_signed 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,17,940);return std :: __lexicographical_compare < __simple >:: __lc ( __first1 , __last1 , 
__first2 , __last2 ) ; 
} 

template < typename _ForwardIterator , typename _Tp , typename _Compare > 
_ForwardIterator 
__lower_bound ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __val , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,17,948);
typedef typename iterator_traits < _ForwardIterator >:: difference_type 
_DistanceType ; 

__CvT__record_line____(__CvT_miT,17,952);_DistanceType __len = std :: distance ( __first , __last ) ; 

__CvT__record_line____(__CvT_miT,17,954);while ( __len > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,17,956);_DistanceType __half = __len >> 1 ; 
__CvT__record_line____(__CvT_miT,17,957);_ForwardIterator __middle = __first ; 
__CvT__record_line____(__CvT_miT,17,958);std :: advance ( __middle , __half ) ; 
__CvT__record_line____(__CvT_miT,17,959);if ( __comp ( __middle , __val ) ) 
{{ 
__CvT__record_line____(__CvT_miT,17,961);__first = __middle ; 
__CvT__record_line____(__CvT_miT,17,962);++ __first ; 
__CvT__record_line____(__CvT_miT,17,963);__len = __len - __half - 1 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,17,966);__len = __half ; 
}} 
}__CvT__record_line____(__CvT_miT,17,968);return __first ; 
} 
# 982 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline _ForwardIterator 
lower_bound ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,17,986);




; 

__CvT__record_line____(__CvT_miT,17,993);return std :: __lower_bound ( __first , __last , __val , 
__gnu_cxx :: __ops :: __iter_less_val ( ) ) ; 
} 



inline constexpr int 
__lg ( int __n ) 
{ __CvT__record_line____(__CvT_miT,17,1001);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline constexpr unsigned 
__lg ( unsigned __n ) 
{ __CvT__record_line____(__CvT_miT,17,1005);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline constexpr long 
__lg ( long __n ) 
{ __CvT__record_line____(__CvT_miT,17,1009);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline constexpr unsigned long 
__lg ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,17,1013);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline constexpr long long 
__lg ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,17,1017);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 

inline constexpr unsigned long long 
__lg ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,17,1021);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 




# 1039 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,17,1042);






; 

__CvT__record_line____(__CvT_miT,17,1051);return std :: __equal_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) ) ; 
} 
# 1071 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _IIter1 , typename _IIter2 , typename _BinaryPredicate > 
inline bool 
equal ( _IIter1 __first1 , _IIter1 __last1 , 
_IIter2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1075);



; 

__CvT__record_line____(__CvT_miT,17,1081);for ( ; __first1 != __last1 ; ++ __first1 , ( void ) ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,17,1082);if ( ! bool ( __binary_pred ( * __first1 , * __first2 ) ) ) 
{__CvT__record_line____(__CvT_miT,17,1083);return false ; 
}}__CvT__record_line____(__CvT_miT,17,1084);return true ; 
} 
# 1104 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,1107);






; 
; 

using _RATag = random_access_iterator_tag ; 
using _Cat1 = typename iterator_traits < _II1 >:: iterator_category ; 
using _Cat2 = typename iterator_traits < _II2 >:: iterator_category ; 
using _RAIters = __and_ < is_same < _Cat1 , _RATag > , is_same < _Cat2 , _RATag >> ; 
__CvT__record_line____(__CvT_miT,17,1121);if ( _RAIters ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,17,1123);auto __d1 = std :: distance ( __first1 , __last1 ) ; 
__CvT__record_line____(__CvT_miT,17,1124);auto __d2 = std :: distance ( __first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,17,1125);if ( __d1 != __d2 ) 
{__CvT__record_line____(__CvT_miT,17,1126);return false ; 
}__CvT__record_line____(__CvT_miT,17,1127);return std :: equal ( __first1 , __last1 , __first2 ) ; 
} 

}__CvT__record_line____(__CvT_miT,17,1130);for ( ; __first1 != __last1 && __first2 != __last2 ; 
++ __first1 , ( void ) ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,17,1132);if ( ! ( * __first1 == * __first2 ) ) 
{__CvT__record_line____(__CvT_miT,17,1133);return false ; 
}}__CvT__record_line____(__CvT_miT,17,1134);return __first1 == __last1 && __first2 == __last2 ; 
} 
# 1153 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _IIter1 , typename _IIter2 , typename _BinaryPredicate > 
inline bool 
equal ( _IIter1 __first1 , _IIter1 __last1 , 
_IIter2 __first2 , _IIter2 __last2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1157);



; 
; 

using _RATag = random_access_iterator_tag ; 
using _Cat1 = typename iterator_traits < _IIter1 >:: iterator_category ; 
using _Cat2 = typename iterator_traits < _IIter2 >:: iterator_category ; 
using _RAIters = __and_ < is_same < _Cat1 , _RATag > , is_same < _Cat2 , _RATag >> ; 
__CvT__record_line____(__CvT_miT,17,1168);if ( _RAIters ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,17,1170);auto __d1 = std :: distance ( __first1 , __last1 ) ; 
__CvT__record_line____(__CvT_miT,17,1171);auto __d2 = std :: distance ( __first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,17,1172);if ( __d1 != __d2 ) 
{__CvT__record_line____(__CvT_miT,17,1173);return false ; 
}__CvT__record_line____(__CvT_miT,17,1174);return std :: equal ( __first1 , __last1 , __first2 , 
__binary_pred ) ; 
} 

}__CvT__record_line____(__CvT_miT,17,1178);for ( ; __first1 != __last1 && __first2 != __last2 ; 
++ __first1 , ( void ) ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,17,1180);if ( ! bool ( __binary_pred ( * __first1 , * __first2 ) ) ) 
{__CvT__record_line____(__CvT_miT,17,1181);return false ; 
}}__CvT__record_line____(__CvT_miT,17,1182);return __first1 == __last1 && __first2 == __last2 ; 
} 
# 1201 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,1205);









; 
; 

__CvT__record_line____(__CvT_miT,17,1218);return std :: __lexicographical_compare_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) , 
std :: __niter_base ( __last2 ) ) ; 
} 
# 1237 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 , typename _Compare > 
inline bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,17,1241);



; 
; 

__CvT__record_line____(__CvT_miT,17,1248);return std :: __lexicographical_compare_impl 
( __first1 , __last1 , __first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_comp_iter ( __comp ) ) ; 
} 

template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
pair < _InputIterator1 , _InputIterator2 > 
__mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1258);
__CvT__record_line____(__CvT_miT,17,1259);while ( __first1 != __last1 && __binary_pred ( __first1 , __first2 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,17,1261);++ __first1 ; 
__CvT__record_line____(__CvT_miT,17,1262);++ __first2 ; 
} 
}__CvT__record_line____(__CvT_miT,17,1264);return pair < _InputIterator1 , _InputIterator2 > ( __first1 , __first2 ) ; 
} 
# 1280 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,17,1284);






; 

__CvT__record_line____(__CvT_miT,17,1293);return std :: __mismatch ( __first1 , __last1 , __first2 , 
__gnu_cxx :: __ops :: __iter_equal_to_iter ( ) ) ; 
} 
# 1313 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1318);



; 

__CvT__record_line____(__CvT_miT,17,1324);return std :: __mismatch ( __first1 , __last1 , __first2 , 
__gnu_cxx :: __ops :: __iter_comp_iter ( __binary_pred ) ) ; 
} 



template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
pair < _InputIterator1 , _InputIterator2 > 
__mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _InputIterator2 __last2 , 
_BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1336);
__CvT__record_line____(__CvT_miT,17,1337);while ( __first1 != __last1 && __first2 != __last2 
&& __binary_pred ( __first1 , __first2 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,17,1340);++ __first1 ; 
__CvT__record_line____(__CvT_miT,17,1341);++ __first2 ; 
} 
}__CvT__record_line____(__CvT_miT,17,1343);return pair < _InputIterator1 , _InputIterator2 > ( __first1 , __first2 ) ; 
} 
# 1360 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _InputIterator2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,17,1364);






; 
; 

__CvT__record_line____(__CvT_miT,17,1374);return std :: __mismatch ( __first1 , __last1 , __first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_equal_to_iter ( ) ) ; 
} 
# 1395 "/usr/include/c++/7.1.1/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _InputIterator2 __last2 , 
_BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,17,1401);



; 
; 

__CvT__record_line____(__CvT_miT,17,1408);return std :: __mismatch ( __first1 , __last1 , __first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_comp_iter ( __binary_pred ) ) ; 
} 



} 
# 40 "/usr/include/c++/7.1.1/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/postypes.h" 1 3 
# 38 "/usr/include/c++/7.1.1/bits/postypes.h" 3 

# 39 "/usr/include/c++/7.1.1/bits/postypes.h" 3 

# 1 "/usr/include/c++/7.1.1/cwchar" 1 3 
# 39 "/usr/include/c++/7.1.1/cwchar" 3 

# 40 "/usr/include/c++/7.1.1/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 28 "/usr/include/wchar.h" 3 4 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4 
# 29 "/usr/include/wchar.h" 2 3 4 
# 37 "/usr/include/wchar.h" 3 4 
# 1 "/usr/include/stdio.h" 1 3 4 
# 45 "/usr/include/stdio.h" 3 4 
struct _IO_FILE ; 



typedef struct _IO_FILE FILE ; 





# 65 "/usr/include/stdio.h" 3 4 
typedef struct _IO_FILE __FILE ; 
# 38 "/usr/include/wchar.h" 2 3 4 


# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdarg.h" 1 3 4 
# 40 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdarg.h" 3 4 
typedef __builtin_va_list __gnuc_va_list ; 
# 41 "/usr/include/wchar.h" 2 3 4 

# 1 "/usr/include/bits/wchar.h" 1 3 4 
# 43 "/usr/include/wchar.h" 2 3 4 
# 52 "/usr/include/wchar.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 216 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 3 4 
typedef long unsigned int size_t ; 
# 357 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 3 4 
typedef unsigned int wint_t ; 
# 53 "/usr/include/wchar.h" 2 3 4 
# 83 "/usr/include/wchar.h" 3 4 
typedef struct 
{ 
int __count ; 
union 
{ 

unsigned int __wch ; 



char __wchb [ 4 ] ; 
} __value ; 
} __mbstate_t ; 
# 105 "/usr/include/wchar.h" 3 4 


typedef __mbstate_t mbstate_t ; 






# 133 "/usr/include/wchar.h" 3 4 
extern "C" { 




struct tm ; 









extern wchar_t * wcscpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) 
throw ( ) ; 


extern wchar_t * wcsncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern wchar_t * wcscat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) 
throw ( ) ; 

extern wchar_t * wcsncat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern int wcscmp ( const wchar_t * __s1 , const wchar_t * __s2 ) 
throw ( ) ; 

extern int wcsncmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 




extern int wcscasecmp ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 


extern int wcsncasecmp ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n ) throw ( ) ; 



# 1 "/usr/include/xlocale.h" 1 3 4 
# 27 "/usr/include/xlocale.h" 3 4 
typedef struct __locale_struct 
{ 

struct __locale_data * __locales [ 13 ] ; 


const unsigned short int * __ctype_b ; 
const int * __ctype_tolower ; 
const int * __ctype_toupper ; 


const char * __names [ 13 ] ; 
} * __locale_t ; 


typedef __locale_t locale_t ; 
# 185 "/usr/include/wchar.h" 2 3 4 

extern int wcscasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 

extern int wcsncasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 





extern int wcscoll ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 



extern size_t wcsxfrm ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 








extern int wcscoll_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 




extern size_t wcsxfrm_l ( wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 


extern wchar_t * wcsdup ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcschr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 
extern "C++" const wchar_t * wcschr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 






extern "C++" wchar_t * wcsrchr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 
extern "C++" const wchar_t * wcsrchr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 









extern wchar_t * wcschrnul ( const wchar_t * __s , wchar_t __wc ) 
throw ( ) ; 





extern size_t wcscspn ( const wchar_t * __wcs , const wchar_t * __reject ) 
throw ( ) ; 


extern size_t wcsspn ( const wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) ; 


extern "C++" wchar_t * wcspbrk ( wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 
extern "C++" const wchar_t * wcspbrk ( const wchar_t * __wcs , 
const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 






extern "C++" wchar_t * wcsstr ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 
extern "C++" const wchar_t * wcsstr ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 






extern wchar_t * wcstok ( wchar_t * __restrict __s , 
const wchar_t * __restrict __delim , 
wchar_t ** __restrict __ptr ) throw ( ) ; 


extern size_t wcslen ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcswcs ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
extern "C++" const wchar_t * wcswcs ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
# 310 "/usr/include/wchar.h" 3 4 
extern size_t wcsnlen ( const wchar_t * __s , size_t __maxlen ) 
throw ( ) ; 






extern "C++" wchar_t * wmemchr ( wchar_t * __s , wchar_t __c , size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 
extern "C++" const wchar_t * wmemchr ( const wchar_t * __s , wchar_t __c , 
size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 






extern int wmemcmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 



extern wchar_t * wmemmove ( wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemset ( wchar_t * __s , wchar_t __c , size_t __n ) throw ( ) ; 





extern wchar_t * wmempcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) 
throw ( ) ; 






extern wint_t btowc ( int __c ) throw ( ) ; 



extern int wctob ( wint_t __c ) throw ( ) ; 



extern int mbsinit ( const mbstate_t * __ps ) throw ( ) ; 



extern size_t mbrtowc ( wchar_t * __restrict __pwc , 
const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __p ) throw ( ) ; 


extern size_t wcrtomb ( char * __restrict __s , wchar_t __wc , 
mbstate_t * __restrict __ps ) throw ( ) ; 


extern size_t __mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 
extern size_t mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 

# 409 "/usr/include/wchar.h" 3 4 



extern size_t mbsrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern size_t mbsnrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __nmc , 
size_t __len , mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsnrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , 
size_t __nwc , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern int wcwidth ( wchar_t __c ) throw ( ) ; 



extern int wcswidth ( const wchar_t * __s , size_t __n ) throw ( ) ; 






extern double wcstod ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 





extern float wcstof ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 
extern long double wcstold ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 







extern long int wcstol ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) throw ( ) ; 



extern unsigned long int wcstoul ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 







extern long long int wcstoll ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstoull ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 







extern long long int wcstoq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstouq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 
# 534 "/usr/include/wchar.h" 3 4 
extern long int wcstol_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base , 
__locale_t __loc ) throw ( ) ; 

extern unsigned long int wcstoul_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern long long int wcstoll_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern unsigned long long int wcstoull_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) 
throw ( ) ; 

extern double wcstod_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern float wcstof_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern long double wcstold_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
__locale_t __loc ) throw ( ) ; 






extern wchar_t * wcpcpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) throw ( ) ; 



extern wchar_t * wcpncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 
# 586 "/usr/include/wchar.h" 3 4 
extern __FILE * open_wmemstream ( wchar_t ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern int fwide ( __FILE * __fp , int __mode ) throw ( ) ; 






extern int fwprintf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wprintf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 





extern int vfwprintf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwprintf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 


extern int vswprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 






extern int fwscanf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wscanf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 
# 686 "/usr/include/wchar.h" 3 4 









extern int vfwscanf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwscanf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 

extern int vswscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 
# 742 "/usr/include/wchar.h" 3 4 









extern wint_t fgetwc ( __FILE * __stream ) ; 
extern wint_t getwc ( __FILE * __stream ) ; 





extern wint_t getwchar ( void ) ; 






extern wint_t fputwc ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwc ( wchar_t __wc , __FILE * __stream ) ; 





extern wint_t putwchar ( wchar_t __wc ) ; 







extern wchar_t * fgetws ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 





extern int fputws ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 






extern wint_t ungetwc ( wint_t __wc , __FILE * __stream ) ; 

# 807 "/usr/include/wchar.h" 3 4 
extern wint_t getwc_unlocked ( __FILE * __stream ) ; 
extern wint_t getwchar_unlocked ( void ) ; 







extern wint_t fgetwc_unlocked ( __FILE * __stream ) ; 







extern wint_t fputwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
# 833 "/usr/include/wchar.h" 3 4 
extern wint_t putwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwchar_unlocked ( wchar_t __wc ) ; 
# 843 "/usr/include/wchar.h" 3 4 
extern wchar_t * fgetws_unlocked ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 







extern int fputws_unlocked ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 







extern size_t wcsftime ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 







extern size_t wcsftime_l ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 
# 897 "/usr/include/wchar.h" 3 4 
} 
# 45 "/usr/include/c++/7.1.1/cwchar" 2 3 
# 62 "/usr/include/c++/7.1.1/cwchar" 3 
namespace std 
{ 
using :: mbstate_t ; 
} 
# 135 "/usr/include/c++/7.1.1/cwchar" 3 
namespace std 
{ 


using :: wint_t ; 

using :: btowc ; 
using :: fgetwc ; 
using :: fgetws ; 
using :: fputwc ; 
using :: fputws ; 
using :: fwide ; 
using :: fwprintf ; 
using :: fwscanf ; 
using :: getwc ; 
using :: getwchar ; 
using :: mbrlen ; 
using :: mbrtowc ; 
using :: mbsinit ; 
using :: mbsrtowcs ; 
using :: putwc ; 
using :: putwchar ; 

using :: swprintf ; 

using :: swscanf ; 
using :: ungetwc ; 
using :: vfwprintf ; 

using :: vfwscanf ; 


using :: vswprintf ; 


using :: vswscanf ; 

using :: vwprintf ; 

using :: vwscanf ; 

using :: wcrtomb ; 
using :: wcscat ; 
using :: wcscmp ; 
using :: wcscoll ; 
using :: wcscpy ; 
using :: wcscspn ; 
using :: wcsftime ; 
using :: wcslen ; 
using :: wcsncat ; 
using :: wcsncmp ; 
using :: wcsncpy ; 
using :: wcsrtombs ; 
using :: wcsspn ; 
using :: wcstod ; 

using :: wcstof ; 

using :: wcstok ; 
using :: wcstol ; 
using :: wcstoul ; 
using :: wcsxfrm ; 
using :: wctob ; 
using :: wmemcmp ; 
using :: wmemcpy ; 
using :: wmemmove ; 
using :: wmemset ; 
using :: wprintf ; 
using :: wscanf ; 
using :: wcschr ; 
using :: wcspbrk ; 
using :: wcsrchr ; 
using :: wcsstr ; 
using :: wmemchr ; 
# 232 "/usr/include/c++/7.1.1/cwchar" 3 

} 







namespace __gnu_cxx 
{ 





using :: wcstold ; 
# 257 "/usr/include/c++/7.1.1/cwchar" 3 
using :: wcstoll ; 
using :: wcstoull ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: wcstold ; 
using :: __gnu_cxx :: wcstoll ; 
using :: __gnu_cxx :: wcstoull ; 
} 
# 277 "/usr/include/c++/7.1.1/cwchar" 3 
namespace std 
{ 

using std :: wcstof ; 


using std :: vfwscanf ; 


using std :: vswscanf ; 


using std :: vwscanf ; 



using std :: wcstold ; 
using std :: wcstoll ; 
using std :: wcstoull ; 

} 
# 41 "/usr/include/c++/7.1.1/bits/postypes.h" 2 3 
# 68 "/usr/include/c++/7.1.1/bits/postypes.h" 3 
namespace std 
{ 

# 88 "/usr/include/c++/7.1.1/bits/postypes.h" 3 
typedef long streamoff ; 
# 98 "/usr/include/c++/7.1.1/bits/postypes.h" 3 
typedef ptrdiff_t streamsize ; 
# 111 "/usr/include/c++/7.1.1/bits/postypes.h" 3 
template < typename _StateT > 
class fpos 
{ 
private : 
streamoff _M_off ; 
_StateT _M_state ; 

public : 




fpos ( ) 
: _M_off ( 0 ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,34,124);} 
# 133 "/usr/include/c++/7.1.1/bits/postypes.h" 3 
fpos ( streamoff __off ) 
: _M_off ( __off ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,34,134);} 


operator streamoff ( ) const { __CvT__record_line____(__CvT_miT,34,137);return _M_off ; } 


void 
state ( _StateT __st ) 
{ __CvT__record_line____(__CvT_miT,34,142);_M_state = __st ; } 


_StateT 
state ( ) const 
{ __CvT__record_line____(__CvT_miT,34,147);return _M_state ; } 





fpos & 
operator += ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,34,155);
__CvT__record_line____(__CvT_miT,34,156);_M_off += __off ; 
__CvT__record_line____(__CvT_miT,34,157);return * this ; 
} 





fpos & 
operator -= ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,34,166);
__CvT__record_line____(__CvT_miT,34,167);_M_off -= __off ; 
__CvT__record_line____(__CvT_miT,34,168);return * this ; 
} 







fpos 
operator + ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,34,179);
__CvT__record_line____(__CvT_miT,34,180);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,34,181);__pos += __off ; 
__CvT__record_line____(__CvT_miT,34,182);return __pos ; 
} 







fpos 
operator - ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,34,193);
__CvT__record_line____(__CvT_miT,34,194);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,34,195);__pos -= __off ; 
__CvT__record_line____(__CvT_miT,34,196);return __pos ; 
} 






streamoff 
operator - ( const fpos & __other ) const 
{ __CvT__record_line____(__CvT_miT,34,206);return _M_off - __other . _M_off ; } 
} ; 






template < typename _StateT > 
inline bool 
operator == ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,34,217);return streamoff ( __lhs ) == streamoff ( __rhs ) ; } 

template < typename _StateT > 
inline bool 
operator != ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,34,222);return streamoff ( __lhs ) != streamoff ( __rhs ) ; } 





typedef fpos < mbstate_t > streampos ; 

typedef fpos < mbstate_t > wstreampos ; 



typedef fpos < mbstate_t > u16streampos ; 

typedef fpos < mbstate_t > u32streampos ; 



} 
# 41 "/usr/include/c++/7.1.1/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cwchar" 1 3 
# 39 "/usr/include/c++/7.1.1/cwchar" 3 

# 40 "/usr/include/c++/7.1.1/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 45 "/usr/include/c++/7.1.1/cwchar" 2 3 
# 42 "/usr/include/c++/7.1.1/bits/char_traits.h" 2 3 

namespace __gnu_cxx 
{ 

# 57 "/usr/include/c++/7.1.1/bits/char_traits.h" 3 
template < typename _CharT > 
struct _Char_types 
{ 
typedef unsigned long int_type ; 
typedef std :: streampos pos_type ; 
typedef std :: streamoff off_type ; 
typedef std :: mbstate_t state_type ; 
} ; 
# 82 "/usr/include/c++/7.1.1/bits/char_traits.h" 3 
template < typename _CharT > 
struct char_traits 
{ 
typedef _CharT char_type ; 
typedef typename _Char_types < _CharT >:: int_type int_type ; 
typedef typename _Char_types < _CharT >:: pos_type pos_type ; 
typedef typename _Char_types < _CharT >:: off_type off_type ; 
typedef typename _Char_types < _CharT >:: state_type state_type ; 

static constexpr void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,16,93);__c1 = __c2 ; } 

static constexpr bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,16,97);return __c1 == __c2 ; } 

static constexpr bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,16,101);return __c1 < __c2 ; } 

static constexpr int 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static constexpr std :: size_t 
length ( const char_type * __s ) ; 

static constexpr const char_type * 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) ; 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
assign ( char_type * __s , std :: size_t __n , char_type __a ) ; 

static constexpr char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,16,123);return static_cast < char_type > ( __c ) ; } 

static constexpr int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,16,127);return static_cast < int_type > ( __c ) ; } 

static constexpr bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,16,131);return __c1 == __c2 ; } 

static constexpr int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,16,135);return static_cast < int_type > ( - 1 ) ; } 

static constexpr int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,16,139);return ! eq_int_type ( __c , eof ( ) ) ? __c : to_int_type ( char_type ( ) ) ; } 
} ; 



template < typename _CharT > 
constexpr int 
char_traits < _CharT >:: 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,148);
__CvT__record_line____(__CvT_miT,16,149);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,150);if ( lt ( __s1 [ __i ] , __s2 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,151);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,16,152);if ( lt ( __s2 [ __i ] , __s1 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,153);return 1 ; 
}}}__CvT__record_line____(__CvT_miT,16,154);return 0 ; 
} 

template < typename _CharT > 
constexpr std :: size_t 
char_traits < _CharT >:: 
length ( const char_type * __p ) 
{ __CvT__record_line____(__CvT_miT,16,161);
__CvT__record_line____(__CvT_miT,16,162);std :: size_t __i = 0 ; 
__CvT__record_line____(__CvT_miT,16,163);while ( ! eq ( __p [ __i ] , char_type ( ) ) ) 
{__CvT__record_line____(__CvT_miT,16,164);++ __i ; 
}__CvT__record_line____(__CvT_miT,16,165);return __i ; 
} 

template < typename _CharT > 
constexpr const typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,16,172);
__CvT__record_line____(__CvT_miT,16,173);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,174);if ( eq ( __s [ __i ] , __a ) ) 
{__CvT__record_line____(__CvT_miT,16,175);return __s + __i ; 
}}__CvT__record_line____(__CvT_miT,16,176);return 0 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,183);
__CvT__record_line____(__CvT_miT,16,184);return static_cast < _CharT *> ( __builtin_memmove ( __s1 , __s2 , 
__n * sizeof ( char_type ) ) ) ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,192);

__CvT__record_line____(__CvT_miT,16,194);std :: copy ( __s2 , __s2 + __n , __s1 ) ; 
__CvT__record_line____(__CvT_miT,16,195);return __s1 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
assign ( char_type * __s , std :: size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,16,202);

__CvT__record_line____(__CvT_miT,16,204);std :: fill_n ( __s , __n , __a ) ; 
__CvT__record_line____(__CvT_miT,16,205);return __s ; 
} 


} 

namespace std 
{ 

# 228 "/usr/include/c++/7.1.1/bits/char_traits.h" 3 
template < class _CharT > 
struct char_traits : public __gnu_cxx :: char_traits < _CharT > 
{ } ; 



template <> 
struct char_traits < char > 
{ 
typedef char char_type ; 
typedef int int_type ; 
typedef streampos pos_type ; 
typedef streamoff off_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,245);__c1 = __c2 ; } 

static constexpr bool 
eq ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,249);return __c1 == __c2 ; } 

static constexpr bool 
lt ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,253);

__CvT__record_line____(__CvT_miT,16,255);return ( static_cast < unsigned char > ( __c1 ) 
< static_cast < unsigned char > ( __c2 ) ) ; 
} 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,261);
__CvT__record_line____(__CvT_miT,16,262);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,263);return 0 ; 
}__CvT__record_line____(__CvT_miT,16,264);return __builtin_memcmp ( __s1 , __s2 , __n ) ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,16,269);return __builtin_strlen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,16,273);
__CvT__record_line____(__CvT_miT,16,274);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,275);return 0 ; 
}__CvT__record_line____(__CvT_miT,16,276);return static_cast < const char_type *> ( __builtin_memchr ( __s , __a , __n ) ) ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,281);
__CvT__record_line____(__CvT_miT,16,282);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,283);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,284);return static_cast < char_type *> ( __builtin_memmove ( __s1 , __s2 , __n ) ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,289);
__CvT__record_line____(__CvT_miT,16,290);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,291);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,292);return static_cast < char_type *> ( __builtin_memcpy ( __s1 , __s2 , __n ) ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,16,297);
__CvT__record_line____(__CvT_miT,16,298);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,299);return __s ; 
}__CvT__record_line____(__CvT_miT,16,300);return static_cast < char_type *> ( __builtin_memset ( __s , __a , __n ) ) ; 
} 

static constexpr char_type 
to_char_type ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,305);return static_cast < char_type > ( __c ) ; } 



static constexpr int_type 
to_int_type ( const char_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,311);return static_cast < int_type > ( static_cast < unsigned char > ( __c ) ) ; } 

static constexpr bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,315);return __c1 == __c2 ; } 

static constexpr int_type 
eof ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,319);return static_cast < int_type > ( - 1 ) ; } 

static constexpr int_type 
not_eof ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,323);return ( __c == eof ( ) ) ? 0 : __c ; } 
} ; 




template <> 
struct char_traits < wchar_t > 
{ 
typedef wchar_t char_type ; 
typedef wint_t int_type ; 
typedef streamoff off_type ; 
typedef wstreampos pos_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,340);__c1 = __c2 ; } 

static constexpr bool 
eq ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,344);return __c1 == __c2 ; } 

static constexpr bool 
lt ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,348);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,352);
__CvT__record_line____(__CvT_miT,16,353);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,354);return 0 ; 
}__CvT__record_line____(__CvT_miT,16,355);return wmemcmp ( __s1 , __s2 , __n ) ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,16,360);return wcslen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,16,364);
__CvT__record_line____(__CvT_miT,16,365);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,366);return 0 ; 
}__CvT__record_line____(__CvT_miT,16,367);return wmemchr ( __s , __a , __n ) ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,372);
__CvT__record_line____(__CvT_miT,16,373);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,374);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,375);return wmemmove ( __s1 , __s2 , __n ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,380);
__CvT__record_line____(__CvT_miT,16,381);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,382);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,383);return wmemcpy ( __s1 , __s2 , __n ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,16,388);
__CvT__record_line____(__CvT_miT,16,389);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,390);return __s ; 
}__CvT__record_line____(__CvT_miT,16,391);return wmemset ( __s , __a , __n ) ; 
} 

static constexpr char_type 
to_char_type ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,396);return char_type ( __c ) ; } 

static constexpr int_type 
to_int_type ( const char_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,400);return int_type ( __c ) ; } 

static constexpr bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,404);return __c1 == __c2 ; } 

static constexpr int_type 
eof ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,408);return static_cast < int_type > ( ( 0xffffffffu ) ) ; } 

static constexpr int_type 
not_eof ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,412);return eq_int_type ( __c , eof ( ) ) ? 0 : __c ; } 
} ; 



} 




# 1 "/usr/include/c++/7.1.1/cstdint" 1 3 
# 32 "/usr/include/c++/7.1.1/cstdint" 3 

# 33 "/usr/include/c++/7.1.1/cstdint" 3 
# 41 "/usr/include/c++/7.1.1/cstdint" 3 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdint.h" 1 3 4 
# 9 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdint.h" 3 4 
# 1 "/usr/include/stdint.h" 1 3 4 
# 26 "/usr/include/stdint.h" 3 4 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4 
# 27 "/usr/include/stdint.h" 2 3 4 
# 1 "/usr/include/bits/types.h" 1 3 4 
# 27 "/usr/include/bits/types.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 28 "/usr/include/bits/types.h" 2 3 4 


typedef unsigned char __u_char ; 
typedef unsigned short int __u_short ; 
typedef unsigned int __u_int ; 
typedef unsigned long int __u_long ; 


typedef signed char __int8_t ; 
typedef unsigned char __uint8_t ; 
typedef signed short int __int16_t ; 
typedef unsigned short int __uint16_t ; 
typedef signed int __int32_t ; 
typedef unsigned int __uint32_t ; 

typedef signed long int __int64_t ; 
typedef unsigned long int __uint64_t ; 







typedef long int __quad_t ; 
typedef unsigned long int __u_quad_t ; 







typedef long int __intmax_t ; 
typedef unsigned long int __uintmax_t ; 
# 130 "/usr/include/bits/types.h" 3 4 
# 1 "/usr/include/bits/typesizes.h" 1 3 4 
# 131 "/usr/include/bits/types.h" 2 3 4 


typedef unsigned long int __dev_t ; 
typedef unsigned int __uid_t ; 
typedef unsigned int __gid_t ; 
typedef unsigned long int __ino_t ; 
typedef unsigned long int __ino64_t ; 
typedef unsigned int __mode_t ; 
typedef unsigned long int __nlink_t ; 
typedef long int __off_t ; 
typedef long int __off64_t ; 
typedef int __pid_t ; 
typedef struct { int __val [ 2 ] ; } __fsid_t ; 
typedef long int __clock_t ; 
typedef unsigned long int __rlim_t ; 
typedef unsigned long int __rlim64_t ; 
typedef unsigned int __id_t ; 
typedef long int __time_t ; 
typedef unsigned int __useconds_t ; 
typedef long int __suseconds_t ; 

typedef int __daddr_t ; 
typedef int __key_t ; 


typedef int __clockid_t ; 


typedef void * __timer_t ; 


typedef long int __blksize_t ; 




typedef long int __blkcnt_t ; 
typedef long int __blkcnt64_t ; 


typedef unsigned long int __fsblkcnt_t ; 
typedef unsigned long int __fsblkcnt64_t ; 


typedef unsigned long int __fsfilcnt_t ; 
typedef unsigned long int __fsfilcnt64_t ; 


typedef long int __fsword_t ; 

typedef long int __ssize_t ; 


typedef long int __syscall_slong_t ; 

typedef unsigned long int __syscall_ulong_t ; 



typedef __off64_t __loff_t ; 
typedef __quad_t * __qaddr_t ; 
typedef char * __caddr_t ; 


typedef long int __intptr_t ; 


typedef unsigned int __socklen_t ; 
# 28 "/usr/include/stdint.h" 2 3 4 

# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 30 "/usr/include/stdint.h" 2 3 4 
# 38 "/usr/include/stdint.h" 3 4 
typedef signed char int8_t ; 
typedef short int int16_t ; 
typedef int int32_t ; 

typedef long int int64_t ; 







typedef unsigned char uint8_t ; 
typedef unsigned short int uint16_t ; 

typedef unsigned int uint32_t ; 



typedef unsigned long int uint64_t ; 
# 67 "/usr/include/stdint.h" 3 4 
typedef signed char int_least8_t ; 
typedef short int int_least16_t ; 
typedef int int_least32_t ; 

typedef long int int_least64_t ; 






typedef unsigned char uint_least8_t ; 
typedef unsigned short int uint_least16_t ; 
typedef unsigned int uint_least32_t ; 

typedef unsigned long int uint_least64_t ; 
# 92 "/usr/include/stdint.h" 3 4 
typedef signed char int_fast8_t ; 

typedef long int int_fast16_t ; 
typedef long int int_fast32_t ; 
typedef long int int_fast64_t ; 
# 105 "/usr/include/stdint.h" 3 4 
typedef unsigned char uint_fast8_t ; 

typedef unsigned long int uint_fast16_t ; 
typedef unsigned long int uint_fast32_t ; 
typedef unsigned long int uint_fast64_t ; 
# 121 "/usr/include/stdint.h" 3 4 
typedef long int intptr_t ; 


typedef unsigned long int uintptr_t ; 
# 135 "/usr/include/stdint.h" 3 4 
typedef __intmax_t intmax_t ; 
typedef __uintmax_t uintmax_t ; 
# 10 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdint.h" 2 3 4 
# 42 "/usr/include/c++/7.1.1/cstdint" 2 3 




namespace std 
{ 
using :: int8_t ; 
using :: int16_t ; 
using :: int32_t ; 
using :: int64_t ; 

using :: int_fast8_t ; 
using :: int_fast16_t ; 
using :: int_fast32_t ; 
using :: int_fast64_t ; 

using :: int_least8_t ; 
using :: int_least16_t ; 
using :: int_least32_t ; 
using :: int_least64_t ; 

using :: intmax_t ; 
using :: intptr_t ; 

using :: uint8_t ; 
using :: uint16_t ; 
using :: uint32_t ; 
using :: uint64_t ; 

using :: uint_fast8_t ; 
using :: uint_fast16_t ; 
using :: uint_fast32_t ; 
using :: uint_fast64_t ; 

using :: uint_least8_t ; 
using :: uint_least16_t ; 
using :: uint_least32_t ; 
using :: uint_least64_t ; 

using :: uintmax_t ; 
using :: uintptr_t ; 
} 
# 423 "/usr/include/c++/7.1.1/bits/char_traits.h" 2 3 

namespace std 
{ 


template <> 
struct char_traits < char16_t > 
{ 
typedef char16_t char_type ; 
typedef uint_least16_t int_type ; 
typedef streamoff off_type ; 
typedef u16streampos pos_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,439);__c1 = __c2 ; } 

static constexpr bool 
eq ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,443);return __c1 == __c2 ; } 

static constexpr bool 
lt ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,447);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,451);
__CvT__record_line____(__CvT_miT,16,452);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,453);if ( lt ( __s1 [ __i ] , __s2 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,454);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,16,455);if ( lt ( __s2 [ __i ] , __s1 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,456);return 1 ; 
}}}__CvT__record_line____(__CvT_miT,16,457);return 0 ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,16,462);
__CvT__record_line____(__CvT_miT,16,463);size_t __i = 0 ; 
__CvT__record_line____(__CvT_miT,16,464);while ( ! eq ( __s [ __i ] , char_type ( ) ) ) 
{__CvT__record_line____(__CvT_miT,16,465);++ __i ; 
}__CvT__record_line____(__CvT_miT,16,466);return __i ; 
} 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,16,471);
__CvT__record_line____(__CvT_miT,16,472);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,473);if ( eq ( __s [ __i ] , __a ) ) 
{__CvT__record_line____(__CvT_miT,16,474);return __s + __i ; 
}}__CvT__record_line____(__CvT_miT,16,475);return 0 ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,480);
__CvT__record_line____(__CvT_miT,16,481);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,482);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,483);return ( static_cast < char_type *> 
( __builtin_memmove ( __s1 , __s2 , __n * sizeof ( char_type ) ) ) ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,489);
__CvT__record_line____(__CvT_miT,16,490);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,491);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,492);return ( static_cast < char_type *> 
( __builtin_memcpy ( __s1 , __s2 , __n * sizeof ( char_type ) ) ) ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,16,498);
__CvT__record_line____(__CvT_miT,16,499);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,500);assign ( __s [ __i ] , __a ) ; 
}__CvT__record_line____(__CvT_miT,16,501);return __s ; 
} 

static constexpr char_type 
to_char_type ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,506);return char_type ( __c ) ; } 

static constexpr int_type 
to_int_type ( const char_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,510);return int_type ( __c ) ; } 

static constexpr bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,514);return __c1 == __c2 ; } 

static constexpr int_type 
eof ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,518);return static_cast < int_type > ( - 1 ) ; } 

static constexpr int_type 
not_eof ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,522);return eq_int_type ( __c , eof ( ) ) ? 0 : __c ; } 
} ; 

template <> 
struct char_traits < char32_t > 
{ 
typedef char32_t char_type ; 
typedef uint_least32_t int_type ; 
typedef streamoff off_type ; 
typedef u32streampos pos_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,536);__c1 = __c2 ; } 

static constexpr bool 
eq ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,540);return __c1 == __c2 ; } 

static constexpr bool 
lt ( const char_type & __c1 , const char_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,544);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,548);
__CvT__record_line____(__CvT_miT,16,549);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,550);if ( lt ( __s1 [ __i ] , __s2 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,551);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,16,552);if ( lt ( __s2 [ __i ] , __s1 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,16,553);return 1 ; 
}}}__CvT__record_line____(__CvT_miT,16,554);return 0 ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,16,559);
__CvT__record_line____(__CvT_miT,16,560);size_t __i = 0 ; 
__CvT__record_line____(__CvT_miT,16,561);while ( ! eq ( __s [ __i ] , char_type ( ) ) ) 
{__CvT__record_line____(__CvT_miT,16,562);++ __i ; 
}__CvT__record_line____(__CvT_miT,16,563);return __i ; 
} 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,16,568);
__CvT__record_line____(__CvT_miT,16,569);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,570);if ( eq ( __s [ __i ] , __a ) ) 
{__CvT__record_line____(__CvT_miT,16,571);return __s + __i ; 
}}__CvT__record_line____(__CvT_miT,16,572);return 0 ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,577);
__CvT__record_line____(__CvT_miT,16,578);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,579);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,580);return ( static_cast < char_type *> 
( __builtin_memmove ( __s1 , __s2 , __n * sizeof ( char_type ) ) ) ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,16,586);
__CvT__record_line____(__CvT_miT,16,587);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,16,588);return __s1 ; 
}__CvT__record_line____(__CvT_miT,16,589);return ( static_cast < char_type *> 
( __builtin_memcpy ( __s1 , __s2 , __n * sizeof ( char_type ) ) ) ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,16,595);
__CvT__record_line____(__CvT_miT,16,596);for ( size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,16,597);assign ( __s [ __i ] , __a ) ; 
}__CvT__record_line____(__CvT_miT,16,598);return __s ; 
} 

static constexpr char_type 
to_char_type ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,603);return char_type ( __c ) ; } 

static constexpr int_type 
to_int_type ( const char_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,607);return int_type ( __c ) ; } 

static constexpr bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,611);return __c1 == __c2 ; } 

static constexpr int_type 
eof ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,615);return static_cast < int_type > ( - 1 ) ; } 

static constexpr int_type 
not_eof ( const int_type & __c ) noexcept 
{ __CvT__record_line____(__CvT_miT,16,619);return eq_int_type ( __c , eof ( ) ) ? 0 : __c ; } 
} ; 


} 
# 41 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/allocator.h" 1 3 
# 46 "/usr/include/c++/7.1.1/bits/allocator.h" 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++allocator.h" 1 3 
# 33 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++allocator.h" 3 
# 1 "/usr/include/c++/7.1.1/ext/new_allocator.h" 1 3 
# 33 "/usr/include/c++/7.1.1/ext/new_allocator.h" 3 
# 1 "/usr/include/c++/7.1.1/new" 1 3 
# 37 "/usr/include/c++/7.1.1/new" 3 

# 38 "/usr/include/c++/7.1.1/new" 3 


# 1 "/usr/include/c++/7.1.1/exception" 1 3 
# 33 "/usr/include/c++/7.1.1/exception" 3 

# 34 "/usr/include/c++/7.1.1/exception" 3 

# pragma GCC visibility push ( default ) 
 

# 1 "/usr/include/c++/7.1.1/bits/exception.h" 1 3 
# 34 "/usr/include/c++/7.1.1/bits/exception.h" 3 

# 35 "/usr/include/c++/7.1.1/bits/exception.h" 3 

# pragma GCC visibility push ( default ) 
 


extern "C++" { 

namespace std 
{ 
# 60 "/usr/include/c++/7.1.1/bits/exception.h" 3 
class exception 
{ 
public : 
exception ( ) noexcept { __CvT__record_line____(__CvT_miT,53,63);} 
virtual ~ exception ( ) noexcept ; 



virtual const char * 
what ( ) const noexcept ; 
} ; 

} 

} 

# pragma GCC visibility pop 
 # 39 "/usr/include/c++/7.1.1/exception" 2 3 

extern "C++" { 

namespace std 
{ 


class bad_exception : public exception 
{ 
public : 
bad_exception ( ) noexcept { __CvT__record_line____(__CvT_miT,52,49);} 



virtual ~ bad_exception ( ) noexcept ; 


virtual const char * 
what ( ) const noexcept ; 
} ; 


typedef void ( * terminate_handler ) ( ) ; 


typedef void ( * unexpected_handler ) ( ) ; 


terminate_handler set_terminate ( terminate_handler ) noexcept ; 



terminate_handler get_terminate ( ) noexcept ; 




void terminate ( ) noexcept ; 


unexpected_handler set_unexpected ( unexpected_handler ) noexcept ; 



unexpected_handler get_unexpected ( ) noexcept ; 




void unexpected ( ) ; 
# 101 "/usr/include/c++/7.1.1/exception" 3 
bool uncaught_exception ( ) noexcept ; 




int uncaught_exceptions ( ) noexcept ; 



} 

namespace __gnu_cxx 
{ 

# 132 "/usr/include/c++/7.1.1/exception" 3 
void __verbose_terminate_handler ( ) ; 


} 

} 

# pragma GCC visibility pop 
 

# 1 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 1 3 
# 34 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 3 
# pragma GCC visibility push ( default ) 
 


# 1 "/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h" 1 3 
# 34 "/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h" 3 

# 35 "/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h" 3 

# pragma GCC visibility push ( default ) 
 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 149 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 3 4 
typedef long int ptrdiff_t ; 
# 426 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 3 4 
typedef struct { 
long long __max_align_ll ; 
long double __max_align_ld ; 
# 437 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 3 4 
} max_align_t ; 






typedef decltype ( nullptr ) nullptr_t ; 
# 39 "/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h" 2 3 
# 50 "/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h" 3 
namespace std 
{ 
class type_info ; 
} 

namespace __cxxabiv1 
{ 
struct __cxa_refcounted_exception ; 

extern "C" 
{ 

void * 
__cxa_allocate_exception ( size_t ) noexcept ; 


__cxa_refcounted_exception * 
__cxa_init_primary_exception ( void * object , std :: type_info * tinfo , 
void ( * dest ) ( void * ) ) noexcept ; 

} 
} 



# pragma GCC visibility pop 
 # 39 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 2 3 
# 1 "/usr/include/c++/7.1.1/typeinfo" 1 3 
# 32 "/usr/include/c++/7.1.1/typeinfo" 3 

# 33 "/usr/include/c++/7.1.1/typeinfo" 3 



# 1 "/usr/include/c++/7.1.1/bits/hash_bytes.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/hash_bytes.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/hash_bytes.h" 3 



namespace std 
{ 







size_t 
_Hash_bytes ( const void * __ptr , size_t __len , size_t __seed ) ; 





size_t 
_Fnv_hash_bytes ( const void * __ptr , size_t __len , size_t __seed ) ; 


} 
# 37 "/usr/include/c++/7.1.1/typeinfo" 2 3 


# pragma GCC visibility push ( default ) 
 
extern "C++" { 

namespace __cxxabiv1 
{ 
class __class_type_info ; 
} 
# 80 "/usr/include/c++/7.1.1/typeinfo" 3 
namespace std 
{ 






class type_info 
{ 
public : 




virtual ~ type_info ( ) ; 



const char * name ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,56,100);return __name [ 0 ] == '*' ? __name + 1 : __name ; } 
# 115 "/usr/include/c++/7.1.1/typeinfo" 3 
bool before ( const type_info & __arg ) const noexcept 
{ __CvT__record_line____(__CvT_miT,56,116);return ( __name [ 0 ] == '*' && __arg . __name [ 0 ] == '*' ) 
? __name < __arg . __name 
: __builtin_strcmp ( __name , __arg . __name ) < 0 ; } 

bool operator == ( const type_info & __arg ) const noexcept 
{ __CvT__record_line____(__CvT_miT,56,121);
__CvT__record_line____(__CvT_miT,56,122);return ( ( __name == __arg . __name ) 
|| ( __name [ 0 ] != '*' && 
__builtin_strcmp ( __name , __arg . __name ) == 0 ) ) ; 
} 
# 136 "/usr/include/c++/7.1.1/typeinfo" 3 
bool operator != ( const type_info & __arg ) const noexcept 
{ __CvT__record_line____(__CvT_miT,56,137);return ! operator == ( __arg ) ; } 


size_t hash_code ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,56,141);

__CvT__record_line____(__CvT_miT,56,143);return _Hash_bytes ( name ( ) , __builtin_strlen ( name ( ) ) , 
static_cast < size_t > ( 0xc70f6907UL ) ) ; 



} 



virtual bool __is_pointer_p ( ) const ; 


virtual bool __is_function_p ( ) const ; 







virtual bool __do_catch ( const type_info * __thr_type , void ** __thr_obj , 
unsigned __outer ) const ; 


virtual bool __do_upcast ( const __cxxabiv1 :: __class_type_info * __target , 
void ** __obj_ptr ) const ; 

protected : 
const char * __name ; 

explicit type_info ( const char * __n ) : __name ( __n ) { __CvT__record_line____(__CvT_miT,56,173);} 

private : 

type_info & operator = ( const type_info & ) ; 
type_info ( const type_info & ) ; 
} ; 







class bad_cast : public exception 
{ 
public : 
bad_cast ( ) noexcept { __CvT__record_line____(__CvT_miT,56,190);} 



virtual ~ bad_cast ( ) noexcept ; 


virtual const char * what ( ) const noexcept ; 
} ; 





class bad_typeid : public exception 
{ 
public : 
bad_typeid ( ) noexcept { __CvT__record_line____(__CvT_miT,56,207);} 



virtual ~ bad_typeid ( ) noexcept ; 


virtual const char * what ( ) const noexcept ; 
} ; 
} 

} 

# pragma GCC visibility pop 
 # 40 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 2 3 
# 1 "/usr/include/c++/7.1.1/new" 1 3 
# 41 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 2 3 

extern "C++" { 

namespace std 
{ 
class type_info ; 





namespace __exception_ptr 
{ 
class exception_ptr ; 
} 

using __exception_ptr :: exception_ptr ; 





exception_ptr current_exception ( ) noexcept ; 

template < typename _Ex > 
exception_ptr make_exception_ptr ( _Ex ) noexcept ; 


void rethrow_exception ( exception_ptr ) ; 

namespace __exception_ptr 
{ 
using std :: rethrow_exception ; 





class exception_ptr 
{ 
void * _M_exception_object ; 

explicit exception_ptr ( void * __e ) noexcept ; 

void _M_addref ( ) noexcept ; 
void _M_release ( ) noexcept ; 

void * _M_get ( ) const noexcept ; 

friend exception_ptr std :: current_exception ( ) noexcept ; 
friend void std :: rethrow_exception ( exception_ptr ) ; 
template < typename _Ex > 
friend exception_ptr std :: make_exception_ptr ( _Ex ) noexcept ; 

public : 
exception_ptr ( ) noexcept ; 

exception_ptr ( const exception_ptr & ) noexcept ; 


exception_ptr ( nullptr_t ) noexcept 
: _M_exception_object ( 0 ) 
{ __CvT__record_line____(__CvT_miT,54,103);} 

exception_ptr ( exception_ptr && __o ) noexcept 
: _M_exception_object ( __o . _M_exception_object ) 
{ __CvT__record_line____(__CvT_miT,54,107);__o . _M_exception_object = 0 ; } 
# 117 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 3 
exception_ptr & 
operator = ( const exception_ptr & ) noexcept ; 


exception_ptr & 
operator = ( exception_ptr && __o ) noexcept 
{ __CvT__record_line____(__CvT_miT,54,123);
__CvT__record_line____(__CvT_miT,54,124);exception_ptr ( static_cast < exception_ptr &&> ( __o ) ) . swap ( * this ) ; 
__CvT__record_line____(__CvT_miT,54,125);return * this ; 
} 


~ exception_ptr ( ) noexcept ; 

void 
swap ( exception_ptr & ) noexcept ; 
# 144 "/usr/include/c++/7.1.1/bits/exception_ptr.h" 3 
explicit operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,54,145);return _M_exception_object ; } 


friend bool 
operator == ( const exception_ptr & , const exception_ptr & ) 
noexcept ; 

const class std :: type_info * 
__cxa_exception_type ( ) const noexcept 
; 
} ; 

bool 
operator == ( const exception_ptr & , const exception_ptr & ) 
noexcept ; 

bool 
operator != ( const exception_ptr & , const exception_ptr & ) 
noexcept ; 

inline void 
swap ( exception_ptr & __lhs , exception_ptr & __rhs ) 
{ __CvT__record_line____(__CvT_miT,54,167);__lhs . swap ( __rhs ) ; } 

template < typename _Ex > 
inline void 
__dest_thunk ( void * __x ) 
{ __CvT__record_line____(__CvT_miT,54,172);static_cast < _Ex *> ( __x ) -> ~ _Ex ( ) ; } 

} 


template < typename _Ex > 
exception_ptr 
make_exception_ptr ( _Ex __ex ) noexcept 
{ 

try 
{ 

void * __e = __cxxabiv1 :: __cxa_allocate_exception ( sizeof ( _Ex ) ) ; 
( void ) __cxxabiv1 :: __cxa_init_primary_exception ( 
__e , const_cast < std :: type_info *> ( & typeid ( __ex ) ) , 
__exception_ptr :: __dest_thunk < _Ex > ) ; 
:: new ( __e ) _Ex ( __ex ) ; 
return exception_ptr ( __e ) ; 



} 
catch ( ... ) 
{ 
return current_exception ( ) ; 
} 



} 





template < typename _Ex > 
exception_ptr 
copy_exception ( _Ex __ex ) noexcept ; 

template < typename _Ex > 
exception_ptr 
copy_exception ( _Ex __ex ) noexcept 
{ __CvT__record_line____(__CvT_miT,54,215);return std :: make_exception_ptr < _Ex > ( __ex ) ; } 


} 

} 

# pragma GCC visibility pop 
 # 143 "/usr/include/c++/7.1.1/exception" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/nested_exception.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/nested_exception.h" 3 
# pragma GCC visibility push ( default ) 
 # 42 "/usr/include/c++/7.1.1/bits/nested_exception.h" 3 
extern "C++" { 

namespace std 
{ 






class nested_exception 
{ 
exception_ptr _M_ptr ; 

public : 
nested_exception ( ) noexcept : _M_ptr ( current_exception ( ) ) { __CvT__record_line____(__CvT_miT,58,57);} 

nested_exception ( const nested_exception & ) noexcept = default ; 

nested_exception & operator = ( const nested_exception & ) noexcept = default ; 

virtual ~ nested_exception ( ) noexcept ; 

[ [ noreturn ] ] 
void 
rethrow_nested ( ) const 
{ __CvT__record_line____(__CvT_miT,58,68);
__CvT__record_line____(__CvT_miT,58,69);if ( _M_ptr ) 
{__CvT__record_line____(__CvT_miT,58,70);rethrow_exception ( _M_ptr ) ; 
}__CvT__record_line____(__CvT_miT,58,71);std :: terminate ( ) ; 
} 

exception_ptr 
nested_ptr ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,58,76);return _M_ptr ; } 
} ; 

template < typename _Except > 
struct _Nested_exception : public _Except , public nested_exception 
{ 
explicit _Nested_exception ( const _Except & __ex ) 
: _Except ( __ex ) 
{ __CvT__record_line____(__CvT_miT,58,84);} 

explicit _Nested_exception ( _Except && __ex ) 
: _Except ( static_cast < _Except &&> ( __ex ) ) 
{ __CvT__record_line____(__CvT_miT,58,88);} 
} ; 




template < typename _Tp > 
inline void 
__throw_with_nested_impl ( _Tp && __t , true_type ) 
{ __CvT__record_line____(__CvT_miT,58,97);
using _Up = typename remove_reference < _Tp >:: type ; 
__CvT__record_line____(__CvT_miT,58,99);throw _Nested_exception < _Up > { std :: forward < _Tp > ( __t ) } ; 
} 

template < typename _Tp > 
inline void 
__throw_with_nested_impl ( _Tp && __t , false_type ) 
{ __CvT__record_line____(__CvT_miT,58,105);throw std :: forward < _Tp > ( __t ) ; } 



template < typename _Tp > 
[ [ noreturn ] ] 
inline void 
throw_with_nested ( _Tp && __t ) 
{ __CvT__record_line____(__CvT_miT,58,113);
using _Up = typename decay < _Tp >:: type ; 
using _CopyConstructible 
= __and_ < is_copy_constructible < _Up > , is_move_constructible < _Up >> ; 
__CvT__record_line____(__CvT_miT,58,117);static_assert ( _CopyConstructible :: value , 
"throw_with_nested argument must be CopyConstructible" ) ; 
using __nest = __and_ < is_class < _Up > , __bool_constant <! __is_final ( _Up ) > , 
__not_ < is_base_of < nested_exception , _Up >>> ; 
__CvT__record_line____(__CvT_miT,58,121);std :: __throw_with_nested_impl ( std :: forward < _Tp > ( __t ) , __nest { } ) ; 
} 


template < typename _Tp > 
using __rethrow_if_nested_cond = typename enable_if < 
__and_ < is_polymorphic < _Tp > , 
__or_ < __not_ < is_base_of < nested_exception , _Tp >> , 
is_convertible < _Tp * , nested_exception *>>>:: value 
>:: type ; 


template < typename _Ex > 
inline __rethrow_if_nested_cond < _Ex > 
__rethrow_if_nested_impl ( const _Ex * __ptr ) 
{ __CvT__record_line____(__CvT_miT,58,136);
__CvT__record_line____(__CvT_miT,58,137);if ( auto __ne_ptr = dynamic_cast < const nested_exception *> ( __ptr ) ) 
{__CvT__record_line____(__CvT_miT,58,138);__ne_ptr -> rethrow_nested ( ) ; 
}} 


inline void 
__rethrow_if_nested_impl ( const void * ) 
{ __CvT__record_line____(__CvT_miT,58,144);} 


template < typename _Ex > 
inline void 
rethrow_if_nested ( const _Ex & __ex ) 
{ __CvT__record_line____(__CvT_miT,58,150);std :: __rethrow_if_nested_impl ( std :: __addressof ( __ex ) ) ; } 


} 

} 



# pragma GCC visibility pop 
 # 144 "/usr/include/c++/7.1.1/exception" 2 3 
# 41 "/usr/include/c++/7.1.1/new" 2 3 

# pragma GCC visibility push ( default ) 
 
extern "C++" { 

namespace std 
{ 






class bad_alloc : public exception 
{ 
public : 
bad_alloc ( ) throw ( ) { __CvT__record_line____(__CvT_miT,51,56);} 



virtual ~ bad_alloc ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 


class bad_array_new_length : public bad_alloc 
{ 
public : 
bad_array_new_length ( ) throw ( ) { __CvT__record_line____(__CvT_miT,51,70);} ; 



virtual ~ bad_array_new_length ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 






struct nothrow_t 
{ 

explicit nothrow_t ( ) = default ; 

} ; 

extern const nothrow_t nothrow ; 



typedef void ( * new_handler ) ( ) ; 



new_handler set_new_handler ( new_handler ) throw ( ) ; 



new_handler get_new_handler ( ) noexcept ; 

} 
# 120 "/usr/include/c++/7.1.1/new" 3 
void * operator new ( std :: size_t ) 
; 
void * operator new [ ] ( std :: size_t ) 
; 
void operator delete ( void * ) noexcept 
; 
void operator delete [ ] ( void * ) noexcept 
; 

void operator delete ( void * , std :: size_t ) noexcept 
; 
void operator delete [ ] ( void * , std :: size_t ) noexcept 
; 

void * operator new ( std :: size_t , const std :: nothrow_t & ) noexcept 
; 
void * operator new [ ] ( std :: size_t , const std :: nothrow_t & ) noexcept 
; 
void operator delete ( void * , const std :: nothrow_t & ) noexcept 
; 
void operator delete [ ] ( void * , const std :: nothrow_t & ) noexcept 
; 
# 168 "/usr/include/c++/7.1.1/new" 3 
inline void * operator new ( std :: size_t , void * __p ) noexcept 
{ __CvT__record_line____(__CvT_miT,51,169);return __p ; } 
inline void * operator new [ ] ( std :: size_t , void * __p ) noexcept 
{ __CvT__record_line____(__CvT_miT,51,171);return __p ; } 


inline void operator delete ( void * , void * ) noexcept { __CvT__record_line____(__CvT_miT,51,174);} 
inline void operator delete [ ] ( void * , void * ) noexcept { __CvT__record_line____(__CvT_miT,51,175);} 

} 
# 216 "/usr/include/c++/7.1.1/new" 3 
# pragma GCC visibility pop 
 # 34 "/usr/include/c++/7.1.1/ext/new_allocator.h" 2 3 






namespace __gnu_cxx 
{ 


using std :: size_t ; 
using std :: ptrdiff_t ; 
# 57 "/usr/include/c++/7.1.1/ext/new_allocator.h" 3 
template < typename _Tp > 
class new_allocator 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef new_allocator < _Tp1 > other ; } ; 




typedef std :: true_type propagate_on_container_move_assignment ; 


new_allocator ( ) noexcept { __CvT__record_line____(__CvT_miT,50,79);} 

new_allocator ( const new_allocator & ) noexcept { __CvT__record_line____(__CvT_miT,50,81);} 

template < typename _Tp1 > 
new_allocator ( const new_allocator < _Tp1 >& ) noexcept { __CvT__record_line____(__CvT_miT,50,84);} 

~ new_allocator ( ) noexcept { __CvT__record_line____(__CvT_miT,50,86);} 

pointer 
address ( reference __x ) const noexcept 
{ __CvT__record_line____(__CvT_miT,50,90);return std :: __addressof ( __x ) ; } 

const_pointer 
address ( const_reference __x ) const noexcept 
{ __CvT__record_line____(__CvT_miT,50,94);return std :: __addressof ( __x ) ; } 



pointer 
allocate ( size_type __n , const void * = 0 ) 
{ __CvT__record_line____(__CvT_miT,50,100);
__CvT__record_line____(__CvT_miT,50,101);if ( __n > this -> max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,50,102);std :: __throw_bad_alloc ( ) ; 
# 111 "/usr/include/c++/7.1.1/ext/new_allocator.h" 3 
}__CvT__record_line____(__CvT_miT,50,111);return static_cast < _Tp *> ( :: operator new ( __n * sizeof ( _Tp ) ) ) ; 
} 


void 
deallocate ( pointer __p , size_type ) 
{ __CvT__record_line____(__CvT_miT,50,117);







__CvT__record_line____(__CvT_miT,50,125);:: operator delete ( __p ) ; 
} 

size_type 
max_size ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,50,130);return size_t ( - 1 ) / sizeof ( _Tp ) ; } 


template < typename _Up , typename ... _Args > 
void 
construct ( _Up * __p , _Args &&... __args ) 
{ __CvT__record_line____(__CvT_miT,50,136);:: new ( ( void * ) __p ) _Up ( std :: forward < _Args > ( __args ) ... ) ; } 

template < typename _Up > 
void 
destroy ( _Up * __p ) { __CvT__record_line____(__CvT_miT,50,140);__p -> ~ _Up ( ) ; } 
# 151 "/usr/include/c++/7.1.1/ext/new_allocator.h" 3 
} ; 

template < typename _Tp > 
inline bool 
operator == ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,50,156);return true ; } 

template < typename _Tp > 
inline bool 
operator != ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,50,161);return false ; } 


} 
# 34 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++allocator.h" 2 3 


namespace std 
{ 
# 47 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++allocator.h" 3 
template < typename _Tp > 
using __allocator_base = __gnu_cxx :: new_allocator < _Tp > ; 
} 
# 47 "/usr/include/c++/7.1.1/bits/allocator.h" 2 3 
# 57 "/usr/include/c++/7.1.1/bits/allocator.h" 3 
namespace std 
{ 








template <> 
class allocator < void > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef void * pointer ; 
typedef const void * const_pointer ; 
typedef void value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 




typedef true_type propagate_on_container_move_assignment ; 

typedef true_type is_always_equal ; 

template < typename _Up , typename ... _Args > 
void 
construct ( _Up * __p , _Args &&... __args ) 
{ __CvT__record_line____(__CvT_miT,48,91);:: new ( ( void * ) __p ) _Up ( std :: forward < _Args > ( __args ) ... ) ; } 

template < typename _Up > 
void 
destroy ( _Up * __p ) { __CvT__record_line____(__CvT_miT,48,95);__p -> ~ _Up ( ) ; } 

} ; 
# 107 "/usr/include/c++/7.1.1/bits/allocator.h" 3 
template < typename _Tp > 
class allocator : public __allocator_base < _Tp > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 




typedef true_type propagate_on_container_move_assignment ; 

typedef true_type is_always_equal ; 


allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,48,131);} 

allocator ( const allocator & __a ) throw ( ) 
: __allocator_base < _Tp > ( __a ) { __CvT__record_line____(__CvT_miT,48,134);} 

template < typename _Tp1 > 
allocator ( const allocator < _Tp1 >& ) throw ( ) { __CvT__record_line____(__CvT_miT,48,137);} 

~ allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,48,139);} 


} ; 

template < typename _T1 , typename _T2 > 
inline bool 
operator == ( const allocator < _T1 >& , const allocator < _T2 >& ) 
noexcept 
{ __CvT__record_line____(__CvT_miT,48,148);return true ; } 

template < typename _Tp > 
inline bool 
operator == ( const allocator < _Tp >& , const allocator < _Tp >& ) 
noexcept 
{ __CvT__record_line____(__CvT_miT,48,154);return true ; } 

template < typename _T1 , typename _T2 > 
inline bool 
operator != ( const allocator < _T1 >& , const allocator < _T2 >& ) 
noexcept 
{ __CvT__record_line____(__CvT_miT,48,160);return false ; } 

template < typename _Tp > 
inline bool 
operator != ( const allocator < _Tp >& , const allocator < _Tp >& ) 
noexcept 
{ __CvT__record_line____(__CvT_miT,48,166);return false ; } 






extern template class allocator < char > ; 
extern template class allocator < wchar_t > ; 






template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_swap 
{ static void _S_do_it ( _Alloc & , _Alloc & ) noexcept { __CvT__record_line____(__CvT_miT,48,183);} } ; 

template < typename _Alloc > 
struct __alloc_swap < _Alloc , false > 
{ 
static void 
_S_do_it ( _Alloc & __one , _Alloc & __two ) noexcept 
{ __CvT__record_line____(__CvT_miT,48,190);

__CvT__record_line____(__CvT_miT,48,192);if ( __one != __two ) 
{__CvT__record_line____(__CvT_miT,48,193);swap ( __one , __two ) ; 
}} 
} ; 


template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_neq 
{ 
static bool 
_S_do_it ( const _Alloc & , const _Alloc & ) 
{ __CvT__record_line____(__CvT_miT,48,203);return false ; } 
} ; 

template < typename _Alloc > 
struct __alloc_neq < _Alloc , false > 
{ 
static bool 
_S_do_it ( const _Alloc & __one , const _Alloc & __two ) 
{ __CvT__record_line____(__CvT_miT,48,211);return __one != __two ; } 
} ; 


template < typename _Tp , bool 
= __or_ < is_copy_constructible < typename _Tp :: value_type > , 
is_nothrow_move_constructible < typename _Tp :: value_type >>:: value > 
struct __shrink_to_fit_aux 
{ static bool _S_do_it ( _Tp & ) noexcept { return false ; } } ; 

template < typename _Tp > 
struct __shrink_to_fit_aux < _Tp , true > 
{ 
static bool 
_S_do_it ( _Tp & __c ) noexcept 
{ 

try 
{ 
_Tp ( __make_move_if_noexcept_iterator ( __c . begin ( ) ) , 
__make_move_if_noexcept_iterator ( __c . end ( ) ) , 
__c . get_allocator ( ) ) . swap ( __c ) ; 
return true ; 
} 
catch ( ... ) 
{ return false ; } 



} 
} ; 



} 
# 42 "/usr/include/c++/7.1.1/string" 2 3 

# 1 "/usr/include/c++/7.1.1/bits/localefwd.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/localefwd.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/localefwd.h" 3 


# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h" 1 3 
# 39 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h" 3 

# 40 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h" 3 

# 1 "/usr/include/c++/7.1.1/clocale" 1 3 
# 39 "/usr/include/c++/7.1.1/clocale" 3 

# 40 "/usr/include/c++/7.1.1/clocale" 3 


# 1 "/usr/include/locale.h" 1 3 4 
# 28 "/usr/include/locale.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 29 "/usr/include/locale.h" 2 3 4 
# 1 "/usr/include/bits/locale.h" 1 3 4 
# 30 "/usr/include/locale.h" 2 3 4 

extern "C" { 
# 50 "/usr/include/locale.h" 3 4 



struct lconv 
{ 


char * decimal_point ; 
char * thousands_sep ; 





char * grouping ; 





char * int_curr_symbol ; 
char * currency_symbol ; 
char * mon_decimal_point ; 
char * mon_thousands_sep ; 
char * mon_grouping ; 
char * positive_sign ; 
char * negative_sign ; 
char int_frac_digits ; 
char frac_digits ; 

char p_cs_precedes ; 

char p_sep_by_space ; 

char n_cs_precedes ; 

char n_sep_by_space ; 






char p_sign_posn ; 
char n_sign_posn ; 


char int_p_cs_precedes ; 

char int_p_sep_by_space ; 

char int_n_cs_precedes ; 

char int_n_sep_by_space ; 






char int_p_sign_posn ; 
char int_n_sign_posn ; 
# 120 "/usr/include/locale.h" 3 4 
} ; 



extern char * setlocale ( int __category , const char * __locale ) throw ( ) ; 


extern struct lconv * localeconv ( void ) throw ( ) ; 


# 151 "/usr/include/locale.h" 3 4 
extern __locale_t newlocale ( int __category_mask , const char * __locale , 
__locale_t __base ) throw ( ) ; 
# 186 "/usr/include/locale.h" 3 4 
extern __locale_t duplocale ( __locale_t __dataset ) throw ( ) ; 



extern void freelocale ( __locale_t __dataset ) throw ( ) ; 






extern __locale_t uselocale ( __locale_t __dataset ) throw ( ) ; 







} 
# 43 "/usr/include/c++/7.1.1/clocale" 2 3 
# 51 "/usr/include/c++/7.1.1/clocale" 3 
namespace std 
{ 
using :: lconv ; 
using :: setlocale ; 
using :: localeconv ; 
} 
# 42 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h" 2 3 






namespace __gnu_cxx 
{ 


extern "C" __typeof ( uselocale ) __uselocale ; 


} 


namespace std 
{ 


typedef __locale_t __c_locale ; 





inline int 
__convert_from_v ( const __c_locale & __cloc , 
char * __out , 
const int __size , 
const char * __fmt , ... ) 
{ 

__c_locale __old = __gnu_cxx :: __uselocale ( __cloc ) ; 
# 88 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h" 3 
__builtin_va_list __args ; 
__builtin_va_start ( __args , __fmt ) ; 


const int __ret = __builtin_vsnprintf ( __out , __size , __fmt , __args ) ; 




__builtin_va_end ( __args ) ; 


__gnu_cxx :: __uselocale ( __old ) ; 







return __ret ; 
} 


} 
# 41 "/usr/include/c++/7.1.1/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/7.1.1/iosfwd" 1 3 
# 36 "/usr/include/c++/7.1.1/iosfwd" 3 

# 37 "/usr/include/c++/7.1.1/iosfwd" 3 





namespace std 
{ 

# 74 "/usr/include/c++/7.1.1/iosfwd" 3 
class ios_base ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ios ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_streambuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_istream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ostream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_iostream ; 


namespace __cxx11 { 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringbuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_istringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_ostringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringstream ; 

} 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_filebuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ifstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ofstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_fstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class ostreambuf_iterator ; 



typedef basic_ios < char > ios ; 


typedef basic_streambuf < char > streambuf ; 


typedef basic_istream < char > istream ; 


typedef basic_ostream < char > ostream ; 


typedef basic_iostream < char > iostream ; 


typedef basic_stringbuf < char > stringbuf ; 


typedef basic_istringstream < char > istringstream ; 


typedef basic_ostringstream < char > ostringstream ; 


typedef basic_stringstream < char > stringstream ; 


typedef basic_filebuf < char > filebuf ; 


typedef basic_ifstream < char > ifstream ; 


typedef basic_ofstream < char > ofstream ; 


typedef basic_fstream < char > fstream ; 



typedef basic_ios < wchar_t > wios ; 


typedef basic_streambuf < wchar_t > wstreambuf ; 


typedef basic_istream < wchar_t > wistream ; 


typedef basic_ostream < wchar_t > wostream ; 


typedef basic_iostream < wchar_t > wiostream ; 


typedef basic_stringbuf < wchar_t > wstringbuf ; 


typedef basic_istringstream < wchar_t > wistringstream ; 


typedef basic_ostringstream < wchar_t > wostringstream ; 


typedef basic_stringstream < wchar_t > wstringstream ; 


typedef basic_filebuf < wchar_t > wfilebuf ; 


typedef basic_ifstream < wchar_t > wifstream ; 


typedef basic_ofstream < wchar_t > wofstream ; 


typedef basic_fstream < wchar_t > wfstream ; 




} 
# 42 "/usr/include/c++/7.1.1/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cctype" 1 3 
# 39 "/usr/include/c++/7.1.1/cctype" 3 

# 40 "/usr/include/c++/7.1.1/cctype" 3 


# 1 "/usr/include/ctype.h" 1 3 4 
# 28 "/usr/include/ctype.h" 3 4 
extern "C" { 
# 39 "/usr/include/ctype.h" 3 4 
# 1 "/usr/include/endian.h" 1 3 4 
# 36 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/bits/endian.h" 1 3 4 
# 37 "/usr/include/endian.h" 2 3 4 
# 60 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/bits/byteswap.h" 1 3 4 
# 28 "/usr/include/bits/byteswap.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/bits/byteswap.h" 2 3 4 






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4 
# 36 "/usr/include/bits/byteswap.h" 2 3 4 
# 44 "/usr/include/bits/byteswap.h" 3 4 
static __inline unsigned int 
__bswap_32 ( unsigned int __bsx ) 
{ 
return __builtin_bswap32 ( __bsx ) ; 
} 
# 108 "/usr/include/bits/byteswap.h" 3 4 
static __inline __uint64_t 
__bswap_64 ( __uint64_t __bsx ) 
{ 
return __builtin_bswap64 ( __bsx ) ; 
} 
# 61 "/usr/include/endian.h" 2 3 4 
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4 
# 32 "/usr/include/bits/uintn-identity.h" 3 4 
static __inline __uint16_t 
__uint16_identity ( __uint16_t __x ) 
{ 
return __x ; 
} 

static __inline __uint32_t 
__uint32_identity ( __uint32_t __x ) 
{ 
return __x ; 
} 

static __inline __uint64_t 
__uint64_identity ( __uint64_t __x ) 
{ 
return __x ; 
} 
# 62 "/usr/include/endian.h" 2 3 4 
# 40 "/usr/include/ctype.h" 2 3 4 






enum 
{ 
_ISupper = ( ( 0 ) < 8 ? ( ( 1 << ( 0 ) ) << 8 ) : ( ( 1 << ( 0 ) ) >> 8 ) ) , 
_ISlower = ( ( 1 ) < 8 ? ( ( 1 << ( 1 ) ) << 8 ) : ( ( 1 << ( 1 ) ) >> 8 ) ) , 
_ISalpha = ( ( 2 ) < 8 ? ( ( 1 << ( 2 ) ) << 8 ) : ( ( 1 << ( 2 ) ) >> 8 ) ) , 
_ISdigit = ( ( 3 ) < 8 ? ( ( 1 << ( 3 ) ) << 8 ) : ( ( 1 << ( 3 ) ) >> 8 ) ) , 
_ISxdigit = ( ( 4 ) < 8 ? ( ( 1 << ( 4 ) ) << 8 ) : ( ( 1 << ( 4 ) ) >> 8 ) ) , 
_ISspace = ( ( 5 ) < 8 ? ( ( 1 << ( 5 ) ) << 8 ) : ( ( 1 << ( 5 ) ) >> 8 ) ) , 
_ISprint = ( ( 6 ) < 8 ? ( ( 1 << ( 6 ) ) << 8 ) : ( ( 1 << ( 6 ) ) >> 8 ) ) , 
_ISgraph = ( ( 7 ) < 8 ? ( ( 1 << ( 7 ) ) << 8 ) : ( ( 1 << ( 7 ) ) >> 8 ) ) , 
_ISblank = ( ( 8 ) < 8 ? ( ( 1 << ( 8 ) ) << 8 ) : ( ( 1 << ( 8 ) ) >> 8 ) ) , 
_IScntrl = ( ( 9 ) < 8 ? ( ( 1 << ( 9 ) ) << 8 ) : ( ( 1 << ( 9 ) ) >> 8 ) ) , 
_ISpunct = ( ( 10 ) < 8 ? ( ( 1 << ( 10 ) ) << 8 ) : ( ( 1 << ( 10 ) ) >> 8 ) ) , 
_ISalnum = ( ( 11 ) < 8 ? ( ( 1 << ( 11 ) ) << 8 ) : ( ( 1 << ( 11 ) ) >> 8 ) ) 
} ; 
# 79 "/usr/include/ctype.h" 3 4 
extern const unsigned short int ** __ctype_b_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_tolower_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_toupper_loc ( void ) 
throw ( ) ; 
# 104 "/usr/include/ctype.h" 3 4 






extern int isalnum ( int ) throw ( ) ; 
extern int isalpha ( int ) throw ( ) ; 
extern int iscntrl ( int ) throw ( ) ; 
extern int isdigit ( int ) throw ( ) ; 
extern int islower ( int ) throw ( ) ; 
extern int isgraph ( int ) throw ( ) ; 
extern int isprint ( int ) throw ( ) ; 
extern int ispunct ( int ) throw ( ) ; 
extern int isspace ( int ) throw ( ) ; 
extern int isupper ( int ) throw ( ) ; 
extern int isxdigit ( int ) throw ( ) ; 



extern int tolower ( int __c ) throw ( ) ; 


extern int toupper ( int __c ) throw ( ) ; 








extern int isblank ( int ) throw ( ) ; 






extern int isctype ( int __c , int __mask ) throw ( ) ; 






extern int isascii ( int __c ) throw ( ) ; 



extern int toascii ( int __c ) throw ( ) ; 



extern int _toupper ( int ) throw ( ) ; 
extern int _tolower ( int ) throw ( ) ; 
# 271 "/usr/include/ctype.h" 3 4 
extern int isalnum_l ( int , __locale_t ) throw ( ) ; 
extern int isalpha_l ( int , __locale_t ) throw ( ) ; 
extern int iscntrl_l ( int , __locale_t ) throw ( ) ; 
extern int isdigit_l ( int , __locale_t ) throw ( ) ; 
extern int islower_l ( int , __locale_t ) throw ( ) ; 
extern int isgraph_l ( int , __locale_t ) throw ( ) ; 
extern int isprint_l ( int , __locale_t ) throw ( ) ; 
extern int ispunct_l ( int , __locale_t ) throw ( ) ; 
extern int isspace_l ( int , __locale_t ) throw ( ) ; 
extern int isupper_l ( int , __locale_t ) throw ( ) ; 
extern int isxdigit_l ( int , __locale_t ) throw ( ) ; 

extern int isblank_l ( int , __locale_t ) throw ( ) ; 



extern int __tolower_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int tolower_l ( int __c , __locale_t __l ) throw ( ) ; 


extern int __toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
# 347 "/usr/include/ctype.h" 3 4 
} 
# 43 "/usr/include/c++/7.1.1/cctype" 2 3 
# 62 "/usr/include/c++/7.1.1/cctype" 3 
namespace std 
{ 
using :: isalnum ; 
using :: isalpha ; 
using :: iscntrl ; 
using :: isdigit ; 
using :: isgraph ; 
using :: islower ; 
using :: isprint ; 
using :: ispunct ; 
using :: isspace ; 
using :: isupper ; 
using :: isxdigit ; 
using :: tolower ; 
using :: toupper ; 
} 







namespace std 
{ 
using :: isblank ; 
} 
# 43 "/usr/include/c++/7.1.1/bits/localefwd.h" 2 3 

namespace std 
{ 

# 55 "/usr/include/c++/7.1.1/bits/localefwd.h" 3 
class locale ; 

template < typename _Facet > 
bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
const _Facet & 
use_facet ( const locale & ) ; 


template < typename _CharT > 
bool 
isspace ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isprint ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
iscntrl ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
islower ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalpha ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
ispunct ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isxdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalnum ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isgraph ( _CharT , const locale & ) ; 


template < typename _CharT > 
bool 
isblank ( _CharT , const locale & ) ; 


template < typename _CharT > 
_CharT 
toupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
_CharT 
tolower ( _CharT , const locale & ) ; 


class ctype_base ; 
template < typename _CharT > 
class ctype ; 
template <> class ctype < char > ; 

template <> class ctype < wchar_t > ; 

template < typename _CharT > 
class ctype_byname ; 


class codecvt_base ; 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt ; 
template <> class codecvt < char , char , mbstate_t > ; 

template <> class codecvt < wchar_t , char , mbstate_t > ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname ; 



template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class num_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class num_put ; 

namespace __cxx11 { 
template < typename _CharT > class numpunct ; 
template < typename _CharT > class numpunct_byname ; 
} 

namespace __cxx11 { 

template < typename _CharT > 
class collate ; 
template < typename _CharT > 
class collate_byname ; 
} 


class time_base ; 
namespace __cxx11 { 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get ; 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get_byname ; 
} 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put_byname ; 


class money_base ; 
namespace __cxx11 { 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class money_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class money_put ; 
} 
namespace __cxx11 { 
template < typename _CharT , bool _Intl = false > 
class moneypunct ; 
template < typename _CharT , bool _Intl = false > 
class moneypunct_byname ; 
} 


class messages_base ; 
namespace __cxx11 { 
template < typename _CharT > 
class messages ; 
template < typename _CharT > 
class messages_byname ; 
} 


} 
# 44 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/ostream_insert.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/ostream_insert.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/ostream_insert.h" 3 


# 1 "/usr/include/c++/7.1.1/bits/cxxabi_forced.h" 1 3 
# 34 "/usr/include/c++/7.1.1/bits/cxxabi_forced.h" 3 

# 35 "/usr/include/c++/7.1.1/bits/cxxabi_forced.h" 3 

# pragma GCC visibility push ( default ) 
 

namespace __cxxabiv1 
{ 







class __forced_unwind 
{ 
virtual ~ __forced_unwind ( ) throw ( ) ; 


virtual void __pure_dummy ( ) = 0 ; 
} ; 
} 


# pragma GCC visibility pop 
 # 37 "/usr/include/c++/7.1.1/bits/ostream_insert.h" 2 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
inline void 
__ostream_write ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

const streamsize __put = __out . rdbuf ( ) -> sputn ( __s , __n ) ; 
if ( __put != __n ) 
__out . setstate ( __ios_base :: badbit ) ; 
} 

template < typename _CharT , typename _Traits > 
inline void 
__ostream_fill ( basic_ostream < _CharT , _Traits >& __out , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,72,58);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,72,62);const _CharT __c = __out . fill ( ) ; 
__CvT__record_line____(__CvT_miT,72,63);for ( ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,72,65);const typename _Traits :: int_type __put = __out . rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,72,66);if ( _Traits :: eq_int_type ( __put , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,72,68);__out . setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,72,69);break ; 
} 
}} 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
__ostream_insert ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,72,78);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,72,82);typename __ostream_type :: sentry __cerb ( __out ) ; 
__CvT__record_line____(__CvT_miT,72,83);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,72,85);try 
{ 
__CvT__record_line____(__CvT_miT,72,87);const streamsize __w = __out . width ( ) ; 
__CvT__record_line____(__CvT_miT,72,88);if ( __w > __n ) 
{{ 
__CvT__record_line____(__CvT_miT,72,90);const bool __left = ( ( __out . flags ( ) 
& __ios_base :: adjustfield ) 
== __ios_base :: left ) ; 
__CvT__record_line____(__CvT_miT,72,93);if ( ! __left ) 
{__CvT__record_line____(__CvT_miT,72,94);__ostream_fill ( __out , __w - __n ) ; 
}__CvT__record_line____(__CvT_miT,72,95);if ( __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,72,96);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,72,97);if ( __left && __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,72,98);__ostream_fill ( __out , __w - __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,72,101);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,72,102);__out . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,72,106);__out . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,72,107);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,72,110);__out . _M_setstate ( __ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,72,112);return __out ; 
} 




extern template ostream & __ostream_insert ( ostream & , const char * , streamsize ) ; 


extern template wostream & __ostream_insert ( wostream & , const wchar_t * , 
streamsize ) ; 




} 
# 45 "/usr/include/c++/7.1.1/string" 2 3 



# 1 "/usr/include/c++/7.1.1/bits/stl_function.h" 1 3 
# 63 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
namespace std 
{ 

# 104 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
struct unary_function 
{ 

typedef _Arg argument_type ; 


typedef _Result result_type ; 
} ; 




template < typename _Arg1 , typename _Arg2 , typename _Result > 
struct binary_function 
{ 

typedef _Arg1 first_argument_type ; 


typedef _Arg2 second_argument_type ; 


typedef _Result result_type ; 
} ; 
# 144 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
struct __is_transparent ; 

template < typename _Tp = void > 
struct plus ; 

template < typename _Tp = void > 
struct minus ; 

template < typename _Tp = void > 
struct multiplies ; 

template < typename _Tp = void > 
struct divides ; 

template < typename _Tp = void > 
struct modulus ; 

template < typename _Tp = void > 
struct negate ; 



template < typename _Tp > 
struct plus : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,172);return __x + __y ; } 
} ; 


template < typename _Tp > 
struct minus : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,182);return __x - __y ; } 
} ; 


template < typename _Tp > 
struct multiplies : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,192);return __x * __y ; } 
} ; 


template < typename _Tp > 
struct divides : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,202);return __x / __y ; } 
} ; 


template < typename _Tp > 
struct modulus : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,212);return __x % __y ; } 
} ; 


template < typename _Tp > 
struct negate : public unary_function < _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,222);return - __x ; } 
} ; 





template <> 
struct plus < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) + std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) + std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,238);return std :: forward < _Tp > ( __t ) + std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct minus < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) - std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) - std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,253);return std :: forward < _Tp > ( __t ) - std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct multiplies < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) * std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) * std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,268);return std :: forward < _Tp > ( __t ) * std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct divides < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) / std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) / std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,283);return std :: forward < _Tp > ( __t ) / std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct modulus < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) % std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) % std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,298);return std :: forward < _Tp > ( __t ) % std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct negate < void > 
{ 
template < typename _Tp > 
constexpr 
auto 
operator ( ) ( _Tp && __t ) const 
noexcept ( noexcept ( - std :: forward < _Tp > ( __t ) ) ) 
-> decltype ( - std :: forward < _Tp > ( __t ) ) 
{ __CvT__record_line____(__CvT_miT,74,313);return - std :: forward < _Tp > ( __t ) ; } 

typedef __is_transparent is_transparent ; 
} ; 
# 330 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Tp = void > 
struct equal_to ; 

template < typename _Tp = void > 
struct not_equal_to ; 

template < typename _Tp = void > 
struct greater ; 

template < typename _Tp = void > 
struct less ; 

template < typename _Tp = void > 
struct greater_equal ; 

template < typename _Tp = void > 
struct less_equal ; 



template < typename _Tp > 
struct equal_to : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,356);return __x == __y ; } 
} ; 


template < typename _Tp > 
struct not_equal_to : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,366);return __x != __y ; } 
} ; 


template < typename _Tp > 
struct greater : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,376);return __x > __y ; } 
} ; 


template < typename _Tp > 
struct less : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,386);return __x < __y ; } 
} ; 


template < typename _Tp > 
struct greater_equal : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,396);return __x >= __y ; } 
} ; 


template < typename _Tp > 
struct less_equal : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,406);return __x <= __y ; } 
} ; 



template <> 
struct equal_to < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) == std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) == std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,420);return std :: forward < _Tp > ( __t ) == std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct not_equal_to < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) != std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) != std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,435);return std :: forward < _Tp > ( __t ) != std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct greater < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) > std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) > std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,450);return std :: forward < _Tp > ( __t ) > std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct less < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) < std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) < std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,465);return std :: forward < _Tp > ( __t ) < std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct greater_equal < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) >= std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) >= std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,480);return std :: forward < _Tp > ( __t ) >= std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct less_equal < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) <= std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) <= std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,495);return std :: forward < _Tp > ( __t ) <= std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 
# 512 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Tp = void > 
struct logical_and ; 

template < typename _Tp = void > 
struct logical_or ; 

template < typename _Tp = void > 
struct logical_not ; 



template < typename _Tp > 
struct logical_and : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,529);return __x && __y ; } 
} ; 


template < typename _Tp > 
struct logical_or : public binary_function < _Tp , _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,539);return __x || __y ; } 
} ; 


template < typename _Tp > 
struct logical_not : public unary_function < _Tp , bool > 
{ 
constexpr 
bool 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,549);return ! __x ; } 
} ; 



template <> 
struct logical_and < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) && std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) && std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,563);return std :: forward < _Tp > ( __t ) && std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct logical_or < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) || std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) || std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,578);return std :: forward < _Tp > ( __t ) || std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 


template <> 
struct logical_not < void > 
{ 
template < typename _Tp > 
constexpr 
auto 
operator ( ) ( _Tp && __t ) const 
noexcept ( noexcept ( ! std :: forward < _Tp > ( __t ) ) ) 
-> decltype ( ! std :: forward < _Tp > ( __t ) ) 
{ __CvT__record_line____(__CvT_miT,74,593);return ! std :: forward < _Tp > ( __t ) ; } 

typedef __is_transparent is_transparent ; 
} ; 




template < typename _Tp = void > 
struct bit_and ; 

template < typename _Tp = void > 
struct bit_or ; 

template < typename _Tp = void > 
struct bit_xor ; 

template < typename _Tp = void > 
struct bit_not ; 




template < typename _Tp > 
struct bit_and : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,622);return __x & __y ; } 
} ; 

template < typename _Tp > 
struct bit_or : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,631);return __x | __y ; } 
} ; 

template < typename _Tp > 
struct bit_xor : public binary_function < _Tp , _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,640);return __x ^ __y ; } 
} ; 

template < typename _Tp > 
struct bit_not : public unary_function < _Tp , _Tp > 
{ 
constexpr 
_Tp 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,649);return ~ __x ; } 
} ; 


template <> 
struct bit_and < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) & std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) & std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,662);return std :: forward < _Tp > ( __t ) & std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 

template <> 
struct bit_or < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) | std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) | std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,676);return std :: forward < _Tp > ( __t ) | std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 

template <> 
struct bit_xor < void > 
{ 
template < typename _Tp , typename _Up > 
constexpr 
auto 
operator ( ) ( _Tp && __t , _Up && __u ) const 
noexcept ( noexcept ( std :: forward < _Tp > ( __t ) ^ std :: forward < _Up > ( __u ) ) ) 
-> decltype ( std :: forward < _Tp > ( __t ) ^ std :: forward < _Up > ( __u ) ) 
{ __CvT__record_line____(__CvT_miT,74,690);return std :: forward < _Tp > ( __t ) ^ std :: forward < _Up > ( __u ) ; } 

typedef __is_transparent is_transparent ; 
} ; 

template <> 
struct bit_not < void > 
{ 
template < typename _Tp > 
constexpr 
auto 
operator ( ) ( _Tp && __t ) const 
noexcept ( noexcept ( ~ std :: forward < _Tp > ( __t ) ) ) 
-> decltype ( ~ std :: forward < _Tp > ( __t ) ) 
{ __CvT__record_line____(__CvT_miT,74,704);return ~ std :: forward < _Tp > ( __t ) ; } 

typedef __is_transparent is_transparent ; 
} ; 
# 740 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Predicate > 
class unary_negate 
: public unary_function < typename _Predicate :: argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 
constexpr 
explicit 
unary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,74,750);} 

constexpr 
bool 
operator ( ) ( const typename _Predicate :: argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,755);return ! _M_pred ( __x ) ; } 
} ; 


template < typename _Predicate > 
constexpr 
inline unary_negate < _Predicate > 
not1 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,74,763);return unary_negate < _Predicate > ( __pred ) ; } 


template < typename _Predicate > 
class binary_negate 
: public binary_function < typename _Predicate :: first_argument_type , 
typename _Predicate :: second_argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 
constexpr 
explicit 
binary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,74,777);} 

constexpr 
bool 
operator ( ) ( const typename _Predicate :: first_argument_type & __x , 
const typename _Predicate :: second_argument_type & __y ) const 
{ __CvT__record_line____(__CvT_miT,74,783);return ! _M_pred ( __x , __y ) ; } 
} ; 


template < typename _Predicate > 
constexpr 
inline binary_negate < _Predicate > 
not2 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,74,791);return binary_negate < _Predicate > ( __pred ) ; } 
# 817 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
class pointer_to_unary_function : public unary_function < _Arg , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg ) ; 

public : 
pointer_to_unary_function ( ) { __CvT__record_line____(__CvT_miT,74,824);} 

explicit 
pointer_to_unary_function ( _Result ( * __x ) ( _Arg ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,74,828);} 

_Result 
operator ( ) ( _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,74,832);return _M_ptr ( __x ) ; } 
} ; 


template < typename _Arg , typename _Result > 
inline pointer_to_unary_function < _Arg , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,74,839);return pointer_to_unary_function < _Arg , _Result > ( __x ) ; } 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
class pointer_to_binary_function 
: public binary_function < _Arg1 , _Arg2 , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg1 , _Arg2 ) ; 

public : 
pointer_to_binary_function ( ) { __CvT__record_line____(__CvT_miT,74,850);} 

explicit 
pointer_to_binary_function ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,74,854);} 

_Result 
operator ( ) ( _Arg1 __x , _Arg2 __y ) const 
{ __CvT__record_line____(__CvT_miT,74,858);return _M_ptr ( __x , __y ) ; } 
} ; 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
inline pointer_to_binary_function < _Arg1 , _Arg2 , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
{ __CvT__record_line____(__CvT_miT,74,865);return pointer_to_binary_function < _Arg1 , _Arg2 , _Result > ( __x ) ; } 


template < typename _Tp > 
struct _Identity 
: public unary_function < _Tp , _Tp > 
{ 
_Tp & 
operator ( ) ( _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,874);return __x ; } 

const _Tp & 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,878);return __x ; } 
} ; 

template < typename _Pair > 
struct _Select1st 
: public unary_function < _Pair , typename _Pair :: first_type > 
{ 
typename _Pair :: first_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,887);return __x . first ; } 

const typename _Pair :: first_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,891);return __x . first ; } 


template < typename _Pair2 > 
typename _Pair2 :: first_type & 
operator ( ) ( _Pair2 & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,897);return __x . first ; } 

template < typename _Pair2 > 
const typename _Pair2 :: first_type & 
operator ( ) ( const _Pair2 & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,902);return __x . first ; } 

} ; 

template < typename _Pair > 
struct _Select2nd 
: public unary_function < _Pair , typename _Pair :: second_type > 
{ 
typename _Pair :: second_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,912);return __x . second ; } 

const typename _Pair :: second_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,74,916);return __x . second ; } 
} ; 
# 937 "/usr/include/c++/7.1.1/bits/stl_function.h" 3 
template < typename _Ret , typename _Tp > 
class mem_fun_t : public unary_function < _Tp * , _Ret > 
{ 
public : 
explicit 
mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,943);} 

_Ret 
operator ( ) ( _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,74,947);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_t : public unary_function < const _Tp * , _Ret > 
{ 
public : 
explicit 
const_mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,961);} 

_Ret 
operator ( ) ( const _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,74,965);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
class mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,979);} 

_Ret 
operator ( ) ( _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,74,983);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
const_mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,997);} 

_Ret 
operator ( ) ( const _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,74,1001);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_t : public binary_function < _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,1015);} 

_Ret 
operator ( ) ( _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,74,1019);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_t : public binary_function < const _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,1033);} 

_Ret 
operator ( ) ( const _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,74,1037);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,1051);} 

_Ret 
operator ( ) ( _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,74,1055);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,74,1069);} 

_Ret 
operator ( ) ( const _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,74,1073);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
inline mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,74,1084);return mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,74,1089);return const_mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,74,1094);return mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,74,1099);return const_mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,74,1104);return mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,74,1109);return const_mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,74,1114);return mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,74,1119);return const_mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 




} 


# 1 "/usr/include/c++/7.1.1/backward/binders.h" 1 3 
# 60 "/usr/include/c++/7.1.1/backward/binders.h" 3 
# pragma GCC diagnostic push 
 # pragma GCC diagnostic ignored "-Wdeprecated-declarations" 
 
namespace std 
{ 

# 107 "/usr/include/c++/7.1.1/backward/binders.h" 3 
template < typename _Operation > 
class binder1st 
: public unary_function < typename _Operation :: second_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: first_argument_type value ; 

public : 
binder1st ( const _Operation & __x , 
const typename _Operation :: first_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,75,119);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,75,123);return op ( value , __x ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,75,129);return op ( value , __x ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder1st < _Operation > 
bind1st ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,75,136);
typedef typename _Operation :: first_argument_type _Arg1_type ; 
__CvT__record_line____(__CvT_miT,75,138);return binder1st < _Operation > ( __fn , _Arg1_type ( __x ) ) ; 
} 


template < typename _Operation > 
class binder2nd 
: public unary_function < typename _Operation :: first_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: second_argument_type value ; 

public : 
binder2nd ( const _Operation & __x , 
const typename _Operation :: second_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,75,154);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,75,158);return op ( __x , value ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,75,164);return op ( __x , value ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder2nd < _Operation > 
bind2nd ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,75,171);
typedef typename _Operation :: second_argument_type _Arg2_type ; 
__CvT__record_line____(__CvT_miT,75,173);return binder2nd < _Operation > ( __fn , _Arg2_type ( __x ) ) ; 
} 



} 

# pragma GCC diagnostic pop 
 # 1128 "/usr/include/c++/7.1.1/bits/stl_function.h" 2 3 
# 49 "/usr/include/c++/7.1.1/string" 2 3 


# 1 "/usr/include/c++/7.1.1/bits/range_access.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/range_access.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/range_access.h" 3 


# 1 "/usr/include/c++/7.1.1/initializer_list" 1 3 
# 33 "/usr/include/c++/7.1.1/initializer_list" 3 

# 34 "/usr/include/c++/7.1.1/initializer_list" 3 





# pragma GCC visibility push ( default ) 
 


namespace std 
{ 

template < class _E > 
class initializer_list 
{ 
public : 
typedef _E value_type ; 
typedef const _E & reference ; 
typedef const _E & const_reference ; 
typedef size_t size_type ; 
typedef const _E * iterator ; 
typedef const _E * const_iterator ; 

private : 
iterator _M_array ; 
size_type _M_len ; 


constexpr initializer_list ( const_iterator __a , size_type __l ) 
: _M_array ( __a ) , _M_len ( __l ) { __CvT__record_line____(__CvT_miT,77,62);} 

public : 
constexpr initializer_list ( ) noexcept 
: _M_array ( 0 ) , _M_len ( 0 ) { __CvT__record_line____(__CvT_miT,77,66);} 


constexpr size_type 
size ( ) const noexcept { __CvT__record_line____(__CvT_miT,77,70);return _M_len ; } 


constexpr const_iterator 
begin ( ) const noexcept { __CvT__record_line____(__CvT_miT,77,74);return _M_array ; } 


constexpr const_iterator 
end ( ) const noexcept { __CvT__record_line____(__CvT_miT,77,78);return begin ( ) + size ( ) ; } 
} ; 






template < class _Tp > 
constexpr const _Tp * 
begin ( initializer_list < _Tp > __ils ) noexcept 
{ __CvT__record_line____(__CvT_miT,77,89);return __ils . begin ( ) ; } 






template < class _Tp > 
constexpr const _Tp * 
end ( initializer_list < _Tp > __ils ) noexcept 
{ __CvT__record_line____(__CvT_miT,77,99);return __ils . end ( ) ; } 
} 

# pragma GCC visibility pop 
 # 37 "/usr/include/c++/7.1.1/bits/range_access.h" 2 3 
namespace std 
{ 







template < typename _Container > 
inline auto 
begin ( _Container & __cont ) -> decltype ( __cont . begin ( ) ) 
{ return __cont . begin ( ) ; } 






template < typename _Container > 
inline auto 
begin ( const _Container & __cont ) -> decltype ( __cont . begin ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,59);return __cont . begin ( ) ; } 






template < typename _Container > 
inline auto 
end ( _Container & __cont ) -> decltype ( __cont . end ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,69);return __cont . end ( ) ; } 






template < typename _Container > 
inline auto 
end ( const _Container & __cont ) -> decltype ( __cont . end ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,79);return __cont . end ( ) ; } 





template < typename _Tp , size_t _Nm > 
inline constexpr _Tp * 
begin ( _Tp ( & __arr ) [ _Nm ] ) 
{ __CvT__record_line____(__CvT_miT,76,88);return __arr ; } 






template < typename _Tp , size_t _Nm > 
inline constexpr _Tp * 
end ( _Tp ( & __arr ) [ _Nm ] ) 
{ __CvT__record_line____(__CvT_miT,76,98);return __arr + _Nm ; } 



template < typename _Tp > class valarray ; 

template < typename _Tp > _Tp * begin ( valarray < _Tp >& ) ; 
template < typename _Tp > const _Tp * begin ( const valarray < _Tp >& ) ; 
template < typename _Tp > _Tp * end ( valarray < _Tp >& ) ; 
template < typename _Tp > const _Tp * end ( const valarray < _Tp >& ) ; 






template < typename _Container > 
inline constexpr auto 
cbegin ( const _Container & __cont ) noexcept ( noexcept ( std :: begin ( __cont ) ) ) 
-> decltype ( std :: begin ( __cont ) ) 
{ __CvT__record_line____(__CvT_miT,76,118);return std :: begin ( __cont ) ; } 






template < typename _Container > 
inline constexpr auto 
cend ( const _Container & __cont ) noexcept ( noexcept ( std :: end ( __cont ) ) ) 
-> decltype ( std :: end ( __cont ) ) 
{ __CvT__record_line____(__CvT_miT,76,129);return std :: end ( __cont ) ; } 






template < typename _Container > 
inline auto 
rbegin ( _Container & __cont ) -> decltype ( __cont . rbegin ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,139);return __cont . rbegin ( ) ; } 






template < typename _Container > 
inline auto 
rbegin ( const _Container & __cont ) -> decltype ( __cont . rbegin ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,149);return __cont . rbegin ( ) ; } 






template < typename _Container > 
inline auto 
rend ( _Container & __cont ) -> decltype ( __cont . rend ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,159);return __cont . rend ( ) ; } 






template < typename _Container > 
inline auto 
rend ( const _Container & __cont ) -> decltype ( __cont . rend ( ) ) 
{ __CvT__record_line____(__CvT_miT,76,169);return __cont . rend ( ) ; } 






template < typename _Tp , size_t _Nm > 
inline reverse_iterator < _Tp *> 
rbegin ( _Tp ( & __arr ) [ _Nm ] ) 
{ __CvT__record_line____(__CvT_miT,76,179);return reverse_iterator < _Tp *> ( __arr + _Nm ) ; } 






template < typename _Tp , size_t _Nm > 
inline reverse_iterator < _Tp *> 
rend ( _Tp ( & __arr ) [ _Nm ] ) 
{ __CvT__record_line____(__CvT_miT,76,189);return reverse_iterator < _Tp *> ( __arr ) ; } 






template < typename _Tp > 
inline reverse_iterator < const _Tp *> 
rbegin ( initializer_list < _Tp > __il ) 
{ __CvT__record_line____(__CvT_miT,76,199);return reverse_iterator < const _Tp *> ( __il . end ( ) ) ; } 






template < typename _Tp > 
inline reverse_iterator < const _Tp *> 
rend ( initializer_list < _Tp > __il ) 
{ __CvT__record_line____(__CvT_miT,76,209);return reverse_iterator < const _Tp *> ( __il . begin ( ) ) ; } 






template < typename _Container > 
inline auto 
crbegin ( const _Container & __cont ) -> decltype ( std :: rbegin ( __cont ) ) 
{ __CvT__record_line____(__CvT_miT,76,219);return std :: rbegin ( __cont ) ; } 






template < typename _Container > 
inline auto 
crend ( const _Container & __cont ) -> decltype ( std :: rend ( __cont ) ) 
{ __CvT__record_line____(__CvT_miT,76,229);return std :: rend ( __cont ) ; } 
# 319 "/usr/include/c++/7.1.1/bits/range_access.h" 3 

} 
# 52 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/basic_string.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 

# 1 "/usr/include/c++/7.1.1/ext/atomicity.h" 1 3 
# 32 "/usr/include/c++/7.1.1/ext/atomicity.h" 3 

# 33 "/usr/include/c++/7.1.1/ext/atomicity.h" 3 


# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr.h" 1 3 
# 30 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr.h" 3 
# pragma GCC visibility push ( default ) 
 # 148 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr.h" 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 1 3 
# 35 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
# 1 "/usr/include/pthread.h" 1 3 4 
# 23 "/usr/include/pthread.h" 3 4 
# 1 "/usr/include/sched.h" 1 3 4 
# 29 "/usr/include/sched.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 30 "/usr/include/sched.h" 2 3 4 

# 1 "/usr/include/bits/types/time_t.h" 1 3 4 







typedef __time_t time_t ; 



# 32 "/usr/include/sched.h" 2 3 4 
# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4 







struct timespec 
{ 
__time_t tv_sec ; 
__syscall_slong_t tv_nsec ; 
} ; 
# 33 "/usr/include/sched.h" 2 3 4 





typedef __pid_t pid_t ; 





# 1 "/usr/include/bits/sched.h" 1 3 4 
# 73 "/usr/include/bits/sched.h" 3 4 
struct sched_param 
{ 
int __sched_priority ; 
} ; 

extern "C" { 



extern int clone ( int ( * __fn ) ( void * __arg ) , void * __child_stack , 
int __flags , void * __arg , ... ) throw ( ) ; 


extern int unshare ( int __flags ) throw ( ) ; 


extern int sched_getcpu ( void ) throw ( ) ; 


extern int setns ( int __fd , int __nstype ) throw ( ) ; 



} 







struct __sched_param 
{ 
int __sched_priority ; 
} ; 
# 119 "/usr/include/bits/sched.h" 3 4 
typedef unsigned long int __cpu_mask ; 






typedef struct 
{ 
__cpu_mask __bits [ 1024 / ( 8 * sizeof ( __cpu_mask ) ) ] ; 
} cpu_set_t ; 
# 202 "/usr/include/bits/sched.h" 3 4 
extern "C" { 

extern int __sched_cpucount ( size_t __setsize , const cpu_set_t * __setp ) 
throw ( ) ; 
extern cpu_set_t * __sched_cpualloc ( size_t __count ) throw ( ) ; 
extern void __sched_cpufree ( cpu_set_t * __set ) throw ( ) ; 

} 
# 45 "/usr/include/sched.h" 2 3 4 




extern "C" { 


extern int sched_setparam ( __pid_t __pid , const struct sched_param * __param ) 
throw ( ) ; 


extern int sched_getparam ( __pid_t __pid , struct sched_param * __param ) throw ( ) ; 


extern int sched_setscheduler ( __pid_t __pid , int __policy , 
const struct sched_param * __param ) throw ( ) ; 


extern int sched_getscheduler ( __pid_t __pid ) throw ( ) ; 


extern int sched_yield ( void ) throw ( ) ; 


extern int sched_get_priority_max ( int __algorithm ) throw ( ) ; 


extern int sched_get_priority_min ( int __algorithm ) throw ( ) ; 


extern int sched_rr_get_interval ( __pid_t __pid , struct timespec * __t ) throw ( ) ; 
# 119 "/usr/include/sched.h" 3 4 
extern int sched_setaffinity ( __pid_t __pid , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) throw ( ) ; 


extern int sched_getaffinity ( __pid_t __pid , size_t __cpusetsize , 
cpu_set_t * __cpuset ) throw ( ) ; 


} 
# 24 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/time.h" 1 3 4 
# 29 "/usr/include/time.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 30 "/usr/include/time.h" 2 3 4 



# 1 "/usr/include/bits/time.h" 1 3 4 
# 73 "/usr/include/bits/time.h" 3 4 
# 1 "/usr/include/bits/timex.h" 1 3 4 
# 22 "/usr/include/bits/timex.h" 3 4 
# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4 







struct timeval 
{ 
__time_t tv_sec ; 
__suseconds_t tv_usec ; 
} ; 
# 23 "/usr/include/bits/timex.h" 2 3 4 



struct timex 
{ 
unsigned int modes ; 
__syscall_slong_t offset ; 
__syscall_slong_t freq ; 
__syscall_slong_t maxerror ; 
__syscall_slong_t esterror ; 
int status ; 
__syscall_slong_t constant ; 
__syscall_slong_t precision ; 
__syscall_slong_t tolerance ; 
struct timeval time ; 
__syscall_slong_t tick ; 
__syscall_slong_t ppsfreq ; 
__syscall_slong_t jitter ; 
int shift ; 
__syscall_slong_t stabil ; 
__syscall_slong_t jitcnt ; 
__syscall_slong_t calcnt ; 
__syscall_slong_t errcnt ; 
__syscall_slong_t stbcnt ; 

int tai ; 


int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; 
} ; 
# 74 "/usr/include/bits/time.h" 2 3 4 

extern "C" { 


extern int clock_adjtime ( __clockid_t __clock_id , struct timex * __utx ) throw ( ) ; 

} 
# 34 "/usr/include/time.h" 2 3 4 



# 1 "/usr/include/bits/types/clock_t.h" 1 3 4 







typedef __clock_t clock_t ; 




# 38 "/usr/include/time.h" 2 3 4 

# 1 "/usr/include/bits/types/struct_tm.h" 1 3 4 







struct tm 
{ 
int tm_sec ; 
int tm_min ; 
int tm_hour ; 
int tm_mday ; 
int tm_mon ; 
int tm_year ; 
int tm_wday ; 
int tm_yday ; 
int tm_isdst ; 


long int tm_gmtoff ; 
const char * tm_zone ; 




} ; 



# 40 "/usr/include/time.h" 2 3 4 






# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4 






typedef __clockid_t clockid_t ; 
# 47 "/usr/include/time.h" 2 3 4 
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4 






typedef __timer_t timer_t ; 
# 48 "/usr/include/time.h" 2 3 4 
# 1 "/usr/include/bits/types/struct_itimerspec.h" 1 3 4 







struct itimerspec 
{ 
struct timespec it_interval ; 
struct timespec it_value ; 
} ; 
# 49 "/usr/include/time.h" 2 3 4 
struct sigevent ; 
# 68 "/usr/include/time.h" 3 4 
extern "C" { 




extern clock_t clock ( void ) throw ( ) ; 


extern time_t time ( time_t * __timer ) throw ( ) ; 


extern double difftime ( time_t __time1 , time_t __time0 ) 
throw ( ) ; 


extern time_t mktime ( struct tm * __tp ) throw ( ) ; 





extern size_t strftime ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 





extern char * strptime ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp ) 
throw ( ) ; 






extern size_t strftime_l ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 



extern char * strptime_l ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp , 
__locale_t __loc ) throw ( ) ; 






extern struct tm * gmtime ( const time_t * __timer ) throw ( ) ; 



extern struct tm * localtime ( const time_t * __timer ) throw ( ) ; 





extern struct tm * gmtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 



extern struct tm * localtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 





extern char * asctime ( const struct tm * __tp ) throw ( ) ; 


extern char * ctime ( const time_t * __timer ) throw ( ) ; 







extern char * asctime_r ( const struct tm * __restrict __tp , 
char * __restrict __buf ) throw ( ) ; 


extern char * ctime_r ( const time_t * __restrict __timer , 
char * __restrict __buf ) throw ( ) ; 




extern char * __tzname [ 2 ] ; 
extern int __daylight ; 
extern long int __timezone ; 




extern char * tzname [ 2 ] ; 



extern void tzset ( void ) throw ( ) ; 



extern int daylight ; 
extern long int timezone ; 





extern int stime ( const time_t * __when ) throw ( ) ; 
# 202 "/usr/include/time.h" 3 4 
extern time_t timegm ( struct tm * __tp ) throw ( ) ; 


extern time_t timelocal ( struct tm * __tp ) throw ( ) ; 


extern int dysize ( int __year ) throw ( ) ; 
# 217 "/usr/include/time.h" 3 4 
extern int nanosleep ( const struct timespec * __requested_time , 
struct timespec * __remaining ) ; 



extern int clock_getres ( clockid_t __clock_id , struct timespec * __res ) throw ( ) ; 


extern int clock_gettime ( clockid_t __clock_id , struct timespec * __tp ) throw ( ) ; 


extern int clock_settime ( clockid_t __clock_id , const struct timespec * __tp ) 
throw ( ) ; 






extern int clock_nanosleep ( clockid_t __clock_id , int __flags , 
const struct timespec * __req , 
struct timespec * __rem ) ; 


extern int clock_getcpuclockid ( pid_t __pid , clockid_t * __clock_id ) throw ( ) ; 




extern int timer_create ( clockid_t __clock_id , 
struct sigevent * __restrict __evp , 
timer_t * __restrict __timerid ) throw ( ) ; 


extern int timer_delete ( timer_t __timerid ) throw ( ) ; 


extern int timer_settime ( timer_t __timerid , int __flags , 
const struct itimerspec * __restrict __value , 
struct itimerspec * __restrict __ovalue ) throw ( ) ; 


extern int timer_gettime ( timer_t __timerid , struct itimerspec * __value ) 
throw ( ) ; 


extern int timer_getoverrun ( timer_t __timerid ) throw ( ) ; 





extern int timespec_get ( struct timespec * __ts , int __base ) 
throw ( ) ; 
# 286 "/usr/include/time.h" 3 4 
extern int getdate_err ; 
# 295 "/usr/include/time.h" 3 4 
extern struct tm * getdate ( const char * __string ) ; 
# 309 "/usr/include/time.h" 3 4 
extern int getdate_r ( const char * __restrict __string , 
struct tm * __restrict __resbufp ) ; 


} 
# 25 "/usr/include/pthread.h" 2 3 4 

# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4 
# 21 "/usr/include/bits/pthreadtypes.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4 
# 60 "/usr/include/bits/pthreadtypes.h" 3 4 
typedef unsigned long int pthread_t ; 


union pthread_attr_t 
{ 
char __size [ 56 ] ; 
long int __align ; 
} ; 

typedef union pthread_attr_t pthread_attr_t ; 





typedef struct __pthread_internal_list 
{ 
struct __pthread_internal_list * __prev ; 
struct __pthread_internal_list * __next ; 
} __pthread_list_t ; 
# 90 "/usr/include/bits/pthreadtypes.h" 3 4 
typedef union 
{ 
struct __pthread_mutex_s 
{ 
int __lock ; 
unsigned int __count ; 
int __owner ; 

unsigned int __nusers ; 



int __kind ; 

short __spins ; 
short __elision ; 
__pthread_list_t __list ; 
# 125 "/usr/include/bits/pthreadtypes.h" 3 4 
} __data ; 
char __size [ 40 ] ; 
long int __align ; 
} pthread_mutex_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_mutexattr_t ; 




typedef union 
{ 
struct 
{ 
union 
{ 
unsigned long long int __wseq ; 
struct { 
unsigned int __low ; 
unsigned int __high ; 
} __wseq32 ; 
} ; 
union 
{ 
unsigned long long int __g1_start ; 
struct { 
unsigned int __low ; 
unsigned int __high ; 
} __g1_start32 ; 
} ; 
unsigned int __g_refs [ 2 ] ; 
unsigned int __g_size [ 2 ] ; 
unsigned int __g1_orig_size ; 
unsigned int __wrefs ; 
unsigned int __g_signals [ 2 ] ; 
} __data ; 
char __size [ 48 ] ; 
long long int __align ; 
} pthread_cond_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_condattr_t ; 



typedef unsigned int pthread_key_t ; 



typedef int pthread_once_t ; 





typedef union 
{ 

struct 
{ 
unsigned int __readers ; 
unsigned int __writers ; 
unsigned int __wrphase_futex ; 
unsigned int __writers_futex ; 
unsigned int __pad3 ; 
unsigned int __pad4 ; 
int __cur_writer ; 
int __shared ; 
signed char __rwelision ; 




unsigned char __pad1 [ 7 ] ; 


unsigned long int __pad2 ; 


unsigned int __flags ; 

} __data ; 
# 233 "/usr/include/bits/pthreadtypes.h" 3 4 
char __size [ 56 ] ; 
long int __align ; 
} pthread_rwlock_t ; 

typedef union 
{ 
char __size [ 8 ] ; 
long int __align ; 
} pthread_rwlockattr_t ; 





typedef volatile int pthread_spinlock_t ; 




typedef union 
{ 
char __size [ 32 ] ; 
long int __align ; 
} pthread_barrier_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_barrierattr_t ; 
# 27 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/bits/setjmp.h" 1 3 4 
# 26 "/usr/include/bits/setjmp.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 27 "/usr/include/bits/setjmp.h" 2 3 4 




typedef long int __jmp_buf [ 8 ] ; 
# 28 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/pthread.h" 2 3 4 




enum 
{ 
PTHREAD_CREATE_JOINABLE , 

PTHREAD_CREATE_DETACHED 

} ; 



enum 
{ 
PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_ADAPTIVE_NP 

, 
PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL 



, PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP 

} ; 




enum 
{ 
PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_ROBUST , 
PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST 
} ; 





enum 
{ 
PTHREAD_PRIO_NONE , 
PTHREAD_PRIO_INHERIT , 
PTHREAD_PRIO_PROTECT 
} ; 
# 115 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_RWLOCK_PREFER_READER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP , 
PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP 
} ; 
# 156 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_INHERIT_SCHED , 

PTHREAD_EXPLICIT_SCHED 

} ; 



enum 
{ 
PTHREAD_SCOPE_SYSTEM , 

PTHREAD_SCOPE_PROCESS 

} ; 



enum 
{ 
PTHREAD_PROCESS_PRIVATE , 

PTHREAD_PROCESS_SHARED 

} ; 
# 191 "/usr/include/pthread.h" 3 4 
struct _pthread_cleanup_buffer 
{ 
void ( * __routine ) ( void * ) ; 
void * __arg ; 
int __canceltype ; 
struct _pthread_cleanup_buffer * __prev ; 
} ; 


enum 
{ 
PTHREAD_CANCEL_ENABLE , 

PTHREAD_CANCEL_DISABLE 

} ; 
enum 
{ 
PTHREAD_CANCEL_DEFERRED , 

PTHREAD_CANCEL_ASYNCHRONOUS 

} ; 
# 229 "/usr/include/pthread.h" 3 4 
extern "C" { 




extern int pthread_create ( pthread_t * __restrict __newthread , 
const pthread_attr_t * __restrict __attr , 
void * ( * __start_routine ) ( void * ) , 
void * __restrict __arg ) throw ( ) ; 





extern void pthread_exit ( void * __retval ) ; 







extern int pthread_join ( pthread_t __th , void ** __thread_return ) ; 




extern int pthread_tryjoin_np ( pthread_t __th , void ** __thread_return ) throw ( ) ; 







extern int pthread_timedjoin_np ( pthread_t __th , void ** __thread_return , 
const struct timespec * __abstime ) ; 






extern int pthread_detach ( pthread_t __th ) throw ( ) ; 



extern pthread_t pthread_self ( void ) throw ( ) ; 


extern int pthread_equal ( pthread_t __thread1 , pthread_t __thread2 ) 
throw ( ) ; 







extern int pthread_attr_init ( pthread_attr_t * __attr ) throw ( ) ; 


extern int pthread_attr_destroy ( pthread_attr_t * __attr ) 
throw ( ) ; 


extern int pthread_attr_getdetachstate ( const pthread_attr_t * __attr , 
int * __detachstate ) 
throw ( ) ; 


extern int pthread_attr_setdetachstate ( pthread_attr_t * __attr , 
int __detachstate ) 
throw ( ) ; 



extern int pthread_attr_getguardsize ( const pthread_attr_t * __attr , 
size_t * __guardsize ) 
throw ( ) ; 


extern int pthread_attr_setguardsize ( pthread_attr_t * __attr , 
size_t __guardsize ) 
throw ( ) ; 



extern int pthread_attr_getschedparam ( const pthread_attr_t * __restrict __attr , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_attr_setschedparam ( pthread_attr_t * __restrict __attr , 
const struct sched_param * __restrict 
__param ) throw ( ) ; 


extern int pthread_attr_getschedpolicy ( const pthread_attr_t * __restrict 
__attr , int * __restrict __policy ) 
throw ( ) ; 


extern int pthread_attr_setschedpolicy ( pthread_attr_t * __attr , int __policy ) 
throw ( ) ; 


extern int pthread_attr_getinheritsched ( const pthread_attr_t * __restrict 
__attr , int * __restrict __inherit ) 
throw ( ) ; 


extern int pthread_attr_setinheritsched ( pthread_attr_t * __attr , 
int __inherit ) 
throw ( ) ; 



extern int pthread_attr_getscope ( const pthread_attr_t * __restrict __attr , 
int * __restrict __scope ) 
throw ( ) ; 


extern int pthread_attr_setscope ( pthread_attr_t * __attr , int __scope ) 
throw ( ) ; 


extern int pthread_attr_getstackaddr ( const pthread_attr_t * __restrict 
__attr , void ** __restrict __stackaddr ) 
throw ( ) ; 





extern int pthread_attr_setstackaddr ( pthread_attr_t * __attr , 
void * __stackaddr ) 
throw ( ) ; 


extern int pthread_attr_getstacksize ( const pthread_attr_t * __restrict 
__attr , size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstacksize ( pthread_attr_t * __attr , 
size_t __stacksize ) 
throw ( ) ; 



extern int pthread_attr_getstack ( const pthread_attr_t * __restrict __attr , 
void ** __restrict __stackaddr , 
size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstack ( pthread_attr_t * __attr , void * __stackaddr , 
size_t __stacksize ) throw ( ) ; 





extern int pthread_attr_setaffinity_np ( pthread_attr_t * __attr , 
size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 



extern int pthread_attr_getaffinity_np ( const pthread_attr_t * __attr , 
size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getattr_default_np ( pthread_attr_t * __attr ) 
throw ( ) ; 



extern int pthread_setattr_default_np ( const pthread_attr_t * __attr ) 
throw ( ) ; 




extern int pthread_getattr_np ( pthread_t __th , pthread_attr_t * __attr ) 
throw ( ) ; 







extern int pthread_setschedparam ( pthread_t __target_thread , int __policy , 
const struct sched_param * __param ) 
throw ( ) ; 


extern int pthread_getschedparam ( pthread_t __target_thread , 
int * __restrict __policy , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_setschedprio ( pthread_t __target_thread , int __prio ) 
throw ( ) ; 




extern int pthread_getname_np ( pthread_t __target_thread , char * __buf , 
size_t __buflen ) 
throw ( ) ; 


extern int pthread_setname_np ( pthread_t __target_thread , const char * __name ) 
throw ( ) ; 





extern int pthread_getconcurrency ( void ) throw ( ) ; 


extern int pthread_setconcurrency ( int __level ) throw ( ) ; 







extern int pthread_yield ( void ) throw ( ) ; 




extern int pthread_setaffinity_np ( pthread_t __th , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getaffinity_np ( pthread_t __th , size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 
# 495 "/usr/include/pthread.h" 3 4 
extern int pthread_once ( pthread_once_t * __once_control , 
void ( * __init_routine ) ( void ) ) ; 
# 507 "/usr/include/pthread.h" 3 4 
extern int pthread_setcancelstate ( int __state , int * __oldstate ) ; 



extern int pthread_setcanceltype ( int __type , int * __oldtype ) ; 


extern int pthread_cancel ( pthread_t __th ) ; 




extern void pthread_testcancel ( void ) ; 




typedef struct 
{ 
struct 
{ 
__jmp_buf __cancel_jmp_buf ; 
int __mask_was_saved ; 
} __cancel_jmp_buf [ 1 ] ; 
void * __pad [ 4 ] ; 
} __pthread_unwind_buf_t ; 
# 541 "/usr/include/pthread.h" 3 4 
struct __pthread_cleanup_frame 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 
} ; 




class __pthread_cleanup_class 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 

public : 
__pthread_cleanup_class ( void ( * __fct ) ( void * ) , void * __arg ) 
: __cancel_routine ( __fct ) , __cancel_arg ( __arg ) , __do_it ( 1 ) { __CvT__record_line____(__CvT_miT,82,561);} 
~ __pthread_cleanup_class ( ) { __CvT__record_line____(__CvT_miT,82,562);if ( __do_it ) {__cancel_routine ( __cancel_arg ) ; }} 
void __setdoit ( int __newval ) { __CvT__record_line____(__CvT_miT,82,563);__do_it = __newval ; } 
void __defer ( ) { __CvT__record_line____(__CvT_miT,82,564);pthread_setcanceltype ( PTHREAD_CANCEL_DEFERRED , 
& __cancel_type ) ; } 
void __restore ( ) const { __CvT__record_line____(__CvT_miT,82,566);pthread_setcanceltype ( __cancel_type , 0 ) ; } 
} ; 
# 743 "/usr/include/pthread.h" 3 4 
struct __jmp_buf_tag ; 
extern int __sigsetjmp ( struct __jmp_buf_tag * __env , int __savemask ) throw ( ) ; 





extern int pthread_mutex_init ( pthread_mutex_t * __mutex , 
const pthread_mutexattr_t * __mutexattr ) 
throw ( ) ; 


extern int pthread_mutex_destroy ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_trylock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_lock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_timedlock ( pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_mutex_unlock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_getprioceiling ( const pthread_mutex_t * 
__restrict __mutex , 
int * __restrict __prioceiling ) 
throw ( ) ; 



extern int pthread_mutex_setprioceiling ( pthread_mutex_t * __restrict __mutex , 
int __prioceiling , 
int * __restrict __old_ceiling ) 
throw ( ) ; 




extern int pthread_mutex_consistent ( pthread_mutex_t * __mutex ) 
throw ( ) ; 

extern int pthread_mutex_consistent_np ( pthread_mutex_t * __mutex ) 
throw ( ) ; 
# 807 "/usr/include/pthread.h" 3 4 
extern int pthread_mutexattr_init ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_destroy ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_getpshared ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_mutexattr_setpshared ( pthread_mutexattr_t * __attr , 
int __pshared ) 
throw ( ) ; 



extern int pthread_mutexattr_gettype ( const pthread_mutexattr_t * __restrict 
__attr , int * __restrict __kind ) 
throw ( ) ; 




extern int pthread_mutexattr_settype ( pthread_mutexattr_t * __attr , int __kind ) 
throw ( ) ; 



extern int pthread_mutexattr_getprotocol ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __protocol ) 
throw ( ) ; 



extern int pthread_mutexattr_setprotocol ( pthread_mutexattr_t * __attr , 
int __protocol ) 
throw ( ) ; 


extern int pthread_mutexattr_getprioceiling ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __prioceiling ) 
throw ( ) ; 


extern int pthread_mutexattr_setprioceiling ( pthread_mutexattr_t * __attr , 
int __prioceiling ) 
throw ( ) ; 



extern int pthread_mutexattr_getrobust ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_getrobust_np ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 



extern int pthread_mutexattr_setrobust ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_setrobust_np ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 
# 889 "/usr/include/pthread.h" 3 4 
extern int pthread_rwlock_init ( pthread_rwlock_t * __restrict __rwlock , 
const pthread_rwlockattr_t * __restrict 
__attr ) throw ( ) ; 


extern int pthread_rwlock_destroy ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_rdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_tryrdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedrdlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_wrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_trywrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedwrlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_unlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 





extern int pthread_rwlockattr_init ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_destroy ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_getpshared ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_setpshared ( pthread_rwlockattr_t * __attr , 
int __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_getkind_np ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pref ) 
throw ( ) ; 


extern int pthread_rwlockattr_setkind_np ( pthread_rwlockattr_t * __attr , 
int __pref ) throw ( ) ; 







extern int pthread_cond_init ( pthread_cond_t * __restrict __cond , 
const pthread_condattr_t * __restrict __cond_attr ) 
throw ( ) ; 


extern int pthread_cond_destroy ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_signal ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_broadcast ( pthread_cond_t * __cond ) 
throw ( ) ; 






extern int pthread_cond_wait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex ) 
; 
# 1001 "/usr/include/pthread.h" 3 4 
extern int pthread_cond_timedwait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict __abstime ) 
; 




extern int pthread_condattr_init ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_destroy ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_getpshared ( const pthread_condattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_condattr_setpshared ( pthread_condattr_t * __attr , 
int __pshared ) throw ( ) ; 



extern int pthread_condattr_getclock ( const pthread_condattr_t * 
__restrict __attr , 
__clockid_t * __restrict __clock_id ) 
throw ( ) ; 


extern int pthread_condattr_setclock ( pthread_condattr_t * __attr , 
__clockid_t __clock_id ) 
throw ( ) ; 
# 1045 "/usr/include/pthread.h" 3 4 
extern int pthread_spin_init ( pthread_spinlock_t * __lock , int __pshared ) 
throw ( ) ; 


extern int pthread_spin_destroy ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_lock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_trylock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_unlock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 






extern int pthread_barrier_init ( pthread_barrier_t * __restrict __barrier , 
const pthread_barrierattr_t * __restrict 
__attr , unsigned int __count ) 
throw ( ) ; 


extern int pthread_barrier_destroy ( pthread_barrier_t * __barrier ) 
throw ( ) ; 


extern int pthread_barrier_wait ( pthread_barrier_t * __barrier ) 
throw ( ) ; 



extern int pthread_barrierattr_init ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_destroy ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_getpshared ( const pthread_barrierattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_barrierattr_setpshared ( pthread_barrierattr_t * __attr , 
int __pshared ) 
throw ( ) ; 
# 1112 "/usr/include/pthread.h" 3 4 
extern int pthread_key_create ( pthread_key_t * __key , 
void ( * __destr_function ) ( void * ) ) 
throw ( ) ; 


extern int pthread_key_delete ( pthread_key_t __key ) throw ( ) ; 


extern void * pthread_getspecific ( pthread_key_t __key ) throw ( ) ; 


extern int pthread_setspecific ( pthread_key_t __key , 
const void * __pointer ) throw ( ) ; 




extern int pthread_getcpuclockid ( pthread_t __thread_id , 
__clockid_t * __clock_id ) 
throw ( ) ; 
# 1146 "/usr/include/pthread.h" 3 4 
extern int pthread_atfork ( void ( * __prepare ) ( void ) , 
void ( * __parent ) ( void ) , 
void ( * __child ) ( void ) ) throw ( ) ; 
# 1160 "/usr/include/pthread.h" 3 4 
} 
# 36 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 2 3 
# 47 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
typedef pthread_t __gthread_t ; 
typedef pthread_key_t __gthread_key_t ; 
typedef pthread_once_t __gthread_once_t ; 
typedef pthread_mutex_t __gthread_mutex_t ; 
typedef pthread_mutex_t __gthread_recursive_mutex_t ; 
typedef pthread_cond_t __gthread_cond_t ; 
typedef struct timespec __gthread_time_t ; 
# 101 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static __typeof ( pthread_once ) __gthrw_pthread_once ; 
static __typeof ( pthread_getspecific ) __gthrw_pthread_getspecific ; 
static __typeof ( pthread_setspecific ) __gthrw_pthread_setspecific ; 

static __typeof ( pthread_create ) __gthrw_pthread_create ; 
static __typeof ( pthread_join ) __gthrw_pthread_join ; 
static __typeof ( pthread_equal ) __gthrw_pthread_equal ; 
static __typeof ( pthread_self ) __gthrw_pthread_self ; 
static __typeof ( pthread_detach ) __gthrw_pthread_detach ; 

static __typeof ( pthread_cancel ) __gthrw_pthread_cancel ; 

static __typeof ( sched_yield ) __gthrw_sched_yield ; 

static __typeof ( pthread_mutex_lock ) __gthrw_pthread_mutex_lock ; 
static __typeof ( pthread_mutex_trylock ) __gthrw_pthread_mutex_trylock ; 

static __typeof ( pthread_mutex_timedlock ) __gthrw_pthread_mutex_timedlock ; 

static __typeof ( pthread_mutex_unlock ) __gthrw_pthread_mutex_unlock ; 
static __typeof ( pthread_mutex_init ) __gthrw_pthread_mutex_init ; 
static __typeof ( pthread_mutex_destroy ) __gthrw_pthread_mutex_destroy ; 

static __typeof ( pthread_cond_init ) __gthrw_pthread_cond_init ; 
static __typeof ( pthread_cond_broadcast ) __gthrw_pthread_cond_broadcast ; 
static __typeof ( pthread_cond_signal ) __gthrw_pthread_cond_signal ; 
static __typeof ( pthread_cond_wait ) __gthrw_pthread_cond_wait ; 
static __typeof ( pthread_cond_timedwait ) __gthrw_pthread_cond_timedwait ; 
static __typeof ( pthread_cond_destroy ) __gthrw_pthread_cond_destroy ; 

static __typeof ( pthread_key_create ) __gthrw_pthread_key_create ; 
static __typeof ( pthread_key_delete ) __gthrw_pthread_key_delete ; 
static __typeof ( pthread_mutexattr_init ) __gthrw_pthread_mutexattr_init ; 
static __typeof ( pthread_mutexattr_settype ) __gthrw_pthread_mutexattr_settype ; 
static __typeof ( pthread_mutexattr_destroy ) __gthrw_pthread_mutexattr_destroy ; 
# 236 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static __typeof ( pthread_key_create ) __gthrw___pthread_key_create ; 
# 246 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static inline int 
__gthread_active_p ( void ) 
{ __CvT__record_line____(__CvT_miT,81,248);
__CvT__record_line____(__CvT_miT,81,249);static void * const __gthread_active_ptr 
= ( void * ) & __gthrw___pthread_key_create ; 
__CvT__record_line____(__CvT_miT,81,251);return __gthread_active_ptr != 0 ; 
} 
# 658 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static inline int 
__gthread_create ( __gthread_t * __threadid , void * ( * __func ) ( void * ) , 
void * __args ) 
{ __CvT__record_line____(__CvT_miT,81,661);
__CvT__record_line____(__CvT_miT,81,662);return __gthrw_pthread_create ( __threadid , __null , __func , __args ) ; 
} 

static inline int 
__gthread_join ( __gthread_t __threadid , void ** __value_ptr ) 
{ __CvT__record_line____(__CvT_miT,81,667);
__CvT__record_line____(__CvT_miT,81,668);return __gthrw_pthread_join ( __threadid , __value_ptr ) ; 
} 

static inline int 
__gthread_detach ( __gthread_t __threadid ) 
{ __CvT__record_line____(__CvT_miT,81,673);
__CvT__record_line____(__CvT_miT,81,674);return __gthrw_pthread_detach ( __threadid ) ; 
} 

static inline int 
__gthread_equal ( __gthread_t __t1 , __gthread_t __t2 ) 
{ __CvT__record_line____(__CvT_miT,81,679);
__CvT__record_line____(__CvT_miT,81,680);return __gthrw_pthread_equal ( __t1 , __t2 ) ; 
} 

static inline __gthread_t 
__gthread_self ( void ) 
{ __CvT__record_line____(__CvT_miT,81,685);
__CvT__record_line____(__CvT_miT,81,686);return __gthrw_pthread_self ( ) ; 
} 

static inline int 
__gthread_yield ( void ) 
{ __CvT__record_line____(__CvT_miT,81,691);
__CvT__record_line____(__CvT_miT,81,692);return __gthrw_sched_yield ( ) ; 
} 

static inline int 
__gthread_once ( __gthread_once_t * __once , void ( * __func ) ( void ) ) 
{ __CvT__record_line____(__CvT_miT,81,697);
__CvT__record_line____(__CvT_miT,81,698);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,699);return __gthrw_pthread_once ( __once , __func ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,701);return - 1 ; 
}} 

static inline int 
__gthread_key_create ( __gthread_key_t * __key , void ( * __dtor ) ( void * ) ) 
{ __CvT__record_line____(__CvT_miT,81,706);
__CvT__record_line____(__CvT_miT,81,707);return __gthrw_pthread_key_create ( __key , __dtor ) ; 
} 

static inline int 
__gthread_key_delete ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,81,712);
__CvT__record_line____(__CvT_miT,81,713);return __gthrw_pthread_key_delete ( __key ) ; 
} 

static inline void * 
__gthread_getspecific ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,81,718);
__CvT__record_line____(__CvT_miT,81,719);return __gthrw_pthread_getspecific ( __key ) ; 
} 

static inline int 
__gthread_setspecific ( __gthread_key_t __key , const void * __ptr ) 
{ __CvT__record_line____(__CvT_miT,81,724);
__CvT__record_line____(__CvT_miT,81,725);return __gthrw_pthread_setspecific ( __key , __ptr ) ; 
} 

static inline void 
__gthread_mutex_init_function ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,730);
__CvT__record_line____(__CvT_miT,81,731);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,732);__gthrw_pthread_mutex_init ( __mutex , __null ) ; 
}} 

static inline int 
__gthread_mutex_destroy ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,737);
__CvT__record_line____(__CvT_miT,81,738);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,739);return __gthrw_pthread_mutex_destroy ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,741);return 0 ; 
}} 

static inline int 
__gthread_mutex_lock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,746);
__CvT__record_line____(__CvT_miT,81,747);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,748);return __gthrw_pthread_mutex_lock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,750);return 0 ; 
}} 

static inline int 
__gthread_mutex_trylock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,755);
__CvT__record_line____(__CvT_miT,81,756);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,757);return __gthrw_pthread_mutex_trylock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,759);return 0 ; 
}} 


static inline int 
__gthread_mutex_timedlock ( __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,81,766);
__CvT__record_line____(__CvT_miT,81,767);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,768);return __gthrw_pthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,770);return 0 ; 
}} 


static inline int 
__gthread_mutex_unlock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,776);
__CvT__record_line____(__CvT_miT,81,777);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,81,778);return __gthrw_pthread_mutex_unlock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,81,780);return 0 ; 
}} 
# 807 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static inline int 
__gthread_recursive_mutex_lock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,809);
__CvT__record_line____(__CvT_miT,81,810);return __gthread_mutex_lock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_trylock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,815);
__CvT__record_line____(__CvT_miT,81,816);return __gthread_mutex_trylock ( __mutex ) ; 
} 


static inline int 
__gthread_recursive_mutex_timedlock ( __gthread_recursive_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,81,823);
__CvT__record_line____(__CvT_miT,81,824);return __gthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
} 


static inline int 
__gthread_recursive_mutex_unlock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,830);
__CvT__record_line____(__CvT_miT,81,831);return __gthread_mutex_unlock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_destroy ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,836);
__CvT__record_line____(__CvT_miT,81,837);return __gthread_mutex_destroy ( __mutex ) ; 
} 
# 849 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h" 3 
static inline int 
__gthread_cond_broadcast ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,81,851);
__CvT__record_line____(__CvT_miT,81,852);return __gthrw_pthread_cond_broadcast ( __cond ) ; 
} 

static inline int 
__gthread_cond_signal ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,81,857);
__CvT__record_line____(__CvT_miT,81,858);return __gthrw_pthread_cond_signal ( __cond ) ; 
} 

static inline int 
__gthread_cond_wait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,863);
__CvT__record_line____(__CvT_miT,81,864);return __gthrw_pthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_timedwait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,81,870);
__CvT__record_line____(__CvT_miT,81,871);return __gthrw_pthread_cond_timedwait ( __cond , __mutex , __abs_timeout ) ; 
} 

static inline int 
__gthread_cond_wait_recursive ( __gthread_cond_t * __cond , 
__gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,81,877);
__CvT__record_line____(__CvT_miT,81,878);return __gthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_destroy ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,81,883);
__CvT__record_line____(__CvT_miT,81,884);return __gthrw_pthread_cond_destroy ( __cond ) ; 
} 
# 149 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr.h" 2 3 


# pragma GCC visibility pop 
 # 36 "/usr/include/c++/7.1.1/ext/atomicity.h" 2 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/atomic_word.h" 1 3 
# 32 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/atomic_word.h" 3 
typedef int _Atomic_word ; 
# 37 "/usr/include/c++/7.1.1/ext/atomicity.h" 2 3 

namespace __gnu_cxx 
{ 







static inline _Atomic_word 
__exchange_and_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,49);return __atomic_fetch_add ( __mem , __val , 4 ) ; } 

static inline void 
__atomic_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,53);__atomic_fetch_add ( __mem , __val , 4 ) ; } 
# 64 "/usr/include/c++/7.1.1/ext/atomicity.h" 3 
static inline _Atomic_word 
__exchange_and_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,66);
__CvT__record_line____(__CvT_miT,79,67);_Atomic_word __result = * __mem ; 
__CvT__record_line____(__CvT_miT,79,68);* __mem += __val ; 
__CvT__record_line____(__CvT_miT,79,69);return __result ; 
} 

static inline void 
__atomic_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,74);* __mem += __val ; } 

static inline _Atomic_word 

__exchange_and_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,79);

__CvT__record_line____(__CvT_miT,79,81);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,79,82);return __exchange_and_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,79,84);return __exchange_and_add_single ( __mem , __val ) ; 



}} 

static inline void 

__atomic_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,79,93);

__CvT__record_line____(__CvT_miT,79,95);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,79,96);__atomic_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,79,98);__atomic_add_single ( __mem , __val ) ; 



}} 


} 
# 40 "/usr/include/c++/7.1.1/bits/basic_string.h" 2 3 
# 1 "/usr/include/c++/7.1.1/ext/alloc_traits.h" 1 3 
# 32 "/usr/include/c++/7.1.1/ext/alloc_traits.h" 3 

# 33 "/usr/include/c++/7.1.1/ext/alloc_traits.h" 3 



# 1 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 1 3 
# 41 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
namespace std 
{ 


struct __allocator_traits_base 
{ 
template < typename _Tp , typename _Up , typename = void > 
struct __rebind : __replace_first_arg < _Tp , _Up > { } ; 

template < typename _Tp , typename _Up > 
struct __rebind < _Tp , _Up , 
__void_t < typename _Tp :: template rebind < _Up >:: other >> 
{ using type = typename _Tp :: template rebind < _Up >:: other ; } ; 

protected : 
template < typename _Tp > 
using __pointer = typename _Tp :: pointer ; 
template < typename _Tp > 
using __c_pointer = typename _Tp :: const_pointer ; 
template < typename _Tp > 
using __v_pointer = typename _Tp :: void_pointer ; 
template < typename _Tp > 
using __cv_pointer = typename _Tp :: const_void_pointer ; 
template < typename _Tp > 
using __pocca = typename _Tp :: propagate_on_container_copy_assignment ; 
template < typename _Tp > 
using __pocma = typename _Tp :: propagate_on_container_move_assignment ; 
template < typename _Tp > 
using __pocs = typename _Tp :: propagate_on_container_swap ; 
template < typename _Tp > 
using __equal = typename _Tp :: is_always_equal ; 
} ; 

template < typename _Alloc , typename _Up > 
using __alloc_rebind 
= typename __allocator_traits_base :: template __rebind < _Alloc , _Up >:: type ; 





template < typename _Alloc > 
struct allocator_traits : __allocator_traits_base 
{ 

typedef _Alloc allocator_type ; 

typedef typename _Alloc :: value_type value_type ; 






using pointer = __detected_or_t < value_type * , __pointer , _Alloc > ; 

private : 

template < template < typename > class _Func , typename _Tp , typename = void > 
struct _Ptr 
{ 
using type = typename pointer_traits < pointer >:: template rebind < _Tp > ; 
} ; 

template < template < typename > class _Func , typename _Tp > 
struct _Ptr < _Func , _Tp , __void_t < _Func < _Alloc >>> 
{ 
using type = _Func < _Alloc > ; 
} ; 


template < typename _A2 , typename _PtrT , typename = void > 
struct _Diff 
{ using type = typename pointer_traits < _PtrT >:: difference_type ; } ; 

template < typename _A2 , typename _PtrT > 
struct _Diff < _A2 , _PtrT , __void_t < typename _A2 :: difference_type >> 
{ using type = typename _A2 :: difference_type ; } ; 


template < typename _A2 , typename _DiffT , typename = void > 
struct _Size : make_unsigned < _DiffT > { } ; 

template < typename _A2 , typename _DiffT > 
struct _Size < _A2 , _DiffT , __void_t < typename _A2 :: size_type >> 
{ using type = typename _A2 :: size_type ; } ; 

public : 






using const_pointer = typename _Ptr < __c_pointer , const value_type >:: type ; 







using void_pointer = typename _Ptr < __v_pointer , void >:: type ; 







using const_void_pointer = typename _Ptr < __cv_pointer , const void >:: type ; 







using difference_type = typename _Diff < _Alloc , pointer >:: type ; 







using size_type = typename _Size < _Alloc , difference_type >:: type ; 







using propagate_on_container_copy_assignment 
= __detected_or_t < false_type , __pocca , _Alloc > ; 







using propagate_on_container_move_assignment 
= __detected_or_t < false_type , __pocma , _Alloc > ; 







using propagate_on_container_swap 
= __detected_or_t < false_type , __pocs , _Alloc > ; 







using is_always_equal 
= __detected_or_t < typename is_empty < _Alloc >:: type , __equal , _Alloc > ; 

template < typename _Tp > 
using rebind_alloc = __alloc_rebind < _Alloc , _Tp > ; 
template < typename _Tp > 
using rebind_traits = allocator_traits < rebind_alloc < _Tp >> ; 

private : 
template < typename _Alloc2 > 
static auto 
_S_allocate ( _Alloc2 & __a , size_type __n , const_void_pointer __hint , int ) 
-> decltype ( __a . allocate ( __n , __hint ) ) 
{ __CvT__record_line____(__CvT_miT,100,215);return __a . allocate ( __n , __hint ) ; } 

template < typename _Alloc2 > 
static pointer 
_S_allocate ( _Alloc2 & __a , size_type __n , const_void_pointer , ... ) 
{ __CvT__record_line____(__CvT_miT,100,220);return __a . allocate ( __n ) ; } 

template < typename _Tp , typename ... _Args > 
struct __construct_helper 
{ 
template < typename _Alloc2 , 
typename = decltype ( std :: declval < _Alloc2 *> ( ) -> construct ( 
std :: declval < _Tp *> ( ) , std :: declval < _Args > ( ) ... ) ) > 
static true_type __test ( int ) ; 

template < typename > 
static false_type __test ( ... ) ; 

using type = decltype ( __test < _Alloc > ( 0 ) ) ; 
} ; 

template < typename _Tp , typename ... _Args > 
using __has_construct 
= typename __construct_helper < _Tp , _Args ... >:: type ; 

template < typename _Tp , typename ... _Args > 
static _Require < __has_construct < _Tp , _Args ... >> 
_S_construct ( _Alloc & __a , _Tp * __p , _Args &&... __args ) 
{ __a . construct ( __p , std :: forward < _Args > ( __args ) ... ) ; } 

template < typename _Tp , typename ... _Args > 
static 
_Require < __and_ < __not_ < __has_construct < _Tp , _Args ... >> , 
is_constructible < _Tp , _Args ... >>> 
_S_construct ( _Alloc & , _Tp * __p , _Args &&... __args ) 
{ :: new ( ( void * ) __p ) _Tp ( std :: forward < _Args > ( __args ) ... ) ; } 

template < typename _Alloc2 , typename _Tp > 
static auto 
_S_destroy ( _Alloc2 & __a , _Tp * __p , int ) 
-> decltype ( __a . destroy ( __p ) ) 
{ __a . destroy ( __p ) ; } 

template < typename _Alloc2 , typename _Tp > 
static void 
_S_destroy ( _Alloc2 & , _Tp * __p , ... ) 
{ __p -> ~ _Tp ( ) ; } 

template < typename _Alloc2 > 
static auto 
_S_max_size ( _Alloc2 & __a , int ) 
-> decltype ( __a . max_size ( ) ) 
{ return __a . max_size ( ) ; } 

template < typename _Alloc2 > 
static size_type 
_S_max_size ( _Alloc2 & , ... ) 
{ 


return __gnu_cxx :: __numeric_traits < size_type >:: __max 
/ sizeof ( value_type ) ; 
} 

template < typename _Alloc2 > 
static auto 
_S_select ( _Alloc2 & __a , int ) 
-> decltype ( __a . select_on_container_copy_construction ( ) ) 
{ return __a . select_on_container_copy_construction ( ) ; } 

template < typename _Alloc2 > 
static _Alloc2 
_S_select ( _Alloc2 & __a , ... ) 
{ return __a ; } 

public : 
# 299 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static pointer 
allocate ( _Alloc & __a , size_type __n ) 
{ return __a . allocate ( __n ) ; } 
# 314 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static pointer 
allocate ( _Alloc & __a , size_type __n , const_void_pointer __hint ) 
{ return _S_allocate ( __a , __n , __hint , 0 ) ; } 
# 326 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static void 
deallocate ( _Alloc & __a , pointer __p , size_type __n ) 
{ __a . deallocate ( __p , __n ) ; } 
# 341 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
template < typename _Tp , typename ... _Args > 
static auto construct ( _Alloc & __a , _Tp * __p , _Args &&... __args ) 
-> decltype ( _S_construct ( __a , __p , std :: forward < _Args > ( __args ) ... ) ) 
{ _S_construct ( __a , __p , std :: forward < _Args > ( __args ) ... ) ; } 
# 354 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
template < typename _Tp > 
static void destroy ( _Alloc & __a , _Tp * __p ) 
{ _S_destroy ( __a , __p , 0 ) ; } 
# 366 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static size_type max_size ( const _Alloc & __a ) noexcept 
{ return _S_max_size ( __a , 0 ) ; } 
# 377 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static _Alloc 
select_on_container_copy_construction ( const _Alloc & __rhs ) 
{ return _S_select ( __rhs , 0 ) ; } 
} ; 


template < typename _Tp > 
struct allocator_traits < allocator < _Tp >> 
{ 

using allocator_type = allocator < _Tp > ; 

using value_type = _Tp ; 


using pointer = _Tp * ; 


using const_pointer = const _Tp * ; 


using void_pointer = void * ; 


using const_void_pointer = const void * ; 


using difference_type = std :: ptrdiff_t ; 


using size_type = std :: size_t ; 


using propagate_on_container_copy_assignment = false_type ; 


using propagate_on_container_move_assignment = true_type ; 


using propagate_on_container_swap = false_type ; 


using is_always_equal = true_type ; 

template < typename _Up > 
using rebind_alloc = allocator < _Up > ; 

template < typename _Up > 
using rebind_traits = allocator_traits < allocator < _Up >> ; 
# 434 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static pointer 
allocate ( allocator_type & __a , size_type __n ) 
{ return __a . allocate ( __n ) ; } 
# 448 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static pointer 
allocate ( allocator_type & __a , size_type __n , const_void_pointer __hint ) 
{ return __a . allocate ( __n , __hint ) ; } 
# 460 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
static void 
deallocate ( allocator_type & __a , pointer __p , size_type __n ) 
{ __a . deallocate ( __p , __n ) ; } 
# 472 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
template < typename _Up , typename ... _Args > 
static void 
construct ( allocator_type & __a , _Up * __p , _Args &&... __args ) 
{ __a . construct ( __p , std :: forward < _Args > ( __args ) ... ) ; } 
# 484 "/usr/include/c++/7.1.1/bits/alloc_traits.h" 3 
template < typename _Up > 
static void 
destroy ( allocator_type & __a , _Up * __p ) 
{ __a . destroy ( __p ) ; } 






static size_type 
max_size ( const allocator_type & __a ) noexcept 
{ return __a . max_size ( ) ; } 






static allocator_type 
select_on_container_copy_construction ( const allocator_type & __rhs ) 
{ return __rhs ; } 
} ; 


template < typename _Alloc > 
inline void 
__do_alloc_on_copy ( _Alloc & __one , const _Alloc & __two , true_type ) 
{ __one = __two ; } 

template < typename _Alloc > 
inline void 
__do_alloc_on_copy ( _Alloc & , const _Alloc & , false_type ) 
{ } 

template < typename _Alloc > 
inline void __alloc_on_copy ( _Alloc & __one , const _Alloc & __two ) 
{ 
typedef allocator_traits < _Alloc > __traits ; 
typedef typename __traits :: propagate_on_container_copy_assignment __pocca ; 
__do_alloc_on_copy ( __one , __two , __pocca ( ) ) ; 
} 

template < typename _Alloc > 
inline _Alloc __alloc_on_copy ( const _Alloc & __a ) 
{ 
typedef allocator_traits < _Alloc > __traits ; 
return __traits :: select_on_container_copy_construction ( __a ) ; 
} 

template < typename _Alloc > 
inline void __do_alloc_on_move ( _Alloc & __one , _Alloc & __two , true_type ) 
{ __one = std :: move ( __two ) ; } 

template < typename _Alloc > 
inline void __do_alloc_on_move ( _Alloc & , _Alloc & , false_type ) 
{ } 

template < typename _Alloc > 
inline void __alloc_on_move ( _Alloc & __one , _Alloc & __two ) 
{ 
typedef allocator_traits < _Alloc > __traits ; 
typedef typename __traits :: propagate_on_container_move_assignment __pocma ; 
__do_alloc_on_move ( __one , __two , __pocma ( ) ) ; 
} 

template < typename _Alloc > 
inline void __do_alloc_on_swap ( _Alloc & __one , _Alloc & __two , true_type ) 
{ 
using std :: swap ; 
swap ( __one , __two ) ; 
} 

template < typename _Alloc > 
inline void __do_alloc_on_swap ( _Alloc & , _Alloc & , false_type ) 
{ } 

template < typename _Alloc > 
inline void __alloc_on_swap ( _Alloc & __one , _Alloc & __two ) 
{ 
typedef allocator_traits < _Alloc > __traits ; 
typedef typename __traits :: propagate_on_container_swap __pocs ; 
__do_alloc_on_swap ( __one , __two , __pocs ( ) ) ; 
} 

template < typename _Alloc > 
class __is_copy_insertable_impl 
{ 
typedef allocator_traits < _Alloc > _Traits ; 

template < typename _Up , typename 
= decltype ( _Traits :: construct ( std :: declval < _Alloc &> ( ) , 
std :: declval < _Up *> ( ) , 
std :: declval < const _Up &> ( ) ) ) > 
static true_type 
_M_select ( int ) ; 

template < typename _Up > 
static false_type 
_M_select ( ... ) ; 

public : 
typedef decltype ( _M_select < typename _Alloc :: value_type > ( 0 ) ) type ; 
} ; 


template < typename _Alloc > 
struct __is_copy_insertable 
: __is_copy_insertable_impl < _Alloc >:: type 
{ } ; 


template < typename _Tp > 
struct __is_copy_insertable < allocator < _Tp >> 
: is_copy_constructible < _Tp > 
{ } ; 


} 
# 37 "/usr/include/c++/7.1.1/ext/alloc_traits.h" 2 3 




namespace __gnu_cxx 
{ 






template < typename _Alloc > 
struct __alloc_traits 

: std :: allocator_traits < _Alloc > 

{ 
typedef _Alloc allocator_type ; 

typedef std :: allocator_traits < _Alloc > _Base_type ; 
typedef typename _Base_type :: value_type value_type ; 
typedef typename _Base_type :: pointer pointer ; 
typedef typename _Base_type :: const_pointer const_pointer ; 
typedef typename _Base_type :: size_type size_type ; 
typedef typename _Base_type :: difference_type difference_type ; 

typedef value_type & reference ; 
typedef const value_type & const_reference ; 
using _Base_type :: allocate ; 
using _Base_type :: deallocate ; 
using _Base_type :: construct ; 
using _Base_type :: destroy ; 
using _Base_type :: max_size ; 

private : 
template < typename _Ptr > 
using __is_custom_pointer 
= std :: __and_ < std :: is_same < pointer , _Ptr > , 
std :: __not_ < std :: is_pointer < _Ptr >>> ; 

public : 

template < typename _Ptr , typename ... _Args > 
static typename std :: enable_if < __is_custom_pointer < _Ptr >:: value >:: type 
construct ( _Alloc & __a , _Ptr __p , _Args &&... __args ) 
{ 
_Base_type :: construct ( __a , std :: addressof ( * __p ) , 
std :: forward < _Args > ( __args ) ... ) ; 
} 


template < typename _Ptr > 
static typename std :: enable_if < __is_custom_pointer < _Ptr >:: value >:: type 
destroy ( _Alloc & __a , _Ptr __p ) 
{ _Base_type :: destroy ( __a , std :: addressof ( * __p ) ) ; } 

static _Alloc _S_select_on_copy ( const _Alloc & __a ) 
{ return _Base_type :: select_on_container_copy_construction ( __a ) ; } 

static void _S_on_swap ( _Alloc & __a , _Alloc & __b ) 
{ std :: __alloc_on_swap ( __a , __b ) ; } 

static constexpr bool _S_propagate_on_copy_assign ( ) 
{ return _Base_type :: propagate_on_container_copy_assignment :: value ; } 

static constexpr bool _S_propagate_on_move_assign ( ) 
{ return _Base_type :: propagate_on_container_move_assignment :: value ; } 

static constexpr bool _S_propagate_on_swap ( ) 
{ return _Base_type :: propagate_on_container_swap :: value ; } 

static constexpr bool _S_always_equal ( ) 
{ return _Base_type :: is_always_equal :: value ; } 

static constexpr bool _S_nothrow_move ( ) 
{ return _S_propagate_on_move_assign ( ) || _S_always_equal ( ) ; } 

template < typename _Tp > 
struct rebind 
{ typedef typename _Base_type :: template rebind_alloc < _Tp > other ; } ; 
# 158 "/usr/include/c++/7.1.1/ext/alloc_traits.h" 3 
} ; 


} 
# 41 "/usr/include/c++/7.1.1/bits/basic_string.h" 2 3 
# 52 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
namespace std 
{ 



namespace __cxx11 { 
# 76 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
class basic_string 
{ 
typedef typename __gnu_cxx :: __alloc_traits < _Alloc >:: template 
rebind < _CharT >:: other _Char_alloc_type ; 
typedef __gnu_cxx :: __alloc_traits < _Char_alloc_type > _Alloc_traits ; 


public : 
typedef _Traits traits_type ; 
typedef typename _Traits :: char_type value_type ; 
typedef _Char_alloc_type allocator_type ; 
typedef typename _Alloc_traits :: size_type size_type ; 
typedef typename _Alloc_traits :: difference_type difference_type ; 
typedef typename _Alloc_traits :: reference reference ; 
typedef typename _Alloc_traits :: const_reference const_reference ; 
typedef typename _Alloc_traits :: pointer pointer ; 
typedef typename _Alloc_traits :: const_pointer const_pointer ; 
typedef __gnu_cxx :: __normal_iterator < pointer , basic_string > iterator ; 
typedef __gnu_cxx :: __normal_iterator < const_pointer , basic_string > 
const_iterator ; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator ; 
typedef std :: reverse_iterator < iterator > reverse_iterator ; 


static const size_type npos = static_cast < size_type > ( - 1 ) ; 

private : 




typedef const_iterator __const_iterator ; 
# 123 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
struct _Alloc_hider : allocator_type 
{ 




_Alloc_hider ( pointer __dat , const _Alloc & __a ) 
: allocator_type ( __a ) , _M_p ( __dat ) { } 

_Alloc_hider ( pointer __dat , _Alloc && __a = _Alloc ( ) ) 
: allocator_type ( std :: move ( __a ) ) , _M_p ( __dat ) { } 


pointer _M_p ; 
} ; 

_Alloc_hider _M_dataplus ; 
size_type _M_string_length ; 

enum { _S_local_capacity = 15 / sizeof ( _CharT ) } ; 

union 
{ 
_CharT _M_local_buf [ _S_local_capacity + 1 ] ; 
size_type _M_allocated_capacity ; 
} ; 

void 
_M_data ( pointer __p ) 
{ _M_dataplus . _M_p = __p ; } 

void 
_M_length ( size_type __length ) 
{ _M_string_length = __length ; } 

pointer 
_M_data ( ) const 
{ return _M_dataplus . _M_p ; } 

pointer 
_M_local_data ( ) 
{ 

return std :: pointer_traits < pointer >:: pointer_to ( * _M_local_buf ) ; 



} 

const_pointer 
_M_local_data ( ) const 
{ 

return std :: pointer_traits < const_pointer >:: pointer_to ( * _M_local_buf ) ; 



} 

void 
_M_capacity ( size_type __capacity ) 
{ _M_allocated_capacity = __capacity ; } 

void 
_M_set_length ( size_type __n ) 
{ 
_M_length ( __n ) ; 
traits_type :: assign ( _M_data ( ) [ __n ] , _CharT ( ) ) ; 
} 

bool 
_M_is_local ( ) const 
{ return _M_data ( ) == _M_local_data ( ) ; } 


pointer 
_M_create ( size_type & , size_type ) ; 

void 
_M_dispose ( ) 
{ 
if ( ! _M_is_local ( ) ) 
_M_destroy ( _M_allocated_capacity ) ; 
} 

void 
_M_destroy ( size_type __size ) throw ( ) 
{ _Alloc_traits :: deallocate ( _M_get_allocator ( ) , _M_data ( ) , __size + 1 ) ; } 



template < typename _InIterator > 
void 
_M_construct_aux ( _InIterator __beg , _InIterator __end , 
std :: __false_type ) 
{ 
typedef typename iterator_traits < _InIterator >:: iterator_category _Tag ; 
_M_construct ( __beg , __end , _Tag ( ) ) ; 
} 



template < typename _Integer > 
void 
_M_construct_aux ( _Integer __beg , _Integer __end , std :: __true_type ) 
{ _M_construct_aux_2 ( static_cast < size_type > ( __beg ) , __end ) ; } 

void 
_M_construct_aux_2 ( size_type __req , _CharT __c ) 
{ _M_construct ( __req , __c ) ; } 

template < typename _InIterator > 
void 
_M_construct ( _InIterator __beg , _InIterator __end ) 
{ 
typedef typename std :: __is_integer < _InIterator >:: __type _Integral ; 
_M_construct_aux ( __beg , __end , _Integral ( ) ) ; 
} 


template < typename _InIterator > 
void 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: input_iterator_tag ) ; 



template < typename _FwdIterator > 
void 
_M_construct ( _FwdIterator __beg , _FwdIterator __end , 
std :: forward_iterator_tag ) ; 

void 
_M_construct ( size_type __req , _CharT __c ) ; 

allocator_type & 
_M_get_allocator ( ) 
{ return _M_dataplus ; } 

const allocator_type & 
_M_get_allocator ( ) const 
{ return _M_dataplus ; } 

private : 
# 282 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
_M_check ( size_type __pos , const char * __s ) const 
{ 
if ( __pos > this -> size ( ) ) 
__throw_out_of_range_fmt ( ( "%s: __pos (which is %zu) > " "this->size() (which is %zu)" ) 
, 
__s , __pos , this -> size ( ) ) ; 
return __pos ; 
} 

void 
_M_check_length ( size_type __n1 , size_type __n2 , const char * __s ) const 
{ 
if ( this -> max_size ( ) - ( this -> size ( ) - __n1 ) < __n2 ) 
__throw_length_error ( ( __s ) ) ; 
} 



size_type 
_M_limit ( size_type __pos , size_type __off ) const noexcept 
{ 
const bool __testoff = __off < this -> size ( ) - __pos ; 
return __testoff ? __off : this -> size ( ) - __pos ; 
} 


bool 
_M_disjunct ( const _CharT * __s ) const noexcept 
{ 
return ( less < const _CharT *> ( ) ( __s , _M_data ( ) ) 
|| less < const _CharT *> ( ) ( _M_data ( ) + this -> size ( ) , __s ) ) ; 
} 



static void 
_S_copy ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ 
if ( __n == 1 ) 
traits_type :: assign ( * __d , * __s ) ; 
else 
traits_type :: copy ( __d , __s , __n ) ; 
} 

static void 
_S_move ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ 
if ( __n == 1 ) 
traits_type :: assign ( * __d , * __s ) ; 
else 
traits_type :: move ( __d , __s , __n ) ; 
} 

static void 
_S_assign ( _CharT * __d , size_type __n , _CharT __c ) 
{ 
if ( __n == 1 ) 
traits_type :: assign ( * __d , __c ) ; 
else 
traits_type :: assign ( __d , __n , __c ) ; 
} 



template < class _Iterator > 
static void 
_S_copy_chars ( _CharT * __p , _Iterator __k1 , _Iterator __k2 ) 
{ 
for ( ; __k1 != __k2 ; ++ __k1 , ( void ) ++ __p ) 
traits_type :: assign ( * __p , * __k1 ) ; 
} 

static void 
_S_copy_chars ( _CharT * __p , iterator __k1 , iterator __k2 ) noexcept 
{ _S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const_iterator __k1 , const_iterator __k2 ) 
noexcept 
{ _S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , _CharT * __k1 , _CharT * __k2 ) noexcept 
{ _S_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const _CharT * __k1 , const _CharT * __k2 ) 
noexcept 
{ _S_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static int 
_S_compare ( size_type __n1 , size_type __n2 ) noexcept 
{ 
const difference_type __d = difference_type ( __n1 - __n2 ) ; 

if ( __d > __gnu_cxx :: __numeric_traits < int >:: __max ) 
return __gnu_cxx :: __numeric_traits < int >:: __max ; 
else if ( __d < __gnu_cxx :: __numeric_traits < int >:: __min ) 
return __gnu_cxx :: __numeric_traits < int >:: __min ; 
else 
return int ( __d ) ; 
} 

void 
_M_assign ( const basic_string & ) ; 

void 
_M_mutate ( size_type __pos , size_type __len1 , const _CharT * __s , 
size_type __len2 ) ; 

void 
_M_erase ( size_type __pos , size_type __n ) ; 

public : 







basic_string ( ) 
noexcept ( is_nothrow_default_constructible < _Alloc >:: value ) 
: _M_dataplus ( _M_local_data ( ) ) 
{ _M_set_length ( 0 ) ; } 




explicit 
basic_string ( const _Alloc & __a ) noexcept 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_set_length ( 0 ) ; } 





basic_string ( const basic_string & __str ) 
: _M_dataplus ( _M_local_data ( ) , 
_Alloc_traits :: _S_select_on_copy ( __str . _M_get_allocator ( ) ) ) 
{ _M_construct ( __str . _M_data ( ) , __str . _M_data ( ) + __str . length ( ) ) ; } 
# 434 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string ( const basic_string & __str , size_type __pos , 
const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ 
const _CharT * __start = __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::basic_string" ) ; 
_M_construct ( __start , __start + __str . _M_limit ( __pos , npos ) ) ; 
} 







basic_string ( const basic_string & __str , size_type __pos , 
size_type __n ) 
: _M_dataplus ( _M_local_data ( ) ) 
{ 
const _CharT * __start = __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::basic_string" ) ; 
_M_construct ( __start , __start + __str . _M_limit ( __pos , __n ) ) ; 
} 
# 465 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string ( const basic_string & __str , size_type __pos , 
size_type __n , const _Alloc & __a ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ 
const _CharT * __start 
= __str . _M_data ( ) + __str . _M_check ( __pos , "string::string" ) ; 
_M_construct ( __start , __start + __str . _M_limit ( __pos , __n ) ) ; 
} 
# 483 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string ( const _CharT * __s , size_type __n , 
const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __s , __s + __n ) ; } 






basic_string ( const _CharT * __s , const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __s , __s ? __s + traits_type :: length ( __s ) : __s + npos ) ; } 







basic_string ( size_type __n , _CharT __c , const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __n , __c ) ; } 
# 515 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string ( basic_string && __str ) noexcept 
: _M_dataplus ( _M_local_data ( ) , std :: move ( __str . _M_get_allocator ( ) ) ) 
{ 
if ( __str . _M_is_local ( ) ) 
{ 
traits_type :: copy ( _M_local_buf , __str . _M_local_buf , 
_S_local_capacity + 1 ) ; 
} 
else 
{ 
_M_data ( __str . _M_data ( ) ) ; 
_M_capacity ( __str . _M_allocated_capacity ) ; 
} 




_M_length ( __str . length ( ) ) ; 
__str . _M_data ( __str . _M_local_data ( ) ) ; 
__str . _M_set_length ( 0 ) ; 
} 






basic_string ( initializer_list < _CharT > __l , const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __l . begin ( ) , __l . end ( ) ) ; } 

basic_string ( const basic_string & __str , const _Alloc & __a ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __str . begin ( ) , __str . end ( ) ) ; } 

basic_string ( basic_string && __str , const _Alloc & __a ) 
noexcept ( _Alloc_traits :: _S_always_equal ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ 
if ( __str . _M_is_local ( ) ) 
{ 
traits_type :: copy ( _M_local_buf , __str . _M_local_buf , 
_S_local_capacity + 1 ) ; 
_M_length ( __str . length ( ) ) ; 
__str . _M_set_length ( 0 ) ; 
} 
else if ( _Alloc_traits :: _S_always_equal ( ) 
|| __str . get_allocator ( ) == __a ) 
{ 
_M_data ( __str . _M_data ( ) ) ; 
_M_length ( __str . length ( ) ) ; 
_M_capacity ( __str . _M_allocated_capacity ) ; 
__str . _M_data ( __str . _M_local_buf ) ; 
__str . _M_set_length ( 0 ) ; 
} 
else 
_M_construct ( __str . begin ( ) , __str . end ( ) ) ; 
} 
# 583 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _InputIterator , 
typename = std :: _RequireInputIter < _InputIterator >> 



basic_string ( _InputIterator __beg , _InputIterator __end , 
const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ _M_construct ( __beg , __end ) ; } 
# 619 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
~ basic_string ( ) 
{ _M_dispose ( ) ; } 





basic_string & 
operator = ( const basic_string & __str ) 
{ 

if ( _Alloc_traits :: _S_propagate_on_copy_assign ( ) ) 
{ 
if ( ! _Alloc_traits :: _S_always_equal ( ) && ! _M_is_local ( ) 
&& _M_get_allocator ( ) != __str . _M_get_allocator ( ) ) 
{ 


if ( __str . size ( ) <= _S_local_capacity ) 
{ 
_M_destroy ( _M_allocated_capacity ) ; 
_M_data ( _M_local_data ( ) ) ; 
_M_set_length ( 0 ) ; 
} 
else 
{ 
const auto __len = __str . size ( ) ; 
auto __alloc = __str . _M_get_allocator ( ) ; 

auto __ptr = _Alloc_traits :: allocate ( __alloc , __len + 1 ) ; 
_M_destroy ( _M_allocated_capacity ) ; 
_M_data ( __ptr ) ; 
_M_capacity ( __len ) ; 
_M_set_length ( __len ) ; 
} 
} 
std :: __alloc_on_copy ( _M_get_allocator ( ) , __str . _M_get_allocator ( ) ) ; 
} 

return this -> assign ( __str ) ; 
} 





basic_string & 
operator = ( const _CharT * __s ) 
{ return this -> assign ( __s ) ; } 
# 676 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
operator = ( _CharT __c ) 
{ 
this -> assign ( 1 , __c ) ; 
return * this ; 
} 
# 694 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
operator = ( basic_string && __str ) 
noexcept ( _Alloc_traits :: _S_nothrow_move ( ) ) 
{ 
if ( ! _M_is_local ( ) && _Alloc_traits :: _S_propagate_on_move_assign ( ) 
&& ! _Alloc_traits :: _S_always_equal ( ) 
&& _M_get_allocator ( ) != __str . _M_get_allocator ( ) ) 
{ 

_M_destroy ( _M_allocated_capacity ) ; 
_M_data ( _M_local_data ( ) ) ; 
_M_set_length ( 0 ) ; 
} 

std :: __alloc_on_move ( _M_get_allocator ( ) , __str . _M_get_allocator ( ) ) ; 

if ( ! __str . _M_is_local ( ) 
&& ( _Alloc_traits :: _S_propagate_on_move_assign ( ) 
|| _Alloc_traits :: _S_always_equal ( ) ) ) 
{ 
pointer __data = nullptr ; 
size_type __capacity ; 
if ( ! _M_is_local ( ) ) 
{ 
if ( _Alloc_traits :: _S_always_equal ( ) ) 
{ 
__data = _M_data ( ) ; 
__capacity = _M_allocated_capacity ; 
} 
else 
_M_destroy ( _M_allocated_capacity ) ; 
} 

_M_data ( __str . _M_data ( ) ) ; 
_M_length ( __str . length ( ) ) ; 
_M_capacity ( __str . _M_allocated_capacity ) ; 
if ( __data ) 
{ 
__str . _M_data ( __data ) ; 
__str . _M_capacity ( __capacity ) ; 
} 
else 
__str . _M_data ( __str . _M_local_buf ) ; 
} 
else 
assign ( __str ) ; 
__str . clear ( ) ; 
return * this ; 
} 





basic_string & 
operator = ( initializer_list < _CharT > __l ) 
{ 
this -> assign ( __l . begin ( ) , __l . size ( ) ) ; 
return * this ; 
} 
# 779 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
iterator 
begin ( ) noexcept 
{ return iterator ( _M_data ( ) ) ; } 





const_iterator 
begin ( ) const noexcept 
{ return const_iterator ( _M_data ( ) ) ; } 





iterator 
end ( ) noexcept 
{ return iterator ( _M_data ( ) + this -> size ( ) ) ; } 





const_iterator 
end ( ) const noexcept 
{ return const_iterator ( _M_data ( ) + this -> size ( ) ) ; } 






reverse_iterator 
rbegin ( ) noexcept 
{ return reverse_iterator ( this -> end ( ) ) ; } 






const_reverse_iterator 
rbegin ( ) const noexcept 
{ return const_reverse_iterator ( this -> end ( ) ) ; } 






reverse_iterator 
rend ( ) noexcept 
{ return reverse_iterator ( this -> begin ( ) ) ; } 






const_reverse_iterator 
rend ( ) const noexcept 
{ return const_reverse_iterator ( this -> begin ( ) ) ; } 






const_iterator 
cbegin ( ) const noexcept 
{ return const_iterator ( this -> _M_data ( ) ) ; } 





const_iterator 
cend ( ) const noexcept 
{ return const_iterator ( this -> _M_data ( ) + this -> size ( ) ) ; } 






const_reverse_iterator 
crbegin ( ) const noexcept 
{ return const_reverse_iterator ( this -> end ( ) ) ; } 






const_reverse_iterator 
crend ( ) const noexcept 
{ return const_reverse_iterator ( this -> begin ( ) ) ; } 


public : 



size_type 
size ( ) const noexcept 
{ return _M_string_length ; } 



size_type 
length ( ) const noexcept 
{ return _M_string_length ; } 


size_type 
max_size ( ) const noexcept 
{ return ( _Alloc_traits :: max_size ( _M_get_allocator ( ) ) - 1 ) / 2 ; } 
# 908 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
resize ( size_type __n , _CharT __c ) ; 
# 921 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
resize ( size_type __n ) 
{ this -> resize ( __n , _CharT ( ) ) ; } 



void 
shrink_to_fit ( ) noexcept 
{ 

if ( capacity ( ) > size ( ) ) 
{ 
try 
{ reserve ( 0 ) ; } 
catch ( ... ) 
{ } 
} 

} 






size_type 
capacity ( ) const noexcept 
{ 
return _M_is_local ( ) ? size_type ( _S_local_capacity ) 
: _M_allocated_capacity ; 
} 
# 970 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
reserve ( size_type __res_arg = 0 ) ; 




void 
clear ( ) noexcept 
{ _M_set_length ( 0 ) ; } 





bool 
empty ( ) const noexcept 
{ return this -> size ( ) == 0 ; } 
# 999 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
const_reference 
operator [ ] ( size_type __pos ) const noexcept 
{ 
; 
return _M_data ( ) [ __pos ] ; 
} 
# 1016 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
reference 
operator [ ] ( size_type __pos ) 
{ 


; 

; 
return _M_data ( ) [ __pos ] ; 
} 
# 1037 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
const_reference 
at ( size_type __n ) const 
{ 
if ( __n >= this -> size ( ) ) 
__throw_out_of_range_fmt ( ( "basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)" ) 

, 
__n , this -> size ( ) ) ; 
return _M_data ( ) [ __n ] ; 
} 
# 1058 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
reference 
at ( size_type __n ) 
{ 
if ( __n >= size ( ) ) 
__throw_out_of_range_fmt ( ( "basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)" ) 

, 
__n , this -> size ( ) ) ; 
return _M_data ( ) [ __n ] ; 
} 






reference 
front ( ) noexcept 
{ 
; 
return operator [ ] ( 0 ) ; 
} 





const_reference 
front ( ) const noexcept 
{ 
; 
return operator [ ] ( 0 ) ; 
} 





reference 
back ( ) noexcept 
{ 
; 
return operator [ ] ( this -> size ( ) - 1 ) ; 
} 





const_reference 
back ( ) const noexcept 
{ 
; 
return operator [ ] ( this -> size ( ) - 1 ) ; 
} 
# 1121 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
operator += ( const basic_string & __str ) 
{ return this -> append ( __str ) ; } 






basic_string & 
operator += ( const _CharT * __s ) 
{ return this -> append ( __s ) ; } 






basic_string & 
operator += ( _CharT __c ) 
{ 
this -> push_back ( __c ) ; 
return * this ; 
} 







basic_string & 
operator += ( initializer_list < _CharT > __l ) 
{ return this -> append ( __l . begin ( ) , __l . size ( ) ) ; } 
# 1173 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str ) 
{ return _M_append ( __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1190 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str , size_type __pos , size_type __n ) 
{ return _M_append ( __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::append" ) , 
__str . _M_limit ( __pos , __n ) ) ; } 







basic_string & 
append ( const _CharT * __s , size_type __n ) 
{ 
; 
_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
return _M_append ( __s , __n ) ; 
} 






basic_string & 
append ( const _CharT * __s ) 
{ 
; 
const size_type __n = traits_type :: length ( __s ) ; 
_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
return _M_append ( __s , __n ) ; 
} 
# 1232 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
append ( size_type __n , _CharT __c ) 
{ return _M_replace_aux ( this -> size ( ) , size_type ( 0 ) , __n , __c ) ; } 







basic_string & 
append ( initializer_list < _CharT > __l ) 
{ return this -> append ( __l . begin ( ) , __l . size ( ) ) ; } 
# 1256 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < class _InputIterator , 
typename = std :: _RequireInputIter < _InputIterator >> 



basic_string & 
append ( _InputIterator __first , _InputIterator __last ) 
{ return this -> replace ( end ( ) , end ( ) , __first , __last ) ; } 
# 1297 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
push_back ( _CharT __c ) 
{ 
const size_type __size = this -> size ( ) ; 
if ( __size + 1 > this -> capacity ( ) ) 
this -> _M_mutate ( __size , size_type ( 0 ) , 0 , size_type ( 1 ) ) ; 
traits_type :: assign ( this -> _M_data ( ) [ __size ] , __c ) ; 
this -> _M_set_length ( __size + 1 ) ; 
} 






basic_string & 
assign ( const basic_string & __str ) 
{ 
this -> _M_assign ( __str ) ; 
return * this ; 
} 
# 1328 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
assign ( basic_string && __str ) 
noexcept ( _Alloc_traits :: _S_nothrow_move ( ) ) 
{ 


return * this = std :: move ( __str ) ; 
} 
# 1351 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
assign ( const basic_string & __str , size_type __pos , size_type __n ) 
{ return _M_replace ( size_type ( 0 ) , this -> size ( ) , __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::assign" ) , 
__str . _M_limit ( __pos , __n ) ) ; } 
# 1367 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s , size_type __n ) 
{ 
; 
return _M_replace ( size_type ( 0 ) , this -> size ( ) , __s , __n ) ; 
} 
# 1383 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s ) 
{ 
; 
return _M_replace ( size_type ( 0 ) , this -> size ( ) , __s , 
traits_type :: length ( __s ) ) ; 
} 
# 1400 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
assign ( size_type __n , _CharT __c ) 
{ return _M_replace_aux ( size_type ( 0 ) , this -> size ( ) , __n , __c ) ; } 
# 1413 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < class _InputIterator , 
typename = std :: _RequireInputIter < _InputIterator >> 



basic_string & 
assign ( _InputIterator __first , _InputIterator __last ) 
{ return this -> replace ( begin ( ) , end ( ) , __first , __last ) ; } 







basic_string & 
assign ( initializer_list < _CharT > __l ) 
{ return this -> assign ( __l . begin ( ) , __l . size ( ) ) ; } 
# 1477 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
iterator 
insert ( const_iterator __p , size_type __n , _CharT __c ) 
{ 
; 
const size_type __pos = __p - begin ( ) ; 
this -> replace ( __p , __p , __n , __c ) ; 
return iterator ( this -> _M_data ( ) + __pos ) ; 
} 
# 1519 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < class _InputIterator , 
typename = std :: _RequireInputIter < _InputIterator >> 
iterator 
insert ( const_iterator __p , _InputIterator __beg , _InputIterator __end ) 
{ 
; 
const size_type __pos = __p - begin ( ) ; 
this -> replace ( __p , __p , __beg , __end ) ; 
return iterator ( this -> _M_data ( ) + __pos ) ; 
} 
# 1555 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
insert ( iterator __p , initializer_list < _CharT > __l ) 
{ 
; 
this -> insert ( __p - begin ( ) , __l . begin ( ) , __l . size ( ) ) ; 
} 
# 1575 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str ) 
{ return this -> replace ( __pos1 , size_type ( 0 ) , 
__str . _M_data ( ) , __str . size ( ) ) ; } 
# 1598 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str , 
size_type __pos2 , size_type __n ) 
{ return this -> replace ( __pos1 , size_type ( 0 ) , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::insert" ) , 
__str . _M_limit ( __pos2 , __n ) ) ; } 
# 1621 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s , size_type __n ) 
{ return this -> replace ( __pos , size_type ( 0 ) , __s , __n ) ; } 
# 1640 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s ) 
{ 
; 
return this -> replace ( __pos , size_type ( 0 ) , __s , 
traits_type :: length ( __s ) ) ; 
} 
# 1664 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , size_type __n , _CharT __c ) 
{ return _M_replace_aux ( _M_check ( __pos , "basic_string::insert" ) , 
size_type ( 0 ) , __n , __c ) ; } 
# 1682 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
iterator 
insert ( __const_iterator __p , _CharT __c ) 
{ 
; 
const size_type __pos = __p - begin ( ) ; 
_M_replace_aux ( __pos , size_type ( 0 ) , size_type ( 1 ) , __c ) ; 
return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1738 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
erase ( size_type __pos = 0 , size_type __n = npos ) 
{ 
_M_check ( __pos , "basic_string::erase" ) ; 
if ( __n == npos ) 
this -> _M_set_length ( __pos ) ; 
else if ( __n != 0 ) 
this -> _M_erase ( __pos , _M_limit ( __pos , __n ) ) ; 
return * this ; 
} 
# 1757 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
iterator 
erase ( __const_iterator __position ) 
{ 

; 
const size_type __pos = __position - begin ( ) ; 
this -> _M_erase ( __pos , size_type ( 1 ) ) ; 
return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1776 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
iterator 
erase ( __const_iterator __first , __const_iterator __last ) 
{ 

; 
const size_type __pos = __first - begin ( ) ; 
if ( __last == end ( ) ) 
this -> _M_set_length ( __pos ) ; 
else 
this -> _M_erase ( __pos , __last - __first ) ; 
return iterator ( this -> _M_data ( ) + __pos ) ; 
} 







void 
pop_back ( ) noexcept 
{ 
; 
_M_erase ( size ( ) - 1 , 1 ) ; 
} 
# 1820 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n , const basic_string & __str ) 
{ return this -> replace ( __pos , __n , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1842 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) 
{ return this -> replace ( __pos1 , __n1 , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::replace" ) , 
__str . _M_limit ( __pos2 , __n2 ) ) ; } 
# 1867 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) 
{ 
; 
return _M_replace ( _M_check ( __pos , "basic_string::replace" ) , 
_M_limit ( __pos , __n1 ) , __s , __n2 ) ; 
} 
# 1892 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s ) 
{ 
; 
return this -> replace ( __pos , __n1 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1916 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , size_type __n2 , _CharT __c ) 
{ return _M_replace_aux ( _M_check ( __pos , "basic_string::replace" ) , 
_M_limit ( __pos , __n1 ) , __n2 , __c ) ; } 
# 1934 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const basic_string & __str ) 
{ return this -> replace ( __i1 , __i2 , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1954 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const _CharT * __s , size_type __n ) 
{ 

; 
return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , __s , __n ) ; 
} 
# 1976 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , const _CharT * __s ) 
{ 
; 
return this -> replace ( __i1 , __i2 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1997 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , size_type __n , 
_CharT __c ) 
{ 

; 
return _M_replace_aux ( __i1 - begin ( ) , __i2 - __i1 , __n , __c ) ; 
} 
# 2022 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < class _InputIterator , 
typename = std :: _RequireInputIter < _InputIterator >> 
basic_string & 
replace ( const_iterator __i1 , const_iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 ) 
{ 

; 
; 
return this -> _M_replace_dispatch ( __i1 , __i2 , __k1 , __k2 , 
std :: __false_type ( ) ) ; 
} 
# 2054 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
_CharT * __k1 , _CharT * __k2 ) 
{ 

; 
; 
return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const _CharT * __k1 , const _CharT * __k2 ) 
{ 

; 
; 
return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
iterator __k1 , iterator __k2 ) 
{ 

; 
; 
return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const_iterator __k1 , const_iterator __k2 ) 
{ 

; 
; 
return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 
# 2113 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string & replace ( const_iterator __i1 , const_iterator __i2 , 
initializer_list < _CharT > __l ) 
{ return this -> replace ( __i1 , __i2 , __l . begin ( ) , __l . size ( ) ) ; } 
# 2164 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
private : 
template < class _Integer > 
basic_string & 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_Integer __n , _Integer __val , __true_type ) 
{ return _M_replace_aux ( __i1 - begin ( ) , __i2 - __i1 , __n , __val ) ; } 

template < class _InputIterator > 
basic_string & 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 , 
__false_type ) ; 

basic_string & 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) ; 

basic_string & 
_M_replace ( size_type __pos , size_type __len1 , const _CharT * __s , 
const size_type __len2 ) ; 

basic_string & 
_M_append ( const _CharT * __s , size_type __n ) ; 

public : 
# 2202 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
copy ( _CharT * __s , size_type __n , size_type __pos = 0 ) const ; 
# 2212 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
void 
swap ( basic_string & __s ) noexcept ; 
# 2222 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
const _CharT * 
c_str ( ) const noexcept 
{ return _M_data ( ) ; } 
# 2234 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
const _CharT * 
data ( ) const noexcept 
{ return _M_data ( ) ; } 
# 2253 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
allocator_type 
get_allocator ( ) const noexcept 
{ return _M_get_allocator ( ) ; } 
# 2269 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept ; 
# 2283 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find ( const basic_string & __str , size_type __pos = 0 ) const 
noexcept 
{ return this -> find ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2310 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos = 0 ) const noexcept 
{ 
; 
return this -> find ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2327 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find ( _CharT __c , size_type __pos = 0 ) const noexcept ; 
# 2340 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
rfind ( const basic_string & __str , size_type __pos = npos ) const 
noexcept 
{ return this -> rfind ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2369 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept ; 
# 2383 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos = npos ) const 
{ 
; 
return this -> rfind ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2400 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
rfind ( _CharT __c , size_type __pos = npos ) const noexcept ; 
# 2414 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_of ( const basic_string & __str , size_type __pos = 0 ) const 
noexcept 
{ return this -> find_first_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2443 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept ; 
# 2457 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos = 0 ) const 
noexcept 
{ 
; 
return this -> find_first_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2477 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_of ( _CharT __c , size_type __pos = 0 ) const noexcept 
{ return this -> find ( __c , __pos ) ; } 
# 2492 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_of ( const basic_string & __str , size_type __pos = npos ) const 
noexcept 
{ return this -> find_last_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2521 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept ; 
# 2535 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos = npos ) const 
noexcept 
{ 
; 
return this -> find_last_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2555 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_of ( _CharT __c , size_type __pos = npos ) const noexcept 
{ return this -> rfind ( __c , __pos ) ; } 
# 2569 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const basic_string & __str , size_type __pos = 0 ) const 
noexcept 
{ return this -> find_first_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2598 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const noexcept ; 
# 2612 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos = 0 ) const 
noexcept 
{ 
; 
return this -> find_first_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2630 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_first_not_of ( _CharT __c , size_type __pos = 0 ) const 
noexcept ; 
# 2645 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const basic_string & __str , size_type __pos = npos ) const 
noexcept 
{ return this -> find_last_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2674 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const noexcept ; 
# 2688 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos = npos ) const 
noexcept 
{ 
; 
return this -> find_last_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2706 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
size_type 
find_last_not_of ( _CharT __c , size_type __pos = npos ) const 
noexcept ; 
# 2722 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
basic_string 
substr ( size_type __pos = 0 , size_type __n = npos ) const 
{ return basic_string ( * this , 
_M_check ( __pos , "basic_string::substr" ) , __n ) ; } 
# 2741 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( const basic_string & __str ) const 
{ 
const size_type __size = this -> size ( ) ; 
const size_type __osize = __str . size ( ) ; 
const size_type __len = std :: min ( __size , __osize ) ; 

int __r = traits_type :: compare ( _M_data ( ) , __str . data ( ) , __len ) ; 
if ( ! __r ) 
__r = _S_compare ( __size , __osize ) ; 
return __r ; 
} 
# 2823 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const ; 
# 2849 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const ; 
# 2867 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( const _CharT * __s ) const noexcept ; 
# 2891 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const ; 
# 2918 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const ; 
} ; 
} 
# 5684 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ 
basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__str . append ( __rhs ) ; 
return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ 
basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__str . append ( __rhs ) ; 
return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , _CharT __rhs ) 
{ 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__string_type __str ( __lhs ) ; 
__str . append ( __size_type ( 1 ) , __rhs ) ; 
return __str ; 
} 


template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( basic_string < _CharT , _Traits , _Alloc >&& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return std :: move ( __lhs . append ( __rhs ) ) ; } 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
basic_string < _CharT , _Traits , _Alloc >&& __rhs ) 
{ return std :: move ( __rhs . insert ( 0 , __lhs ) ) ; } 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( basic_string < _CharT , _Traits , _Alloc >&& __lhs , 
basic_string < _CharT , _Traits , _Alloc >&& __rhs ) 
{ 
const auto __size = __lhs . size ( ) + __rhs . size ( ) ; 
const bool __cond = ( __size > __lhs . capacity ( ) 
&& __size <= __rhs . capacity ( ) ) ; 
return __cond ? std :: move ( __rhs . insert ( 0 , __lhs ) ) 
: std :: move ( __lhs . append ( __rhs ) ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
basic_string < _CharT , _Traits , _Alloc >&& __rhs ) 
{ return std :: move ( __rhs . insert ( 0 , __lhs ) ) ; } 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , 
basic_string < _CharT , _Traits , _Alloc >&& __rhs ) 
{ return std :: move ( __rhs . insert ( 0 , 1 , __lhs ) ) ; } 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( basic_string < _CharT , _Traits , _Alloc >&& __lhs , 
const _CharT * __rhs ) 
{ return std :: move ( __lhs . append ( __rhs ) ) ; } 

template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( basic_string < _CharT , _Traits , _Alloc >&& __lhs , 
_CharT __rhs ) 
{ return std :: move ( __lhs . append ( 1 , __rhs ) ) ; } 
# 5805 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return __lhs . compare ( __rhs ) == 0 ; } 

template < typename _CharT > 
inline 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , bool >:: __type 
operator == ( const basic_string < _CharT >& __lhs , 
const basic_string < _CharT >& __rhs ) noexcept 
{ return ( __lhs . size ( ) == __rhs . size ( ) 
&& ! std :: char_traits < _CharT >:: compare ( __lhs . data ( ) , __rhs . data ( ) , 
__lhs . size ( ) ) ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return __rhs . compare ( __lhs ) == 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return __lhs . compare ( __rhs ) == 0 ; } 
# 5852 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return ! ( __lhs == __rhs ) ; } 
# 5890 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return __rhs . compare ( __lhs ) > 0 ; } 
# 5928 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return __rhs . compare ( __lhs ) < 0 ; } 
# 5966 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return __rhs . compare ( __lhs ) >= 0 ; } 
# 6004 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept 
{ return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ return __rhs . compare ( __lhs ) <= 0 ; } 
# 6042 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline void 
swap ( basic_string < _CharT , _Traits , _Alloc >& __lhs , 
basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
noexcept ( noexcept ( __lhs . swap ( __rhs ) ) ) 
{ __lhs . swap ( __rhs ) ; } 
# 6062 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) ; 

template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __is , basic_string < char >& __str ) ; 
# 6080 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __os , 
const basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,78,6084);


__CvT__record_line____(__CvT_miT,78,6087);return __ostream_insert ( __os , __str . data ( ) , __str . size ( ) ) ; 
} 
# 6103 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) ; 
# 6120 "/usr/include/c++/7.1.1/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,78,6124);return std :: getline ( __is , __str , __is . widen ( '\n' ) ) ; } 



template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >&& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) 
{ __CvT__record_line____(__CvT_miT,78,6132);return std :: getline ( __is , __str , __delim ) ; } 


template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >&& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,78,6139);return std :: getline ( __is , __str ) ; } 


template <> 
basic_istream < char >& 
getline ( basic_istream < char >& __in , basic_string < char >& __str , 
char __delim ) ; 


template <> 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& __in , basic_string < wchar_t >& __str , 
wchar_t __delim ) ; 



} 



# 1 "/usr/include/c++/7.1.1/ext/string_conversions.h" 1 3 
# 32 "/usr/include/c++/7.1.1/ext/string_conversions.h" 3 

# 33 "/usr/include/c++/7.1.1/ext/string_conversions.h" 3 
# 41 "/usr/include/c++/7.1.1/ext/string_conversions.h" 3 
# 1 "/usr/include/c++/7.1.1/cstdlib" 1 3 
# 39 "/usr/include/c++/7.1.1/cstdlib" 3 

# 40 "/usr/include/c++/7.1.1/cstdlib" 3 
# 75 "/usr/include/c++/7.1.1/cstdlib" 3 
# 1 "/usr/include/stdlib.h" 1 3 4 
# 25 "/usr/include/stdlib.h" 3 4 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4 
# 26 "/usr/include/stdlib.h" 2 3 4 







# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 34 "/usr/include/stdlib.h" 2 3 4 

extern "C" { 






# 1 "/usr/include/bits/waitflags.h" 1 3 4 
# 43 "/usr/include/stdlib.h" 2 3 4 
# 1 "/usr/include/bits/waitstatus.h" 1 3 4 
# 44 "/usr/include/stdlib.h" 2 3 4 
# 57 "/usr/include/stdlib.h" 3 4 


typedef struct 
{ 
int quot ; 
int rem ; 
} div_t ; 



typedef struct 
{ 
long int quot ; 
long int rem ; 
} ldiv_t ; 







typedef struct 
{ 
long long int quot ; 
long long int rem ; 
} lldiv_t ; 


# 101 "/usr/include/stdlib.h" 3 4 
extern size_t __ctype_get_mb_cur_max ( void ) throw ( ) ; 




extern double atof ( const char * __nptr ) 
throw ( ) ; 

extern int atoi ( const char * __nptr ) 
throw ( ) ; 

extern long int atol ( const char * __nptr ) 
throw ( ) ; 





extern long long int atoll ( const char * __nptr ) 
throw ( ) ; 





extern double strtod ( const char * __restrict __nptr , 
char ** __restrict __endptr ) 
throw ( ) ; 





extern float strtof ( const char * __restrict __nptr , 
char ** __restrict __endptr ) throw ( ) ; 

extern long double strtold ( const char * __restrict __nptr , 
char ** __restrict __endptr ) 
throw ( ) ; 





extern long int strtol ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 

extern unsigned long int strtoul ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 





extern long long int strtoq ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 


extern unsigned long long int strtouq ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 






extern long long int strtoll ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 


extern unsigned long long int strtoull ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base ) 
throw ( ) ; 





extern int strfromd ( char * __dest , size_t __size , const char * __format , 
double __f ) 
throw ( ) ; 

extern int strfromf ( char * __dest , size_t __size , const char * __format , 
float __f ) 
throw ( ) ; 

extern int strfroml ( char * __dest , size_t __size , const char * __format , 
long double __f ) 
throw ( ) ; 
# 216 "/usr/include/stdlib.h" 3 4 
extern long int strtol_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base , 
__locale_t __loc ) throw ( ) ; 

extern unsigned long int strtoul_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , 
int __base , __locale_t __loc ) 
throw ( ) ; 


extern long long int strtoll_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , int __base , 
__locale_t __loc ) 
throw ( ) ; 


extern unsigned long long int strtoull_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , 
int __base , __locale_t __loc ) 
throw ( ) ; 

extern double strtod_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern float strtof_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern long double strtold_l ( const char * __restrict __nptr , 
char ** __restrict __endptr , 
__locale_t __loc ) 
throw ( ) ; 
# 282 "/usr/include/stdlib.h" 3 4 
extern char * l64a ( long int __n ) throw ( ) ; 


extern long int a64l ( const char * __s ) 
throw ( ) ; 




# 1 "/usr/include/sys/types.h" 1 3 4 
# 27 "/usr/include/sys/types.h" 3 4 
extern "C" { 





typedef __u_char u_char ; 
typedef __u_short u_short ; 
typedef __u_int u_int ; 
typedef __u_long u_long ; 
typedef __quad_t quad_t ; 
typedef __u_quad_t u_quad_t ; 
typedef __fsid_t fsid_t ; 




typedef __loff_t loff_t ; 



typedef __ino_t ino_t ; 






typedef __ino64_t ino64_t ; 




typedef __dev_t dev_t ; 




typedef __gid_t gid_t ; 




typedef __mode_t mode_t ; 




typedef __nlink_t nlink_t ; 




typedef __uid_t uid_t ; 





typedef __off_t off_t ; 






typedef __off64_t off64_t ; 
# 104 "/usr/include/sys/types.h" 3 4 
typedef __id_t id_t ; 




typedef __ssize_t ssize_t ; 





typedef __daddr_t daddr_t ; 
typedef __caddr_t caddr_t ; 





typedef __key_t key_t ; 
# 135 "/usr/include/sys/types.h" 3 4 
typedef __useconds_t useconds_t ; 



typedef __suseconds_t suseconds_t ; 





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 146 "/usr/include/sys/types.h" 2 3 4 



typedef unsigned long int ulong ; 
typedef unsigned short int ushort ; 
typedef unsigned int uint ; 
# 199 "/usr/include/sys/types.h" 3 4 
typedef unsigned int u_int8_t ; 
typedef unsigned int u_int16_t ; 
typedef unsigned int u_int32_t ; 
typedef unsigned int u_int64_t ; 

typedef int register_t ; 
# 218 "/usr/include/sys/types.h" 3 4 
# 1 "/usr/include/sys/select.h" 1 3 4 
# 30 "/usr/include/sys/select.h" 3 4 
# 1 "/usr/include/bits/select.h" 1 3 4 
# 22 "/usr/include/bits/select.h" 3 4 
# 1 "/usr/include/bits/wordsize.h" 1 3 4 
# 23 "/usr/include/bits/select.h" 2 3 4 
# 31 "/usr/include/sys/select.h" 2 3 4 


# 1 "/usr/include/bits/sigset.h" 1 3 4 
# 22 "/usr/include/bits/sigset.h" 3 4 
typedef int __sig_atomic_t ; 




typedef struct 
{ 
unsigned long int __val [ ( 1024 / ( 8 * sizeof ( unsigned long int ) ) ) ] ; 
} __sigset_t ; 
# 34 "/usr/include/sys/select.h" 2 3 4 



typedef __sigset_t sigset_t ; 
# 54 "/usr/include/sys/select.h" 3 4 
typedef long int __fd_mask ; 
# 64 "/usr/include/sys/select.h" 3 4 
typedef struct 
{ 



__fd_mask fds_bits [ 1024 / ( 8 * ( int ) sizeof ( __fd_mask ) ) ] ; 





} fd_set ; 






typedef __fd_mask fd_mask ; 
# 96 "/usr/include/sys/select.h" 3 4 
extern "C" { 
# 106 "/usr/include/sys/select.h" 3 4 
extern int select ( int __nfds , fd_set * __restrict __readfds , 
fd_set * __restrict __writefds , 
fd_set * __restrict __exceptfds , 
struct timeval * __restrict __timeout ) ; 
# 118 "/usr/include/sys/select.h" 3 4 
extern int pselect ( int __nfds , fd_set * __restrict __readfds , 
fd_set * __restrict __writefds , 
fd_set * __restrict __exceptfds , 
const struct timespec * __restrict __timeout , 
const __sigset_t * __restrict __sigmask ) ; 
# 131 "/usr/include/sys/select.h" 3 4 
} 
# 219 "/usr/include/sys/types.h" 2 3 4 







# 1 "/usr/include/sys/sysmacros.h" 1 3 4 
# 41 "/usr/include/sys/sysmacros.h" 3 4 
# 1 "/usr/include/bits/sysmacros.h" 1 3 4 
# 42 "/usr/include/sys/sysmacros.h" 2 3 4 
# 71 "/usr/include/sys/sysmacros.h" 3 4 
extern "C" { 

extern unsigned int gnu_dev_major ( __dev_t __dev ) throw ( ) ; 
extern unsigned int gnu_dev_minor ( __dev_t __dev ) throw ( ) ; 
extern __dev_t gnu_dev_makedev ( unsigned int __major , unsigned int __minor ) throw ( ) ; 
# 85 "/usr/include/sys/sysmacros.h" 3 4 
} 
# 227 "/usr/include/sys/types.h" 2 3 4 






typedef __blksize_t blksize_t ; 






typedef __blkcnt_t blkcnt_t ; 



typedef __fsblkcnt_t fsblkcnt_t ; 



typedef __fsfilcnt_t fsfilcnt_t ; 
# 267 "/usr/include/sys/types.h" 3 4 
typedef __blkcnt64_t blkcnt64_t ; 
typedef __fsblkcnt64_t fsblkcnt64_t ; 
typedef __fsfilcnt64_t fsfilcnt64_t ; 
# 278 "/usr/include/sys/types.h" 3 4 
} 
# 292 "/usr/include/stdlib.h" 2 3 4 






extern long int random ( void ) throw ( ) ; 


extern void srandom ( unsigned int __seed ) throw ( ) ; 





extern char * initstate ( unsigned int __seed , char * __statebuf , 
size_t __statelen ) throw ( ) ; 



extern char * setstate ( char * __statebuf ) throw ( ) ; 







struct random_data 
{ 
int32_t * fptr ; 
int32_t * rptr ; 
int32_t * state ; 
int rand_type ; 
int rand_deg ; 
int rand_sep ; 
int32_t * end_ptr ; 
} ; 

extern int random_r ( struct random_data * __restrict __buf , 
int32_t * __restrict __result ) throw ( ) ; 

extern int srandom_r ( unsigned int __seed , struct random_data * __buf ) 
throw ( ) ; 

extern int initstate_r ( unsigned int __seed , char * __restrict __statebuf , 
size_t __statelen , 
struct random_data * __restrict __buf ) 
throw ( ) ; 

extern int setstate_r ( char * __restrict __statebuf , 
struct random_data * __restrict __buf ) 
throw ( ) ; 






extern int rand ( void ) throw ( ) ; 

extern void srand ( unsigned int __seed ) throw ( ) ; 




extern int rand_r ( unsigned int * __seed ) throw ( ) ; 







extern double drand48 ( void ) throw ( ) ; 
extern double erand48 ( unsigned short int __xsubi [ 3 ] ) throw ( ) ; 


extern long int lrand48 ( void ) throw ( ) ; 
extern long int nrand48 ( unsigned short int __xsubi [ 3 ] ) 
throw ( ) ; 


extern long int mrand48 ( void ) throw ( ) ; 
extern long int jrand48 ( unsigned short int __xsubi [ 3 ] ) 
throw ( ) ; 


extern void srand48 ( long int __seedval ) throw ( ) ; 
extern unsigned short int * seed48 ( unsigned short int __seed16v [ 3 ] ) 
throw ( ) ; 
extern void lcong48 ( unsigned short int __param [ 7 ] ) throw ( ) ; 





struct drand48_data 
{ 
unsigned short int __x [ 3 ] ; 
unsigned short int __old_x [ 3 ] ; 
unsigned short int __c ; 
unsigned short int __init ; 
unsigned long long int __a ; 

} ; 


extern int drand48_r ( struct drand48_data * __restrict __buffer , 
double * __restrict __result ) throw ( ) ; 
extern int erand48_r ( unsigned short int __xsubi [ 3 ] , 
struct drand48_data * __restrict __buffer , 
double * __restrict __result ) throw ( ) ; 


extern int lrand48_r ( struct drand48_data * __restrict __buffer , 
long int * __restrict __result ) 
throw ( ) ; 
extern int nrand48_r ( unsigned short int __xsubi [ 3 ] , 
struct drand48_data * __restrict __buffer , 
long int * __restrict __result ) 
throw ( ) ; 


extern int mrand48_r ( struct drand48_data * __restrict __buffer , 
long int * __restrict __result ) 
throw ( ) ; 
extern int jrand48_r ( unsigned short int __xsubi [ 3 ] , 
struct drand48_data * __restrict __buffer , 
long int * __restrict __result ) 
throw ( ) ; 


extern int srand48_r ( long int __seedval , struct drand48_data * __buffer ) 
throw ( ) ; 

extern int seed48_r ( unsigned short int __seed16v [ 3 ] , 
struct drand48_data * __buffer ) throw ( ) ; 

extern int lcong48_r ( unsigned short int __param [ 7 ] , 
struct drand48_data * __buffer ) 
throw ( ) ; 









extern void * malloc ( size_t __size ) throw ( ) ; 

extern void * calloc ( size_t __nmemb , size_t __size ) 
throw ( ) ; 










extern void * realloc ( void * __ptr , size_t __size ) 
throw ( ) ; 

extern void free ( void * __ptr ) throw ( ) ; 




extern void cfree ( void * __ptr ) throw ( ) ; 



# 1 "/usr/include/alloca.h" 1 3 4 
# 24 "/usr/include/alloca.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 25 "/usr/include/alloca.h" 2 3 4 

extern "C" { 





extern void * alloca ( size_t __size ) throw ( ) ; 





} 
# 470 "/usr/include/stdlib.h" 2 3 4 





extern void * valloc ( size_t __size ) throw ( ) ; 




extern int posix_memalign ( void ** __memptr , size_t __alignment , size_t __size ) 
throw ( ) ; 




extern void * aligned_alloc ( size_t __alignment , size_t __size ) 
throw ( ) ; 




extern void abort ( void ) throw ( ) ; 



extern int atexit ( void ( * __func ) ( void ) ) throw ( ) ; 




extern "C++" int at_quick_exit ( void ( * __func ) ( void ) ) 
throw ( ) __asm ( "at_quick_exit" ) ; 









extern int on_exit ( void ( * __func ) ( int __status , void * __arg ) , void * __arg ) 
throw ( ) ; 






extern void exit ( int __status ) throw ( ) ; 





extern void quick_exit ( int __status ) throw ( ) ; 







extern void _Exit ( int __status ) throw ( ) ; 






extern char * getenv ( const char * __name ) throw ( ) ; 





extern char * secure_getenv ( const char * __name ) 
throw ( ) ; 






extern int putenv ( char * __string ) throw ( ) ; 





extern int setenv ( const char * __name , const char * __value , int __replace ) 
throw ( ) ; 


extern int unsetenv ( const char * __name ) throw ( ) ; 






extern int clearenv ( void ) throw ( ) ; 
# 583 "/usr/include/stdlib.h" 3 4 
extern char * mktemp ( char * __template ) throw ( ) ; 
# 596 "/usr/include/stdlib.h" 3 4 
extern int mkstemp ( char * __template ) ; 
# 606 "/usr/include/stdlib.h" 3 4 
extern int mkstemp64 ( char * __template ) ; 
# 618 "/usr/include/stdlib.h" 3 4 
extern int mkstemps ( char * __template , int __suffixlen ) ; 
# 628 "/usr/include/stdlib.h" 3 4 
extern int mkstemps64 ( char * __template , int __suffixlen ) 
; 
# 639 "/usr/include/stdlib.h" 3 4 
extern char * mkdtemp ( char * __template ) throw ( ) ; 
# 650 "/usr/include/stdlib.h" 3 4 
extern int mkostemp ( char * __template , int __flags ) ; 
# 660 "/usr/include/stdlib.h" 3 4 
extern int mkostemp64 ( char * __template , int __flags ) ; 
# 670 "/usr/include/stdlib.h" 3 4 
extern int mkostemps ( char * __template , int __suffixlen , int __flags ) 
; 
# 682 "/usr/include/stdlib.h" 3 4 
extern int mkostemps64 ( char * __template , int __suffixlen , int __flags ) 
; 









extern int system ( const char * __command ) ; 






extern char * canonicalize_file_name ( const char * __name ) 
throw ( ) ; 
# 710 "/usr/include/stdlib.h" 3 4 
extern char * realpath ( const char * __restrict __name , 
char * __restrict __resolved ) throw ( ) ; 






typedef int ( * __compar_fn_t ) ( const void * , const void * ) ; 


typedef __compar_fn_t comparison_fn_t ; 



typedef int ( * __compar_d_fn_t ) ( const void * , const void * , void * ) ; 





extern void * bsearch ( const void * __key , const void * __base , 
size_t __nmemb , size_t __size , __compar_fn_t __compar ) 
; 







extern void qsort ( void * __base , size_t __nmemb , size_t __size , 
__compar_fn_t __compar ) ; 

extern void qsort_r ( void * __base , size_t __nmemb , size_t __size , 
__compar_d_fn_t __compar , void * __arg ) 
; 




extern int abs ( int __x ) throw ( ) ; 
extern long int labs ( long int __x ) throw ( ) ; 



extern long long int llabs ( long long int __x ) 
throw ( ) ; 







extern div_t div ( int __numer , int __denom ) 
throw ( ) ; 
extern ldiv_t ldiv ( long int __numer , long int __denom ) 
throw ( ) ; 




extern lldiv_t lldiv ( long long int __numer , 
long long int __denom ) 
throw ( ) ; 

# 788 "/usr/include/stdlib.h" 3 4 
extern char * ecvt ( double __value , int __ndigit , int * __restrict __decpt , 
int * __restrict __sign ) throw ( ) ; 




extern char * fcvt ( double __value , int __ndigit , int * __restrict __decpt , 
int * __restrict __sign ) throw ( ) ; 




extern char * gcvt ( double __value , int __ndigit , char * __buf ) 
throw ( ) ; 




extern char * qecvt ( long double __value , int __ndigit , 
int * __restrict __decpt , int * __restrict __sign ) 
throw ( ) ; 
extern char * qfcvt ( long double __value , int __ndigit , 
int * __restrict __decpt , int * __restrict __sign ) 
throw ( ) ; 
extern char * qgcvt ( long double __value , int __ndigit , char * __buf ) 
throw ( ) ; 




extern int ecvt_r ( double __value , int __ndigit , int * __restrict __decpt , 
int * __restrict __sign , char * __restrict __buf , 
size_t __len ) throw ( ) ; 
extern int fcvt_r ( double __value , int __ndigit , int * __restrict __decpt , 
int * __restrict __sign , char * __restrict __buf , 
size_t __len ) throw ( ) ; 

extern int qecvt_r ( long double __value , int __ndigit , 
int * __restrict __decpt , int * __restrict __sign , 
char * __restrict __buf , size_t __len ) 
throw ( ) ; 
extern int qfcvt_r ( long double __value , int __ndigit , 
int * __restrict __decpt , int * __restrict __sign , 
char * __restrict __buf , size_t __len ) 
throw ( ) ; 






extern int mblen ( const char * __s , size_t __n ) throw ( ) ; 


extern int mbtowc ( wchar_t * __restrict __pwc , 
const char * __restrict __s , size_t __n ) throw ( ) ; 


extern int wctomb ( char * __s , wchar_t __wchar ) throw ( ) ; 



extern size_t mbstowcs ( wchar_t * __restrict __pwcs , 
const char * __restrict __s , size_t __n ) throw ( ) ; 

extern size_t wcstombs ( char * __restrict __s , 
const wchar_t * __restrict __pwcs , size_t __n ) 
throw ( ) ; 








extern int rpmatch ( const char * __response ) throw ( ) ; 
# 875 "/usr/include/stdlib.h" 3 4 
extern int getsubopt ( char ** __restrict __optionp , 
char * const * __restrict __tokens , 
char ** __restrict __valuep ) 
throw ( ) ; 





extern void setkey ( const char * __key ) throw ( ) ; 







extern int posix_openpt ( int __oflag ) ; 







extern int grantpt ( int __fd ) throw ( ) ; 



extern int unlockpt ( int __fd ) throw ( ) ; 




extern char * ptsname ( int __fd ) throw ( ) ; 






extern int ptsname_r ( int __fd , char * __buf , size_t __buflen ) 
throw ( ) ; 


extern int getpt ( void ) ; 






extern int getloadavg ( double __loadavg [ ] , int __nelem ) 
throw ( ) ; 
# 937 "/usr/include/stdlib.h" 3 4 
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4 
# 938 "/usr/include/stdlib.h" 2 3 4 
# 950 "/usr/include/stdlib.h" 3 4 
} 
# 76 "/usr/include/c++/7.1.1/cstdlib" 2 3 

# 1 "/usr/include/c++/7.1.1/bits/std_abs.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/std_abs.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/std_abs.h" 3 
# 46 "/usr/include/c++/7.1.1/bits/std_abs.h" 3 
extern "C++" 
{ 
namespace std 
{ 


using :: abs ; 


inline long 
abs ( long __i ) { __CvT__record_line____(__CvT_miT,114,56);return __builtin_labs ( __i ) ; } 



inline long long 
abs ( long long __x ) { __CvT__record_line____(__CvT_miT,114,61);return __builtin_llabs ( __x ) ; } 







inline constexpr double 
abs ( double __x ) 
{ __CvT__record_line____(__CvT_miT,114,71);return __builtin_fabs ( __x ) ; } 

inline constexpr float 
abs ( float __x ) 
{ __CvT__record_line____(__CvT_miT,114,75);return __builtin_fabsf ( __x ) ; } 

inline constexpr long double 
abs ( long double __x ) 
{ __CvT__record_line____(__CvT_miT,114,79);return __builtin_fabsl ( __x ) ; } 



inline constexpr __int128 
abs ( __int128 __x ) { __CvT__record_line____(__CvT_miT,114,84);return __x >= 0 ? __x : - __x ; } 
# 100 "/usr/include/c++/7.1.1/bits/std_abs.h" 3 
inline constexpr 
__float128 
abs ( __float128 __x ) 
{ __CvT__record_line____(__CvT_miT,114,103);return __x < 0 ? - __x : __x ; } 



} 
} 
# 78 "/usr/include/c++/7.1.1/cstdlib" 2 3 
# 118 "/usr/include/c++/7.1.1/cstdlib" 3 
extern "C++" 
{ 
namespace std 
{ 


using :: div_t ; 
using :: ldiv_t ; 

using :: abort ; 
using :: atexit ; 


using :: at_quick_exit ; 


using :: atof ; 
using :: atoi ; 
using :: atol ; 
using :: bsearch ; 
using :: calloc ; 
using :: div ; 
using :: exit ; 
using :: free ; 
using :: getenv ; 
using :: labs ; 
using :: ldiv ; 
using :: malloc ; 

using :: mblen ; 
using :: mbstowcs ; 
using :: mbtowc ; 

using :: qsort ; 


using :: quick_exit ; 


using :: rand ; 
using :: realloc ; 
using :: srand ; 
using :: strtod ; 
using :: strtol ; 
using :: strtoul ; 
using :: system ; 

using :: wcstombs ; 
using :: wctomb ; 



inline ldiv_t 
div ( long __i , long __j ) { __CvT__record_line____(__CvT_miT,102,171);return ldiv ( __i , __j ) ; } 




} 
# 189 "/usr/include/c++/7.1.1/cstdlib" 3 
namespace __gnu_cxx 
{ 



using :: lldiv_t ; 





using :: _Exit ; 



using :: llabs ; 

inline lldiv_t 
div ( long long __n , long long __d ) 
{ __CvT__record_line____(__CvT_miT,102,208);lldiv_t __q ; __q . quot = __n / __d ; __q . rem = __n % __d ; return __q ; } 

using :: lldiv ; 
# 221 "/usr/include/c++/7.1.1/cstdlib" 3 
using :: atoll ; 
using :: strtoll ; 
using :: strtoull ; 

using :: strtof ; 
using :: strtold ; 


} 

namespace std 
{ 

using :: __gnu_cxx :: lldiv_t ; 

using :: __gnu_cxx :: _Exit ; 

using :: __gnu_cxx :: llabs ; 
using :: __gnu_cxx :: div ; 
using :: __gnu_cxx :: lldiv ; 

using :: __gnu_cxx :: atoll ; 
using :: __gnu_cxx :: strtof ; 
using :: __gnu_cxx :: strtoll ; 
using :: __gnu_cxx :: strtoull ; 
using :: __gnu_cxx :: strtold ; 
} 



} 
# 42 "/usr/include/c++/7.1.1/ext/string_conversions.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cwchar" 1 3 
# 39 "/usr/include/c++/7.1.1/cwchar" 3 

# 40 "/usr/include/c++/7.1.1/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 45 "/usr/include/c++/7.1.1/cwchar" 2 3 
# 43 "/usr/include/c++/7.1.1/ext/string_conversions.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cstdio" 1 3 
# 39 "/usr/include/c++/7.1.1/cstdio" 3 

# 40 "/usr/include/c++/7.1.1/cstdio" 3 


# 1 "/usr/include/stdio.h" 1 3 4 
# 28 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4 
# 29 "/usr/include/stdio.h" 2 3 4 

extern "C" { 



# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 35 "/usr/include/stdio.h" 2 3 4 
# 75 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/libio.h" 1 3 4 
# 31 "/usr/include/libio.h" 3 4 
# 1 "/usr/include/_G_config.h" 1 3 4 
# 15 "/usr/include/_G_config.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h" 1 3 4 
# 16 "/usr/include/_G_config.h" 2 3 4 




# 1 "/usr/include/wchar.h" 1 3 4 
# 21 "/usr/include/_G_config.h" 2 3 4 
typedef struct 
{ 
__off_t __pos ; 
__mbstate_t __state ; 
} _G_fpos_t ; 
typedef struct 
{ 
__off64_t __pos ; 
__mbstate_t __state ; 
} _G_fpos64_t ; 
# 32 "/usr/include/libio.h" 2 3 4 
# 49 "/usr/include/libio.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdarg.h" 1 3 4 
# 50 "/usr/include/libio.h" 2 3 4 
# 144 "/usr/include/libio.h" 3 4 
struct _IO_jump_t ; struct _IO_FILE ; 





typedef void _IO_lock_t ; 





struct _IO_marker { 
struct _IO_marker * _next ; 
struct _IO_FILE * _sbuf ; 



int _pos ; 
# 173 "/usr/include/libio.h" 3 4 
} ; 


enum __codecvt_result 
{ 
__codecvt_ok , 
__codecvt_partial , 
__codecvt_error , 
__codecvt_noconv 
} ; 
# 241 "/usr/include/libio.h" 3 4 
struct _IO_FILE { 
int _flags ; 




char * _IO_read_ptr ; 
char * _IO_read_end ; 
char * _IO_read_base ; 
char * _IO_write_base ; 
char * _IO_write_ptr ; 
char * _IO_write_end ; 
char * _IO_buf_base ; 
char * _IO_buf_end ; 

char * _IO_save_base ; 
char * _IO_backup_base ; 
char * _IO_save_end ; 

struct _IO_marker * _markers ; 

struct _IO_FILE * _chain ; 

int _fileno ; 



int _flags2 ; 

__off_t _old_offset ; 



unsigned short _cur_column ; 
signed char _vtable_offset ; 
char _shortbuf [ 1 ] ; 



_IO_lock_t * _lock ; 
# 289 "/usr/include/libio.h" 3 4 
__off64_t _offset ; 







void * __pad1 ; 
void * __pad2 ; 
void * __pad3 ; 
void * __pad4 ; 

size_t __pad5 ; 
int _mode ; 

char _unused2 [ 15 * sizeof ( int ) - 4 * sizeof ( void * ) - sizeof ( size_t ) ] ; 

} ; 





struct _IO_FILE_plus ; 

extern struct _IO_FILE_plus _IO_2_1_stdin_ ; 
extern struct _IO_FILE_plus _IO_2_1_stdout_ ; 
extern struct _IO_FILE_plus _IO_2_1_stderr_ ; 
# 333 "/usr/include/libio.h" 3 4 
typedef __ssize_t __io_read_fn ( void * __cookie , char * __buf , size_t __nbytes ) ; 







typedef __ssize_t __io_write_fn ( void * __cookie , const char * __buf , 
size_t __n ) ; 







typedef int __io_seek_fn ( void * __cookie , __off64_t * __pos , int __w ) ; 


typedef int __io_close_fn ( void * __cookie ) ; 




typedef __io_read_fn cookie_read_function_t ; 
typedef __io_write_fn cookie_write_function_t ; 
typedef __io_seek_fn cookie_seek_function_t ; 
typedef __io_close_fn cookie_close_function_t ; 


typedef struct 
{ 
__io_read_fn * read ; 
__io_write_fn * write ; 
__io_seek_fn * seek ; 
__io_close_fn * close ; 
} _IO_cookie_io_functions_t ; 
typedef _IO_cookie_io_functions_t cookie_io_functions_t ; 

struct _IO_cookie_file ; 


extern void _IO_cookie_init ( struct _IO_cookie_file * __cfile , int __read_write , 
void * __cookie , _IO_cookie_io_functions_t __fns ) ; 




extern "C" { 


extern int __underflow ( _IO_FILE * ) ; 
extern int __uflow ( _IO_FILE * ) ; 
extern int __overflow ( _IO_FILE * , int ) ; 
# 429 "/usr/include/libio.h" 3 4 
extern int _IO_getc ( _IO_FILE * __fp ) ; 
extern int _IO_putc ( int __c , _IO_FILE * __fp ) ; 
extern int _IO_feof ( _IO_FILE * __fp ) throw ( ) ; 
extern int _IO_ferror ( _IO_FILE * __fp ) throw ( ) ; 

extern int _IO_peekc_locked ( _IO_FILE * __fp ) ; 





extern void _IO_flockfile ( _IO_FILE * ) throw ( ) ; 
extern void _IO_funlockfile ( _IO_FILE * ) throw ( ) ; 
extern int _IO_ftrylockfile ( _IO_FILE * ) throw ( ) ; 
# 459 "/usr/include/libio.h" 3 4 
extern int _IO_vfscanf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list , int * __restrict ) ; 
extern int _IO_vfprintf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list ) ; 
extern __ssize_t _IO_padn ( _IO_FILE * , int , __ssize_t ) ; 
extern size_t _IO_sgetn ( _IO_FILE * , void * , size_t ) ; 

extern __off64_t _IO_seekoff ( _IO_FILE * , __off64_t , int , int ) ; 
extern __off64_t _IO_seekpos ( _IO_FILE * , __off64_t , int ) ; 

extern void _IO_free_backup_area ( _IO_FILE * ) throw ( ) ; 
# 521 "/usr/include/libio.h" 3 4 
} 
# 76 "/usr/include/stdio.h" 2 3 4 




typedef __gnuc_va_list va_list ; 
# 111 "/usr/include/stdio.h" 3 4 


typedef _G_fpos_t fpos_t ; 





typedef _G_fpos64_t fpos64_t ; 
# 167 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4 
# 168 "/usr/include/stdio.h" 2 3 4 



extern struct _IO_FILE * stdin ; 
extern struct _IO_FILE * stdout ; 
extern struct _IO_FILE * stderr ; 







extern int remove ( const char * __filename ) throw ( ) ; 

extern int rename ( const char * __old , const char * __new ) throw ( ) ; 




extern int renameat ( int __oldfd , const char * __old , int __newfd , 
const char * __new ) throw ( ) ; 








extern FILE * tmpfile ( void ) ; 
# 208 "/usr/include/stdio.h" 3 4 
extern FILE * tmpfile64 ( void ) ; 



extern char * tmpnam ( char * __s ) throw ( ) ; 





extern char * tmpnam_r ( char * __s ) throw ( ) ; 
# 230 "/usr/include/stdio.h" 3 4 
extern char * tempnam ( const char * __dir , const char * __pfx ) 
throw ( ) ; 








extern int fclose ( FILE * __stream ) ; 




extern int fflush ( FILE * __stream ) ; 

# 255 "/usr/include/stdio.h" 3 4 
extern int fflush_unlocked ( FILE * __stream ) ; 
# 265 "/usr/include/stdio.h" 3 4 
extern int fcloseall ( void ) ; 









extern FILE * fopen ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 




extern FILE * freopen ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 
# 298 "/usr/include/stdio.h" 3 4 


extern FILE * fopen64 ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 
extern FILE * freopen64 ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 




extern FILE * fdopen ( int __fd , const char * __modes ) throw ( ) ; 





extern FILE * fopencookie ( void * __restrict __magic_cookie , 
const char * __restrict __modes , 
_IO_cookie_io_functions_t __io_funcs ) throw ( ) ; 




extern FILE * fmemopen ( void * __s , size_t __len , const char * __modes ) 
throw ( ) ; 




extern FILE * open_memstream ( char ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern void setbuf ( FILE * __restrict __stream , char * __restrict __buf ) throw ( ) ; 



extern int setvbuf ( FILE * __restrict __stream , char * __restrict __buf , 
int __modes , size_t __n ) throw ( ) ; 





extern void setbuffer ( FILE * __restrict __stream , char * __restrict __buf , 
size_t __size ) throw ( ) ; 


extern void setlinebuf ( FILE * __stream ) throw ( ) ; 








extern int fprintf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int printf ( const char * __restrict __format , ... ) ; 

extern int sprintf ( char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 





extern int vfprintf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) ; 




extern int vprintf ( const char * __restrict __format , __gnuc_va_list __arg ) ; 

extern int vsprintf ( char * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) throw ( ) ; 





extern int snprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , ... ) 
throw ( ) ; 

extern int vsnprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 






extern int vasprintf ( char ** __restrict __ptr , const char * __restrict __f , 
__gnuc_va_list __arg ) 
throw ( ) ; 
extern int __asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 
extern int asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 




extern int vdprintf ( int __fd , const char * __restrict __fmt , 
__gnuc_va_list __arg ) 
; 
extern int dprintf ( int __fd , const char * __restrict __fmt , ... ) 
; 








extern int fscanf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int scanf ( const char * __restrict __format , ... ) ; 

extern int sscanf ( const char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 
# 466 "/usr/include/stdio.h" 3 4 








extern int vfscanf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) 
; 





extern int vscanf ( const char * __restrict __format , __gnuc_va_list __arg ) 
; 


extern int vsscanf ( const char * __restrict __s , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 
# 525 "/usr/include/stdio.h" 3 4 









extern int fgetc ( FILE * __stream ) ; 
extern int getc ( FILE * __stream ) ; 





extern int getchar ( void ) ; 

# 553 "/usr/include/stdio.h" 3 4 
extern int getc_unlocked ( FILE * __stream ) ; 
extern int getchar_unlocked ( void ) ; 
# 564 "/usr/include/stdio.h" 3 4 
extern int fgetc_unlocked ( FILE * __stream ) ; 











extern int fputc ( int __c , FILE * __stream ) ; 
extern int putc ( int __c , FILE * __stream ) ; 





extern int putchar ( int __c ) ; 

# 597 "/usr/include/stdio.h" 3 4 
extern int fputc_unlocked ( int __c , FILE * __stream ) ; 







extern int putc_unlocked ( int __c , FILE * __stream ) ; 
extern int putchar_unlocked ( int __c ) ; 






extern int getw ( FILE * __stream ) ; 


extern int putw ( int __w , FILE * __stream ) ; 








extern char * fgets ( char * __restrict __s , int __n , FILE * __restrict __stream ) 
; 
# 643 "/usr/include/stdio.h" 3 4 

# 652 "/usr/include/stdio.h" 3 4 
extern char * fgets_unlocked ( char * __restrict __s , int __n , 
FILE * __restrict __stream ) ; 
# 668 "/usr/include/stdio.h" 3 4 
extern __ssize_t __getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 
extern __ssize_t getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 







extern __ssize_t getline ( char ** __restrict __lineptr , 
size_t * __restrict __n , 
FILE * __restrict __stream ) ; 








extern int fputs ( const char * __restrict __s , FILE * __restrict __stream ) ; 





extern int puts ( const char * __s ) ; 






extern int ungetc ( int __c , FILE * __stream ) ; 






extern size_t fread ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 




extern size_t fwrite ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __s ) ; 

# 729 "/usr/include/stdio.h" 3 4 
extern int fputs_unlocked ( const char * __restrict __s , 
FILE * __restrict __stream ) ; 
# 740 "/usr/include/stdio.h" 3 4 
extern size_t fread_unlocked ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 
extern size_t fwrite_unlocked ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 








extern int fseek ( FILE * __stream , long int __off , int __whence ) ; 




extern long int ftell ( FILE * __stream ) ; 




extern void rewind ( FILE * __stream ) ; 

# 776 "/usr/include/stdio.h" 3 4 
extern int fseeko ( FILE * __stream , __off_t __off , int __whence ) ; 




extern __off_t ftello ( FILE * __stream ) ; 
# 795 "/usr/include/stdio.h" 3 4 






extern int fgetpos ( FILE * __restrict __stream , fpos_t * __restrict __pos ) ; 




extern int fsetpos ( FILE * __stream , const fpos_t * __pos ) ; 
# 818 "/usr/include/stdio.h" 3 4 



extern int fseeko64 ( FILE * __stream , __off64_t __off , int __whence ) ; 
extern __off64_t ftello64 ( FILE * __stream ) ; 
extern int fgetpos64 ( FILE * __restrict __stream , fpos64_t * __restrict __pos ) ; 
extern int fsetpos64 ( FILE * __stream , const fpos64_t * __pos ) ; 




extern void clearerr ( FILE * __stream ) throw ( ) ; 

extern int feof ( FILE * __stream ) throw ( ) ; 

extern int ferror ( FILE * __stream ) throw ( ) ; 




extern void clearerr_unlocked ( FILE * __stream ) throw ( ) ; 
extern int feof_unlocked ( FILE * __stream ) throw ( ) ; 
extern int ferror_unlocked ( FILE * __stream ) throw ( ) ; 








extern void perror ( const char * __s ) ; 






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4 
# 26 "/usr/include/bits/sys_errlist.h" 3 4 
extern int sys_nerr ; 
extern const char * const sys_errlist [ ] ; 


extern int _sys_nerr ; 
extern const char * const _sys_errlist [ ] ; 
# 857 "/usr/include/stdio.h" 2 3 4 




extern int fileno ( FILE * __stream ) throw ( ) ; 




extern int fileno_unlocked ( FILE * __stream ) throw ( ) ; 
# 875 "/usr/include/stdio.h" 3 4 
extern FILE * popen ( const char * __command , const char * __modes ) ; 





extern int pclose ( FILE * __stream ) ; 





extern char * ctermid ( char * __s ) throw ( ) ; 





extern char * cuserid ( char * __s ) ; 




struct obstack ; 


extern int obstack_printf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , ... ) 
throw ( ) ; 
extern int obstack_vprintf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , 
__gnuc_va_list __args ) 
throw ( ) ; 







extern void flockfile ( FILE * __stream ) throw ( ) ; 



extern int ftrylockfile ( FILE * __stream ) throw ( ) ; 


extern void funlockfile ( FILE * __stream ) throw ( ) ; 
# 945 "/usr/include/stdio.h" 3 4 
} 
# 43 "/usr/include/c++/7.1.1/cstdio" 2 3 
# 96 "/usr/include/c++/7.1.1/cstdio" 3 
namespace std 
{ 
using :: FILE ; 
using :: fpos_t ; 

using :: clearerr ; 
using :: fclose ; 
using :: feof ; 
using :: ferror ; 
using :: fflush ; 
using :: fgetc ; 
using :: fgetpos ; 
using :: fgets ; 
using :: fopen ; 
using :: fprintf ; 
using :: fputc ; 
using :: fputs ; 
using :: fread ; 
using :: freopen ; 
using :: fscanf ; 
using :: fseek ; 
using :: fsetpos ; 
using :: ftell ; 
using :: fwrite ; 
using :: getc ; 
using :: getchar ; 




using :: perror ; 
using :: printf ; 
using :: putc ; 
using :: putchar ; 
using :: puts ; 
using :: remove ; 
using :: rename ; 
using :: rewind ; 
using :: scanf ; 
using :: setbuf ; 
using :: setvbuf ; 
using :: sprintf ; 
using :: sscanf ; 
using :: tmpfile ; 

using :: tmpnam ; 

using :: ungetc ; 
using :: vfprintf ; 
using :: vprintf ; 
using :: vsprintf ; 
} 
# 157 "/usr/include/c++/7.1.1/cstdio" 3 
namespace __gnu_cxx 
{ 
# 175 "/usr/include/c++/7.1.1/cstdio" 3 
using :: snprintf ; 
using :: vfscanf ; 
using :: vscanf ; 
using :: vsnprintf ; 
using :: vsscanf ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: snprintf ; 
using :: __gnu_cxx :: vfscanf ; 
using :: __gnu_cxx :: vscanf ; 
using :: __gnu_cxx :: vsnprintf ; 
using :: __gnu_cxx :: vsscanf ; 
} 
# 44 "/usr/include/c++/7.1.1/ext/string_conversions.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cerrno" 1 3 
# 39 "/usr/include/c++/7.1.1/cerrno" 3 

# 40 "/usr/include/c++/7.1.1/cerrno" 3 


# 1 "/usr/include/errno.h" 1 3 4 
# 31 "/usr/include/errno.h" 3 4 
extern "C" { 



# 1 "/usr/include/bits/errno.h" 1 3 4 
# 24 "/usr/include/bits/errno.h" 3 4 
# 1 "/usr/include/linux/errno.h" 1 3 4 
# 1 "/usr/include/asm/errno.h" 1 3 4 
# 1 "/usr/include/asm-generic/errno.h" 1 3 4 



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4 
# 5 "/usr/include/asm-generic/errno.h" 2 3 4 
# 1 "/usr/include/asm/errno.h" 2 3 4 
# 1 "/usr/include/linux/errno.h" 2 3 4 
# 25 "/usr/include/bits/errno.h" 2 3 4 
# 50 "/usr/include/bits/errno.h" 3 4 
extern int * __errno_location ( void ) throw ( ) ; 
# 36 "/usr/include/errno.h" 2 3 4 
# 54 "/usr/include/errno.h" 3 4 
extern char * program_invocation_name , * program_invocation_short_name ; 



} 
# 68 "/usr/include/errno.h" 3 4 
typedef int error_t ; 
# 43 "/usr/include/c++/7.1.1/cerrno" 2 3 
# 45 "/usr/include/c++/7.1.1/ext/string_conversions.h" 2 3 

namespace __gnu_cxx 
{ 



template < typename _TRet , typename _Ret = _TRet , typename _CharT , 
typename ... _Base > 
_Ret 
__stoa ( _TRet ( * __convf ) ( const _CharT * , _CharT ** , _Base ... ) , 
const char * __name , const _CharT * __str , std :: size_t * __idx , 
_Base ... __base ) 
{ __CvT__record_line____(__CvT_miT,101,57);
__CvT__record_line____(__CvT_miT,101,58);_Ret __ret ; 

__CvT__record_line____(__CvT_miT,101,60);_CharT * __endptr ; 

__CvT__record_line____(__CvT_miT,101,62);struct _Save_errno { 
_Save_errno ( ) : _M_errno ( ( * __errno_location ( ) ) ) { __CvT__record_line____(__CvT_miT,101,63);( * __errno_location ( ) ) = 0 ; } 
~ _Save_errno ( ) { __CvT__record_line____(__CvT_miT,101,64);if ( ( * __errno_location ( ) ) == 0 ) {( * __errno_location ( ) ) = _M_errno ; }} 
int _M_errno ; 
} const __save_errno ; 

__CvT__record_line____(__CvT_miT,101,68);struct _Range_chk { 
static bool 
_S_chk ( _TRet , std :: false_type ) { __CvT__record_line____(__CvT_miT,101,70);return false ; } 

static bool 
_S_chk ( _TRet __val , std :: true_type ) 
{ __CvT__record_line____(__CvT_miT,101,74);
__CvT__record_line____(__CvT_miT,101,75);return __val < _TRet ( __numeric_traits < int >:: __min ) 
|| __val > _TRet ( __numeric_traits < int >:: __max ) ; 
} 
} ; 

__CvT__record_line____(__CvT_miT,101,80);const _TRet __tmp = __convf ( __str , & __endptr , __base ... ) ; 

__CvT__record_line____(__CvT_miT,101,82);if ( __endptr == __str ) 
{__CvT__record_line____(__CvT_miT,101,83);std :: __throw_invalid_argument ( __name ) ; 
}else {__CvT__record_line____(__CvT_miT,101,84);if ( ( * __errno_location ( ) ) == 34 
|| _Range_chk :: _S_chk ( __tmp , std :: is_same < _Ret , int > { } ) ) 
{__CvT__record_line____(__CvT_miT,101,86);std :: __throw_out_of_range ( __name ) ; 
}else {
__CvT__record_line____(__CvT_miT,101,88);__ret = __tmp ; 

}}__CvT__record_line____(__CvT_miT,101,90);if ( __idx ) 
{__CvT__record_line____(__CvT_miT,101,91);* __idx = __endptr - __str ; 

}__CvT__record_line____(__CvT_miT,101,93);return __ret ; 
} 


template < typename _String , typename _CharT = typename _String :: value_type > 
_String 
__to_xstring ( int ( * __convf ) ( _CharT * , std :: size_t , const _CharT * , 
__builtin_va_list ) , std :: size_t __n , 
const _CharT * __fmt , ... ) 
{ __CvT__record_line____(__CvT_miT,101,102);


__CvT__record_line____(__CvT_miT,101,105);_CharT * __s = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __n ) ) ; 

__CvT__record_line____(__CvT_miT,101,108);__builtin_va_list __args ; 
__CvT__record_line____(__CvT_miT,101,109);__builtin_va_start ( __args , __fmt ) ; 

__CvT__record_line____(__CvT_miT,101,111);const int __len = __convf ( __s , __n , __fmt , __args ) ; 

__CvT__record_line____(__CvT_miT,101,113);__builtin_va_end ( __args ) ; 

__CvT__record_line____(__CvT_miT,101,115);return _String ( __s , __s + __len ) ; 
} 


} 
# 6160 "/usr/include/c++/7.1.1/bits/basic_string.h" 2 3 

namespace std 
{ 

namespace __cxx11 { 



inline int 
stoi ( const string & __str , size_t * __idx = 0 , int __base = 10 ) 
{ return __gnu_cxx :: __stoa < long , int > ( & std :: strtol , "stoi" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline long 
stol ( const string & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6175);return __gnu_cxx :: __stoa ( & std :: strtol , "stol" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline unsigned long 
stoul ( const string & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6180);return __gnu_cxx :: __stoa ( & std :: strtoul , "stoul" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline long long 
stoll ( const string & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6185);return __gnu_cxx :: __stoa ( & std :: strtoll , "stoll" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline unsigned long long 
stoull ( const string & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6190);return __gnu_cxx :: __stoa ( & std :: strtoull , "stoull" , __str . c_str ( ) , 
__idx , __base ) ; } 


inline float 
stof ( const string & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6196);return __gnu_cxx :: __stoa ( & std :: strtof , "stof" , __str . c_str ( ) , __idx ) ; } 

inline double 
stod ( const string & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6200);return __gnu_cxx :: __stoa ( & std :: strtod , "stod" , __str . c_str ( ) , __idx ) ; } 

inline long double 
stold ( const string & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6204);return __gnu_cxx :: __stoa ( & std :: strtold , "stold" , __str . c_str ( ) , __idx ) ; } 






inline string 
to_string ( int __val ) 
{ __CvT__record_line____(__CvT_miT,78,6213);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 4 * sizeof ( int ) , 
"%d" , __val ) ; } 

inline string 
to_string ( unsigned __val ) 
{ __CvT__record_line____(__CvT_miT,78,6218);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 
4 * sizeof ( unsigned ) , 
"%u" , __val ) ; } 

inline string 
to_string ( long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6224);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 4 * sizeof ( long ) , 
"%ld" , __val ) ; } 

inline string 
to_string ( unsigned long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6229);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 
4 * sizeof ( unsigned long ) , 
"%lu" , __val ) ; } 

inline string 
to_string ( long long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6235);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 
4 * sizeof ( long long ) , 
"%lld" , __val ) ; } 

inline string 
to_string ( unsigned long long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6241);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , 
4 * sizeof ( unsigned long long ) , 
"%llu" , __val ) ; } 

inline string 
to_string ( float __val ) 
{ __CvT__record_line____(__CvT_miT,78,6247);
__CvT__record_line____(__CvT_miT,78,6248);const int __n = 
__gnu_cxx :: __numeric_traits < float >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6250);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , __n , 
"%f" , __val ) ; 
} 

inline string 
to_string ( double __val ) 
{ __CvT__record_line____(__CvT_miT,78,6256);
__CvT__record_line____(__CvT_miT,78,6257);const int __n = 
__gnu_cxx :: __numeric_traits < double >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6259);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , __n , 
"%f" , __val ) ; 
} 

inline string 
to_string ( long double __val ) 
{ __CvT__record_line____(__CvT_miT,78,6265);
__CvT__record_line____(__CvT_miT,78,6266);const int __n = 
__gnu_cxx :: __numeric_traits < long double >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6268);return __gnu_cxx :: __to_xstring < string > ( & std :: vsnprintf , __n , 
"%Lf" , __val ) ; 
} 



inline int 
stoi ( const wstring & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6276);return __gnu_cxx :: __stoa < long , int > ( & std :: wcstol , "stoi" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline long 
stol ( const wstring & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6281);return __gnu_cxx :: __stoa ( & std :: wcstol , "stol" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline unsigned long 
stoul ( const wstring & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6286);return __gnu_cxx :: __stoa ( & std :: wcstoul , "stoul" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline long long 
stoll ( const wstring & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6291);return __gnu_cxx :: __stoa ( & std :: wcstoll , "stoll" , __str . c_str ( ) , 
__idx , __base ) ; } 

inline unsigned long long 
stoull ( const wstring & __str , size_t * __idx = 0 , int __base = 10 ) 
{ __CvT__record_line____(__CvT_miT,78,6296);return __gnu_cxx :: __stoa ( & std :: wcstoull , "stoull" , __str . c_str ( ) , 
__idx , __base ) ; } 


inline float 
stof ( const wstring & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6302);return __gnu_cxx :: __stoa ( & std :: wcstof , "stof" , __str . c_str ( ) , __idx ) ; } 

inline double 
stod ( const wstring & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6306);return __gnu_cxx :: __stoa ( & std :: wcstod , "stod" , __str . c_str ( ) , __idx ) ; } 

inline long double 
stold ( const wstring & __str , size_t * __idx = 0 ) 
{ __CvT__record_line____(__CvT_miT,78,6310);return __gnu_cxx :: __stoa ( & std :: wcstold , "stold" , __str . c_str ( ) , __idx ) ; } 



inline wstring 
to_wstring ( int __val ) 
{ __CvT__record_line____(__CvT_miT,78,6316);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 4 * sizeof ( int ) , 
L "%d" , __val ) ; } 

inline wstring 
to_wstring ( unsigned __val ) 
{ __CvT__record_line____(__CvT_miT,78,6321);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 
4 * sizeof ( unsigned ) , 
L "%u" , __val ) ; } 

inline wstring 
to_wstring ( long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6327);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 4 * sizeof ( long ) , 
L "%ld" , __val ) ; } 

inline wstring 
to_wstring ( unsigned long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6332);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 
4 * sizeof ( unsigned long ) , 
L "%lu" , __val ) ; } 

inline wstring 
to_wstring ( long long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6338);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 
4 * sizeof ( long long ) , 
L "%lld" , __val ) ; } 

inline wstring 
to_wstring ( unsigned long long __val ) 
{ __CvT__record_line____(__CvT_miT,78,6344);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , 
4 * sizeof ( unsigned long long ) , 
L "%llu" , __val ) ; } 

inline wstring 
to_wstring ( float __val ) 
{ __CvT__record_line____(__CvT_miT,78,6350);
__CvT__record_line____(__CvT_miT,78,6351);const int __n = 
__gnu_cxx :: __numeric_traits < float >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6353);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , __n , 
L "%f" , __val ) ; 
} 

inline wstring 
to_wstring ( double __val ) 
{ __CvT__record_line____(__CvT_miT,78,6359);
__CvT__record_line____(__CvT_miT,78,6360);const int __n = 
__gnu_cxx :: __numeric_traits < double >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6362);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , __n , 
L "%f" , __val ) ; 
} 

inline wstring 
to_wstring ( long double __val ) 
{ __CvT__record_line____(__CvT_miT,78,6368);
__CvT__record_line____(__CvT_miT,78,6369);const int __n = 
__gnu_cxx :: __numeric_traits < long double >:: __max_exponent10 + 20 ; 
__CvT__record_line____(__CvT_miT,78,6371);return __gnu_cxx :: __to_xstring < wstring > ( & std :: vswprintf , __n , 
L "%Lf" , __val ) ; 
} 



} 

} 





# 1 "/usr/include/c++/7.1.1/bits/functional_hash.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/functional_hash.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/functional_hash.h" 3 



namespace std 
{ 

# 49 "/usr/include/c++/7.1.1/bits/functional_hash.h" 3 
template < typename _Result , typename _Arg > 
struct __hash_base 
{ 
typedef _Result result_type ; 
typedef _Arg argument_type ; 
} ; 


template < typename _Tp > 
struct hash ; 

template < typename _Tp , typename = void > 
struct __poison_hash 
{ 
static constexpr bool __enable_hash_call = false ; 
private : 

__poison_hash ( __poison_hash && ) ; 
~ __poison_hash ( ) ; 
} ; 

template < typename _Tp > 
struct __poison_hash < _Tp , __void_t < decltype ( hash < _Tp > ( ) ( declval < _Tp > ( ) ) ) >> 
{ 
static constexpr bool __enable_hash_call = true ; 
} ; 


template < typename _Tp , bool = is_enum < _Tp >:: value > 
struct __hash_enum 
{ 
private : 

__hash_enum ( __hash_enum && ) ; 
~ __hash_enum ( ) ; 
} ; 


template < typename _Tp > 
struct __hash_enum < _Tp , true > : public __hash_base < size_t , _Tp > 
{ 
size_t 
operator ( ) ( _Tp __val ) const noexcept 
{ __CvT__record_line____(__CvT_miT,127,92);
using __type = typename underlying_type < _Tp >:: type ; 
__CvT__record_line____(__CvT_miT,127,94);return hash < __type > { } ( static_cast < __type > ( __val ) ) ; 
} 
} ; 



template < typename _Tp > 
struct hash : __hash_enum < _Tp > 
{ } ; 


template < typename _Tp > 
struct hash < _Tp *> : public __hash_base < size_t , _Tp *> 
{ 
size_t 
operator ( ) ( _Tp * __p ) const noexcept 
{ __CvT__record_line____(__CvT_miT,127,110);return reinterpret_cast < size_t > ( __p ) ; } 
} ; 
# 124 "/usr/include/c++/7.1.1/bits/functional_hash.h" 3 
template <> struct hash < bool > : public __hash_base < size_t , bool > { size_t operator ( ) ( bool __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,124);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < char > : public __hash_base < size_t , char > { size_t operator ( ) ( char __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,127);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < signed char > : public __hash_base < size_t , signed char > { size_t operator ( ) ( signed char __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,130);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < unsigned char > : public __hash_base < size_t , unsigned char > { size_t operator ( ) ( unsigned char __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,133);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < wchar_t > : public __hash_base < size_t , wchar_t > { size_t operator ( ) ( wchar_t __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,136);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < char16_t > : public __hash_base < size_t , char16_t > { size_t operator ( ) ( char16_t __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,139);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < char32_t > : public __hash_base < size_t , char32_t > { size_t operator ( ) ( char32_t __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,142);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < short > : public __hash_base < size_t , short > { size_t operator ( ) ( short __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,145);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < int > : public __hash_base < size_t , int > { size_t operator ( ) ( int __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,148);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < long > : public __hash_base < size_t , long > { size_t operator ( ) ( long __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,151);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < long long > : public __hash_base < size_t , long long > { size_t operator ( ) ( long long __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,154);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < unsigned short > : public __hash_base < size_t , unsigned short > { size_t operator ( ) ( unsigned short __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,157);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < unsigned int > : public __hash_base < size_t , unsigned int > { size_t operator ( ) ( unsigned int __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,160);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < unsigned long > : public __hash_base < size_t , unsigned long > { size_t operator ( ) ( unsigned long __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,163);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < unsigned long long > : public __hash_base < size_t , unsigned long long > { size_t operator ( ) ( unsigned long long __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,166);return static_cast < size_t > ( __val ) ; } } ; 


template <> struct hash < __int128 > : public __hash_base < size_t , __int128 > { size_t operator ( ) ( __int128 __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,169);return static_cast < size_t > ( __val ) ; } } ; 
template <> struct hash < __int128 unsigned > : public __hash_base < size_t , __int128 unsigned > { size_t operator ( ) ( __int128 unsigned __val ) const noexcept { __CvT__record_line____(__CvT_miT,127,170);return static_cast < size_t > ( __val ) ; } } ; 
# 187 "/usr/include/c++/7.1.1/bits/functional_hash.h" 3 
struct _Hash_impl 
{ 
static size_t 
hash ( const void * __ptr , size_t __clength , 
size_t __seed = static_cast < size_t > ( 0xc70f6907UL ) ) 
{ __CvT__record_line____(__CvT_miT,127,192);return _Hash_bytes ( __ptr , __clength , __seed ) ; } 

template < typename _Tp > 
static size_t 
hash ( const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,127,197);return hash ( & __val , sizeof ( __val ) ) ; } 

template < typename _Tp > 
static size_t 
__hash_combine ( const _Tp & __val , size_t __hash ) 
{ __CvT__record_line____(__CvT_miT,127,202);return hash ( & __val , sizeof ( __val ) , __hash ) ; } 
} ; 


struct _Fnv_hash_impl 
{ 
static size_t 
hash ( const void * __ptr , size_t __clength , 
size_t __seed = static_cast < size_t > ( 2166136261UL ) ) 
{ __CvT__record_line____(__CvT_miT,127,211);return _Fnv_hash_bytes ( __ptr , __clength , __seed ) ; } 

template < typename _Tp > 
static size_t 
hash ( const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,127,216);return hash ( & __val , sizeof ( __val ) ) ; } 

template < typename _Tp > 
static size_t 
__hash_combine ( const _Tp & __val , size_t __hash ) 
{ __CvT__record_line____(__CvT_miT,127,221);return hash ( & __val , sizeof ( __val ) , __hash ) ; } 
} ; 


template <> 
struct hash < float > : public __hash_base < size_t , float > 
{ 
size_t 
operator ( ) ( float __val ) const noexcept 
{ __CvT__record_line____(__CvT_miT,127,230);

__CvT__record_line____(__CvT_miT,127,232);return __val != 0.0f ? std :: _Hash_impl :: hash ( __val ) : 0 ; 
} 
} ; 


template <> 
struct hash < double > : public __hash_base < size_t , double > 
{ 
size_t 
operator ( ) ( double __val ) const noexcept 
{ __CvT__record_line____(__CvT_miT,127,242);

__CvT__record_line____(__CvT_miT,127,244);return __val != 0.0 ? std :: _Hash_impl :: hash ( __val ) : 0 ; 
} 
} ; 


template <> 
struct hash < long double > 
: public __hash_base < size_t , long double > 
{ 
size_t 
operator ( ) ( long double __val ) const noexcept ; 
} ; 







template < typename _Hash > 
struct __is_fast_hash : public std :: true_type 
{ } ; 

template <> 
struct __is_fast_hash < hash < long double >> : public std :: false_type 
{ } ; 


} 
# 6386 "/usr/include/c++/7.1.1/bits/basic_string.h" 2 3 

namespace std 
{ 






template <> 
struct hash < string > 
: public __hash_base < size_t , string > 
{ 
size_t 
operator ( ) ( const string & __s ) const noexcept 
{ return std :: _Hash_impl :: hash ( __s . data ( ) , __s . length ( ) ) ; } 
} ; 

template <> 
struct __is_fast_hash < hash < string >> : std :: false_type 
{ } ; 



template <> 
struct hash < wstring > 
: public __hash_base < size_t , wstring > 
{ 
size_t 
operator ( ) ( const wstring & __s ) const noexcept 
{ __CvT__record_line____(__CvT_miT,78,6416);return std :: _Hash_impl :: hash ( __s . data ( ) , 
__s . length ( ) * sizeof ( wchar_t ) ) ; } 
} ; 

template <> 
struct __is_fast_hash < hash < wstring >> : std :: false_type 
{ } ; 





template <> 
struct hash < u16string > 
: public __hash_base < size_t , u16string > 
{ 
size_t 
operator ( ) ( const u16string & __s ) const noexcept 
{ __CvT__record_line____(__CvT_miT,78,6434);return std :: _Hash_impl :: hash ( __s . data ( ) , 
__s . length ( ) * sizeof ( char16_t ) ) ; } 
} ; 

template <> 
struct __is_fast_hash < hash < u16string >> : std :: false_type 
{ } ; 


template <> 
struct hash < u32string > 
: public __hash_base < size_t , u32string > 
{ 
size_t 
operator ( ) ( const u32string & __s ) const noexcept 
{ __CvT__record_line____(__CvT_miT,78,6449);return std :: _Hash_impl :: hash ( __s . data ( ) , 
__s . length ( ) * sizeof ( char32_t ) ) ; } 
} ; 

template <> 
struct __is_fast_hash < hash < u32string >> : std :: false_type 
{ } ; 








inline namespace literals 
{ __CvT__record_line____(__CvT_miT,78,6465);
__CvT__record_line____(__CvT_miT,78,6466);inline namespace string_literals 
{ 


__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
inline basic_string < char > 
operator "" s ( const char * __str , size_t __len ) 
{ return basic_string < char > { __str , __len } ; } 


__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
inline basic_string < wchar_t > 
operator "" s ( const wchar_t * __str , size_t __len ) 
{ __CvT__record_line____(__CvT_miT,78,6479);return basic_string < wchar_t > { __str , __len } ; } 



__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
inline basic_string < char16_t > 
operator "" s ( const char16_t * __str , size_t __len ) 
{ __CvT__record_line____(__CvT_miT,78,6486);return basic_string < char16_t > { __str , __len } ; } 

__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
inline basic_string < char32_t > 
operator "" s ( const char32_t * __str , size_t __len ) 
{ __CvT__record_line____(__CvT_miT,78,6491);return basic_string < char32_t > { __str , __len } ; } 



} 
} 



} 
# 53 "/usr/include/c++/7.1.1/string" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/basic_string.tcc" 1 3 
# 42 "/usr/include/c++/7.1.1/bits/basic_string.tcc" 3 

# 43 "/usr/include/c++/7.1.1/bits/basic_string.tcc" 3 



namespace std 
{ 




template < typename _CharT , typename _Traits , typename _Alloc > 
const typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: npos ; 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
swap ( basic_string & __s ) noexcept 
{ __CvT__record_line____(__CvT_miT,128,60);
__CvT__record_line____(__CvT_miT,128,61);if ( this == & __s ) 
{__CvT__record_line____(__CvT_miT,128,62);return ; 

}__CvT__record_line____(__CvT_miT,128,64);_Alloc_traits :: _S_on_swap ( _M_get_allocator ( ) , __s . _M_get_allocator ( ) ) ; 

__CvT__record_line____(__CvT_miT,128,66);if ( _M_is_local ( ) ) 
{__CvT__record_line____(__CvT_miT,128,67);if ( __s . _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,69);if ( length ( ) && __s . length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,71);_CharT __tmp_data [ _S_local_capacity + 1 ] ; 
__CvT__record_line____(__CvT_miT,128,72);traits_type :: copy ( __tmp_data , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,74);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,76);traits_type :: copy ( _M_local_buf , __tmp_data , 
_S_local_capacity + 1 ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,128,79);if ( __s . length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,81);traits_type :: copy ( _M_local_buf , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,83);_M_length ( __s . length ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,84);__s . _M_set_length ( 0 ) ; 
__CvT__record_line____(__CvT_miT,128,85);return ; 
} 
}else {__CvT__record_line____(__CvT_miT,128,87);if ( length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,89);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,91);__s . _M_length ( length ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,92);_M_set_length ( 0 ) ; 
__CvT__record_line____(__CvT_miT,128,93);return ; 
} 
}}}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,128,98);const size_type __tmp_capacity = __s . _M_allocated_capacity ; 
__CvT__record_line____(__CvT_miT,128,99);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,101);_M_data ( __s . _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,102);__s . _M_data ( __s . _M_local_buf ) ; 
__CvT__record_line____(__CvT_miT,128,103);_M_capacity ( __tmp_capacity ) ; 
} 
}}else {
{ 
__CvT__record_line____(__CvT_miT,128,107);const size_type __tmp_capacity = _M_allocated_capacity ; 
__CvT__record_line____(__CvT_miT,128,108);if ( __s . _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,110);traits_type :: copy ( _M_local_buf , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,112);__s . _M_data ( _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,113);_M_data ( _M_local_buf ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,128,117);pointer __tmp_ptr = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,128,118);_M_data ( __s . _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,119);__s . _M_data ( __tmp_ptr ) ; 
__CvT__record_line____(__CvT_miT,128,120);_M_capacity ( __s . _M_allocated_capacity ) ; 
} 
}__CvT__record_line____(__CvT_miT,128,122);__s . _M_capacity ( __tmp_capacity ) ; 
} 

}__CvT__record_line____(__CvT_miT,128,125);const size_type __tmp_length = length ( ) ; 
__CvT__record_line____(__CvT_miT,128,126);_M_length ( __s . length ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,127);__s . _M_length ( __tmp_length ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: pointer 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_create ( size_type & __capacity , size_type __old_capacity ) 
{ __CvT__record_line____(__CvT_miT,128,134);


__CvT__record_line____(__CvT_miT,128,137);if ( __capacity > max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,128,138);std :: __throw_length_error ( ( "basic_string::_M_create" ) ) ; 




}__CvT__record_line____(__CvT_miT,128,143);if ( __capacity > __old_capacity && __capacity < 2 * __old_capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,128,145);__capacity = 2 * __old_capacity ; 

__CvT__record_line____(__CvT_miT,128,147);if ( __capacity > max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,128,148);__capacity = max_size ( ) ; 
}} 



}__CvT__record_line____(__CvT_miT,128,153);return _Alloc_traits :: allocate ( _M_get_allocator ( ) , __capacity + 1 ) ; 
} 





template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: input_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,128,166);
__CvT__record_line____(__CvT_miT,128,167);size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,128,168);size_type __capacity = size_type ( _S_local_capacity ) ; 

__CvT__record_line____(__CvT_miT,128,170);while ( __beg != __end && __len < __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,128,172);_M_data ( ) [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,128,173);++ __beg ; 
} 

}__CvT__record_line____(__CvT_miT,128,176);try 
{ 
__CvT__record_line____(__CvT_miT,128,178);while ( __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,128,180);if ( __len == __capacity ) 
{{ 

__CvT__record_line____(__CvT_miT,128,183);__capacity = __len + 1 ; 
__CvT__record_line____(__CvT_miT,128,184);pointer __another = _M_create ( __capacity , __len ) ; 
__CvT__record_line____(__CvT_miT,128,185);this -> _S_copy ( __another , _M_data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,128,186);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,187);_M_data ( __another ) ; 
__CvT__record_line____(__CvT_miT,128,188);_M_capacity ( __capacity ) ; 
} 
}__CvT__record_line____(__CvT_miT,128,190);_M_data ( ) [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,128,191);++ __beg ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,128,196);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,197);throw ; 
} 

__CvT__record_line____(__CvT_miT,128,200);_M_set_length ( __len ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: forward_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,128,209);

__CvT__record_line____(__CvT_miT,128,211);if ( __gnu_cxx :: __is_null_pointer ( __beg ) && __beg != __end ) 
{__CvT__record_line____(__CvT_miT,128,212);std :: __throw_logic_error ( ( "basic_string::" "_M_construct null not valid" ) 
) ; 

}__CvT__record_line____(__CvT_miT,128,215);size_type __dnew = static_cast < size_type > ( std :: distance ( __beg , __end ) ) ; 

__CvT__record_line____(__CvT_miT,128,217);if ( __dnew > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,219);_M_data ( _M_create ( __dnew , size_type ( 0 ) ) ) ; 
__CvT__record_line____(__CvT_miT,128,220);_M_capacity ( __dnew ) ; 
} 


}__CvT__record_line____(__CvT_miT,128,224);try 
{ __CvT__record_line____(__CvT_miT,128,225);this -> _S_copy_chars ( _M_data ( ) , __beg , __end ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,128,228);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,229);throw ; 
} 

__CvT__record_line____(__CvT_miT,128,232);_M_set_length ( __dnew ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,128,239);
__CvT__record_line____(__CvT_miT,128,240);if ( __n > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,242);_M_data ( _M_create ( __n , size_type ( 0 ) ) ) ; 
__CvT__record_line____(__CvT_miT,128,243);_M_capacity ( __n ) ; 
} 

}__CvT__record_line____(__CvT_miT,128,246);if ( __n ) 
{__CvT__record_line____(__CvT_miT,128,247);this -> _S_assign ( _M_data ( ) , __n , __c ) ; 

}__CvT__record_line____(__CvT_miT,128,249);_M_set_length ( __n ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_assign ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,128,256);
__CvT__record_line____(__CvT_miT,128,257);if ( this != & __str ) 
{{ 
__CvT__record_line____(__CvT_miT,128,259);const size_type __rsize = __str . length ( ) ; 
__CvT__record_line____(__CvT_miT,128,260);const size_type __capacity = capacity ( ) ; 

__CvT__record_line____(__CvT_miT,128,262);if ( __rsize > __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,128,264);size_type __new_capacity = __rsize ; 
__CvT__record_line____(__CvT_miT,128,265);pointer __tmp = _M_create ( __new_capacity , __capacity ) ; 
__CvT__record_line____(__CvT_miT,128,266);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,267);_M_data ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,128,268);_M_capacity ( __new_capacity ) ; 
} 

}__CvT__record_line____(__CvT_miT,128,271);if ( __rsize ) 
{__CvT__record_line____(__CvT_miT,128,272);this -> _S_copy ( _M_data ( ) , __str . _M_data ( ) , __rsize ) ; 

}__CvT__record_line____(__CvT_miT,128,274);_M_set_length ( __rsize ) ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
reserve ( size_type __res ) 
{ __CvT__record_line____(__CvT_miT,128,282);

__CvT__record_line____(__CvT_miT,128,284);if ( __res < length ( ) ) 
{__CvT__record_line____(__CvT_miT,128,285);__res = length ( ) ; 

}__CvT__record_line____(__CvT_miT,128,287);const size_type __capacity = capacity ( ) ; 
__CvT__record_line____(__CvT_miT,128,288);if ( __res != __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,128,290);if ( __res > __capacity 
|| __res > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,293);pointer __tmp = _M_create ( __res , __capacity ) ; 
__CvT__record_line____(__CvT_miT,128,294);this -> _S_copy ( __tmp , _M_data ( ) , length ( ) + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,295);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,296);_M_data ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,128,297);_M_capacity ( __res ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,128,299);if ( ! _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,301);this -> _S_copy ( _M_local_data ( ) , _M_data ( ) , length ( ) + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,302);_M_destroy ( __capacity ) ; 
__CvT__record_line____(__CvT_miT,128,303);_M_data ( _M_local_data ( ) ) ; 
} 
}}} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_mutate ( size_type __pos , size_type __len1 , const _CharT * __s , 
size_type __len2 ) 
{ __CvT__record_line____(__CvT_miT,128,313);
__CvT__record_line____(__CvT_miT,128,314);const size_type __how_much = length ( ) - __pos - __len1 ; 

__CvT__record_line____(__CvT_miT,128,316);size_type __new_capacity = length ( ) + __len2 - __len1 ; 
__CvT__record_line____(__CvT_miT,128,317);pointer __r = _M_create ( __new_capacity , capacity ( ) ) ; 

__CvT__record_line____(__CvT_miT,128,319);if ( __pos ) 
{__CvT__record_line____(__CvT_miT,128,320);this -> _S_copy ( __r , _M_data ( ) , __pos ) ; 
}__CvT__record_line____(__CvT_miT,128,321);if ( __s && __len2 ) 
{__CvT__record_line____(__CvT_miT,128,322);this -> _S_copy ( __r + __pos , __s , __len2 ) ; 
}__CvT__record_line____(__CvT_miT,128,323);if ( __how_much ) 
{__CvT__record_line____(__CvT_miT,128,324);this -> _S_copy ( __r + __pos + __len2 , 
_M_data ( ) + __pos + __len1 , __how_much ) ; 

}__CvT__record_line____(__CvT_miT,128,327);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,128,328);_M_data ( __r ) ; 
__CvT__record_line____(__CvT_miT,128,329);_M_capacity ( __new_capacity ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_erase ( size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,128,336);
__CvT__record_line____(__CvT_miT,128,337);const size_type __how_much = length ( ) - __pos - __n ; 

__CvT__record_line____(__CvT_miT,128,339);if ( __how_much && __n ) 
{__CvT__record_line____(__CvT_miT,128,340);this -> _S_move ( _M_data ( ) + __pos , _M_data ( ) + __pos + __n , __how_much ) ; 

}__CvT__record_line____(__CvT_miT,128,342);_M_set_length ( length ( ) - __n ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
resize ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,128,349);
__CvT__record_line____(__CvT_miT,128,350);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,351);if ( __size < __n ) 
{__CvT__record_line____(__CvT_miT,128,352);this -> append ( __n - __size , __c ) ; 
}else {__CvT__record_line____(__CvT_miT,128,353);if ( __n < __size ) 
{__CvT__record_line____(__CvT_miT,128,354);this -> _M_set_length ( __n ) ; 
}}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_append ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,128,361);
__CvT__record_line____(__CvT_miT,128,362);const size_type __len = __n + this -> size ( ) ; 

__CvT__record_line____(__CvT_miT,128,364);if ( __len <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,366);if ( __n ) 
{__CvT__record_line____(__CvT_miT,128,367);this -> _S_copy ( this -> _M_data ( ) + this -> size ( ) , __s , __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,128,370);this -> _M_mutate ( this -> size ( ) , size_type ( 0 ) , __s , __n ) ; 

}__CvT__record_line____(__CvT_miT,128,372);this -> _M_set_length ( __len ) ; 
__CvT__record_line____(__CvT_miT,128,373);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InputIterator > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 , 
std :: __false_type ) 
{ __CvT__record_line____(__CvT_miT,128,383);
__CvT__record_line____(__CvT_miT,128,384);const basic_string __s ( __k1 , __k2 ) ; 
__CvT__record_line____(__CvT_miT,128,385);const size_type __n1 = __i2 - __i1 ; 
__CvT__record_line____(__CvT_miT,128,386);return _M_replace ( __i1 - begin ( ) , __n1 , __s . _M_data ( ) , 
__s . size ( ) ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) 
{ __CvT__record_line____(__CvT_miT,128,395);
__CvT__record_line____(__CvT_miT,128,396);_M_check_length ( __n1 , __n2 , "basic_string::_M_replace_aux" ) ; 

__CvT__record_line____(__CvT_miT,128,398);const size_type __old_size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,399);const size_type __new_size = __old_size + __n2 - __n1 ; 

__CvT__record_line____(__CvT_miT,128,401);if ( __new_size <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,403);pointer __p = this -> _M_data ( ) + __pos1 ; 

__CvT__record_line____(__CvT_miT,128,405);const size_type __how_much = __old_size - __pos1 - __n1 ; 
__CvT__record_line____(__CvT_miT,128,406);if ( __how_much && __n1 != __n2 ) 
{__CvT__record_line____(__CvT_miT,128,407);this -> _S_move ( __p + __n2 , __p + __n1 , __how_much ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,128,410);this -> _M_mutate ( __pos1 , __n1 , 0 , __n2 ) ; 

}__CvT__record_line____(__CvT_miT,128,412);if ( __n2 ) 
{__CvT__record_line____(__CvT_miT,128,413);this -> _S_assign ( this -> _M_data ( ) + __pos1 , __n2 , __c ) ; 

}__CvT__record_line____(__CvT_miT,128,415);this -> _M_set_length ( __new_size ) ; 
__CvT__record_line____(__CvT_miT,128,416);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace ( size_type __pos , size_type __len1 , const _CharT * __s , 
const size_type __len2 ) 
{ __CvT__record_line____(__CvT_miT,128,424);
__CvT__record_line____(__CvT_miT,128,425);_M_check_length ( __len1 , __len2 , "basic_string::_M_replace" ) ; 

__CvT__record_line____(__CvT_miT,128,427);const size_type __old_size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,428);const size_type __new_size = __old_size + __len2 - __len1 ; 

__CvT__record_line____(__CvT_miT,128,430);if ( __new_size <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,432);pointer __p = this -> _M_data ( ) + __pos ; 

__CvT__record_line____(__CvT_miT,128,434);const size_type __how_much = __old_size - __pos - __len1 ; 
__CvT__record_line____(__CvT_miT,128,435);if ( _M_disjunct ( __s ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,437);if ( __how_much && __len1 != __len2 ) 
{__CvT__record_line____(__CvT_miT,128,438);this -> _S_move ( __p + __len2 , __p + __len1 , __how_much ) ; 
}__CvT__record_line____(__CvT_miT,128,439);if ( __len2 ) 
{__CvT__record_line____(__CvT_miT,128,440);this -> _S_copy ( __p , __s , __len2 ) ; 
}} 
}else {
{ 

__CvT__record_line____(__CvT_miT,128,445);if ( __len2 && __len2 <= __len1 ) 
{__CvT__record_line____(__CvT_miT,128,446);this -> _S_move ( __p , __s , __len2 ) ; 
}__CvT__record_line____(__CvT_miT,128,447);if ( __how_much && __len1 != __len2 ) 
{__CvT__record_line____(__CvT_miT,128,448);this -> _S_move ( __p + __len2 , __p + __len1 , __how_much ) ; 
}__CvT__record_line____(__CvT_miT,128,449);if ( __len2 > __len1 ) 
{{ 
__CvT__record_line____(__CvT_miT,128,451);if ( __s + __len2 <= __p + __len1 ) 
{__CvT__record_line____(__CvT_miT,128,452);this -> _S_move ( __p , __s , __len2 ) ; 
}else {__CvT__record_line____(__CvT_miT,128,453);if ( __s >= __p + __len1 ) 
{__CvT__record_line____(__CvT_miT,128,454);this -> _S_copy ( __p , __s + __len2 - __len1 , __len2 ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,128,457);const size_type __nleft = ( __p + __len1 ) - __s ; 
__CvT__record_line____(__CvT_miT,128,458);this -> _S_move ( __p , __s , __nleft ) ; 
__CvT__record_line____(__CvT_miT,128,459);this -> _S_copy ( __p + __nleft , __p + __len2 , 
__len2 - __nleft ) ; 
} 
}}} 
}} 
}} 
}else {
__CvT__record_line____(__CvT_miT,128,466);this -> _M_mutate ( __pos , __len1 , __s , __len2 ) ; 

}__CvT__record_line____(__CvT_miT,128,468);this -> _M_set_length ( __new_size ) ; 
__CvT__record_line____(__CvT_miT,128,469);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
copy ( _CharT * __s , size_type __n , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,128,476);
__CvT__record_line____(__CvT_miT,128,477);_M_check ( __pos , "basic_string::copy" ) ; 
__CvT__record_line____(__CvT_miT,128,478);__n = _M_limit ( __pos , __n ) ; 
; 
__CvT__record_line____(__CvT_miT,128,480);if ( __n ) 
{__CvT__record_line____(__CvT_miT,128,481);_S_copy ( __s , _M_data ( ) + __pos , __n ) ; 

}__CvT__record_line____(__CvT_miT,128,483);return __n ; 
} 
# 1155 "/usr/include/c++/7.1.1/bits/basic_string.tcc" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,128,1159);
; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,128,1163);const __size_type __len = _Traits :: length ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,128,1164);__string_type __str ; 
__CvT__record_line____(__CvT_miT,128,1165);__str . reserve ( __len + __rhs . size ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,1166);__str . append ( __lhs , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1167);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,128,1168);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,128,1174);
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,128,1177);__string_type __str ; 
__CvT__record_line____(__CvT_miT,128,1178);const __size_type __len = __rhs . size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1179);__str . reserve ( __len + 1 ) ; 
__CvT__record_line____(__CvT_miT,128,1180);__str . append ( __size_type ( 1 ) , __lhs ) ; 
__CvT__record_line____(__CvT_miT,128,1181);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,128,1182);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1190);
; 
__CvT__record_line____(__CvT_miT,128,1192);const size_type __size = this -> size ( ) ; 

__CvT__record_line____(__CvT_miT,128,1194);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,128,1195);return __pos <= __size ? __pos : npos ; 
}__CvT__record_line____(__CvT_miT,128,1196);if ( __pos >= __size ) 
{__CvT__record_line____(__CvT_miT,128,1197);return npos ; 

}__CvT__record_line____(__CvT_miT,128,1199);const _CharT __elem0 = __s [ 0 ] ; 
__CvT__record_line____(__CvT_miT,128,1200);const _CharT * const __data = data ( ) ; 
__CvT__record_line____(__CvT_miT,128,1201);const _CharT * __first = __data + __pos ; 
__CvT__record_line____(__CvT_miT,128,1202);const _CharT * const __last = __data + __size ; 
__CvT__record_line____(__CvT_miT,128,1203);size_type __len = __size - __pos ; 

__CvT__record_line____(__CvT_miT,128,1205);while ( __len >= __n ) 
{{ 

__CvT__record_line____(__CvT_miT,128,1208);__first = traits_type :: find ( __first , __len - __n + 1 , __elem0 ) ; 
__CvT__record_line____(__CvT_miT,128,1209);if ( ! __first ) 
{__CvT__record_line____(__CvT_miT,128,1210);return npos ; 



}__CvT__record_line____(__CvT_miT,128,1214);if ( traits_type :: compare ( __first , __s , __n ) == 0 ) 
{__CvT__record_line____(__CvT_miT,128,1215);return __first - __data ; 
}__CvT__record_line____(__CvT_miT,128,1216);__len = __last - ++ __first ; 
} 
}__CvT__record_line____(__CvT_miT,128,1218);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( _CharT __c , size_type __pos ) const noexcept 
{ __CvT__record_line____(__CvT_miT,128,1225);
__CvT__record_line____(__CvT_miT,128,1226);size_type __ret = npos ; 
__CvT__record_line____(__CvT_miT,128,1227);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1228);if ( __pos < __size ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1230);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,128,1231);const size_type __n = __size - __pos ; 
__CvT__record_line____(__CvT_miT,128,1232);const _CharT * __p = traits_type :: find ( __data + __pos , __n , __c ) ; 
__CvT__record_line____(__CvT_miT,128,1233);if ( __p ) 
{__CvT__record_line____(__CvT_miT,128,1234);__ret = __p - __data ; 
}} 
}__CvT__record_line____(__CvT_miT,128,1236);return __ret ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1244);
; 
__CvT__record_line____(__CvT_miT,128,1246);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1247);if ( __n <= __size ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1249);__pos = std :: min ( size_type ( __size - __n ) , __pos ) ; 
__CvT__record_line____(__CvT_miT,128,1250);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,128,1251);do {
{ 
__CvT__record_line____(__CvT_miT,128,1253);if ( traits_type :: compare ( __data + __pos , __s , __n ) == 0 ) 
{__CvT__record_line____(__CvT_miT,128,1254);return __pos ; 
}} 
}while ( __pos -- > 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,128,1258);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( _CharT __c , size_type __pos ) const noexcept 
{ __CvT__record_line____(__CvT_miT,128,1265);
__CvT__record_line____(__CvT_miT,128,1266);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1267);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1269);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,128,1270);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,128,1271);for ( ++ __size ; __size -- > 0 ; ) 
{__CvT__record_line____(__CvT_miT,128,1272);if ( traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,128,1273);return __size ; 
}}} 
}__CvT__record_line____(__CvT_miT,128,1275);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1283);
; 
__CvT__record_line____(__CvT_miT,128,1285);for ( ; __n && __pos < this -> size ( ) ; ++ __pos ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1287);const _CharT * __p = traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ; 
__CvT__record_line____(__CvT_miT,128,1288);if ( __p ) 
{__CvT__record_line____(__CvT_miT,128,1289);return __pos ; 
}} 
}__CvT__record_line____(__CvT_miT,128,1291);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1299);
; 
__CvT__record_line____(__CvT_miT,128,1301);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1302);if ( __size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1304);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,128,1305);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,128,1306);do {
{ 
__CvT__record_line____(__CvT_miT,128,1308);if ( traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,128,1309);return __size ; 
}} 
}while ( __size -- != 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,128,1313);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1321);
; 
__CvT__record_line____(__CvT_miT,128,1323);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,128,1324);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ) 
{__CvT__record_line____(__CvT_miT,128,1325);return __pos ; 
}}__CvT__record_line____(__CvT_miT,128,1326);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( _CharT __c , size_type __pos ) const noexcept 
{ __CvT__record_line____(__CvT_miT,128,1333);
__CvT__record_line____(__CvT_miT,128,1334);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,128,1335);if ( ! traits_type :: eq ( _M_data ( ) [ __pos ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,128,1336);return __pos ; 
}}__CvT__record_line____(__CvT_miT,128,1337);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
noexcept 
{ __CvT__record_line____(__CvT_miT,128,1345);
; 
__CvT__record_line____(__CvT_miT,128,1347);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1348);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1350);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,128,1351);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,128,1352);do {
{ 
__CvT__record_line____(__CvT_miT,128,1354);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,128,1355);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,128,1359);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( _CharT __c , size_type __pos ) const noexcept 
{ __CvT__record_line____(__CvT_miT,128,1366);
__CvT__record_line____(__CvT_miT,128,1367);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1368);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1370);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,128,1371);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,128,1372);do {
{ 
__CvT__record_line____(__CvT_miT,128,1374);if ( ! traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,128,1375);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,128,1379);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const 
{ __CvT__record_line____(__CvT_miT,128,1386);
__CvT__record_line____(__CvT_miT,128,1387);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,128,1388);__n = _M_limit ( __pos , __n ) ; 
__CvT__record_line____(__CvT_miT,128,1389);const size_type __osize = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1390);const size_type __len = std :: min ( __n , __osize ) ; 
__CvT__record_line____(__CvT_miT,128,1391);int __r = traits_type :: compare ( _M_data ( ) + __pos , __str . data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1392);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,128,1393);__r = _S_compare ( __n , __osize ) ; 
}__CvT__record_line____(__CvT_miT,128,1394);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,128,1402);
__CvT__record_line____(__CvT_miT,128,1403);_M_check ( __pos1 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,128,1404);__str . _M_check ( __pos2 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,128,1405);__n1 = _M_limit ( __pos1 , __n1 ) ; 
__CvT__record_line____(__CvT_miT,128,1406);__n2 = __str . _M_limit ( __pos2 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,128,1407);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,128,1408);int __r = traits_type :: compare ( _M_data ( ) + __pos1 , 
__str . data ( ) + __pos2 , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1410);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,128,1411);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,128,1412);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( const _CharT * __s ) const noexcept 
{ __CvT__record_line____(__CvT_miT,128,1419);
; 
__CvT__record_line____(__CvT_miT,128,1421);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1422);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,128,1423);const size_type __len = std :: min ( __size , __osize ) ; 
__CvT__record_line____(__CvT_miT,128,1424);int __r = traits_type :: compare ( _M_data ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1425);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,128,1426);__r = _S_compare ( __size , __osize ) ; 
}__CvT__record_line____(__CvT_miT,128,1427);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,128,1434);
; 
__CvT__record_line____(__CvT_miT,128,1436);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,128,1437);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,128,1438);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,128,1439);const size_type __len = std :: min ( __n1 , __osize ) ; 
__CvT__record_line____(__CvT_miT,128,1440);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1441);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,128,1442);__r = _S_compare ( __n1 , __osize ) ; 
}__CvT__record_line____(__CvT_miT,128,1443);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,128,1451);
; 
__CvT__record_line____(__CvT_miT,128,1453);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,128,1454);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,128,1455);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,128,1456);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,128,1457);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,128,1458);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,128,1459);return __r ; 
} 


template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,128,1467);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 
typedef ctype < _CharT > __ctype_type ; 
typedef typename __ctype_type :: ctype_base __ctype_base ; 

__CvT__record_line____(__CvT_miT,128,1476);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,128,1477);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,128,1478);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,128,1479);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1481);try 
{ 

__CvT__record_line____(__CvT_miT,128,1484);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,128,1485);_CharT __buf [ 128 ] ; 
__CvT__record_line____(__CvT_miT,128,1486);__size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,128,1487);const streamsize __w = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,128,1488);const __size_type __n = __w > 0 ? static_cast < __size_type > ( __w ) 
: __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1490);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,128,1491);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,128,1492);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,128,1494);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( __ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1499);if ( __len == sizeof ( __buf ) / sizeof ( _CharT ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1501);__str . append ( __buf , sizeof ( __buf ) / sizeof ( _CharT ) ) ; 
__CvT__record_line____(__CvT_miT,128,1502);__len = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,128,1504);__buf [ __len ++ ] = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,128,1505);++ __extracted ; 
__CvT__record_line____(__CvT_miT,128,1506);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,128,1508);__str . append ( __buf , __len ) ; 

__CvT__record_line____(__CvT_miT,128,1510);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,128,1511);__err |= __ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,128,1512);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,128,1516);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,128,1517);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,128,1524);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 

}__CvT__record_line____(__CvT_miT,128,1528);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,128,1529);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,128,1530);if ( __err ) 
{__CvT__record_line____(__CvT_miT,128,1531);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,128,1532);return __in ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) 
{ __CvT__record_line____(__CvT_miT,128,1539);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 

__CvT__record_line____(__CvT_miT,128,1546);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,128,1547);const __size_type __n = __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,128,1548);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,128,1549);typename __istream_type :: sentry __cerb ( __in , true ) ; 
__CvT__record_line____(__CvT_miT,128,1550);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1552);try 
{ 
__CvT__record_line____(__CvT_miT,128,1554);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,128,1555);const __int_type __idelim = _Traits :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,128,1556);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,128,1557);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,128,1559);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1563);__str += _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,128,1564);++ __extracted ; 
__CvT__record_line____(__CvT_miT,128,1565);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 

}__CvT__record_line____(__CvT_miT,128,1568);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,128,1569);__err |= __ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,128,1570);if ( _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,128,1572);++ __extracted ; 
__CvT__record_line____(__CvT_miT,128,1573);__in . rdbuf ( ) -> sbumpc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,128,1576);__err |= __ios_base :: failbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,128,1580);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,128,1581);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,128,1588);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 
}__CvT__record_line____(__CvT_miT,128,1591);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,128,1592);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,128,1593);if ( __err ) 
{__CvT__record_line____(__CvT_miT,128,1594);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,128,1595);return __in ; 
} 




extern template class basic_string < char > ; 
extern template 
basic_istream < char >& 
operator >> ( basic_istream < char >& , string & ) ; 
extern template 
basic_ostream < char >& 
operator << ( basic_ostream < char >& , const string & ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & , char ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & ) ; 


extern template class basic_string < wchar_t > ; 
extern template 
basic_istream < wchar_t >& 
operator >> ( basic_istream < wchar_t >& , wstring & ) ; 
extern template 
basic_ostream < wchar_t >& 
operator << ( basic_ostream < wchar_t >& , const wstring & ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & , wchar_t ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & ) ; 




} 
# 54 "/usr/include/c++/7.1.1/string" 2 3 
# 2 "hard.c" 2 
# 1 "/usr/include/c++/7.1.1/fstream" 1 3 
# 36 "/usr/include/c++/7.1.1/fstream" 3 

# 37 "/usr/include/c++/7.1.1/fstream" 3 

# 1 "/usr/include/c++/7.1.1/istream" 1 3 
# 36 "/usr/include/c++/7.1.1/istream" 3 

# 37 "/usr/include/c++/7.1.1/istream" 3 

# 1 "/usr/include/c++/7.1.1/ios" 1 3 
# 36 "/usr/include/c++/7.1.1/ios" 3 

# 37 "/usr/include/c++/7.1.1/ios" 3 





# 1 "/usr/include/c++/7.1.1/bits/ios_base.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 



# 1 "/usr/include/c++/7.1.1/bits/locale_classes.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 





namespace std 
{ 

# 62 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
class locale 
{ 
public : 


typedef int category ; 


class facet ; 
class id ; 
class _Impl ; 

friend class facet ; 
friend class _Impl ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 
# 98 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
static const category none = 0 ; 
static const category ctype = 1L << 0 ; 
static const category numeric = 1L << 1 ; 
static const category collate = 1L << 2 ; 
static const category time = 1L << 3 ; 
static const category monetary = 1L << 4 ; 
static const category messages = 1L << 5 ; 
static const category all = ( ctype | numeric | collate | 
time | monetary | messages ) ; 
# 117 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
locale ( ) throw ( ) ; 
# 126 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
locale ( const locale & __other ) throw ( ) ; 
# 136 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
explicit 
locale ( const char * __s ) ; 
# 151 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
locale ( const locale & __base , const char * __s , category __cat ) ; 
# 162 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
explicit 
locale ( const std :: string & __s ) : locale ( __s . c_str ( ) ) { __CvT__record_line____(__CvT_miT,133,163);} 
# 177 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
locale ( const locale & __base , const std :: string & __s , category __cat ) 
: locale ( __base , __s . c_str ( ) , __cat ) { __CvT__record_line____(__CvT_miT,133,178);} 
# 192 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
locale ( const locale & __base , const locale & __add , category __cat ) ; 
# 205 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
template < typename _Facet > 
locale ( const locale & __other , _Facet * __f ) ; 


~ locale ( ) throw ( ) ; 
# 219 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
const locale & 
operator = ( const locale & __other ) throw ( ) ; 
# 234 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
template < typename _Facet > 
locale 
combine ( const locale & __other ) const ; 






__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
string 
name ( ) const ; 
# 254 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
bool 
operator == ( const locale & __other ) const throw ( ) ; 







bool 
operator != ( const locale & __other ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,133,265);return ! ( this -> operator == ( __other ) ) ; } 
# 282 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
template < typename _Char , typename _Traits , typename _Alloc > 
bool 
operator ( ) ( const basic_string < _Char , _Traits , _Alloc >& __s1 , 
const basic_string < _Char , _Traits , _Alloc >& __s2 ) const ; 
# 298 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
static locale 
global ( const locale & __loc ) ; 




static const locale & 
classic ( ) ; 

private : 

_Impl * _M_impl ; 


static _Impl * _S_classic ; 


static _Impl * _S_global ; 





static const char * const * const _S_categories ; 
# 333 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
enum { _S_categories_size = 6 + 6 } ; 


static __gthread_once_t _S_once ; 


explicit 
locale ( _Impl * ) throw ( ) ; 

static void 
_S_initialize ( ) ; 

static void 
_S_initialize_once ( ) throw ( ) ; 

static category 
_S_normalize_category ( category ) ; 

void 
_M_coalesce ( const locale & __base , const locale & __add , category __cat ) ; 


static const id * const _S_twinned_facets [ ] ; 

} ; 
# 371 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
class locale :: facet 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

mutable _Atomic_word _M_refcount ; 


static __c_locale _S_c_locale ; 


static const char _S_c_name [ 2 ] ; 


static __gthread_once_t _S_once ; 


static void 
_S_initialize_once ( ) ; 

protected : 
# 402 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
explicit 
facet ( size_t __refs = 0 ) throw ( ) : _M_refcount ( __refs ? 1 : 0 ) 
{ __CvT__record_line____(__CvT_miT,133,404);} 


virtual 
~ facet ( ) ; 

static void 
_S_create_c_locale ( __c_locale & __cloc , const char * __s , 
__c_locale __old = 0 ) ; 

static __c_locale 
_S_clone_c_locale ( __c_locale & __cloc ) throw ( ) ; 

static void 
_S_destroy_c_locale ( __c_locale & __cloc ) ; 

static __c_locale 
_S_lc_ctype_c_locale ( __c_locale __cloc , const char * __s ) ; 



static __c_locale 
_S_get_c_locale ( ) ; 

static const char * 
_S_get_c_name ( ) throw ( ) ; 
# 438 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
facet ( const facet & ) = delete ; 

facet & 
operator = ( const facet & ) = delete ; 


private : 
void 
_M_add_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,133,447);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,133,451);

; 
__CvT__record_line____(__CvT_miT,133,454);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,133,457);try 
{ __CvT__record_line____(__CvT_miT,133,458);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

const facet * _M_sso_shim ( const id * ) const ; 
const facet * _M_cow_shim ( const id * ) const ; 

protected : 
class __shim ; 
} ; 
# 483 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
class locale :: id 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 




mutable size_t _M_index ; 


static _Atomic_word _S_refcount ; 

void 
operator = ( const id & ) ; 

id ( const id & ) ; 

public : 



id ( ) { __CvT__record_line____(__CvT_miT,133,514);} 

size_t 
_M_id ( ) const throw ( ) ; 
} ; 



class locale :: _Impl 
{ 
public : 

friend class locale ; 
friend class locale :: facet ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 

private : 

_Atomic_word _M_refcount ; 
const facet ** _M_facets ; 
size_t _M_facets_size ; 
const facet ** _M_caches ; 
char ** _M_names ; 
static const locale :: id * const _S_id_ctype [ ] ; 
static const locale :: id * const _S_id_numeric [ ] ; 
static const locale :: id * const _S_id_collate [ ] ; 
static const locale :: id * const _S_id_time [ ] ; 
static const locale :: id * const _S_id_monetary [ ] ; 
static const locale :: id * const _S_id_messages [ ] ; 
static const locale :: id * const * const _S_facet_categories [ ] ; 

void 
_M_add_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,133,557);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,133,561);

; 
__CvT__record_line____(__CvT_miT,133,564);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,133,567);try 
{ __CvT__record_line____(__CvT_miT,133,568);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

_Impl ( const _Impl & , size_t ) ; 
_Impl ( const char * , size_t ) ; 
_Impl ( size_t ) throw ( ) ; 

~ _Impl ( ) throw ( ) ; 

_Impl ( const _Impl & ) ; 

void 
operator = ( const _Impl & ) ; 

bool 
_M_check_same_name ( ) 
{ __CvT__record_line____(__CvT_miT,133,587);
__CvT__record_line____(__CvT_miT,133,588);bool __ret = true ; 
__CvT__record_line____(__CvT_miT,133,589);if ( _M_names [ 1 ] ) 

{__CvT__record_line____(__CvT_miT,133,591);for ( size_t __i = 0 ; __ret && __i < _S_categories_size - 1 ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,133,592);__ret = __builtin_strcmp ( _M_names [ __i ] , _M_names [ __i + 1 ] ) == 0 ; 
}}__CvT__record_line____(__CvT_miT,133,593);return __ret ; 
} 

void 
_M_replace_categories ( const _Impl * , category ) ; 

void 
_M_replace_category ( const _Impl * , const locale :: id * const * ) ; 

void 
_M_replace_facet ( const _Impl * , const locale :: id * ) ; 

void 
_M_install_facet ( const locale :: id * , const facet * ) ; 

template < typename _Facet > 
void 
_M_init_facet ( _Facet * __facet ) 
{ __CvT__record_line____(__CvT_miT,133,611);_M_install_facet ( & _Facet :: id , __facet ) ; } 

template < typename _Facet > 
void 
_M_init_facet_unchecked ( _Facet * __facet ) 
{ __CvT__record_line____(__CvT_miT,133,616);
__CvT__record_line____(__CvT_miT,133,617);__facet -> _M_add_reference ( ) ; 
__CvT__record_line____(__CvT_miT,133,618);_M_facets [ _Facet :: id . _M_id ( ) ] = __facet ; 
} 

void 
_M_install_cache ( const facet * , size_t ) ; 

void _M_init_extra ( facet ** ) ; 
void _M_init_extra ( void * , void * , const char * , const char * ) ; 
} ; 
# 641 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
template < typename _CharT > 
class __cxx11 :: collate : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


protected : 


__c_locale _M_c_locale_collate ; 

public : 

static locale :: id id ; 
# 668 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
explicit 
collate ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_get_c_locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,133,671);} 
# 682 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
explicit 
collate ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_clone_c_locale ( __cloc ) ) 
{ __CvT__record_line____(__CvT_miT,133,685);} 
# 699 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
int 
compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,133,702);return this -> do_compare ( __lo1 , __hi1 , __lo2 , __hi2 ) ; } 
# 718 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
string_type 
transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,133,720);return this -> do_transform ( __lo , __hi ) ; } 
# 732 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
long 
hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,133,734);return this -> do_hash ( __lo , __hi ) ; } 


int 
_M_compare ( const _CharT * , const _CharT * ) const throw ( ) ; 

size_t 
_M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) ; 

protected : 

virtual 
~ collate ( ) 
{ __CvT__record_line____(__CvT_miT,133,747);_S_destroy_c_locale ( _M_c_locale_collate ) ; } 
# 761 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
virtual int 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const ; 
# 775 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
virtual string_type 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const ; 
# 788 "/usr/include/c++/7.1.1/bits/locale_classes.h" 3 
virtual long 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const ; 
} ; 

template < typename _CharT > 
locale :: id collate < _CharT >:: id ; 


template <> 
int 
collate < char >:: _M_compare ( const char * , const char * ) const throw ( ) ; 

template <> 
size_t 
collate < char >:: _M_transform ( char * , const char * , size_t ) const throw ( ) ; 


template <> 
int 
collate < wchar_t >:: _M_compare ( const wchar_t * , const wchar_t * ) const throw ( ) ; 

template <> 
size_t 
collate < wchar_t >:: _M_transform ( wchar_t * , const wchar_t * , size_t ) const throw ( ) ; 



template < typename _CharT > 
class __cxx11 :: collate_byname : public collate < _CharT > 
{ 
public : 


typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


explicit 
collate_byname ( const char * __s , size_t __refs = 0 ) 
: collate < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,133,828);
__CvT__record_line____(__CvT_miT,133,829);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,133,832);this -> _S_destroy_c_locale ( this -> _M_c_locale_collate ) ; 
__CvT__record_line____(__CvT_miT,133,833);this -> _S_create_c_locale ( this -> _M_c_locale_collate , __s ) ; 
} 
}} 


explicit 
collate_byname ( const string & __s , size_t __refs = 0 ) 
: collate_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,133,840);} 


protected : 
virtual 
~ collate_byname ( ) { __CvT__record_line____(__CvT_miT,133,845);} 
} ; 


} 

# 1 "/usr/include/c++/7.1.1/bits/locale_classes.tcc" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/locale_classes.tcc" 3 

# 38 "/usr/include/c++/7.1.1/bits/locale_classes.tcc" 3 

namespace std 
{ 


template < typename _Facet > 
locale :: 
locale ( const locale & __other , _Facet * __f ) 
{ __CvT__record_line____(__CvT_miT,134,46);
__CvT__record_line____(__CvT_miT,134,47);_M_impl = new _Impl ( * __other . _M_impl , 1 ) ; 

__CvT__record_line____(__CvT_miT,134,49);try 
{ __CvT__record_line____(__CvT_miT,134,50);_M_impl -> _M_install_facet ( & _Facet :: id , __f ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,134,53);_M_impl -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,134,54);throw ; 
} 
__CvT__record_line____(__CvT_miT,134,56);delete [ ] _M_impl -> _M_names [ 0 ] ; 
__CvT__record_line____(__CvT_miT,134,57);_M_impl -> _M_names [ 0 ] = 0 ; 
} 

template < typename _Facet > 
locale 
locale :: 
combine ( const locale & __other ) const 
{ __CvT__record_line____(__CvT_miT,134,64);
__CvT__record_line____(__CvT_miT,134,65);_Impl * __tmp = new _Impl ( * _M_impl , 1 ) ; 
__CvT__record_line____(__CvT_miT,134,66);try 
{ 
__CvT__record_line____(__CvT_miT,134,68);__tmp -> _M_replace_facet ( __other . _M_impl , & _Facet :: id ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,134,72);__tmp -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,134,73);throw ; 
} 
__CvT__record_line____(__CvT_miT,134,75);return locale ( __tmp ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
bool 
locale :: 
operator ( ) ( const basic_string < _CharT , _Traits , _Alloc >& __s1 , 
const basic_string < _CharT , _Traits , _Alloc >& __s2 ) const 
{ __CvT__record_line____(__CvT_miT,134,83);
typedef std :: collate < _CharT > __collate_type ; 
__CvT__record_line____(__CvT_miT,134,85);const __collate_type & __collate = use_facet < __collate_type > ( * this ) ; 
__CvT__record_line____(__CvT_miT,134,86);return ( __collate . compare ( __s1 . data ( ) , __s1 . data ( ) + __s1 . length ( ) , 
__s2 . data ( ) , __s2 . data ( ) + __s2 . length ( ) ) < 0 ) ; 
} 
# 102 "/usr/include/c++/7.1.1/bits/locale_classes.tcc" 3 
template < typename _Facet > 
bool 
has_facet ( const locale & __loc ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,134,105);
__CvT__record_line____(__CvT_miT,134,106);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,134,107);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,134,108);return ( __i < __loc . _M_impl -> _M_facets_size 

&& dynamic_cast < const _Facet *> ( __facets [ __i ] ) ) ; 



} 
# 130 "/usr/include/c++/7.1.1/bits/locale_classes.tcc" 3 
template < typename _Facet > 
const _Facet & 
use_facet ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,134,133);
__CvT__record_line____(__CvT_miT,134,134);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,134,135);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,134,136);if ( __i >= __loc . _M_impl -> _M_facets_size || ! __facets [ __i ] ) 
{__CvT__record_line____(__CvT_miT,134,137);__throw_bad_cast ( ) ; 

}__CvT__record_line____(__CvT_miT,134,139);return dynamic_cast < const _Facet &> ( * __facets [ __i ] ) ; 



} 



template < typename _CharT > 
int 
collate < _CharT >:: _M_compare ( const _CharT * , const _CharT * ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,134,150);return 0 ; } 


template < typename _CharT > 
size_t 
collate < _CharT >:: _M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,134,156);return 0 ; } 

template < typename _CharT > 
int 
collate < _CharT >:: 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,134,163);


__CvT__record_line____(__CvT_miT,134,166);const string_type __one ( __lo1 , __hi1 ) ; 
__CvT__record_line____(__CvT_miT,134,167);const string_type __two ( __lo2 , __hi2 ) ; 

__CvT__record_line____(__CvT_miT,134,169);const _CharT * __p = __one . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,134,170);const _CharT * __pend = __one . data ( ) + __one . length ( ) ; 
__CvT__record_line____(__CvT_miT,134,171);const _CharT * __q = __two . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,134,172);const _CharT * __qend = __two . data ( ) + __two . length ( ) ; 




__CvT__record_line____(__CvT_miT,134,177);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,134,179);const int __res = _M_compare ( __p , __q ) ; 
__CvT__record_line____(__CvT_miT,134,180);if ( __res ) 
{__CvT__record_line____(__CvT_miT,134,181);return __res ; 

}__CvT__record_line____(__CvT_miT,134,183);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,134,184);__q += char_traits < _CharT >:: length ( __q ) ; 
__CvT__record_line____(__CvT_miT,134,185);if ( __p == __pend && __q == __qend ) 
{__CvT__record_line____(__CvT_miT,134,186);return 0 ; 
}else {__CvT__record_line____(__CvT_miT,134,187);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,134,188);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,134,189);if ( __q == __qend ) 
{__CvT__record_line____(__CvT_miT,134,190);return 1 ; 

}}}__CvT__record_line____(__CvT_miT,134,192);__p ++ ; 
__CvT__record_line____(__CvT_miT,134,193);__q ++ ; 
} 
}} 

template < typename _CharT > 
typename collate < _CharT >:: string_type 
collate < _CharT >:: 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,134,201);
__CvT__record_line____(__CvT_miT,134,202);string_type __ret ; 


__CvT__record_line____(__CvT_miT,134,205);const string_type __str ( __lo , __hi ) ; 

__CvT__record_line____(__CvT_miT,134,207);const _CharT * __p = __str . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,134,208);const _CharT * __pend = __str . data ( ) + __str . length ( ) ; 

__CvT__record_line____(__CvT_miT,134,210);size_t __len = ( __hi - __lo ) * 2 ; 

__CvT__record_line____(__CvT_miT,134,212);_CharT * __c = new _CharT [ __len ] ; 

__CvT__record_line____(__CvT_miT,134,214);try 
{ 



__CvT__record_line____(__CvT_miT,134,219);for ( ; ; ) 
{{ 

__CvT__record_line____(__CvT_miT,134,222);size_t __res = _M_transform ( __c , __p , __len ) ; 


__CvT__record_line____(__CvT_miT,134,225);if ( __res >= __len ) 
{{ 
__CvT__record_line____(__CvT_miT,134,227);__len = __res + 1 ; 
__CvT__record_line____(__CvT_miT,134,228);delete [ ] __c , __c = 0 ; 
__CvT__record_line____(__CvT_miT,134,229);__c = new _CharT [ __len ] ; 
__CvT__record_line____(__CvT_miT,134,230);__res = _M_transform ( __c , __p , __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,134,233);__ret . append ( __c , __res ) ; 
__CvT__record_line____(__CvT_miT,134,234);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,134,235);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,134,236);break ; 

}__CvT__record_line____(__CvT_miT,134,238);__p ++ ; 
__CvT__record_line____(__CvT_miT,134,239);__ret . push_back ( _CharT ( ) ) ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,134,244);delete [ ] __c ; 
__CvT__record_line____(__CvT_miT,134,245);throw ; 
} 

__CvT__record_line____(__CvT_miT,134,248);delete [ ] __c ; 

__CvT__record_line____(__CvT_miT,134,250);return __ret ; 
} 

template < typename _CharT > 
long 
collate < _CharT >:: 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,134,257);
__CvT__record_line____(__CvT_miT,134,258);unsigned long __val = 0 ; 
__CvT__record_line____(__CvT_miT,134,259);for ( ; __lo < __hi ; ++ __lo ) 
{__CvT__record_line____(__CvT_miT,134,260);__val = 
* __lo + ( ( __val << 7 ) 
| ( __val >> ( __gnu_cxx :: __numeric_traits < unsigned long >:: 
__digits - 7 ) ) ) ; 
}__CvT__record_line____(__CvT_miT,134,264);return static_cast < long > ( __val ) ; 
} 




extern template class collate < char > ; 
extern template class collate_byname < char > ; 

extern template 
const collate < char >& 
use_facet < collate < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < char > > ( const locale & ) ; 


extern template class collate < wchar_t > ; 
extern template class collate_byname < wchar_t > ; 

extern template 
const collate < wchar_t >& 
use_facet < collate < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < wchar_t > > ( const locale & ) ; 




} 
# 852 "/usr/include/c++/7.1.1/bits/locale_classes.h" 2 3 
# 42 "/usr/include/c++/7.1.1/bits/ios_base.h" 2 3 




# 1 "/usr/include/c++/7.1.1/system_error" 1 3 
# 32 "/usr/include/c++/7.1.1/system_error" 3 

# 33 "/usr/include/c++/7.1.1/system_error" 3 






# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/error_constants.h" 1 3 
# 34 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/error_constants.h" 3 
# 1 "/usr/include/c++/7.1.1/cerrno" 1 3 
# 39 "/usr/include/c++/7.1.1/cerrno" 3 

# 40 "/usr/include/c++/7.1.1/cerrno" 3 


# 1 "/usr/include/errno.h" 1 3 4 
# 43 "/usr/include/c++/7.1.1/cerrno" 2 3 
# 35 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/error_constants.h" 2 3 

namespace std 
{ 


enum class errc 
{ 
address_family_not_supported = 97 , 
address_in_use = 98 , 
address_not_available = 99 , 
already_connected = 106 , 
argument_list_too_long = 7 , 
argument_out_of_domain = 33 , 
bad_address = 14 , 
bad_file_descriptor = 9 , 


bad_message = 74 , 


broken_pipe = 32 , 
connection_aborted = 103 , 
connection_already_in_progress = 114 , 
connection_refused = 111 , 
connection_reset = 104 , 
cross_device_link = 18 , 
destination_address_required = 89 , 
device_or_resource_busy = 16 , 
directory_not_empty = 39 , 
executable_format_error = 8 , 
file_exists = 17 , 
file_too_large = 27 , 
filename_too_long = 36 , 
function_not_supported = 38 , 
host_unreachable = 113 , 


identifier_removed = 43 , 


illegal_byte_sequence = 84 , 
inappropriate_io_control_operation = 25 , 
interrupted = 4 , 
invalid_argument = 22 , 
invalid_seek = 29 , 
io_error = 5 , 
is_a_directory = 21 , 
message_size = 90 , 
network_down = 100 , 
network_reset = 102 , 
network_unreachable = 101 , 
no_buffer_space = 105 , 
no_child_process = 10 , 


no_link = 67 , 


no_lock_available = 37 , 


no_message_available = 61 , 


no_message = 42 , 
no_protocol_option = 92 , 
no_space_on_device = 28 , 


no_stream_resources = 63 , 


no_such_device_or_address = 6 , 
no_such_device = 19 , 
no_such_file_or_directory = 2 , 
no_such_process = 3 , 
not_a_directory = 20 , 
not_a_socket = 88 , 


not_a_stream = 60 , 


not_connected = 107 , 
not_enough_memory = 12 , 


not_supported = 95 , 



operation_canceled = 125 , 


operation_in_progress = 115 , 
operation_not_permitted = 1 , 
operation_not_supported = 95 , 
operation_would_block = 11 , 


owner_dead = 130 , 


permission_denied = 13 , 


protocol_error = 71 , 


protocol_not_supported = 93 , 
read_only_file_system = 30 , 
resource_deadlock_would_occur = 35 , 
resource_unavailable_try_again = 11 , 
result_out_of_range = 34 , 


state_not_recoverable = 131 , 



stream_timeout = 62 , 



text_file_busy = 26 , 


timed_out = 110 , 
too_many_files_open_in_system = 23 , 
too_many_files_open = 24 , 
too_many_links = 31 , 
too_many_symbolic_link_levels = 40 , 


value_too_large = 75 , 


wrong_protocol_type = 91 
} ; 


} 
# 40 "/usr/include/c++/7.1.1/system_error" 2 3 

# 1 "/usr/include/c++/7.1.1/stdexcept" 1 3 
# 36 "/usr/include/c++/7.1.1/stdexcept" 3 

# 37 "/usr/include/c++/7.1.1/stdexcept" 3 




namespace std 
{ 





struct __cow_string 
{ 
union { 
const char * _M_p ; 
char _M_bytes [ sizeof ( const char * ) ] ; 
} ; 

__cow_string ( ) ; 
__cow_string ( const std :: string & ) ; 
__cow_string ( const char * , size_t ) ; 
__cow_string ( const __cow_string & ) noexcept ; 
__cow_string & operator = ( const __cow_string & ) noexcept ; 
~ __cow_string ( ) ; 

__cow_string ( __cow_string && ) noexcept ; 
__cow_string & operator = ( __cow_string && ) noexcept ; 

} ; 

typedef basic_string < char > __sso_string ; 
# 113 "/usr/include/c++/7.1.1/stdexcept" 3 
class logic_error : public exception 
{ 
__cow_string _M_msg ; 

public : 

explicit 
logic_error ( const string & __arg ) ; 


explicit 
logic_error ( const char * ) ; 



logic_error ( const logic_error & ) noexcept ; 
logic_error & operator = ( const logic_error & ) noexcept ; 


virtual ~ logic_error ( ) noexcept ; 



virtual const char * 
what ( ) const noexcept ; 





} ; 



class domain_error : public logic_error 
{ 
public : 
explicit domain_error ( const string & __arg ) ; 

explicit domain_error ( const char * ) ; 

virtual ~ domain_error ( ) noexcept ; 
} ; 


class invalid_argument : public logic_error 
{ 
public : 
explicit invalid_argument ( const string & __arg ) ; 

explicit invalid_argument ( const char * ) ; 

virtual ~ invalid_argument ( ) noexcept ; 
} ; 



class length_error : public logic_error 
{ 
public : 
explicit length_error ( const string & __arg ) ; 

explicit length_error ( const char * ) ; 

virtual ~ length_error ( ) noexcept ; 
} ; 



class out_of_range : public logic_error 
{ 
public : 
explicit out_of_range ( const string & __arg ) ; 

explicit out_of_range ( const char * ) ; 

virtual ~ out_of_range ( ) noexcept ; 
} ; 






class runtime_error : public exception 
{ 
__cow_string _M_msg ; 

public : 

explicit 
runtime_error ( const string & __arg ) ; 


explicit 
runtime_error ( const char * ) ; 



runtime_error ( const runtime_error & ) noexcept ; 
runtime_error & operator = ( const runtime_error & ) noexcept ; 


virtual ~ runtime_error ( ) noexcept ; 



virtual const char * 
what ( ) const noexcept ; 





} ; 


class range_error : public runtime_error 
{ 
public : 
explicit range_error ( const string & __arg ) ; 

explicit range_error ( const char * ) ; 

virtual ~ range_error ( ) noexcept ; 
} ; 


class overflow_error : public runtime_error 
{ 
public : 
explicit overflow_error ( const string & __arg ) ; 

explicit overflow_error ( const char * ) ; 

virtual ~ overflow_error ( ) noexcept ; 
} ; 


class underflow_error : public runtime_error 
{ 
public : 
explicit underflow_error ( const string & __arg ) ; 

explicit underflow_error ( const char * ) ; 

virtual ~ underflow_error ( ) noexcept ; 
} ; 




} 
# 42 "/usr/include/c++/7.1.1/system_error" 2 3 

namespace std 
{ 


class error_code ; 
class error_condition ; 
class system_error ; 


template < typename _Tp > 
struct is_error_code_enum : public false_type { } ; 


template < typename _Tp > 
struct is_error_condition_enum : public false_type { } ; 

template <> 
struct is_error_condition_enum < errc > 
: public true_type { } ; 
# 71 "/usr/include/c++/7.1.1/system_error" 3 
inline namespace _V2 { __CvT__record_line____(__CvT_miT,135,71);


__CvT__record_line____(__CvT_miT,135,74);class error_category 
{ 
public : 
constexpr error_category ( ) noexcept = default ; 

virtual ~ error_category ( ) ; 

error_category ( const error_category & ) = delete ; 
error_category & operator = ( const error_category & ) = delete ; 

virtual const char * 
name ( ) const noexcept = 0 ; 






private : 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
virtual __cow_string 
_M_message ( int ) const ; 

public : 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
virtual string 
message ( int ) const = 0 ; 
# 110 "/usr/include/c++/7.1.1/system_error" 3 
public : 
virtual error_condition 
default_error_condition ( int __i ) const noexcept ; 

virtual bool 
equivalent ( int __i , const error_condition & __cond ) const noexcept ; 

virtual bool 
equivalent ( const error_code & __code , int __i ) const noexcept ; 

bool 
operator < ( const error_category & __other ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,122);return less < const error_category *> ( ) ( this , & __other ) ; } 

bool 
operator == ( const error_category & __other ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,126);return this == & __other ; } 

bool 
operator != ( const error_category & __other ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,130);return this != & __other ; } 
} ; 


__CvT__record_line____(__CvT_miT,135,134);const error_category & system_category ( ) noexcept ; 
__CvT__record_line____(__CvT_miT,135,135);const error_category & generic_category ( ) noexcept ; 

} 

error_code make_error_code ( errc ) noexcept ; 

template < typename _Tp > 
struct hash ; 



struct error_code 
{ 
error_code ( ) noexcept 
: _M_value ( 0 ) , _M_cat ( & system_category ( ) ) { __CvT__record_line____(__CvT_miT,135,149);} 

error_code ( int __v , const error_category & __cat ) noexcept 
: _M_value ( __v ) , _M_cat ( & __cat ) { __CvT__record_line____(__CvT_miT,135,152);} 

template < typename _ErrorCodeEnum , typename = typename 
enable_if < is_error_code_enum < _ErrorCodeEnum >:: value >:: type > 
error_code ( _ErrorCodeEnum __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,157);* this = make_error_code ( __e ) ; } 

void 
assign ( int __v , const error_category & __cat ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,161);
__CvT__record_line____(__CvT_miT,135,162);_M_value = __v ; 
__CvT__record_line____(__CvT_miT,135,163);_M_cat = & __cat ; 
} 

void 
clear ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,168);assign ( 0 , system_category ( ) ) ; } 


template < typename _ErrorCodeEnum > 
typename enable_if < is_error_code_enum < _ErrorCodeEnum >:: value , 
error_code &>:: type 
operator = ( _ErrorCodeEnum __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,175);return * this = make_error_code ( __e ) ; } 

int 
value ( ) const noexcept { __CvT__record_line____(__CvT_miT,135,178);return _M_value ; } 

const error_category & 
category ( ) const noexcept { __CvT__record_line____(__CvT_miT,135,181);return * _M_cat ; } 

error_condition 
default_error_condition ( ) const noexcept ; 

__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
string 
message ( ) const 
{ __CvT__record_line____(__CvT_miT,135,189);return category ( ) . message ( value ( ) ) ; } 

explicit operator bool ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,192);return _M_value != 0 ; } 


private : 
friend class hash < error_code > ; 

int _M_value ; 
const error_category * _M_cat ; 
} ; 


inline error_code 
make_error_code ( errc __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,205);return error_code ( static_cast < int > ( __e ) , generic_category ( ) ) ; } 

inline bool 
operator < ( const error_code & __lhs , const error_code & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,209);
__CvT__record_line____(__CvT_miT,135,210);return ( __lhs . category ( ) < __rhs . category ( ) 
|| ( __lhs . category ( ) == __rhs . category ( ) 
&& __lhs . value ( ) < __rhs . value ( ) ) ) ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __os , const error_code & __e ) 
{ __CvT__record_line____(__CvT_miT,135,218);return ( __os << __e . category ( ) . name ( ) << ':' << __e . value ( ) ) ; } 

error_condition make_error_condition ( errc ) noexcept ; 



struct error_condition 
{ 
error_condition ( ) noexcept 
: _M_value ( 0 ) , _M_cat ( & generic_category ( ) ) { __CvT__record_line____(__CvT_miT,135,227);} 

error_condition ( int __v , const error_category & __cat ) noexcept 
: _M_value ( __v ) , _M_cat ( & __cat ) { __CvT__record_line____(__CvT_miT,135,230);} 

template < typename _ErrorConditionEnum , typename = typename 
enable_if < is_error_condition_enum < _ErrorConditionEnum >:: value >:: type > 
error_condition ( _ErrorConditionEnum __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,235);* this = make_error_condition ( __e ) ; } 

void 
assign ( int __v , const error_category & __cat ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,239);
__CvT__record_line____(__CvT_miT,135,240);_M_value = __v ; 
__CvT__record_line____(__CvT_miT,135,241);_M_cat = & __cat ; 
} 


template < typename _ErrorConditionEnum > 
typename enable_if < is_error_condition_enum 
< _ErrorConditionEnum >:: value , error_condition &>:: type 
operator = ( _ErrorConditionEnum __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,249);return * this = make_error_condition ( __e ) ; } 

void 
clear ( ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,253);assign ( 0 , generic_category ( ) ) ; } 


int 
value ( ) const noexcept { __CvT__record_line____(__CvT_miT,135,257);return _M_value ; } 

const error_category & 
category ( ) const noexcept { __CvT__record_line____(__CvT_miT,135,260);return * _M_cat ; } 

__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
string 
message ( ) const 
{ __CvT__record_line____(__CvT_miT,135,265);return category ( ) . message ( value ( ) ) ; } 

explicit operator bool ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,268);return _M_value != 0 ; } 


private : 
int _M_value ; 
const error_category * _M_cat ; 
} ; 


inline error_condition 
make_error_condition ( errc __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,279);return error_condition ( static_cast < int > ( __e ) , generic_category ( ) ) ; } 

inline bool 
operator < ( const error_condition & __lhs , 
const error_condition & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,284);
__CvT__record_line____(__CvT_miT,135,285);return ( __lhs . category ( ) < __rhs . category ( ) 
|| ( __lhs . category ( ) == __rhs . category ( ) 
&& __lhs . value ( ) < __rhs . value ( ) ) ) ; 
} 


inline bool 
operator == ( const error_code & __lhs , const error_code & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,293);return ( __lhs . category ( ) == __rhs . category ( ) 
&& __lhs . value ( ) == __rhs . value ( ) ) ; } 

inline bool 
operator == ( const error_code & __lhs , const error_condition & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,298);
__CvT__record_line____(__CvT_miT,135,299);return ( __lhs . category ( ) . equivalent ( __lhs . value ( ) , __rhs ) 
|| __rhs . category ( ) . equivalent ( __lhs , __rhs . value ( ) ) ) ; 
} 

inline bool 
operator == ( const error_condition & __lhs , const error_code & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,305);
__CvT__record_line____(__CvT_miT,135,306);return ( __rhs . category ( ) . equivalent ( __rhs . value ( ) , __lhs ) 
|| __lhs . category ( ) . equivalent ( __rhs , __lhs . value ( ) ) ) ; 
} 

inline bool 
operator == ( const error_condition & __lhs , 
const error_condition & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,313);
__CvT__record_line____(__CvT_miT,135,314);return ( __lhs . category ( ) == __rhs . category ( ) 
&& __lhs . value ( ) == __rhs . value ( ) ) ; 
} 

inline bool 
operator != ( const error_code & __lhs , const error_code & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,320);return ! ( __lhs == __rhs ) ; } 

inline bool 
operator != ( const error_code & __lhs , const error_condition & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,324);return ! ( __lhs == __rhs ) ; } 

inline bool 
operator != ( const error_condition & __lhs , const error_code & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,328);return ! ( __lhs == __rhs ) ; } 

inline bool 
operator != ( const error_condition & __lhs , 
const error_condition & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,135,333);return ! ( __lhs == __rhs ) ; } 







class system_error : public std :: runtime_error 
{ 
private : 
error_code _M_code ; 

public : 
system_error ( error_code __ec = error_code ( ) ) 
: runtime_error ( __ec . message ( ) ) , _M_code ( __ec ) { __CvT__record_line____(__CvT_miT,135,348);} 

system_error ( error_code __ec , const string & __what ) 
: runtime_error ( __what + ": " + __ec . message ( ) ) , _M_code ( __ec ) { __CvT__record_line____(__CvT_miT,135,351);} 

system_error ( error_code __ec , const char * __what ) 
: runtime_error ( __what + ( ": " + __ec . message ( ) ) ) , _M_code ( __ec ) { __CvT__record_line____(__CvT_miT,135,354);} 

system_error ( int __v , const error_category & __ecat , const char * __what ) 
: system_error ( error_code ( __v , __ecat ) , __what ) { __CvT__record_line____(__CvT_miT,135,357);} 

system_error ( int __v , const error_category & __ecat ) 
: runtime_error ( error_code ( __v , __ecat ) . message ( ) ) , 
_M_code ( __v , __ecat ) { __CvT__record_line____(__CvT_miT,135,361);} 

system_error ( int __v , const error_category & __ecat , const string & __what ) 
: runtime_error ( __what + ": " + error_code ( __v , __ecat ) . message ( ) ) , 
_M_code ( __v , __ecat ) { __CvT__record_line____(__CvT_miT,135,365);} 

virtual ~ system_error ( ) noexcept ; 

const error_code & 
code ( ) const noexcept { __CvT__record_line____(__CvT_miT,135,370);return _M_code ; } 
} ; 


} 



namespace std 
{ 





template <> 
struct hash < error_code > 
: public __hash_base < size_t , error_code > 
{ 
size_t 
operator ( ) ( const error_code & __e ) const noexcept 
{ __CvT__record_line____(__CvT_miT,135,391);
__CvT__record_line____(__CvT_miT,135,392);const size_t __tmp = std :: _Hash_impl :: hash ( __e . _M_value ) ; 
__CvT__record_line____(__CvT_miT,135,393);return std :: _Hash_impl :: __hash_combine ( __e . _M_cat , __tmp ) ; 
} 
} ; 
# 414 "/usr/include/c++/7.1.1/system_error" 3 

} 
# 47 "/usr/include/c++/7.1.1/bits/ios_base.h" 2 3 


namespace std 
{ 






enum _Ios_Fmtflags 
{ 
_S_boolalpha = 1L << 0 , 
_S_dec = 1L << 1 , 
_S_fixed = 1L << 2 , 
_S_hex = 1L << 3 , 
_S_internal = 1L << 4 , 
_S_left = 1L << 5 , 
_S_oct = 1L << 6 , 
_S_right = 1L << 7 , 
_S_scientific = 1L << 8 , 
_S_showbase = 1L << 9 , 
_S_showpoint = 1L << 10 , 
_S_showpos = 1L << 11 , 
_S_skipws = 1L << 12 , 
_S_unitbuf = 1L << 13 , 
_S_uppercase = 1L << 14 , 
_S_adjustfield = _S_left | _S_right | _S_internal , 
_S_basefield = _S_dec | _S_oct | _S_hex , 
_S_floatfield = _S_scientific | _S_fixed , 
_S_ios_fmtflags_end = 1L << 16 , 
_S_ios_fmtflags_max = 0x7fffffff , 
_S_ios_fmtflags_min = ~ 0x7fffffff 
} ; 

inline constexpr _Ios_Fmtflags 
operator & ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,84);return _Ios_Fmtflags ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Fmtflags 
operator | ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,88);return _Ios_Fmtflags ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Fmtflags 
operator ^ ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,92);return _Ios_Fmtflags ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Fmtflags 
operator ~ ( _Ios_Fmtflags __a ) 
{ __CvT__record_line____(__CvT_miT,132,96);return _Ios_Fmtflags ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Fmtflags & 
operator |= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,100);return __a = __a | __b ; } 

inline const _Ios_Fmtflags & 
operator &= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,104);return __a = __a & __b ; } 

inline const _Ios_Fmtflags & 
operator ^= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,132,108);return __a = __a ^ __b ; } 


enum _Ios_Openmode 
{ 
_S_app = 1L << 0 , 
_S_ate = 1L << 1 , 
_S_bin = 1L << 2 , 
_S_in = 1L << 3 , 
_S_out = 1L << 4 , 
_S_trunc = 1L << 5 , 
_S_ios_openmode_end = 1L << 16 , 
_S_ios_openmode_max = 0x7fffffff , 
_S_ios_openmode_min = ~ 0x7fffffff 
} ; 

inline constexpr _Ios_Openmode 
operator & ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,126);return _Ios_Openmode ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Openmode 
operator | ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,130);return _Ios_Openmode ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Openmode 
operator ^ ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,134);return _Ios_Openmode ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Openmode 
operator ~ ( _Ios_Openmode __a ) 
{ __CvT__record_line____(__CvT_miT,132,138);return _Ios_Openmode ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Openmode & 
operator |= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,142);return __a = __a | __b ; } 

inline const _Ios_Openmode & 
operator &= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,146);return __a = __a & __b ; } 

inline const _Ios_Openmode & 
operator ^= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,132,150);return __a = __a ^ __b ; } 


enum _Ios_Iostate 
{ 
_S_goodbit = 0 , 
_S_badbit = 1L << 0 , 
_S_eofbit = 1L << 1 , 
_S_failbit = 1L << 2 , 
_S_ios_iostate_end = 1L << 16 , 
_S_ios_iostate_max = 0x7fffffff , 
_S_ios_iostate_min = ~ 0x7fffffff 
} ; 

inline constexpr _Ios_Iostate 
operator & ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,166);return _Ios_Iostate ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Iostate 
operator | ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,170);return _Ios_Iostate ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Iostate 
operator ^ ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,174);return _Ios_Iostate ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline constexpr _Ios_Iostate 
operator ~ ( _Ios_Iostate __a ) 
{ __CvT__record_line____(__CvT_miT,132,178);return _Ios_Iostate ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Iostate & 
operator |= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,182);return __a = __a | __b ; } 

inline const _Ios_Iostate & 
operator &= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,186);return __a = __a & __b ; } 

inline const _Ios_Iostate & 
operator ^= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,132,190);return __a = __a ^ __b ; } 


enum _Ios_Seekdir 
{ 
_S_beg = 0 , 
_S_cur = 1 , 
_S_end = 2 , 
_S_ios_seekdir_end = 1L << 16 
} ; 



enum class io_errc { stream = 1 } ; 

template <> struct is_error_code_enum < io_errc > : public true_type { } ; 

const error_category & iostream_category ( ) noexcept ; 

inline error_code 
make_error_code ( io_errc __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,132,211);return error_code ( static_cast < int > ( __e ) , iostream_category ( ) ) ; } 

inline error_condition 
make_error_condition ( io_errc __e ) noexcept 
{ __CvT__record_line____(__CvT_miT,132,215);return error_condition ( static_cast < int > ( __e ) , iostream_category ( ) ) ; } 
# 228 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
class ios_base 
{ 
# 246 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
public : 
# 255 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
class __attribute ( ( __abi_tag__ ( "cxx11" ) ) ) failure : public system_error 
{ 
public : 
explicit 
failure ( const string & __str ) ; 


explicit 
failure ( const string & , const error_code & ) ; 

explicit 
failure ( const char * , const error_code & = io_errc :: stream ) ; 


virtual 
~ failure ( ) throw ( ) ; 

virtual const char * 
what ( ) const throw ( ) ; 
} ; 
# 323 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
typedef _Ios_Fmtflags fmtflags ; 


static const fmtflags boolalpha = _S_boolalpha ; 


static const fmtflags dec = _S_dec ; 


static const fmtflags fixed = _S_fixed ; 


static const fmtflags hex = _S_hex ; 




static const fmtflags internal = _S_internal ; 



static const fmtflags left = _S_left ; 


static const fmtflags oct = _S_oct ; 



static const fmtflags right = _S_right ; 


static const fmtflags scientific = _S_scientific ; 



static const fmtflags showbase = _S_showbase ; 



static const fmtflags showpoint = _S_showpoint ; 


static const fmtflags showpos = _S_showpos ; 


static const fmtflags skipws = _S_skipws ; 


static const fmtflags unitbuf = _S_unitbuf ; 



static const fmtflags uppercase = _S_uppercase ; 


static const fmtflags adjustfield = _S_adjustfield ; 


static const fmtflags basefield = _S_basefield ; 


static const fmtflags floatfield = _S_floatfield ; 
# 398 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
typedef _Ios_Iostate iostate ; 



static const iostate badbit = _S_badbit ; 


static const iostate eofbit = _S_eofbit ; 




static const iostate failbit = _S_failbit ; 


static const iostate goodbit = _S_goodbit ; 
# 429 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
typedef _Ios_Openmode openmode ; 


static const openmode app = _S_app ; 


static const openmode ate = _S_ate ; 




static const openmode binary = _S_bin ; 


static const openmode in = _S_in ; 


static const openmode out = _S_out ; 


static const openmode trunc = _S_trunc ; 
# 461 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
typedef _Ios_Seekdir seekdir ; 


static const seekdir beg = _S_beg ; 


static const seekdir cur = _S_cur ; 


static const seekdir end = _S_end ; 


typedef int io_state ; 
typedef int open_mode ; 
typedef int seek_dir ; 

typedef std :: streampos streampos ; 
typedef std :: streamoff streamoff ; 
# 487 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
enum event 
{ 
erase_event , 
imbue_event , 
copyfmt_event 
} ; 
# 504 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
typedef void ( * event_callback ) ( event __e , ios_base & __b , int __i ) ; 
# 516 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
void 
register_callback ( event_callback __fn , int __index ) ; 

protected : 
streamsize _M_precision ; 
streamsize _M_width ; 
fmtflags _M_flags ; 
iostate _M_exception ; 
iostate _M_streambuf_state ; 



struct _Callback_list 
{ 

_Callback_list * _M_next ; 
ios_base :: event_callback _M_fn ; 
int _M_index ; 
_Atomic_word _M_refcount ; 

_Callback_list ( ios_base :: event_callback __fn , int __index , 
_Callback_list * __cb ) 
: _M_next ( __cb ) , _M_fn ( __fn ) , _M_index ( __index ) , _M_refcount ( 0 ) { __CvT__record_line____(__CvT_miT,132,538);} 

void 
_M_add_reference ( ) { __CvT__record_line____(__CvT_miT,132,541);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 


int 
_M_remove_reference ( ) 
{ __CvT__record_line____(__CvT_miT,132,546);

; 
__CvT__record_line____(__CvT_miT,132,549);int __res = __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) ; 
__CvT__record_line____(__CvT_miT,132,550);if ( __res == 0 ) 
{{ 
; 
} 
}__CvT__record_line____(__CvT_miT,132,554);return __res ; 
} 
} ; 

_Callback_list * _M_callbacks ; 

void 
_M_call_callbacks ( event __ev ) throw ( ) ; 

void 
_M_dispose_callbacks ( void ) throw ( ) ; 


struct _Words 
{ 
void * _M_pword ; 
long _M_iword ; 
_Words ( ) : _M_pword ( 0 ) , _M_iword ( 0 ) { __CvT__record_line____(__CvT_miT,132,571);} 
} ; 


_Words _M_word_zero ; 



enum { _S_local_word_size = 8 } ; 
_Words _M_local_word [ _S_local_word_size ] ; 


int _M_word_size ; 
_Words * _M_word ; 

_Words & 
_M_grow_words ( int __index , bool __iword ) ; 


locale _M_ios_locale ; 

void 
_M_init ( ) throw ( ) ; 

public : 





class Init 
{ 
friend class ios_base ; 
public : 
Init ( ) ; 
~ Init ( ) ; 

private : 
static _Atomic_word _S_refcount ; 
static bool _S_synced_with_stdio ; 
} ; 






fmtflags 
flags ( ) const 
{ __CvT__record_line____(__CvT_miT,132,620);return _M_flags ; } 
# 629 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
fmtflags 
flags ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,132,631);
__CvT__record_line____(__CvT_miT,132,632);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,132,633);_M_flags = __fmtfl ; 
__CvT__record_line____(__CvT_miT,132,634);return __old ; 
} 
# 645 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,132,647);
__CvT__record_line____(__CvT_miT,132,648);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,132,649);_M_flags |= __fmtfl ; 
__CvT__record_line____(__CvT_miT,132,650);return __old ; 
} 
# 662 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl , fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,132,664);
__CvT__record_line____(__CvT_miT,132,665);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,132,666);_M_flags &= ~ __mask ; 
__CvT__record_line____(__CvT_miT,132,667);_M_flags |= ( __fmtfl & __mask ) ; 
__CvT__record_line____(__CvT_miT,132,668);return __old ; 
} 







void 
unsetf ( fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,132,679);_M_flags &= ~ __mask ; } 
# 688 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
streamsize 
precision ( ) const 
{ __CvT__record_line____(__CvT_miT,132,690);return _M_precision ; } 






streamsize 
precision ( streamsize __prec ) 
{ __CvT__record_line____(__CvT_miT,132,699);
__CvT__record_line____(__CvT_miT,132,700);streamsize __old = _M_precision ; 
__CvT__record_line____(__CvT_miT,132,701);_M_precision = __prec ; 
__CvT__record_line____(__CvT_miT,132,702);return __old ; 
} 







streamsize 
width ( ) const 
{ __CvT__record_line____(__CvT_miT,132,713);return _M_width ; } 






streamsize 
width ( streamsize __wide ) 
{ __CvT__record_line____(__CvT_miT,132,722);
__CvT__record_line____(__CvT_miT,132,723);streamsize __old = _M_width ; 
__CvT__record_line____(__CvT_miT,132,724);_M_width = __wide ; 
__CvT__record_line____(__CvT_miT,132,725);return __old ; 
} 
# 739 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
static bool 
sync_with_stdio ( bool __sync = true ) ; 
# 751 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
locale 
imbue ( const locale & __loc ) throw ( ) ; 
# 762 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,132,764);return _M_ios_locale ; } 
# 773 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
const locale & 
_M_getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,132,775);return _M_ios_locale ; } 
# 792 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
static int 
xalloc ( ) throw ( ) ; 
# 808 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
long & 
iword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,132,810);
__CvT__record_line____(__CvT_miT,132,811);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , true ) ; 
__CvT__record_line____(__CvT_miT,132,813);return __word . _M_iword ; 
} 
# 829 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
void *& 
pword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,132,831);
__CvT__record_line____(__CvT_miT,132,832);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , false ) ; 
__CvT__record_line____(__CvT_miT,132,834);return __word . _M_pword ; 
} 
# 846 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
virtual ~ ios_base ( ) ; 

protected : 
ios_base ( ) throw ( ) ; 
# 860 "/usr/include/c++/7.1.1/bits/ios_base.h" 3 
public : 
ios_base ( const ios_base & ) = delete ; 

ios_base & 
operator = ( const ios_base & ) = delete ; 

protected : 
void 
_M_move ( ios_base & ) noexcept ; 

void 
_M_swap ( ios_base & __rhs ) noexcept ; 

} ; 



inline ios_base & 
boolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,879);
__CvT__record_line____(__CvT_miT,132,880);__base . setf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,132,881);return __base ; 
} 


inline ios_base & 
noboolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,887);
__CvT__record_line____(__CvT_miT,132,888);__base . unsetf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,132,889);return __base ; 
} 


inline ios_base & 
showbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,895);
__CvT__record_line____(__CvT_miT,132,896);__base . setf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,132,897);return __base ; 
} 


inline ios_base & 
noshowbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,903);
__CvT__record_line____(__CvT_miT,132,904);__base . unsetf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,132,905);return __base ; 
} 


inline ios_base & 
showpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,911);
__CvT__record_line____(__CvT_miT,132,912);__base . setf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,132,913);return __base ; 
} 


inline ios_base & 
noshowpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,919);
__CvT__record_line____(__CvT_miT,132,920);__base . unsetf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,132,921);return __base ; 
} 


inline ios_base & 
showpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,927);
__CvT__record_line____(__CvT_miT,132,928);__base . setf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,132,929);return __base ; 
} 


inline ios_base & 
noshowpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,935);
__CvT__record_line____(__CvT_miT,132,936);__base . unsetf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,132,937);return __base ; 
} 


inline ios_base & 
skipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,943);
__CvT__record_line____(__CvT_miT,132,944);__base . setf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,132,945);return __base ; 
} 


inline ios_base & 
noskipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,951);
__CvT__record_line____(__CvT_miT,132,952);__base . unsetf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,132,953);return __base ; 
} 


inline ios_base & 
uppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,959);
__CvT__record_line____(__CvT_miT,132,960);__base . setf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,132,961);return __base ; 
} 


inline ios_base & 
nouppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,967);
__CvT__record_line____(__CvT_miT,132,968);__base . unsetf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,132,969);return __base ; 
} 


inline ios_base & 
unitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,975);
__CvT__record_line____(__CvT_miT,132,976);__base . setf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,132,977);return __base ; 
} 


inline ios_base & 
nounitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,983);
__CvT__record_line____(__CvT_miT,132,984);__base . unsetf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,132,985);return __base ; 
} 



inline ios_base & 
internal ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,992);
__CvT__record_line____(__CvT_miT,132,993);__base . setf ( ios_base :: internal , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,132,994);return __base ; 
} 


inline ios_base & 
left ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1000);
__CvT__record_line____(__CvT_miT,132,1001);__base . setf ( ios_base :: left , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,132,1002);return __base ; 
} 


inline ios_base & 
right ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1008);
__CvT__record_line____(__CvT_miT,132,1009);__base . setf ( ios_base :: right , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,132,1010);return __base ; 
} 



inline ios_base & 
dec ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1017);
__CvT__record_line____(__CvT_miT,132,1018);__base . setf ( ios_base :: dec , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,132,1019);return __base ; 
} 


inline ios_base & 
hex ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1025);
__CvT__record_line____(__CvT_miT,132,1026);__base . setf ( ios_base :: hex , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,132,1027);return __base ; 
} 


inline ios_base & 
oct ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1033);
__CvT__record_line____(__CvT_miT,132,1034);__base . setf ( ios_base :: oct , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,132,1035);return __base ; 
} 



inline ios_base & 
fixed ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1042);
__CvT__record_line____(__CvT_miT,132,1043);__base . setf ( ios_base :: fixed , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,132,1044);return __base ; 
} 


inline ios_base & 
scientific ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1050);
__CvT__record_line____(__CvT_miT,132,1051);__base . setf ( ios_base :: scientific , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,132,1052);return __base ; 
} 






inline ios_base & 
hexfloat ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1062);
__CvT__record_line____(__CvT_miT,132,1063);__base . setf ( ios_base :: fixed | ios_base :: scientific , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,132,1064);return __base ; 
} 


inline ios_base & 
defaultfloat ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,132,1070);
__CvT__record_line____(__CvT_miT,132,1071);__base . unsetf ( ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,132,1072);return __base ; 
} 



} 
# 43 "/usr/include/c++/7.1.1/ios" 2 3 
# 1 "/usr/include/c++/7.1.1/streambuf" 1 3 
# 36 "/usr/include/c++/7.1.1/streambuf" 3 

# 37 "/usr/include/c++/7.1.1/streambuf" 3 
# 45 "/usr/include/c++/7.1.1/streambuf" 3 
namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* , 
basic_streambuf < _CharT , _Traits >* , bool & ) ; 
# 119 "/usr/include/c++/7.1.1/streambuf" 3 
template < typename _CharT , typename _Traits > 
class basic_streambuf 
{ 
public : 






typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 




typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 


friend class basic_ios < char_type , traits_type > ; 
friend class basic_istream < char_type , traits_type > ; 
friend class basic_ostream < char_type , traits_type > ; 
friend class istreambuf_iterator < char_type , traits_type > ; 
friend class ostreambuf_iterator < char_type , traits_type > ; 

friend streamsize 
__copy_streambufs_eof <> ( basic_streambuf * , basic_streambuf * , bool & ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

template < typename _CharT2 , typename _Traits2 > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , _CharT2 * ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
getline ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& , _CharT2 ) ; 

protected : 







char_type * _M_in_beg ; 
char_type * _M_in_cur ; 
char_type * _M_in_end ; 
char_type * _M_out_beg ; 
char_type * _M_out_cur ; 
char_type * _M_out_end ; 


locale _M_buf_locale ; 

public : 

virtual 
~ basic_streambuf ( ) 
{ __CvT__record_line____(__CvT_miT,138,198);} 
# 208 "/usr/include/c++/7.1.1/streambuf" 3 
locale 
pubimbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,138,210);
__CvT__record_line____(__CvT_miT,138,211);locale __tmp ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,138,212);this -> imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,138,213);_M_buf_locale = __loc ; 
__CvT__record_line____(__CvT_miT,138,214);return __tmp ; 
} 
# 225 "/usr/include/c++/7.1.1/streambuf" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,138,227);return _M_buf_locale ; } 
# 238 "/usr/include/c++/7.1.1/streambuf" 3 
basic_streambuf * 
pubsetbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,138,240);return this -> setbuf ( __s , __n ) ; } 
# 250 "/usr/include/c++/7.1.1/streambuf" 3 
pos_type 
pubseekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,138,253);return this -> seekoff ( __off , __way , __mode ) ; } 
# 262 "/usr/include/c++/7.1.1/streambuf" 3 
pos_type 
pubseekpos ( pos_type __sp , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,138,265);return this -> seekpos ( __sp , __mode ) ; } 




int 
pubsync ( ) { __CvT__record_line____(__CvT_miT,138,271);return this -> sync ( ) ; } 
# 283 "/usr/include/c++/7.1.1/streambuf" 3 
streamsize 
in_avail ( ) 
{ __CvT__record_line____(__CvT_miT,138,285);
__CvT__record_line____(__CvT_miT,138,286);const streamsize __ret = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,138,287);return __ret ? __ret : this -> showmanyc ( ) ; 
} 
# 297 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
snextc ( ) 
{ __CvT__record_line____(__CvT_miT,138,299);
__CvT__record_line____(__CvT_miT,138,300);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,138,301);if ( __builtin_expect ( ! traits_type :: eq_int_type ( this -> sbumpc ( ) , 
__ret ) , true ) ) 
{__CvT__record_line____(__CvT_miT,138,303);__ret = this -> sgetc ( ) ; 
}__CvT__record_line____(__CvT_miT,138,304);return __ret ; 
} 
# 315 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
sbumpc ( ) 
{ __CvT__record_line____(__CvT_miT,138,317);
__CvT__record_line____(__CvT_miT,138,318);int_type __ret ; 
__CvT__record_line____(__CvT_miT,138,319);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,138,321);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,138,322);this -> gbump ( 1 ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,138,325);__ret = this -> uflow ( ) ; 
}__CvT__record_line____(__CvT_miT,138,326);return __ret ; 
} 
# 337 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
sgetc ( ) 
{ __CvT__record_line____(__CvT_miT,138,339);
__CvT__record_line____(__CvT_miT,138,340);int_type __ret ; 
__CvT__record_line____(__CvT_miT,138,341);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{__CvT__record_line____(__CvT_miT,138,342);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,138,344);__ret = this -> underflow ( ) ; 
}__CvT__record_line____(__CvT_miT,138,345);return __ret ; 
} 
# 356 "/usr/include/c++/7.1.1/streambuf" 3 
streamsize 
sgetn ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,138,358);return this -> xsgetn ( __s , __n ) ; } 
# 371 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
sputbackc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,138,373);
__CvT__record_line____(__CvT_miT,138,374);int_type __ret ; 
__CvT__record_line____(__CvT_miT,138,375);const bool __testpos = this -> eback ( ) < this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,138,376);if ( __builtin_expect ( ! __testpos || 
! traits_type :: eq ( __c , this -> gptr ( ) [ - 1 ] ) , false ) ) 
{__CvT__record_line____(__CvT_miT,138,378);__ret = this -> pbackfail ( traits_type :: to_int_type ( __c ) ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,138,381);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,138,382);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,138,384);return __ret ; 
} 
# 396 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
sungetc ( ) 
{ __CvT__record_line____(__CvT_miT,138,398);
__CvT__record_line____(__CvT_miT,138,399);int_type __ret ; 
__CvT__record_line____(__CvT_miT,138,400);if ( __builtin_expect ( this -> eback ( ) < this -> gptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,138,402);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,138,403);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,138,406);__ret = this -> pbackfail ( ) ; 
}__CvT__record_line____(__CvT_miT,138,407);return __ret ; 
} 
# 423 "/usr/include/c++/7.1.1/streambuf" 3 
int_type 
sputc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,138,425);
__CvT__record_line____(__CvT_miT,138,426);int_type __ret ; 
__CvT__record_line____(__CvT_miT,138,427);if ( __builtin_expect ( this -> pptr ( ) < this -> epptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,138,429);* this -> pptr ( ) = __c ; 
__CvT__record_line____(__CvT_miT,138,430);this -> pbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,138,431);__ret = traits_type :: to_int_type ( __c ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,138,434);__ret = this -> overflow ( traits_type :: to_int_type ( __c ) ) ; 
}__CvT__record_line____(__CvT_miT,138,435);return __ret ; 
} 
# 449 "/usr/include/c++/7.1.1/streambuf" 3 
streamsize 
sputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,138,451);return this -> xsputn ( __s , __n ) ; } 

protected : 
# 463 "/usr/include/c++/7.1.1/streambuf" 3 
basic_streambuf ( ) 
: _M_in_beg ( 0 ) , _M_in_cur ( 0 ) , _M_in_end ( 0 ) , 
_M_out_beg ( 0 ) , _M_out_cur ( 0 ) , _M_out_end ( 0 ) , 
_M_buf_locale ( locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,138,467);} 
# 481 "/usr/include/c++/7.1.1/streambuf" 3 
char_type * 
eback ( ) const { __CvT__record_line____(__CvT_miT,138,482);return _M_in_beg ; } 

char_type * 
gptr ( ) const { __CvT__record_line____(__CvT_miT,138,485);return _M_in_cur ; } 

char_type * 
egptr ( ) const { __CvT__record_line____(__CvT_miT,138,488);return _M_in_end ; } 
# 497 "/usr/include/c++/7.1.1/streambuf" 3 
void 
gbump ( int __n ) { __CvT__record_line____(__CvT_miT,138,498);_M_in_cur += __n ; } 
# 508 "/usr/include/c++/7.1.1/streambuf" 3 
void 
setg ( char_type * __gbeg , char_type * __gnext , char_type * __gend ) 
{ __CvT__record_line____(__CvT_miT,138,510);
__CvT__record_line____(__CvT_miT,138,511);_M_in_beg = __gbeg ; 
__CvT__record_line____(__CvT_miT,138,512);_M_in_cur = __gnext ; 
__CvT__record_line____(__CvT_miT,138,513);_M_in_end = __gend ; 
} 
# 528 "/usr/include/c++/7.1.1/streambuf" 3 
char_type * 
pbase ( ) const { __CvT__record_line____(__CvT_miT,138,529);return _M_out_beg ; } 

char_type * 
pptr ( ) const { __CvT__record_line____(__CvT_miT,138,532);return _M_out_cur ; } 

char_type * 
epptr ( ) const { __CvT__record_line____(__CvT_miT,138,535);return _M_out_end ; } 
# 544 "/usr/include/c++/7.1.1/streambuf" 3 
void 
pbump ( int __n ) { __CvT__record_line____(__CvT_miT,138,545);_M_out_cur += __n ; } 
# 554 "/usr/include/c++/7.1.1/streambuf" 3 
void 
setp ( char_type * __pbeg , char_type * __pend ) 
{ __CvT__record_line____(__CvT_miT,138,556);
__CvT__record_line____(__CvT_miT,138,557);_M_out_beg = _M_out_cur = __pbeg ; 
__CvT__record_line____(__CvT_miT,138,558);_M_out_end = __pend ; 
} 
# 575 "/usr/include/c++/7.1.1/streambuf" 3 
virtual void 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,138,577);} 
# 590 "/usr/include/c++/7.1.1/streambuf" 3 
virtual basic_streambuf < char_type , _Traits >* 
setbuf ( char_type * , streamsize ) 
{ __CvT__record_line____(__CvT_miT,138,592);return this ; } 
# 601 "/usr/include/c++/7.1.1/streambuf" 3 
virtual pos_type 
seekoff ( off_type , ios_base :: seekdir , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,138,604);return pos_type ( off_type ( - 1 ) ) ; } 
# 613 "/usr/include/c++/7.1.1/streambuf" 3 
virtual pos_type 
seekpos ( pos_type , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,138,616);return pos_type ( off_type ( - 1 ) ) ; } 
# 626 "/usr/include/c++/7.1.1/streambuf" 3 
virtual int 
sync ( ) { __CvT__record_line____(__CvT_miT,138,627);return 0 ; } 
# 648 "/usr/include/c++/7.1.1/streambuf" 3 
virtual streamsize 
showmanyc ( ) { __CvT__record_line____(__CvT_miT,138,649);return 0 ; } 
# 664 "/usr/include/c++/7.1.1/streambuf" 3 
virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 
# 686 "/usr/include/c++/7.1.1/streambuf" 3 
virtual int_type 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,138,688);return traits_type :: eof ( ) ; } 
# 699 "/usr/include/c++/7.1.1/streambuf" 3 
virtual int_type 
uflow ( ) 
{ __CvT__record_line____(__CvT_miT,138,701);
__CvT__record_line____(__CvT_miT,138,702);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,138,703);const bool __testeof = traits_type :: eq_int_type ( this -> underflow ( ) , 
__ret ) ; 
__CvT__record_line____(__CvT_miT,138,705);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,138,707);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,138,708);this -> gbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,138,710);return __ret ; 
} 
# 723 "/usr/include/c++/7.1.1/streambuf" 3 
virtual int_type 
pbackfail ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,138,725);return traits_type :: eof ( ) ; } 
# 741 "/usr/include/c++/7.1.1/streambuf" 3 
virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 
# 767 "/usr/include/c++/7.1.1/streambuf" 3 
virtual int_type 
overflow ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,138,769);return traits_type :: eof ( ) ; } 



public : 
# 782 "/usr/include/c++/7.1.1/streambuf" 3 
void 
stossc ( ) 
{ __CvT__record_line____(__CvT_miT,138,784);
__CvT__record_line____(__CvT_miT,138,785);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,138,786);this -> gbump ( 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,138,788);this -> uflow ( ) ; 
}} 



void 
__safe_gbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,138,794);_M_in_cur += __n ; } 

void 
__safe_pbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,138,797);_M_out_cur += __n ; } 




protected : 

basic_streambuf ( const basic_streambuf & ) ; 

basic_streambuf & 
operator = ( const basic_streambuf & ) ; 


void 
swap ( basic_streambuf & __sb ) 
{ __CvT__record_line____(__CvT_miT,138,812);
__CvT__record_line____(__CvT_miT,138,813);std :: swap ( _M_in_beg , __sb . _M_in_beg ) ; 
__CvT__record_line____(__CvT_miT,138,814);std :: swap ( _M_in_cur , __sb . _M_in_cur ) ; 
__CvT__record_line____(__CvT_miT,138,815);std :: swap ( _M_in_end , __sb . _M_in_end ) ; 
__CvT__record_line____(__CvT_miT,138,816);std :: swap ( _M_out_beg , __sb . _M_out_beg ) ; 
__CvT__record_line____(__CvT_miT,138,817);std :: swap ( _M_out_cur , __sb . _M_out_cur ) ; 
__CvT__record_line____(__CvT_miT,138,818);std :: swap ( _M_out_end , __sb . _M_out_end ) ; 
__CvT__record_line____(__CvT_miT,138,819);std :: swap ( _M_buf_locale , __sb . _M_buf_locale ) ; 
} 

} ; 


template < typename _CharT , typename _Traits > 
std :: basic_streambuf < _CharT , _Traits >:: 
basic_streambuf ( const basic_streambuf & ) = default ; 

template < typename _CharT , typename _Traits > 
std :: basic_streambuf < _CharT , _Traits >& 
std :: basic_streambuf < _CharT , _Traits >:: 
operator = ( const basic_streambuf & ) = default ; 



template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* __sbin , 
basic_streambuf < char >* __sbout , bool & __ineof ) ; 

template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* __sbin , 
basic_streambuf < wchar_t >* __sbout , bool & __ineof ) ; 



} 

# 1 "/usr/include/c++/7.1.1/bits/streambuf.tcc" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/streambuf.tcc" 3 

# 38 "/usr/include/c++/7.1.1/bits/streambuf.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsgetn ( char_type * __s , streamsize __n ) 
{ 
streamsize __ret = 0 ; 
while ( __ret < __n ) 
{ __CvT__record_line____(__CvT_miT,139,50);
__CvT__record_line____(__CvT_miT,139,51);const streamsize __buf_len = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,139,52);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,139,54);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,139,55);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,139,56);traits_type :: copy ( __s , this -> gptr ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,139,57);__ret += __len ; 
__CvT__record_line____(__CvT_miT,139,58);__s += __len ; 
__CvT__record_line____(__CvT_miT,139,59);this -> __safe_gbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,139,62);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,139,64);const int_type __c = this -> uflow ( ) ; 
__CvT__record_line____(__CvT_miT,139,65);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,139,67);traits_type :: assign ( * __s ++ , traits_type :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,139,68);++ __ret ; 
} 
}else {
__CvT__record_line____(__CvT_miT,139,71);break ; 
}} 
}} 
return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,139,81);
__CvT__record_line____(__CvT_miT,139,82);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,139,83);while ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,139,85);const streamsize __buf_len = this -> epptr ( ) - this -> pptr ( ) ; 
__CvT__record_line____(__CvT_miT,139,86);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,139,88);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,139,89);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,139,90);traits_type :: copy ( this -> pptr ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,139,91);__ret += __len ; 
__CvT__record_line____(__CvT_miT,139,92);__s += __len ; 
__CvT__record_line____(__CvT_miT,139,93);this -> __safe_pbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,139,96);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,139,98);int_type __c = this -> overflow ( traits_type :: to_int_type ( * __s ) ) ; 
__CvT__record_line____(__CvT_miT,139,99);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,139,101);++ __ret ; 
__CvT__record_line____(__CvT_miT,139,102);++ __s ; 
} 
}else {
__CvT__record_line____(__CvT_miT,139,105);break ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,139,108);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout , 
bool & __ineof ) 
{ __CvT__record_line____(__CvT_miT,139,119);
__CvT__record_line____(__CvT_miT,139,120);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,139,121);__ineof = true ; 
__CvT__record_line____(__CvT_miT,139,122);typename _Traits :: int_type __c = __sbin -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,139,123);while ( ! _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,139,125);__c = __sbout -> sputc ( _Traits :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,139,126);if ( _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,139,128);__ineof = false ; 
__CvT__record_line____(__CvT_miT,139,129);break ; 
} 
}__CvT__record_line____(__CvT_miT,139,131);++ __ret ; 
__CvT__record_line____(__CvT_miT,139,132);__c = __sbin -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,139,134);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
inline streamsize 
__copy_streambufs ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout ) 
{ __CvT__record_line____(__CvT_miT,139,141);
__CvT__record_line____(__CvT_miT,139,142);bool __ineof ; 
__CvT__record_line____(__CvT_miT,139,143);return __copy_streambufs_eof ( __sbin , __sbout , __ineof ) ; 
} 




extern template class basic_streambuf < char > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < char >* , 
basic_streambuf < char >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* , 
basic_streambuf < char >* , bool & ) ; 


extern template class basic_streambuf < wchar_t > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* , bool & ) ; 




} 
# 851 "/usr/include/c++/7.1.1/streambuf" 2 3 
# 44 "/usr/include/c++/7.1.1/ios" 2 3 
# 1 "/usr/include/c++/7.1.1/bits/basic_ios.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 



# 1 "/usr/include/c++/7.1.1/bits/locale_facets.h" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 

# 38 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 

# 1 "/usr/include/c++/7.1.1/cwctype" 1 3 
# 39 "/usr/include/c++/7.1.1/cwctype" 3 

# 40 "/usr/include/c++/7.1.1/cwctype" 3 
# 50 "/usr/include/c++/7.1.1/cwctype" 3 
# 1 "/usr/include/wctype.h" 1 3 4 
# 33 "/usr/include/wctype.h" 3 4 
# 1 "/usr/include/wchar.h" 1 3 4 
# 34 "/usr/include/wctype.h" 2 3 4 
# 49 "/usr/include/wctype.h" 3 4 



typedef unsigned long int wctype_t ; 

# 71 "/usr/include/wctype.h" 3 4 
enum 
{ 
__ISwupper = 0 , 
__ISwlower = 1 , 
__ISwalpha = 2 , 
__ISwdigit = 3 , 
__ISwxdigit = 4 , 
__ISwspace = 5 , 
__ISwprint = 6 , 
__ISwgraph = 7 , 
__ISwblank = 8 , 
__ISwcntrl = 9 , 
__ISwpunct = 10 , 
__ISwalnum = 11 , 

_ISwupper = ( ( __ISwupper ) < 8 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 24 ) : ( ( __ISwupper ) < 16 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 8 ) : ( ( __ISwupper ) < 24 ? ( int ) ( ( 1UL << ( __ISwupper ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwupper ) ) >> 24 ) ) ) ) , 
_ISwlower = ( ( __ISwlower ) < 8 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 24 ) : ( ( __ISwlower ) < 16 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 8 ) : ( ( __ISwlower ) < 24 ? ( int ) ( ( 1UL << ( __ISwlower ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwlower ) ) >> 24 ) ) ) ) , 
_ISwalpha = ( ( __ISwalpha ) < 8 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 24 ) : ( ( __ISwalpha ) < 16 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 8 ) : ( ( __ISwalpha ) < 24 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 24 ) ) ) ) , 
_ISwdigit = ( ( __ISwdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 24 ) : ( ( __ISwdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 8 ) : ( ( __ISwdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 24 ) ) ) ) , 
_ISwxdigit = ( ( __ISwxdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 24 ) : ( ( __ISwxdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 8 ) : ( ( __ISwxdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 24 ) ) ) ) , 
_ISwspace = ( ( __ISwspace ) < 8 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 24 ) : ( ( __ISwspace ) < 16 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 8 ) : ( ( __ISwspace ) < 24 ? ( int ) ( ( 1UL << ( __ISwspace ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwspace ) ) >> 24 ) ) ) ) , 
_ISwprint = ( ( __ISwprint ) < 8 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 24 ) : ( ( __ISwprint ) < 16 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 8 ) : ( ( __ISwprint ) < 24 ? ( int ) ( ( 1UL << ( __ISwprint ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwprint ) ) >> 24 ) ) ) ) , 
_ISwgraph = ( ( __ISwgraph ) < 8 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 24 ) : ( ( __ISwgraph ) < 16 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 8 ) : ( ( __ISwgraph ) < 24 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 24 ) ) ) ) , 
_ISwblank = ( ( __ISwblank ) < 8 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 24 ) : ( ( __ISwblank ) < 16 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 8 ) : ( ( __ISwblank ) < 24 ? ( int ) ( ( 1UL << ( __ISwblank ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwblank ) ) >> 24 ) ) ) ) , 
_ISwcntrl = ( ( __ISwcntrl ) < 8 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 24 ) : ( ( __ISwcntrl ) < 16 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 8 ) : ( ( __ISwcntrl ) < 24 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 24 ) ) ) ) , 
_ISwpunct = ( ( __ISwpunct ) < 8 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 24 ) : ( ( __ISwpunct ) < 16 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 8 ) : ( ( __ISwpunct ) < 24 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 24 ) ) ) ) , 
_ISwalnum = ( ( __ISwalnum ) < 8 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 24 ) : ( ( __ISwalnum ) < 16 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 8 ) : ( ( __ISwalnum ) < 24 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 24 ) ) ) ) 
} ; 



extern "C" { 








extern int iswalnum ( wint_t __wc ) throw ( ) ; 





extern int iswalpha ( wint_t __wc ) throw ( ) ; 


extern int iswcntrl ( wint_t __wc ) throw ( ) ; 



extern int iswdigit ( wint_t __wc ) throw ( ) ; 



extern int iswgraph ( wint_t __wc ) throw ( ) ; 




extern int iswlower ( wint_t __wc ) throw ( ) ; 


extern int iswprint ( wint_t __wc ) throw ( ) ; 




extern int iswpunct ( wint_t __wc ) throw ( ) ; 




extern int iswspace ( wint_t __wc ) throw ( ) ; 




extern int iswupper ( wint_t __wc ) throw ( ) ; 




extern int iswxdigit ( wint_t __wc ) throw ( ) ; 





extern int iswblank ( wint_t __wc ) throw ( ) ; 
# 171 "/usr/include/wctype.h" 3 4 
extern wctype_t wctype ( const char * __property ) throw ( ) ; 



extern int iswctype ( wint_t __wc , wctype_t __desc ) throw ( ) ; 










typedef const __int32_t * wctrans_t ; 







extern wint_t towlower ( wint_t __wc ) throw ( ) ; 


extern wint_t towupper ( wint_t __wc ) throw ( ) ; 


} 
# 213 "/usr/include/wctype.h" 3 4 
extern "C" { 




extern wctrans_t wctrans ( const char * __property ) throw ( ) ; 


extern wint_t towctrans ( wint_t __wc , wctrans_t __desc ) throw ( ) ; 








extern int iswalnum_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 





extern int iswalpha_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswcntrl_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswgraph_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswprint_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswpunct_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswspace_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswxdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswblank_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctype_t wctype_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 



extern int iswctype_l ( wint_t __wc , wctype_t __desc , __locale_t __locale ) 
throw ( ) ; 







extern wint_t towlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern wint_t towupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctrans_t wctrans_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 


extern wint_t towctrans_l ( wint_t __wc , wctrans_t __desc , 
__locale_t __locale ) throw ( ) ; 



} 
# 51 "/usr/include/c++/7.1.1/cwctype" 2 3 
# 80 "/usr/include/c++/7.1.1/cwctype" 3 
namespace std 
{ 
using :: wctrans_t ; 
using :: wctype_t ; 
using :: wint_t ; 

using :: iswalnum ; 
using :: iswalpha ; 

using :: iswblank ; 

using :: iswcntrl ; 
using :: iswctype ; 
using :: iswdigit ; 
using :: iswgraph ; 
using :: iswlower ; 
using :: iswprint ; 
using :: iswpunct ; 
using :: iswspace ; 
using :: iswupper ; 
using :: iswxdigit ; 
using :: towctrans ; 
using :: towlower ; 
using :: towupper ; 
using :: wctrans ; 
using :: wctype ; 
} 
# 40 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 
# 1 "/usr/include/c++/7.1.1/cctype" 1 3 
# 39 "/usr/include/c++/7.1.1/cctype" 3 

# 40 "/usr/include/c++/7.1.1/cctype" 3 
# 41 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_base.h" 1 3 
# 36 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_base.h" 3 
namespace std 
{ 



struct ctype_base 
{ 

typedef const int * __to_type ; 



typedef unsigned short mask ; 
static const mask upper = _ISupper ; 
static const mask lower = _ISlower ; 
static const mask alpha = _ISalpha ; 
static const mask digit = _ISdigit ; 
static const mask xdigit = _ISxdigit ; 
static const mask space = _ISspace ; 
static const mask print = _ISprint ; 
static const mask graph = _ISalpha | _ISdigit | _ISpunct ; 
static const mask cntrl = _IScntrl ; 
static const mask punct = _ISpunct ; 
static const mask alnum = _ISalpha | _ISdigit ; 

static const mask blank = _ISblank ; 

} ; 


} 
# 42 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 






# 1 "/usr/include/c++/7.1.1/bits/streambuf_iterator.h" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/streambuf_iterator.h" 3 

# 34 "/usr/include/c++/7.1.1/bits/streambuf_iterator.h" 3 




namespace std 
{ 

# 49 "/usr/include/c++/7.1.1/bits/streambuf_iterator.h" 3 
template < typename _CharT , typename _Traits > 
class istreambuf_iterator 
: public iterator < input_iterator_tag , _CharT , typename _Traits :: off_type , 
_CharT * , 


_CharT > 



{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_istream < _CharT , _Traits > istream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

private : 







mutable streambuf_type * _M_sbuf ; 
mutable int_type _M_c ; 

public : 

constexpr istreambuf_iterator ( ) noexcept 
: _M_sbuf ( 0 ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,145,103);} 


istreambuf_iterator ( const istreambuf_iterator & ) noexcept = default ; 

~ istreambuf_iterator ( ) = default ; 



istreambuf_iterator ( istream_type & __s ) noexcept 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,145,113);} 


istreambuf_iterator ( streambuf_type * __s ) noexcept 
: _M_sbuf ( __s ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,145,117);} 




char_type 
operator * ( ) const 
{ __CvT__record_line____(__CvT_miT,145,124);







__CvT__record_line____(__CvT_miT,145,132);return traits_type :: to_char_type ( _M_get ( ) ) ; 
} 


istreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,145,138);


; 
__CvT__record_line____(__CvT_miT,145,142);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,145,144);_M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,145,145);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,145,147);return * this ; 
} 


istreambuf_iterator 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,145,153);


; 

__CvT__record_line____(__CvT_miT,145,158);istreambuf_iterator __old = * this ; 
__CvT__record_line____(__CvT_miT,145,159);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,145,161);__old . _M_c = _M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,145,162);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,145,164);return __old ; 
} 





bool 
equal ( const istreambuf_iterator & __b ) const 
{ __CvT__record_line____(__CvT_miT,145,173);return _M_at_eof ( ) == __b . _M_at_eof ( ) ; } 

private : 
int_type 
_M_get ( ) const 
{ __CvT__record_line____(__CvT_miT,145,178);
__CvT__record_line____(__CvT_miT,145,179);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,145,180);int_type __ret = __eof ; 
__CvT__record_line____(__CvT_miT,145,181);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,145,183);if ( ! traits_type :: eq_int_type ( _M_c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,145,184);__ret = _M_c ; 
}else {__CvT__record_line____(__CvT_miT,145,185);if ( ! traits_type :: eq_int_type ( ( __ret = _M_sbuf -> sgetc ( ) ) , 
__eof ) ) 
{__CvT__record_line____(__CvT_miT,145,187);_M_c = __ret ; 
}else {
__CvT__record_line____(__CvT_miT,145,189);_M_sbuf = 0 ; 
}}} 
}__CvT__record_line____(__CvT_miT,145,191);return __ret ; 
} 

bool 
_M_at_eof ( ) const 
{ __CvT__record_line____(__CvT_miT,145,196);
__CvT__record_line____(__CvT_miT,145,197);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,145,198);return traits_type :: eq_int_type ( _M_get ( ) , __eof ) ; 
} 
} ; 

template < typename _CharT , typename _Traits > 
inline bool 
operator == ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,145,206);return __a . equal ( __b ) ; } 

template < typename _CharT , typename _Traits > 
inline bool 
operator != ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,145,212);return ! __a . equal ( __b ) ; } 


template < typename _CharT , typename _Traits > 
class ostreambuf_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_ostream < _CharT , _Traits > ostream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

private : 
streambuf_type * _M_sbuf ; 
bool _M_failed ; 

public : 

ostreambuf_iterator ( ostream_type & __s ) noexcept 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,145,242);} 


ostreambuf_iterator ( streambuf_type * __s ) noexcept 
: _M_sbuf ( __s ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,145,246);} 


ostreambuf_iterator & 
operator = ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,145,251);
__CvT__record_line____(__CvT_miT,145,252);if ( ! _M_failed && 
_Traits :: eq_int_type ( _M_sbuf -> sputc ( __c ) , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,145,254);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,145,255);return * this ; 
} 


ostreambuf_iterator & 
operator * ( ) 
{ __CvT__record_line____(__CvT_miT,145,261);return * this ; } 


ostreambuf_iterator & 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,145,266);return * this ; } 


ostreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,145,271);return * this ; } 


bool 
failed ( ) const noexcept 
{ __CvT__record_line____(__CvT_miT,145,276);return _M_failed ; } 

ostreambuf_iterator & 
_M_put ( const _CharT * __ws , streamsize __len ) 
{ __CvT__record_line____(__CvT_miT,145,280);
__CvT__record_line____(__CvT_miT,145,281);if ( __builtin_expect ( ! _M_failed , true ) 
&& __builtin_expect ( this -> _M_sbuf -> sputn ( __ws , __len ) != __len , 
false ) ) 
{__CvT__record_line____(__CvT_miT,145,284);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,145,285);return * this ; 
} 
} ; 


template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
copy ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,145,296);
__CvT__record_line____(__CvT_miT,145,297);if ( __first . _M_sbuf && ! __last . _M_sbuf && ! __result . _M_failed ) 
{{ 
__CvT__record_line____(__CvT_miT,145,299);bool __ineof ; 
__CvT__record_line____(__CvT_miT,145,300);__copy_streambufs_eof ( __first . _M_sbuf , __result . _M_sbuf , __ineof ) ; 
__CvT__record_line____(__CvT_miT,145,301);if ( ! __ineof ) 
{__CvT__record_line____(__CvT_miT,145,302);__result . _M_failed = true ; 
}} 
}__CvT__record_line____(__CvT_miT,145,304);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( _CharT * __first , _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,145,312);
__CvT__record_line____(__CvT_miT,145,313);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,145,314);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,145,315);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,145,316);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( const _CharT * __first , const _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,145,324);
__CvT__record_line____(__CvT_miT,145,325);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,145,326);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,145,327);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,145,328);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , _CharT * __result ) 
{ __CvT__record_line____(__CvT_miT,145,336);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,145,342);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,145,344);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,145,345);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,145,346);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,145,348);const streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,145,349);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,145,351);traits_type :: copy ( __result , __sb -> gptr ( ) , __n ) ; 
__CvT__record_line____(__CvT_miT,145,352);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,145,353);__result += __n ; 
__CvT__record_line____(__CvT_miT,145,354);__c = __sb -> underflow ( ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,145,358);* __result ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,145,359);__c = __sb -> snextc ( ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,145,363);return __result ; 
} 

template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
istreambuf_iterator < _CharT > >:: __type 
find ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , const _CharT & __val ) 
{ __CvT__record_line____(__CvT_miT,145,371);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,145,377);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,145,379);const int_type __ival = traits_type :: to_int_type ( __val ) ; 
__CvT__record_line____(__CvT_miT,145,380);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,145,381);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,145,382);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) 
&& ! traits_type :: eq_int_type ( __c , __ival ) ) 
{{ 
__CvT__record_line____(__CvT_miT,145,385);streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,145,386);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,145,388);const _CharT * __p = traits_type :: find ( __sb -> gptr ( ) , 
__n , __val ) ; 
__CvT__record_line____(__CvT_miT,145,390);if ( __p ) 
{__CvT__record_line____(__CvT_miT,145,391);__n = __p - __sb -> gptr ( ) ; 
}__CvT__record_line____(__CvT_miT,145,392);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,145,393);__c = __sb -> sgetc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,145,396);__c = __sb -> snextc ( ) ; 
}} 

}__CvT__record_line____(__CvT_miT,145,399);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,145,400);__first . _M_c = __c ; 
}else {
__CvT__record_line____(__CvT_miT,145,402);__first . _M_sbuf = 0 ; 
}} 
}__CvT__record_line____(__CvT_miT,145,404);return __first ; 
} 




} 
# 49 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 

namespace std 
{ 

# 71 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _Tp > 
void 
__convert_to_v ( const char * , _Tp & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 


template <> 
void 
__convert_to_v ( const char * , float & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , long double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 



template < typename _CharT , typename _Traits > 
struct __pad 
{ 
static void 
_S_pad ( ios_base & __io , _CharT __fill , _CharT * __news , 
const _CharT * __olds , streamsize __newlen , streamsize __oldlen ) ; 
} ; 






template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) ; 




template < typename _CharT > 
inline 
ostreambuf_iterator < _CharT > 
__write ( ostreambuf_iterator < _CharT > __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,141,120);
__CvT__record_line____(__CvT_miT,141,121);__s . _M_put ( __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,141,122);return __s ; 
} 


template < typename _CharT , typename _OutIter > 
inline 
_OutIter 
__write ( _OutIter __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,141,130);
__CvT__record_line____(__CvT_miT,141,131);for ( int __j = 0 ; __j < __len ; __j ++ , ++ __s ) 
{__CvT__record_line____(__CvT_miT,141,132);* __s = __ws [ __j ] ; 
}__CvT__record_line____(__CvT_miT,141,133);return __s ; 
} 
# 149 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _CharT > 
class __ctype_abstract_base : public locale :: facet , public ctype_base 
{ 
public : 


typedef _CharT char_type ; 
# 168 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
bool 
is ( mask __m , char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,141,170);return this -> do_is ( __m , __c ) ; } 
# 185 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,141,187);return this -> do_is ( __lo , __hi , __vec ) ; } 
# 201 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,203);return this -> do_scan_is ( __m , __lo , __hi ) ; } 
# 217 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
scan_not ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,219);return this -> do_scan_not ( __m , __lo , __hi ) ; } 
# 231 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,141,233);return this -> do_toupper ( __c ) ; } 
# 246 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,248);return this -> do_toupper ( __lo , __hi ) ; } 
# 260 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,141,262);return this -> do_tolower ( __c ) ; } 
# 275 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,277);return this -> do_tolower ( __lo , __hi ) ; } 
# 292 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,141,294);return this -> do_widen ( __c ) ; } 
# 311 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,313);return this -> do_widen ( __lo , __hi , __to ) ; } 
# 330 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,141,332);return this -> do_narrow ( __c , __dfault ) ; } 
# 352 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,355);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; } 

protected : 
explicit 
__ctype_abstract_base ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,141,359);} 

virtual 
~ __ctype_abstract_base ( ) { __CvT__record_line____(__CvT_miT,141,362);} 
# 377 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const = 0 ; 
# 396 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , 
mask * __vec ) const = 0 ; 
# 415 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 434 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 452 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const = 0 ; 
# 469 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 485 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const = 0 ; 
# 502 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 521 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const = 0 ; 
# 542 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const = 0 ; 
# 563 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const = 0 ; 
# 588 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const = 0 ; 
} ; 
# 611 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _CharT > 
class ctype : public __ctype_abstract_base < _CharT > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename __ctype_abstract_base < _CharT >:: mask mask ; 


static locale :: id id ; 

explicit 
ctype ( size_t __refs = 0 ) : __ctype_abstract_base < _CharT > ( __refs ) { __CvT__record_line____(__CvT_miT,141,623);} 

protected : 
virtual 
~ ctype ( ) ; 

virtual bool 
do_is ( mask __m , char_type __c ) const ; 

virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 

virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 

virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 

virtual char_type 
do_toupper ( char_type __c ) const ; 

virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_tolower ( char_type __c ) const ; 

virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_widen ( char __c ) const ; 

virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __dest ) const ; 

virtual char 
do_narrow ( char_type , char __dfault ) const ; 

virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 
} ; 

template < typename _CharT > 
locale :: id ctype < _CharT >:: id ; 
# 680 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template <> 
class ctype < char > : public locale :: facet , public ctype_base 
{ 
public : 


typedef char char_type ; 

protected : 

__c_locale _M_c_locale_ctype ; 
bool _M_del ; 
__to_type _M_toupper ; 
__to_type _M_tolower ; 
const mask * _M_table ; 
mutable char _M_widen_ok ; 
mutable char _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow_ok ; 


public : 

static locale :: id id ; 

static const size_t table_size = 1 + static_cast < unsigned char > ( - 1 ) ; 
# 717 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
ctype ( const mask * __table = 0 , bool __del = false , size_t __refs = 0 ) ; 
# 730 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , const mask * __table = 0 , bool __del = false , 
size_t __refs = 0 ) ; 
# 743 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
inline bool 
is ( mask __m , char __c ) const ; 
# 758 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
inline const char * 
is ( const char * __lo , const char * __hi , mask * __vec ) const ; 
# 772 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
inline const char * 
scan_is ( mask __m , const char * __lo , const char * __hi ) const ; 
# 786 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
inline const char * 
scan_not ( mask __m , const char * __lo , const char * __hi ) const ; 
# 801 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,141,803);return this -> do_toupper ( __c ) ; } 
# 818 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,820);return this -> do_toupper ( __lo , __hi ) ; } 
# 834 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,141,836);return this -> do_tolower ( __c ) ; } 
# 851 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,141,853);return this -> do_tolower ( __lo , __hi ) ; } 
# 871 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,141,873);
__CvT__record_line____(__CvT_miT,141,874);if ( _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,141,875);return _M_widen [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,141,876);this -> _M_widen_init ( ) ; 
__CvT__record_line____(__CvT_miT,141,877);return this -> do_widen ( __c ) ; 
} 
# 898 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,900);
__CvT__record_line____(__CvT_miT,141,901);if ( _M_widen_ok == 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,141,903);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,141,904);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,141,906);if ( ! _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,141,907);_M_widen_init ( ) ; 
}__CvT__record_line____(__CvT_miT,141,908);return this -> do_widen ( __lo , __hi , __to ) ; 
} 
# 929 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,141,931);
__CvT__record_line____(__CvT_miT,141,932);if ( _M_narrow [ static_cast < unsigned char > ( __c ) ] ) 
{__CvT__record_line____(__CvT_miT,141,933);return _M_narrow [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,141,934);const char __t = do_narrow ( __c , __dfault ) ; 
__CvT__record_line____(__CvT_miT,141,935);if ( __t != __dfault ) 
{__CvT__record_line____(__CvT_miT,141,936);_M_narrow [ static_cast < unsigned char > ( __c ) ] = __t ; 
}__CvT__record_line____(__CvT_miT,141,937);return __t ; 
} 
# 962 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,965);
__CvT__record_line____(__CvT_miT,141,966);if ( __builtin_expect ( _M_narrow_ok == 1 , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,141,968);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,141,969);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,141,971);if ( ! _M_narrow_ok ) 
{__CvT__record_line____(__CvT_miT,141,972);_M_narrow_init ( ) ; 
}__CvT__record_line____(__CvT_miT,141,973);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; 
} 





const mask * 
table ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,141,982);return _M_table ; } 


static const mask * 
classic_table ( ) throw ( ) ; 
protected : 







virtual 
~ ctype ( ) ; 
# 1011 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1028 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1044 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1061 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1081 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,141,1083);return __c ; } 
# 1104 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,1106);
__CvT__record_line____(__CvT_miT,141,1107);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,141,1108);return __hi ; 
} 
# 1130 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,141,1132);return __c ; } 
# 1156 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,141,1159);
__CvT__record_line____(__CvT_miT,141,1160);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,141,1161);return __hi ; 
} 

private : 
void _M_narrow_init ( ) const ; 
void _M_widen_init ( ) const ; 
} ; 
# 1181 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template <> 
class ctype < wchar_t > : public __ctype_abstract_base < wchar_t > 
{ 
public : 


typedef wchar_t char_type ; 
typedef wctype_t __wmask_type ; 

protected : 
__c_locale _M_c_locale_ctype ; 


bool _M_narrow_ok ; 
char _M_narrow [ 128 ] ; 
wint_t _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 


mask _M_bit [ 16 ] ; 
__wmask_type _M_wmask [ 16 ] ; 

public : 


static locale :: id id ; 
# 1214 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
ctype ( size_t __refs = 0 ) ; 
# 1225 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
__wmask_type 
_M_convert_to_wmask ( const mask __m ) const throw ( ) ; 


virtual 
~ ctype ( ) ; 
# 1249 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const ; 
# 1268 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 
# 1286 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 
# 1304 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 
# 1321 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1338 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1354 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1371 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1391 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const ; 
# 1413 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const ; 
# 1436 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const ; 
# 1462 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 


void 
_M_initialize_ctype ( ) throw ( ) ; 
} ; 



template < typename _CharT > 
class ctype_byname : public ctype < _CharT > 
{ 
public : 
typedef typename ctype < _CharT >:: mask mask ; 

explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 


explicit 
ctype_byname ( const string & __s , size_t __refs = 0 ) 
: ctype_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,141,1485);} 


protected : 
virtual 
~ ctype_byname ( ) { __CvT__record_line____(__CvT_miT,141,1490);} ; 
} ; 


template <> 
class ctype_byname < char > : public ctype < char > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 


explicit 
ctype_byname ( const string & __s , size_t __refs = 0 ) ; 


protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 


template <> 
class ctype_byname < wchar_t > : public ctype < wchar_t > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 


explicit 
ctype_byname ( const string & __s , size_t __refs = 0 ) ; 


protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 



} 


# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_inline.h" 1 3 
# 37 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_inline.h" 3 
namespace std 
{ 


bool 
ctype < char >:: 
is ( mask __m , char __c ) const 
{ __CvT__record_line____(__CvT_miT,146,44);return _M_table [ static_cast < unsigned char > ( __c ) ] & __m ; } 

const char * 
ctype < char >:: 
is ( const char * __low , const char * __high , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,146,49);
__CvT__record_line____(__CvT_miT,146,50);while ( __low < __high ) 
{__CvT__record_line____(__CvT_miT,146,51);* __vec ++ = _M_table [ static_cast < unsigned char > ( * __low ++ ) ] ; 
}__CvT__record_line____(__CvT_miT,146,52);return __high ; 
} 

const char * 
ctype < char >:: 
scan_is ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,146,58);
__CvT__record_line____(__CvT_miT,146,59);while ( __low < __high 
&& ! ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) ) 
{__CvT__record_line____(__CvT_miT,146,61);++ __low ; 
}__CvT__record_line____(__CvT_miT,146,62);return __low ; 
} 

const char * 
ctype < char >:: 
scan_not ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,146,68);
__CvT__record_line____(__CvT_miT,146,69);while ( __low < __high 
&& ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) != 0 ) 
{__CvT__record_line____(__CvT_miT,146,71);++ __low ; 
}__CvT__record_line____(__CvT_miT,146,72);return __low ; 
} 


} 
# 1535 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 

namespace std 
{ 



class __num_base 
{ 
public : 


enum 
{ 
_S_ominus , 
_S_oplus , 
_S_ox , 
_S_oX , 
_S_odigits , 
_S_odigits_end = _S_odigits + 16 , 
_S_oudigits = _S_odigits_end , 
_S_oudigits_end = _S_oudigits + 16 , 
_S_oe = _S_odigits + 14 , 
_S_oE = _S_oudigits + 14 , 
_S_oend = _S_oudigits_end 
} ; 






static const char * _S_atoms_out ; 



static const char * _S_atoms_in ; 

enum 
{ 
_S_iminus , 
_S_iplus , 
_S_ix , 
_S_iX , 
_S_izero , 
_S_ie = _S_izero + 14 , 
_S_iE = _S_izero + 20 , 
_S_iend = 26 
} ; 



static void 
_S_format_float ( const ios_base & __io , char * __fptr , char __mod ) throw ( ) ; 
} ; 

template < typename _CharT > 
struct __numpunct_cache : public locale :: facet 
{ 
const char * _M_grouping ; 
size_t _M_grouping_size ; 
bool _M_use_grouping ; 
const _CharT * _M_truename ; 
size_t _M_truename_size ; 
const _CharT * _M_falsename ; 
size_t _M_falsename_size ; 
_CharT _M_decimal_point ; 
_CharT _M_thousands_sep ; 





_CharT _M_atoms_out [ __num_base :: _S_oend ] ; 





_CharT _M_atoms_in [ __num_base :: _S_iend ] ; 

bool _M_allocated ; 

__numpunct_cache ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_grouping ( 0 ) , _M_grouping_size ( 0 ) , 
_M_use_grouping ( false ) , 
_M_truename ( 0 ) , _M_truename_size ( 0 ) , _M_falsename ( 0 ) , 
_M_falsename_size ( 0 ) , _M_decimal_point ( _CharT ( ) ) , 
_M_thousands_sep ( _CharT ( ) ) , _M_allocated ( false ) 
{ __CvT__record_line____(__CvT_miT,141,1623);} 

~ __numpunct_cache ( ) ; 

void 
_M_cache ( const locale & __loc ) ; 

private : 
__numpunct_cache & 
operator = ( const __numpunct_cache & ) ; 

explicit 
__numpunct_cache ( const __numpunct_cache & ) ; 
} ; 

template < typename _CharT > 
__numpunct_cache < _CharT >:: ~ __numpunct_cache ( ) 
{ __CvT__record_line____(__CvT_miT,141,1640);
__CvT__record_line____(__CvT_miT,141,1641);if ( _M_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,141,1643);delete [ ] _M_grouping ; 
__CvT__record_line____(__CvT_miT,141,1644);delete [ ] _M_truename ; 
__CvT__record_line____(__CvT_miT,141,1645);delete [ ] _M_falsename ; 
} 
}} 

namespace __cxx11 { 
# 1665 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _CharT > 
class numpunct : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

typedef __numpunct_cache < _CharT > __cache_type ; 

protected : 
__cache_type * _M_data ; 

public : 

static locale :: id id ; 






explicit 
numpunct ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,141,1692);_M_initialize_numpunct ( ) ; } 
# 1703 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
numpunct ( __cache_type * __cache , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( __cache ) 
{ __CvT__record_line____(__CvT_miT,141,1706);_M_initialize_numpunct ( ) ; } 
# 1717 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
numpunct ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,141,1720);_M_initialize_numpunct ( __cloc ) ; } 
# 1731 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1733);return this -> do_decimal_point ( ) ; } 
# 1744 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
char_type 
thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1746);return this -> do_thousands_sep ( ) ; } 
# 1775 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
string 
grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1777);return this -> do_grouping ( ) ; } 
# 1788 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
string_type 
truename ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1790);return this -> do_truename ( ) ; } 
# 1801 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
string_type 
falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1803);return this -> do_falsename ( ) ; } 

protected : 

virtual 
~ numpunct ( ) ; 
# 1818 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1820);return _M_data -> _M_decimal_point ; } 
# 1830 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual char_type 
do_thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1832);return _M_data -> _M_thousands_sep ; } 
# 1843 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual string 
do_grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1845);return _M_data -> _M_grouping ; } 
# 1856 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual string_type 
do_truename ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1858);return _M_data -> _M_truename ; } 
# 1869 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual string_type 
do_falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,141,1871);return _M_data -> _M_falsename ; } 


void 
_M_initialize_numpunct ( __c_locale __cloc = 0 ) ; 
} ; 

template < typename _CharT > 
locale :: id numpunct < _CharT >:: id ; 

template <> 
numpunct < char >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < char >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 


template <> 
numpunct < wchar_t >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < wchar_t >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 



template < typename _CharT > 
class numpunct_byname : public numpunct < _CharT > 
{ 
public : 
typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

explicit 
numpunct_byname ( const char * __s , size_t __refs = 0 ) 
: numpunct < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,141,1908);
__CvT__record_line____(__CvT_miT,141,1909);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,141,1912);__c_locale __tmp ; 
__CvT__record_line____(__CvT_miT,141,1913);this -> _S_create_c_locale ( __tmp , __s ) ; 
__CvT__record_line____(__CvT_miT,141,1914);this -> _M_initialize_numpunct ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,141,1915);this -> _S_destroy_c_locale ( __tmp ) ; 
} 
}} 


explicit 
numpunct_byname ( const string & __s , size_t __refs = 0 ) 
: numpunct_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,141,1922);} 


protected : 
virtual 
~ numpunct_byname ( ) { __CvT__record_line____(__CvT_miT,141,1927);} 
} ; 

} 


# 1947 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _CharT , typename _InIter > 
class num_get : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _InIter iter_type ; 



static locale :: id id ; 
# 1968 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
num_get ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,141,1969);} 
# 1994 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,1997);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2031 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2034);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2039);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2044);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2049);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 


iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2055);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2060);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2091 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2094);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2099);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2104);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2134 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2137);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

protected : 

virtual ~ num_get ( ) { __CvT__record_line____(__CvT_miT,141,2141);} 

__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
iter_type 
_M_extract_float ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
string & ) const ; 

template < typename _ValueT > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
iter_type 
_M_extract_int ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
_ValueT & ) const ; 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , int >:: __type 
_M_find ( const _CharT2 * , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,141,2157);
__CvT__record_line____(__CvT_miT,141,2158);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,141,2159);if ( __len <= 10 ) 
{{ 
__CvT__record_line____(__CvT_miT,141,2161);if ( __c >= _CharT2 ( '0' ) && __c < _CharT2 ( _CharT2 ( '0' ) + __len ) ) 
{__CvT__record_line____(__CvT_miT,141,2162);__ret = __c - _CharT2 ( '0' ) ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,141,2166);if ( __c >= _CharT2 ( '0' ) && __c <= _CharT2 ( '9' ) ) 
{__CvT__record_line____(__CvT_miT,141,2167);__ret = __c - _CharT2 ( '0' ) ; 
}else {__CvT__record_line____(__CvT_miT,141,2168);if ( __c >= _CharT2 ( 'a' ) && __c <= _CharT2 ( 'f' ) ) 
{__CvT__record_line____(__CvT_miT,141,2169);__ret = 10 + ( __c - _CharT2 ( 'a' ) ) ; 
}else {__CvT__record_line____(__CvT_miT,141,2170);if ( __c >= _CharT2 ( 'A' ) && __c <= _CharT2 ( 'F' ) ) 
{__CvT__record_line____(__CvT_miT,141,2171);__ret = 10 + ( __c - _CharT2 ( 'A' ) ) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,141,2173);return __ret ; 
} 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if <! __is_char < _CharT2 >:: __value , 
int >:: __type 
_M_find ( const _CharT2 * __zero , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,141,2180);
__CvT__record_line____(__CvT_miT,141,2181);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,141,2182);const char_type * __q = char_traits < _CharT2 >:: find ( __zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,141,2183);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,141,2185);__ret = __q - __zero ; 
__CvT__record_line____(__CvT_miT,141,2186);if ( __ret > 15 ) 
{__CvT__record_line____(__CvT_miT,141,2187);__ret -= 6 ; 
}} 
}__CvT__record_line____(__CvT_miT,141,2189);return __ret ; 
} 
# 2207 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , bool & ) const ; 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2213);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2218);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2223);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2228);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2234);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2239);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , float & ) const ; 

virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
double & ) const ; 







virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
long double & ) const ; 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , void *& ) const ; 
# 2270 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
} ; 

template < typename _CharT , typename _InIter > 
locale :: id num_get < _CharT , _InIter >:: id ; 
# 2288 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
template < typename _CharT , typename _OutIter > 
class num_put : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _OutIter iter_type ; 



static locale :: id id ; 
# 2309 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
explicit 
num_put ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,141,2310);} 
# 2327 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2329);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2369 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2371);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2376);return this -> do_put ( __s , __io , __fill , __v ) ; } 


iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2381);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2386);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2432 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2434);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2439);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2457 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2460);return this -> do_put ( __s , __io , __fill , __v ) ; } 

protected : 
template < typename _ValueT > 
iter_type 
_M_insert_float ( iter_type , ios_base & __io , char_type __fill , 
char __mod , _ValueT __v ) const ; 

void 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
char_type __sep , const char_type * __p , char_type * __new , 
char_type * __cs , int & __len ) const ; 

template < typename _ValueT > 
iter_type 
_M_insert_int ( iter_type , ios_base & __io , char_type __fill , 
_ValueT __v ) const ; 

void 
_M_group_int ( const char * __grouping , size_t __grouping_size , 
char_type __sep , ios_base & __io , char_type * __new , 
char_type * __cs , int & __len ) const ; 

void 
_M_pad ( char_type __fill , streamsize __w , ios_base & __io , 
char_type * __new , const char_type * __cs , int & __len ) const ; 


virtual 
~ num_put ( ) { __CvT__record_line____(__CvT_miT,141,2489);} ; 
# 2505 "/usr/include/c++/7.1.1/bits/locale_facets.h" 3 
virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const ; 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2510);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2515);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2521);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,141,2526);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , double ) const ; 






virtual iter_type 
do_put ( iter_type , ios_base & , char_type , long double ) const ; 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , const void * ) const ; 







} ; 

template < typename _CharT , typename _OutIter > 
locale :: id num_put < _CharT , _OutIter >:: id ; 









template < typename _CharT > 
inline bool 
isspace ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2566);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: space , __c ) ; } 


template < typename _CharT > 
inline bool 
isprint ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2572);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: print , __c ) ; } 


template < typename _CharT > 
inline bool 
iscntrl ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2578);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: cntrl , __c ) ; } 


template < typename _CharT > 
inline bool 
isupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2584);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: upper , __c ) ; } 


template < typename _CharT > 
inline bool 
islower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2590);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: lower , __c ) ; } 


template < typename _CharT > 
inline bool 
isalpha ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2596);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alpha , __c ) ; } 


template < typename _CharT > 
inline bool 
isdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2602);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: digit , __c ) ; } 


template < typename _CharT > 
inline bool 
ispunct ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2608);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: punct , __c ) ; } 


template < typename _CharT > 
inline bool 
isxdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2614);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: xdigit , __c ) ; } 


template < typename _CharT > 
inline bool 
isalnum ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2620);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alnum , __c ) ; } 


template < typename _CharT > 
inline bool 
isgraph ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2626);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: graph , __c ) ; } 



template < typename _CharT > 
inline bool 
isblank ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2633);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: blank , __c ) ; } 



template < typename _CharT > 
inline _CharT 
toupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2640);return use_facet < ctype < _CharT > > ( __loc ) . toupper ( __c ) ; } 


template < typename _CharT > 
inline _CharT 
tolower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,141,2646);return use_facet < ctype < _CharT > > ( __loc ) . tolower ( __c ) ; } 


} 

# 1 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 

# 34 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 

namespace std 
{ 




template < typename _Facet > 
struct __use_cache 
{ 
const _Facet * 
operator ( ) ( const locale & __loc ) const ; 
} ; 


template < typename _CharT > 
struct __use_cache < __numpunct_cache < _CharT > > 
{ 
const __numpunct_cache < _CharT >* 
operator ( ) ( const locale & __loc ) const 
{ __CvT__record_line____(__CvT_miT,147,54);
__CvT__record_line____(__CvT_miT,147,55);const size_t __i = numpunct < _CharT >:: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,147,56);const locale :: facet ** __caches = __loc . _M_impl -> _M_caches ; 
__CvT__record_line____(__CvT_miT,147,57);if ( ! __caches [ __i ] ) 
{{ 
__CvT__record_line____(__CvT_miT,147,59);__numpunct_cache < _CharT >* __tmp = 0 ; 
__CvT__record_line____(__CvT_miT,147,60);try 
{ 
__CvT__record_line____(__CvT_miT,147,62);__tmp = new __numpunct_cache < _CharT > ; 
__CvT__record_line____(__CvT_miT,147,63);__tmp -> _M_cache ( __loc ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,147,67);delete __tmp ; 
__CvT__record_line____(__CvT_miT,147,68);throw ; 
} 
__CvT__record_line____(__CvT_miT,147,70);__loc . _M_impl -> _M_install_cache ( __tmp , __i ) ; 
} 
}__CvT__record_line____(__CvT_miT,147,72);return static_cast < const __numpunct_cache < _CharT >*> ( __caches [ __i ] ) ; 
} 
} ; 

template < typename _CharT > 
void 
__numpunct_cache < _CharT >:: _M_cache ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,147,79);
__CvT__record_line____(__CvT_miT,147,80);const numpunct < _CharT >& __np = use_facet < numpunct < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,147,82);char * __grouping = 0 ; 
__CvT__record_line____(__CvT_miT,147,83);_CharT * __truename = 0 ; 
__CvT__record_line____(__CvT_miT,147,84);_CharT * __falsename = 0 ; 
__CvT__record_line____(__CvT_miT,147,85);try 
{ 
__CvT__record_line____(__CvT_miT,147,87);const string & __g = __np . grouping ( ) ; 
__CvT__record_line____(__CvT_miT,147,88);_M_grouping_size = __g . size ( ) ; 
__CvT__record_line____(__CvT_miT,147,89);__grouping = new char [ _M_grouping_size ] ; 
__CvT__record_line____(__CvT_miT,147,90);__g . copy ( __grouping , _M_grouping_size ) ; 
__CvT__record_line____(__CvT_miT,147,91);_M_use_grouping = ( _M_grouping_size 
&& static_cast < signed char > ( __grouping [ 0 ] ) > 0 
&& ( __grouping [ 0 ] 
!= __gnu_cxx :: __numeric_traits < char >:: __max ) ) ; 

__CvT__record_line____(__CvT_miT,147,96);const basic_string < _CharT >& __tn = __np . truename ( ) ; 
__CvT__record_line____(__CvT_miT,147,97);_M_truename_size = __tn . size ( ) ; 
__CvT__record_line____(__CvT_miT,147,98);__truename = new _CharT [ _M_truename_size ] ; 
__CvT__record_line____(__CvT_miT,147,99);__tn . copy ( __truename , _M_truename_size ) ; 

__CvT__record_line____(__CvT_miT,147,101);const basic_string < _CharT >& __fn = __np . falsename ( ) ; 
__CvT__record_line____(__CvT_miT,147,102);_M_falsename_size = __fn . size ( ) ; 
__CvT__record_line____(__CvT_miT,147,103);__falsename = new _CharT [ _M_falsename_size ] ; 
__CvT__record_line____(__CvT_miT,147,104);__fn . copy ( __falsename , _M_falsename_size ) ; 

__CvT__record_line____(__CvT_miT,147,106);_M_decimal_point = __np . decimal_point ( ) ; 
__CvT__record_line____(__CvT_miT,147,107);_M_thousands_sep = __np . thousands_sep ( ) ; 

__CvT__record_line____(__CvT_miT,147,109);const ctype < _CharT >& __ct = use_facet < ctype < _CharT > > ( __loc ) ; 
__CvT__record_line____(__CvT_miT,147,110);__ct . widen ( __num_base :: _S_atoms_out , 
__num_base :: _S_atoms_out 
+ __num_base :: _S_oend , _M_atoms_out ) ; 
__CvT__record_line____(__CvT_miT,147,113);__ct . widen ( __num_base :: _S_atoms_in , 
__num_base :: _S_atoms_in 
+ __num_base :: _S_iend , _M_atoms_in ) ; 

__CvT__record_line____(__CvT_miT,147,117);_M_grouping = __grouping ; 
__CvT__record_line____(__CvT_miT,147,118);_M_truename = __truename ; 
__CvT__record_line____(__CvT_miT,147,119);_M_falsename = __falsename ; 
__CvT__record_line____(__CvT_miT,147,120);_M_allocated = true ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,147,124);delete [ ] __grouping ; 
__CvT__record_line____(__CvT_miT,147,125);delete [ ] __truename ; 
__CvT__record_line____(__CvT_miT,147,126);delete [ ] __falsename ; 
__CvT__record_line____(__CvT_miT,147,127);throw ; 
} 
} 
# 139 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
bool 
__verify_grouping ( const char * __grouping , size_t __grouping_size , 
const string & __grouping_tmp ) throw ( ) ; 



template < typename _CharT , typename _InIter > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_float ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , string & __xtrc ) const 
{ __CvT__record_line____(__CvT_miT,147,151);
typedef char_traits < _CharT > __traits_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,154);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,155);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,156);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,147,157);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,147,158);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,147,161);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,147,164);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,166);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,147,167);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,147,168);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,172);__xtrc += __plus ? '+' : '-' ; 
__CvT__record_line____(__CvT_miT,147,173);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,174);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,176);__testeof = true ; 
}} 
}} 


}__CvT__record_line____(__CvT_miT,147,181);bool __found_mantissa = false ; 
__CvT__record_line____(__CvT_miT,147,182);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,147,183);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,185);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,147,187);break ; 
}else {__CvT__record_line____(__CvT_miT,147,188);if ( __c == __lit [ __num_base :: _S_izero ] ) 
{{ 
__CvT__record_line____(__CvT_miT,147,190);if ( ! __found_mantissa ) 
{{ 
__CvT__record_line____(__CvT_miT,147,192);__xtrc += '0' ; 
__CvT__record_line____(__CvT_miT,147,193);__found_mantissa = true ; 
} 
}__CvT__record_line____(__CvT_miT,147,195);++ __sep_pos ; 

__CvT__record_line____(__CvT_miT,147,197);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,198);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,200);__testeof = true ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,203);break ; 
}}} 


}__CvT__record_line____(__CvT_miT,147,207);bool __found_dec = false ; 
__CvT__record_line____(__CvT_miT,147,208);bool __found_sci = false ; 
__CvT__record_line____(__CvT_miT,147,209);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,147,210);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,147,211);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,147,212);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,147,214);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,147,216);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,218);const int __digit = _M_find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,147,219);if ( __digit != - 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,147,221);__xtrc += '0' + __digit ; 
__CvT__record_line____(__CvT_miT,147,222);__found_mantissa = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,147,224);if ( __c == __lc -> _M_decimal_point 
&& ! __found_dec && ! __found_sci ) 
{{ 
__CvT__record_line____(__CvT_miT,147,227);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,147,228);__found_dec = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,147,230);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,147,235);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,147,236);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,147,239);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,147,241);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,147,242);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,147,243);if ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
{__CvT__record_line____(__CvT_miT,147,244);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,147,246);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,250);__testeof = true ; 
__CvT__record_line____(__CvT_miT,147,251);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,255);break ; 

}}}__CvT__record_line____(__CvT_miT,147,257);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,258);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,260);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,147,263);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,147,267);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 
__CvT__record_line____(__CvT_miT,147,269);if ( ! __found_dec && ! __found_sci ) 
{{ 


__CvT__record_line____(__CvT_miT,147,273);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,147,275);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,147,276);__sep_pos = 0 ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,147,282);__xtrc . clear ( ) ; 
__CvT__record_line____(__CvT_miT,147,283);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,287);break ; 
}} 
}else {__CvT__record_line____(__CvT_miT,147,289);if ( __c == __lc -> _M_decimal_point ) 
{{ 
__CvT__record_line____(__CvT_miT,147,291);if ( ! __found_dec && ! __found_sci ) 
{{ 



__CvT__record_line____(__CvT_miT,147,296);if ( __found_grouping . size ( ) ) 
{__CvT__record_line____(__CvT_miT,147,297);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,147,298);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,147,299);__found_dec = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,147,302);break ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,306);const char_type * __q = 
__traits_type :: find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,147,308);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,147,310);__xtrc += '0' + ( __q - __lit_zero ) ; 
__CvT__record_line____(__CvT_miT,147,311);__found_mantissa = true ; 
__CvT__record_line____(__CvT_miT,147,312);++ __sep_pos ; 
} 
}else {__CvT__record_line____(__CvT_miT,147,314);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,147,319);if ( __found_grouping . size ( ) && ! __found_dec ) 
{__CvT__record_line____(__CvT_miT,147,320);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,147,321);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,147,322);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,147,325);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,147,327);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,147,328);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,147,329);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping 
&& __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{__CvT__record_line____(__CvT_miT,147,333);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,147,335);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,339);__testeof = true ; 
__CvT__record_line____(__CvT_miT,147,340);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,344);break ; 
}}} 

}}__CvT__record_line____(__CvT_miT,147,347);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,348);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,350);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,147,355);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,147,358);if ( ! __found_dec && ! __found_sci ) 
{__CvT__record_line____(__CvT_miT,147,359);__found_grouping += static_cast < char > ( __sep_pos ) ; 

}__CvT__record_line____(__CvT_miT,147,361);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,147,364);__err = ios_base :: failbit ; 
}} 

}__CvT__record_line____(__CvT_miT,147,367);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
template < typename _ValueT > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_int ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , _ValueT & __v ) const 
{ __CvT__record_line____(__CvT_miT,147,377);
typedef char_traits < _CharT > __traits_type ; 
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,382);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,383);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,384);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,147,385);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,147,386);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,147,389);const ios_base :: fmtflags __basefield = __io . flags ( ) 
& ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,147,391);const bool __oct = __basefield == ios_base :: oct ; 
__CvT__record_line____(__CvT_miT,147,392);int __base = __oct ? 8 : ( __basefield == ios_base :: hex ? 16 : 10 ) ; 


__CvT__record_line____(__CvT_miT,147,395);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,147,398);bool __negative = false ; 
__CvT__record_line____(__CvT_miT,147,399);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,401);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,147,402);__negative = __c == __lit [ __num_base :: _S_iminus ] ; 
__CvT__record_line____(__CvT_miT,147,403);if ( ( __negative || __c == __lit [ __num_base :: _S_iplus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,407);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,408);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,410);__testeof = true ; 
}} 
}} 



}__CvT__record_line____(__CvT_miT,147,416);bool __found_zero = false ; 
__CvT__record_line____(__CvT_miT,147,417);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,147,418);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,420);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,147,422);break ; 
}else {__CvT__record_line____(__CvT_miT,147,423);if ( __c == __lit [ __num_base :: _S_izero ] 
&& ( ! __found_zero || __base == 10 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,426);__found_zero = true ; 
__CvT__record_line____(__CvT_miT,147,427);++ __sep_pos ; 
__CvT__record_line____(__CvT_miT,147,428);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,147,429);__base = 8 ; 
}__CvT__record_line____(__CvT_miT,147,430);if ( __base == 8 ) 
{__CvT__record_line____(__CvT_miT,147,431);__sep_pos = 0 ; 
}} 
}else {__CvT__record_line____(__CvT_miT,147,433);if ( __found_zero 
&& ( __c == __lit [ __num_base :: _S_ix ] 
|| __c == __lit [ __num_base :: _S_iX ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,437);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,147,438);__base = 16 ; 
}__CvT__record_line____(__CvT_miT,147,439);if ( __base == 16 ) 
{{ 
__CvT__record_line____(__CvT_miT,147,441);__found_zero = false ; 
__CvT__record_line____(__CvT_miT,147,442);__sep_pos = 0 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,147,445);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,448);break ; 

}}}__CvT__record_line____(__CvT_miT,147,450);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,147,452);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,147,453);if ( ! __found_zero ) 
{__CvT__record_line____(__CvT_miT,147,454);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,457);__testeof = true ; 
}} 



}__CvT__record_line____(__CvT_miT,147,462);const size_t __len = ( __base == 16 ? __num_base :: _S_iend 
- __num_base :: _S_izero : __base ) ; 


__CvT__record_line____(__CvT_miT,147,466);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,147,467);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,147,468);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,147,469);bool __testfail = false ; 
__CvT__record_line____(__CvT_miT,147,470);bool __testoverflow = false ; 
__CvT__record_line____(__CvT_miT,147,471);const __unsigned_type __max = 
( __negative && __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
? - __gnu_cxx :: __numeric_traits < _ValueT >:: __min 
: __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
__CvT__record_line____(__CvT_miT,147,475);const __unsigned_type __smax = __max / __base ; 
__CvT__record_line____(__CvT_miT,147,476);__unsigned_type __result = 0 ; 
__CvT__record_line____(__CvT_miT,147,477);int __digit = 0 ; 
__CvT__record_line____(__CvT_miT,147,478);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,147,480);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,147,482);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,147,484);__digit = _M_find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,147,485);if ( __digit == - 1 ) 
{__CvT__record_line____(__CvT_miT,147,486);break ; 

}__CvT__record_line____(__CvT_miT,147,488);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,147,489);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,492);__result *= __base ; 
__CvT__record_line____(__CvT_miT,147,493);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,147,494);__result += __digit ; 
__CvT__record_line____(__CvT_miT,147,495);++ __sep_pos ; 
} 

}__CvT__record_line____(__CvT_miT,147,498);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,499);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,501);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,147,504);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,147,508);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 


__CvT__record_line____(__CvT_miT,147,512);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,147,514);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,147,515);__sep_pos = 0 ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,519);__testfail = true ; 
__CvT__record_line____(__CvT_miT,147,520);break ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,147,523);if ( __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,147,524);break ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,527);const char_type * __q = 
__traits_type :: find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,147,529);if ( ! __q ) 
{__CvT__record_line____(__CvT_miT,147,530);break ; 

}__CvT__record_line____(__CvT_miT,147,532);__digit = __q - __lit_zero ; 
__CvT__record_line____(__CvT_miT,147,533);if ( __digit > 15 ) 
{__CvT__record_line____(__CvT_miT,147,534);__digit -= 6 ; 
}__CvT__record_line____(__CvT_miT,147,535);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,147,536);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,539);__result *= __base ; 
__CvT__record_line____(__CvT_miT,147,540);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,147,541);__result += __digit ; 
__CvT__record_line____(__CvT_miT,147,542);++ __sep_pos ; 
} 
}} 

}}__CvT__record_line____(__CvT_miT,147,546);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,147,547);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,147,549);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,147,554);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,147,557);__found_grouping += static_cast < char > ( __sep_pos ) ; 

__CvT__record_line____(__CvT_miT,147,559);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,147,562);__err = ios_base :: failbit ; 
}} 



}__CvT__record_line____(__CvT_miT,147,567);if ( ( ! __sep_pos && ! __found_zero && ! __found_grouping . size ( ) ) 
|| __testfail ) 
{{ 
__CvT__record_line____(__CvT_miT,147,570);__v = 0 ; 
__CvT__record_line____(__CvT_miT,147,571);__err = ios_base :: failbit ; 
} 
}else {__CvT__record_line____(__CvT_miT,147,573);if ( __testoverflow ) 
{{ 
__CvT__record_line____(__CvT_miT,147,575);if ( __negative 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,147,577);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __min ; 
}else {
__CvT__record_line____(__CvT_miT,147,579);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
}__CvT__record_line____(__CvT_miT,147,580);__err = ios_base :: failbit ; 
} 
}else {
__CvT__record_line____(__CvT_miT,147,583);__v = __negative ? - __result : __result ; 

}}__CvT__record_line____(__CvT_miT,147,585);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,147,586);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,147,587);return __beg ; 
} 



template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,147,597);
__CvT__record_line____(__CvT_miT,147,598);if ( ! ( __io . flags ( ) & ios_base :: boolalpha ) ) 
{{ 



__CvT__record_line____(__CvT_miT,147,603);long __l = - 1 ; 
__CvT__record_line____(__CvT_miT,147,604);__beg = _M_extract_int ( __beg , __end , __io , __err , __l ) ; 
__CvT__record_line____(__CvT_miT,147,605);if ( __l == 0 || __l == 1 ) 
{__CvT__record_line____(__CvT_miT,147,606);__v = bool ( __l ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,147,611);__v = true ; 
__CvT__record_line____(__CvT_miT,147,612);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,147,613);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,147,614);__err |= ios_base :: eofbit ; 
}} 
}} 
}else {
{ 

typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,621);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,622);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,623);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,147,625);bool __testf = true ; 
__CvT__record_line____(__CvT_miT,147,626);bool __testt = true ; 
__CvT__record_line____(__CvT_miT,147,627);bool __donef = __lc -> _M_falsename_size == 0 ; 
__CvT__record_line____(__CvT_miT,147,628);bool __donet = __lc -> _M_truename_size == 0 ; 
__CvT__record_line____(__CvT_miT,147,629);bool __testeof = false ; 
__CvT__record_line____(__CvT_miT,147,630);size_t __n = 0 ; 
__CvT__record_line____(__CvT_miT,147,631);while ( ! __donef || ! __donet ) 
{{ 
__CvT__record_line____(__CvT_miT,147,633);if ( __beg == __end ) 
{{ 
__CvT__record_line____(__CvT_miT,147,635);__testeof = true ; 
__CvT__record_line____(__CvT_miT,147,636);break ; 
} 

}__CvT__record_line____(__CvT_miT,147,639);const char_type __c = * __beg ; 

__CvT__record_line____(__CvT_miT,147,641);if ( ! __donef ) 
{__CvT__record_line____(__CvT_miT,147,642);__testf = __c == __lc -> _M_falsename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,147,644);if ( ! __testf && __donet ) 
{__CvT__record_line____(__CvT_miT,147,645);break ; 

}__CvT__record_line____(__CvT_miT,147,647);if ( ! __donet ) 
{__CvT__record_line____(__CvT_miT,147,648);__testt = __c == __lc -> _M_truename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,147,650);if ( ! __testt && __donef ) 
{__CvT__record_line____(__CvT_miT,147,651);break ; 

}__CvT__record_line____(__CvT_miT,147,653);if ( ! __testt && ! __testf ) 
{__CvT__record_line____(__CvT_miT,147,654);break ; 

}__CvT__record_line____(__CvT_miT,147,656);++ __n ; 
__CvT__record_line____(__CvT_miT,147,657);++ __beg ; 

__CvT__record_line____(__CvT_miT,147,659);__donef = ! __testf || __n >= __lc -> _M_falsename_size ; 
__CvT__record_line____(__CvT_miT,147,660);__donet = ! __testt || __n >= __lc -> _M_truename_size ; 
} 
}__CvT__record_line____(__CvT_miT,147,662);if ( __testf && __n == __lc -> _M_falsename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,147,664);__v = false ; 
__CvT__record_line____(__CvT_miT,147,665);if ( __testt && __n == __lc -> _M_truename_size ) 
{__CvT__record_line____(__CvT_miT,147,666);__err = ios_base :: failbit ; 
}else {
__CvT__record_line____(__CvT_miT,147,668);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
}} 
}else {__CvT__record_line____(__CvT_miT,147,670);if ( __testt && __n == __lc -> _M_truename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,147,672);__v = true ; 
__CvT__record_line____(__CvT_miT,147,673);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,147,679);__v = false ; 
__CvT__record_line____(__CvT_miT,147,680);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,147,681);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,147,682);__err |= ios_base :: eofbit ; 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,147,685);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,147,693);
__CvT__record_line____(__CvT_miT,147,694);string __xtrc ; 
__CvT__record_line____(__CvT_miT,147,695);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,147,696);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,147,697);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,147,698);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,147,699);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,147,700);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,147,708);
__CvT__record_line____(__CvT_miT,147,709);string __xtrc ; 
__CvT__record_line____(__CvT_miT,147,710);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,147,711);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,147,712);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,147,713);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,147,714);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,147,715);return __beg ; 
} 
# 735 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,147,740);
__CvT__record_line____(__CvT_miT,147,741);string __xtrc ; 
__CvT__record_line____(__CvT_miT,147,742);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,147,743);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,147,744);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,147,745);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,147,746);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,147,747);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,147,755);

typedef ios_base :: fmtflags fmtflags ; 
__CvT__record_line____(__CvT_miT,147,758);const fmtflags __fmt = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,147,759);__io . flags ( ( __fmt & ~ ios_base :: basefield ) | ios_base :: hex ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,147,765);_UIntPtrType __ul ; 
__CvT__record_line____(__CvT_miT,147,766);__beg = _M_extract_int ( __beg , __end , __io , __err , __ul ) ; 


__CvT__record_line____(__CvT_miT,147,769);__io . flags ( __fmt ) ; 

__CvT__record_line____(__CvT_miT,147,771);__v = reinterpret_cast < void *> ( __ul ) ; 
__CvT__record_line____(__CvT_miT,147,772);return __beg ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_pad ( _CharT __fill , streamsize __w , ios_base & __io , 
_CharT * __new , const _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,147,782);


__CvT__record_line____(__CvT_miT,147,785);__pad < _CharT , char_traits < _CharT > >:: _S_pad ( __io , __fill , __new , 
__cs , __w , __len ) ; 
__CvT__record_line____(__CvT_miT,147,787);__len = static_cast < int > ( __w ) ; 
} 



template < typename _CharT , typename _ValueT > 
int 
__int_to_char ( _CharT * __bufend , _ValueT __v , const _CharT * __lit , 
ios_base :: fmtflags __flags , bool __dec ) 
{ __CvT__record_line____(__CvT_miT,147,796);
__CvT__record_line____(__CvT_miT,147,797);_CharT * __buf = __bufend ; 
__CvT__record_line____(__CvT_miT,147,798);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,147,801);do {
{ 
__CvT__record_line____(__CvT_miT,147,803);*-- __buf = __lit [ ( __v % 10 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,147,804);__v /= 10 ; 
} 
}while ( __v != 0 ) ;
} 
}else {__CvT__record_line____(__CvT_miT,147,808);if ( ( __flags & ios_base :: basefield ) == ios_base :: oct ) 
{{ 

__CvT__record_line____(__CvT_miT,147,811);do {
{ 
__CvT__record_line____(__CvT_miT,147,813);*-- __buf = __lit [ ( __v & 0x7 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,147,814);__v >>= 3 ; 
} 
}while ( __v != 0 ) ;
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,147,821);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,147,822);const int __case_offset = __uppercase ? __num_base :: _S_oudigits 
: __num_base :: _S_odigits ; 
__CvT__record_line____(__CvT_miT,147,824);do {
{ 
__CvT__record_line____(__CvT_miT,147,826);*-- __buf = __lit [ ( __v & 0xf ) + __case_offset ] ; 
__CvT__record_line____(__CvT_miT,147,827);__v >>= 4 ; 
} 
}while ( __v != 0 ) ;
} 
}}__CvT__record_line____(__CvT_miT,147,831);return __bufend - __buf ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_int ( const char * __grouping , size_t __grouping_size , _CharT __sep , 
ios_base & , _CharT * __new , _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,147,841);
__CvT__record_line____(__CvT_miT,147,842);_CharT * __p = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , __cs , __cs + __len ) ; 
__CvT__record_line____(__CvT_miT,147,844);__len = __p - __new ; 
} 

template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_int ( _OutIter __s , ios_base & __io , _CharT __fill , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,147,853);
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,857);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,858);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,859);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,147,860);const _CharT * __lit = __lc -> _M_atoms_out ; 
__CvT__record_line____(__CvT_miT,147,861);const ios_base :: fmtflags __flags = __io . flags ( ) ; 


__CvT__record_line____(__CvT_miT,147,864);const int __ilen = 5 * sizeof ( _ValueT ) ; 
__CvT__record_line____(__CvT_miT,147,865);_CharT * __cs = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __ilen ) ) ; 



__CvT__record_line____(__CvT_miT,147,870);const ios_base :: fmtflags __basefield = __flags & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,147,871);const bool __dec = ( __basefield != ios_base :: oct 
&& __basefield != ios_base :: hex ) ; 
__CvT__record_line____(__CvT_miT,147,873);const __unsigned_type __u = ( ( __v > 0 || ! __dec ) 
? __unsigned_type ( __v ) 
: - __unsigned_type ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,147,876);int __len = __int_to_char ( __cs + __ilen , __u , __lit , __flags , __dec ) ; 
__CvT__record_line____(__CvT_miT,147,877);__cs += __ilen - __len ; 


__CvT__record_line____(__CvT_miT,147,880);if ( __lc -> _M_use_grouping ) 
{{ 


__CvT__record_line____(__CvT_miT,147,884);_CharT * __cs2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* ( __len + 1 ) 
* 2 ) ) ; 
__CvT__record_line____(__CvT_miT,147,887);_M_group_int ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __io , __cs2 + 2 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,147,889);__cs = __cs2 + 2 ; 
} 


}__CvT__record_line____(__CvT_miT,147,893);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,147,896);if ( __v >= 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,147,898);if ( bool ( __flags & ios_base :: showpos ) 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,147,900);*-- __cs = __lit [ __num_base :: _S_oplus ] , ++ __len ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,147,903);*-- __cs = __lit [ __num_base :: _S_ominus ] , ++ __len ; 
}} 
}else {__CvT__record_line____(__CvT_miT,147,905);if ( bool ( __flags & ios_base :: showbase ) && __v ) 
{{ 
__CvT__record_line____(__CvT_miT,147,907);if ( __basefield == ios_base :: oct ) 
{__CvT__record_line____(__CvT_miT,147,908);*-- __cs = __lit [ __num_base :: _S_odigits ] , ++ __len ; 
}else {
{ 

__CvT__record_line____(__CvT_miT,147,912);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,147,913);*-- __cs = __lit [ __num_base :: _S_ox + __uppercase ] ; 

__CvT__record_line____(__CvT_miT,147,915);*-- __cs = __lit [ __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,147,916);__len += 2 ; 
} 
}} 


}}__CvT__record_line____(__CvT_miT,147,921);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,147,922);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,924);_CharT * __cs3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,147,926);_M_pad ( __fill , __w , __io , __cs3 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,147,927);__cs = __cs3 ; 
} 
}__CvT__record_line____(__CvT_miT,147,929);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,147,933);return std :: __write ( __s , __cs , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
_CharT __sep , const _CharT * __p , _CharT * __new , 
_CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,147,942);



__CvT__record_line____(__CvT_miT,147,946);const int __declen = __p ? __p - __cs : __len ; 
__CvT__record_line____(__CvT_miT,147,947);_CharT * __p2 = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , 
__cs , __cs + __declen ) ; 


__CvT__record_line____(__CvT_miT,147,952);int __newlen = __p2 - __new ; 
__CvT__record_line____(__CvT_miT,147,953);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,147,955);char_traits < _CharT >:: copy ( __p2 , __p , __len - __declen ) ; 
__CvT__record_line____(__CvT_miT,147,956);__newlen += __len - __declen ; 
} 
}__CvT__record_line____(__CvT_miT,147,958);__len = __newlen ; 
} 
# 971 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_float ( _OutIter __s , ios_base & __io , _CharT __fill , char __mod , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,147,977);
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,979);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,980);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,981);const __cache_type * __lc = __uc ( __loc ) ; 


__CvT__record_line____(__CvT_miT,147,984);const streamsize __prec = __io . precision ( ) < 0 ? 6 : __io . precision ( ) ; 

__CvT__record_line____(__CvT_miT,147,986);const int __max_digits = 
__gnu_cxx :: __numeric_traits < _ValueT >:: __digits10 ; 


__CvT__record_line____(__CvT_miT,147,990);int __len ; 

__CvT__record_line____(__CvT_miT,147,992);char __fbuf [ 16 ] ; 
__CvT__record_line____(__CvT_miT,147,993);__num_base :: _S_format_float ( __io , __fbuf , __mod ) ; 



__CvT__record_line____(__CvT_miT,147,997);const bool __use_prec = 
( __io . flags ( ) & ios_base :: floatfield ) != ios_base :: floatfield ; 



__CvT__record_line____(__CvT_miT,147,1002);int __cs_size = __max_digits * 3 ; 
__CvT__record_line____(__CvT_miT,147,1003);char * __cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,147,1004);if ( __use_prec ) 
{__CvT__record_line____(__CvT_miT,147,1005);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 
}else {
__CvT__record_line____(__CvT_miT,147,1008);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __v ) ; 


}__CvT__record_line____(__CvT_miT,147,1012);if ( __len >= __cs_size ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1014);__cs_size = __len + 1 ; 
__CvT__record_line____(__CvT_miT,147,1015);__cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,147,1016);if ( __use_prec ) 
{__CvT__record_line____(__CvT_miT,147,1017);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 
}else {
__CvT__record_line____(__CvT_miT,147,1020);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __v ) ; 
}} 
# 1044 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
}__CvT__record_line____(__CvT_miT,147,1044);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,147,1046);_CharT * __ws = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len ) ) ; 
__CvT__record_line____(__CvT_miT,147,1048);__ctype . widen ( __cs , __cs + __len , __ws ) ; 


__CvT__record_line____(__CvT_miT,147,1051);_CharT * __wp = 0 ; 
__CvT__record_line____(__CvT_miT,147,1052);const char * __p = char_traits < char >:: find ( __cs , __len , '.' ) ; 
__CvT__record_line____(__CvT_miT,147,1053);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1055);__wp = __ws + ( __p - __cs ) ; 
__CvT__record_line____(__CvT_miT,147,1056);* __wp = __lc -> _M_decimal_point ; 
} 




}__CvT__record_line____(__CvT_miT,147,1062);if ( __lc -> _M_use_grouping 
&& ( __wp || __len < 3 || ( __cs [ 1 ] <= '9' && __cs [ 2 ] <= '9' 
&& __cs [ 1 ] >= '0' && __cs [ 2 ] >= '0' ) ) ) 
{{ 


__CvT__record_line____(__CvT_miT,147,1068);_CharT * __ws2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len * 2 ) ) ; 

__CvT__record_line____(__CvT_miT,147,1071);streamsize __off = 0 ; 
__CvT__record_line____(__CvT_miT,147,1072);if ( __cs [ 0 ] == '-' || __cs [ 0 ] == '+' ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1074);__off = 1 ; 
__CvT__record_line____(__CvT_miT,147,1075);__ws2 [ 0 ] = __ws [ 0 ] ; 
__CvT__record_line____(__CvT_miT,147,1076);__len -= 1 ; 
} 

}__CvT__record_line____(__CvT_miT,147,1079);_M_group_float ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __wp , __ws2 + __off , 
__ws + __off , __len ) ; 
__CvT__record_line____(__CvT_miT,147,1082);__len += __off ; 

__CvT__record_line____(__CvT_miT,147,1084);__ws = __ws2 ; 
} 


}__CvT__record_line____(__CvT_miT,147,1088);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,147,1089);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1091);_CharT * __ws3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,147,1093);_M_pad ( __fill , __w , __io , __ws3 , __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,147,1094);__ws = __ws3 ; 
} 
}__CvT__record_line____(__CvT_miT,147,1096);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,147,1100);return std :: __write ( __s , __ws , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,147,1107);
__CvT__record_line____(__CvT_miT,147,1108);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,147,1109);if ( ( __flags & ios_base :: boolalpha ) == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1111);const long __l = __v ; 
__CvT__record_line____(__CvT_miT,147,1112);__s = _M_insert_int ( __s , __io , __fill , __l ) ; 
} 
}else {
{ 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,147,1117);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,147,1118);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,1119);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,147,1121);const _CharT * __name = __v ? __lc -> _M_truename 
: __lc -> _M_falsename ; 
__CvT__record_line____(__CvT_miT,147,1123);int __len = __v ? __lc -> _M_truename_size 
: __lc -> _M_falsename_size ; 

__CvT__record_line____(__CvT_miT,147,1126);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,147,1127);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1129);const streamsize __plen = __w - __len ; 
__CvT__record_line____(__CvT_miT,147,1130);_CharT * __ps 
= static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __plen ) ) ; 

__CvT__record_line____(__CvT_miT,147,1134);char_traits < _CharT >:: assign ( __ps , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,147,1135);__io . width ( 0 ) ; 

__CvT__record_line____(__CvT_miT,147,1137);if ( ( __flags & ios_base :: adjustfield ) == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1139);__s = std :: __write ( __s , __name , __len ) ; 
__CvT__record_line____(__CvT_miT,147,1140);__s = std :: __write ( __s , __ps , __plen ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,147,1144);__s = std :: __write ( __s , __ps , __plen ) ; 
__CvT__record_line____(__CvT_miT,147,1145);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,147,1147);return __s ; 
} 
}__CvT__record_line____(__CvT_miT,147,1149);__io . width ( 0 ) ; 
__CvT__record_line____(__CvT_miT,147,1150);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,147,1152);return __s ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,147,1159);return _M_insert_float ( __s , __io , __fill , char ( ) , __v ) ; } 
# 1169 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,147,1174);return _M_insert_float ( __s , __io , __fill , 'L' , __v ) ; } 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,147,1181);
__CvT__record_line____(__CvT_miT,147,1182);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,147,1183);const ios_base :: fmtflags __fmt = ~ ( ios_base :: basefield 
| ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,147,1185);__io . flags ( ( __flags & __fmt ) | ( ios_base :: hex | ios_base :: showbase ) ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( const void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,147,1191);__s = _M_insert_int ( __s , __io , __fill , 
reinterpret_cast < _UIntPtrType > ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,147,1193);__io . flags ( __flags ) ; 
__CvT__record_line____(__CvT_miT,147,1194);return __s ; 
} 


# 1206 "/usr/include/c++/7.1.1/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _Traits > 
void 
__pad < _CharT , _Traits >:: _S_pad ( ios_base & __io , _CharT __fill , 
_CharT * __news , const _CharT * __olds , 
streamsize __newlen , streamsize __oldlen ) 
{ __CvT__record_line____(__CvT_miT,147,1211);
__CvT__record_line____(__CvT_miT,147,1212);const size_t __plen = static_cast < size_t > ( __newlen - __oldlen ) ; 
__CvT__record_line____(__CvT_miT,147,1213);const ios_base :: fmtflags __adjust = __io . flags ( ) & ios_base :: adjustfield ; 


__CvT__record_line____(__CvT_miT,147,1216);if ( __adjust == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1218);_Traits :: copy ( __news , __olds , __oldlen ) ; 
__CvT__record_line____(__CvT_miT,147,1219);_Traits :: assign ( __news + __oldlen , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,147,1220);return ; 
} 

}__CvT__record_line____(__CvT_miT,147,1223);size_t __mod = 0 ; 
__CvT__record_line____(__CvT_miT,147,1224);if ( __adjust == ios_base :: internal ) 
{{ 



__CvT__record_line____(__CvT_miT,147,1229);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,147,1230);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,147,1232);if ( __ctype . widen ( '-' ) == __olds [ 0 ] 
|| __ctype . widen ( '+' ) == __olds [ 0 ] ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1235);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,147,1236);__mod = 1 ; 
__CvT__record_line____(__CvT_miT,147,1237);++ __news ; 
} 
}else {__CvT__record_line____(__CvT_miT,147,1239);if ( __ctype . widen ( '0' ) == __olds [ 0 ] 
&& __oldlen > 1 
&& ( __ctype . widen ( 'x' ) == __olds [ 1 ] 
|| __ctype . widen ( 'X' ) == __olds [ 1 ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1244);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,147,1245);__news [ 1 ] = __olds [ 1 ] ; 
__CvT__record_line____(__CvT_miT,147,1246);__mod = 2 ; 
__CvT__record_line____(__CvT_miT,147,1247);__news += 2 ; 
} 

}}} 
}__CvT__record_line____(__CvT_miT,147,1251);_Traits :: assign ( __news , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,147,1252);_Traits :: copy ( __news + __plen , __olds + __mod , __oldlen - __mod ) ; 
} 

template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) 
{ __CvT__record_line____(__CvT_miT,147,1260);
__CvT__record_line____(__CvT_miT,147,1261);size_t __idx = 0 ; 
__CvT__record_line____(__CvT_miT,147,1262);size_t __ctr = 0 ; 

__CvT__record_line____(__CvT_miT,147,1264);while ( __last - __first > __gbeg [ __idx ] 
&& static_cast < signed char > ( __gbeg [ __idx ] ) > 0 
&& __gbeg [ __idx ] != __gnu_cxx :: __numeric_traits < char >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1268);__last -= __gbeg [ __idx ] ; 
__CvT__record_line____(__CvT_miT,147,1269);__idx < __gsize - 1 ? ++ __idx : ++ __ctr ; 
} 

}__CvT__record_line____(__CvT_miT,147,1272);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,147,1273);* __s ++ = * __first ++ ; 

}__CvT__record_line____(__CvT_miT,147,1275);while ( __ctr -- ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1277);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,147,1278);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,147,1279);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,147,1282);while ( __idx -- ) 
{{ 
__CvT__record_line____(__CvT_miT,147,1284);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,147,1285);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,147,1286);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,147,1289);return __s ; 
} 




extern template class __cxx11 :: numpunct < char > ; 
extern template class __cxx11 :: numpunct_byname < char > ; 
extern template class num_get < char > ; 
extern template class num_put < char > ; 
extern template class ctype_byname < char > ; 

extern template 
const ctype < char >& 
use_facet < ctype < char > > ( const locale & ) ; 

extern template 
const numpunct < char >& 
use_facet < numpunct < char > > ( const locale & ) ; 

extern template 
const num_put < char >& 
use_facet < num_put < char > > ( const locale & ) ; 

extern template 
const num_get < char >& 
use_facet < num_get < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < char > > ( const locale & ) ; 


extern template class __cxx11 :: numpunct < wchar_t > ; 
extern template class __cxx11 :: numpunct_byname < wchar_t > ; 
extern template class num_get < wchar_t > ; 
extern template class num_put < wchar_t > ; 
extern template class ctype_byname < wchar_t > ; 

extern template 
const ctype < wchar_t >& 
use_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
const numpunct < wchar_t >& 
use_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
const num_put < wchar_t >& 
use_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
const num_get < wchar_t >& 
use_facet < num_get < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < wchar_t > > ( const locale & ) ; 




} 
# 2652 "/usr/include/c++/7.1.1/bits/locale_facets.h" 2 3 
# 38 "/usr/include/c++/7.1.1/bits/basic_ios.h" 2 3 



namespace std 
{ 


template < typename _Facet > 
inline const _Facet & 
__check_facet ( const _Facet * __f ) 
{ 
if ( ! __f ) 
__throw_bad_cast ( ) ; 
return * __f ; 
} 
# 66 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
template < typename _CharT , typename _Traits > 
class basic_ios : public ios_base 
{ 
public : 






typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 






typedef ctype < _CharT > __ctype_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 



protected : 
basic_ostream < _CharT , _Traits >* _M_tie ; 
mutable char_type _M_fill ; 
mutable bool _M_fill_init ; 
basic_streambuf < _CharT , _Traits >* _M_streambuf ; 


const __ctype_type * _M_ctype ; 

const __num_put_type * _M_num_put ; 

const __num_get_type * _M_num_get ; 

public : 
# 117 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
explicit operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,140,118);return ! this -> fail ( ) ; } 





bool 
operator ! ( ) const 
{ __CvT__record_line____(__CvT_miT,140,126);return this -> fail ( ) ; } 
# 136 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
iostate 
rdstate ( ) const 
{ __CvT__record_line____(__CvT_miT,140,138);return _M_streambuf_state ; } 
# 147 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
void 
clear ( iostate __state = goodbit ) ; 







void 
setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,140,158);this -> clear ( this -> rdstate ( ) | __state ) ; } 




void 
_M_setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,140,165);


__CvT__record_line____(__CvT_miT,140,168);_M_streambuf_state |= __state ; 
__CvT__record_line____(__CvT_miT,140,169);if ( this -> exceptions ( ) & __state ) 
{__CvT__record_line____(__CvT_miT,140,170);throw ; 
}} 







bool 
good ( ) const 
{ __CvT__record_line____(__CvT_miT,140,181);return this -> rdstate ( ) == 0 ; } 







bool 
eof ( ) const 
{ __CvT__record_line____(__CvT_miT,140,191);return ( this -> rdstate ( ) & eofbit ) != 0 ; } 
# 200 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
bool 
fail ( ) const 
{ __CvT__record_line____(__CvT_miT,140,202);return ( this -> rdstate ( ) & ( badbit | failbit ) ) != 0 ; } 







bool 
bad ( ) const 
{ __CvT__record_line____(__CvT_miT,140,212);return ( this -> rdstate ( ) & badbit ) != 0 ; } 
# 221 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
iostate 
exceptions ( ) const 
{ __CvT__record_line____(__CvT_miT,140,223);return _M_exception ; } 
# 256 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
void 
exceptions ( iostate __except ) 
{ __CvT__record_line____(__CvT_miT,140,258);
__CvT__record_line____(__CvT_miT,140,259);_M_exception = __except ; 
__CvT__record_line____(__CvT_miT,140,260);this -> clear ( _M_streambuf_state ) ; 
} 







explicit 
basic_ios ( basic_streambuf < _CharT , _Traits >* __sb ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( ) , _M_fill_init ( false ) , _M_streambuf ( 0 ) , 
_M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,140,273);this -> init ( __sb ) ; } 







virtual 
~ basic_ios ( ) { __CvT__record_line____(__CvT_miT,140,282);} 
# 294 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( ) const 
{ __CvT__record_line____(__CvT_miT,140,296);return _M_tie ; } 
# 306 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( basic_ostream < _CharT , _Traits >* __tiestr ) 
{ __CvT__record_line____(__CvT_miT,140,308);
__CvT__record_line____(__CvT_miT,140,309);basic_ostream < _CharT , _Traits >* __old = _M_tie ; 
__CvT__record_line____(__CvT_miT,140,310);_M_tie = __tiestr ; 
__CvT__record_line____(__CvT_miT,140,311);return __old ; 
} 







basic_streambuf < _CharT , _Traits >* 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,140,322);return _M_streambuf ; } 
# 346 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
basic_streambuf < _CharT , _Traits >* 
rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) ; 
# 360 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
basic_ios & 
copyfmt ( const basic_ios & __rhs ) ; 







char_type 
fill ( ) const 
{ __CvT__record_line____(__CvT_miT,140,371);
__CvT__record_line____(__CvT_miT,140,372);if ( ! _M_fill_init ) 
{{ 
__CvT__record_line____(__CvT_miT,140,374);_M_fill = this -> widen ( ' ' ) ; 
__CvT__record_line____(__CvT_miT,140,375);_M_fill_init = true ; 
} 
}__CvT__record_line____(__CvT_miT,140,377);return _M_fill ; 
} 
# 389 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
char_type 
fill ( char_type __ch ) 
{ __CvT__record_line____(__CvT_miT,140,391);
__CvT__record_line____(__CvT_miT,140,392);char_type __old = this -> fill ( ) ; 
__CvT__record_line____(__CvT_miT,140,393);_M_fill = __ch ; 
__CvT__record_line____(__CvT_miT,140,394);return __old ; 
} 
# 409 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
locale 
imbue ( const locale & __loc ) ; 
# 429 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,140,431);return __check_facet ( _M_ctype ) . narrow ( __c , __dfault ) ; } 
# 448 "/usr/include/c++/7.1.1/bits/basic_ios.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,140,450);return __check_facet ( _M_ctype ) . widen ( __c ) ; } 

protected : 







basic_ios ( ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( char_type ( ) ) , _M_fill_init ( false ) , 
_M_streambuf ( 0 ) , _M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,140,463);} 







void 
init ( basic_streambuf < _CharT , _Traits >* __sb ) ; 


basic_ios ( const basic_ios & ) = delete ; 
basic_ios & operator = ( const basic_ios & ) = delete ; 

void 
move ( basic_ios & __rhs ) 
{ __CvT__record_line____(__CvT_miT,140,480);
__CvT__record_line____(__CvT_miT,140,481);ios_base :: _M_move ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,140,482);_M_cache_locale ( _M_ios_locale ) ; 
__CvT__record_line____(__CvT_miT,140,483);this -> tie ( __rhs . tie ( nullptr ) ) ; 
__CvT__record_line____(__CvT_miT,140,484);_M_fill = __rhs . _M_fill ; 
__CvT__record_line____(__CvT_miT,140,485);_M_fill_init = __rhs . _M_fill_init ; 
__CvT__record_line____(__CvT_miT,140,486);_M_streambuf = nullptr ; 
} 

void 
move ( basic_ios && __rhs ) 
{ __CvT__record_line____(__CvT_miT,140,491);this -> move ( __rhs ) ; } 

void 
swap ( basic_ios & __rhs ) noexcept 
{ __CvT__record_line____(__CvT_miT,140,495);
__CvT__record_line____(__CvT_miT,140,496);ios_base :: _M_swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,140,497);_M_cache_locale ( _M_ios_locale ) ; 
__CvT__record_line____(__CvT_miT,140,498);__rhs . _M_cache_locale ( __rhs . _M_ios_locale ) ; 
__CvT__record_line____(__CvT_miT,140,499);std :: swap ( _M_tie , __rhs . _M_tie ) ; 
__CvT__record_line____(__CvT_miT,140,500);std :: swap ( _M_fill , __rhs . _M_fill ) ; 
__CvT__record_line____(__CvT_miT,140,501);std :: swap ( _M_fill_init , __rhs . _M_fill_init ) ; 
} 

void 
set_rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,140,506);_M_streambuf = __sb ; } 


void 
_M_cache_locale ( const locale & __loc ) ; 
} ; 


} 

# 1 "/usr/include/c++/7.1.1/bits/basic_ios.tcc" 1 3 
# 33 "/usr/include/c++/7.1.1/bits/basic_ios.tcc" 3 

# 34 "/usr/include/c++/7.1.1/bits/basic_ios.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: clear ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,148,42);
__CvT__record_line____(__CvT_miT,148,43);if ( this -> rdbuf ( ) ) 
{__CvT__record_line____(__CvT_miT,148,44);_M_streambuf_state = __state ; 
}else {
__CvT__record_line____(__CvT_miT,148,46);_M_streambuf_state = __state | badbit ; 
}__CvT__record_line____(__CvT_miT,148,47);if ( this -> exceptions ( ) & this -> rdstate ( ) ) 
{__CvT__record_line____(__CvT_miT,148,48);__throw_ios_failure ( ( "basic_ios::clear" ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_streambuf < _CharT , _Traits >* 
basic_ios < _CharT , _Traits >:: rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,148,54);
__CvT__record_line____(__CvT_miT,148,55);basic_streambuf < _CharT , _Traits >* __old = _M_streambuf ; 
__CvT__record_line____(__CvT_miT,148,56);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,148,57);this -> clear ( ) ; 
__CvT__record_line____(__CvT_miT,148,58);return __old ; 
} 

template < typename _CharT , typename _Traits > 
basic_ios < _CharT , _Traits >& 
basic_ios < _CharT , _Traits >:: copyfmt ( const basic_ios & __rhs ) 
{ __CvT__record_line____(__CvT_miT,148,64);


__CvT__record_line____(__CvT_miT,148,67);if ( this != & __rhs ) 
{{ 




__CvT__record_line____(__CvT_miT,148,73);_Words * __words = ( __rhs . _M_word_size <= _S_local_word_size ) ? 
_M_local_word : new _Words [ __rhs . _M_word_size ] ; 


__CvT__record_line____(__CvT_miT,148,77);_Callback_list * __cb = __rhs . _M_callbacks ; 
__CvT__record_line____(__CvT_miT,148,78);if ( __cb ) 
{__CvT__record_line____(__CvT_miT,148,79);__cb -> _M_add_reference ( ) ; 
}__CvT__record_line____(__CvT_miT,148,80);_M_call_callbacks ( erase_event ) ; 
__CvT__record_line____(__CvT_miT,148,81);if ( _M_word != _M_local_word ) 
{{ 
__CvT__record_line____(__CvT_miT,148,83);delete [ ] _M_word ; 
__CvT__record_line____(__CvT_miT,148,84);_M_word = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,148,86);_M_dispose_callbacks ( ) ; 


__CvT__record_line____(__CvT_miT,148,89);_M_callbacks = __cb ; 
__CvT__record_line____(__CvT_miT,148,90);for ( int __i = 0 ; __i < __rhs . _M_word_size ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,148,91);__words [ __i ] = __rhs . _M_word [ __i ] ; 
}__CvT__record_line____(__CvT_miT,148,92);_M_word = __words ; 
__CvT__record_line____(__CvT_miT,148,93);_M_word_size = __rhs . _M_word_size ; 

__CvT__record_line____(__CvT_miT,148,95);this -> flags ( __rhs . flags ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,96);this -> width ( __rhs . width ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,97);this -> precision ( __rhs . precision ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,98);this -> tie ( __rhs . tie ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,99);this -> fill ( __rhs . fill ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,100);_M_ios_locale = __rhs . getloc ( ) ; 
__CvT__record_line____(__CvT_miT,148,101);_M_cache_locale ( _M_ios_locale ) ; 

__CvT__record_line____(__CvT_miT,148,103);_M_call_callbacks ( copyfmt_event ) ; 


__CvT__record_line____(__CvT_miT,148,106);this -> exceptions ( __rhs . exceptions ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,148,108);return * this ; 
} 


template < typename _CharT , typename _Traits > 
locale 
basic_ios < _CharT , _Traits >:: imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,148,115);
__CvT__record_line____(__CvT_miT,148,116);locale __old ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,148,117);ios_base :: imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,148,118);_M_cache_locale ( __loc ) ; 
__CvT__record_line____(__CvT_miT,148,119);if ( this -> rdbuf ( ) != 0 ) 
{__CvT__record_line____(__CvT_miT,148,120);this -> rdbuf ( ) -> pubimbue ( __loc ) ; 
}__CvT__record_line____(__CvT_miT,148,121);return __old ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: init ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,148,127);

__CvT__record_line____(__CvT_miT,148,129);ios_base :: _M_init ( ) ; 


__CvT__record_line____(__CvT_miT,148,132);_M_cache_locale ( _M_ios_locale ) ; 
# 146 "/usr/include/c++/7.1.1/bits/basic_ios.tcc" 3 
__CvT__record_line____(__CvT_miT,148,146);_M_fill = _CharT ( ) ; 
__CvT__record_line____(__CvT_miT,148,147);_M_fill_init = false ; 

__CvT__record_line____(__CvT_miT,148,149);_M_tie = 0 ; 
__CvT__record_line____(__CvT_miT,148,150);_M_exception = goodbit ; 
__CvT__record_line____(__CvT_miT,148,151);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,148,152);_M_streambuf_state = __sb ? goodbit : badbit ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: _M_cache_locale ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,148,158);
__CvT__record_line____(__CvT_miT,148,159);if ( __builtin_expect ( has_facet < __ctype_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,148,160);_M_ctype = std :: __addressof ( use_facet < __ctype_type > ( __loc ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,148,162);_M_ctype = 0 ; 

}__CvT__record_line____(__CvT_miT,148,164);if ( __builtin_expect ( has_facet < __num_put_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,148,165);_M_num_put = std :: __addressof ( use_facet < __num_put_type > ( __loc ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,148,167);_M_num_put = 0 ; 

}__CvT__record_line____(__CvT_miT,148,169);if ( __builtin_expect ( has_facet < __num_get_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,148,170);_M_num_get = std :: __addressof ( use_facet < __num_get_type > ( __loc ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,148,172);_M_num_get = 0 ; 
}} 




extern template class basic_ios < char > ; 


extern template class basic_ios < wchar_t > ; 




} 
# 517 "/usr/include/c++/7.1.1/bits/basic_ios.h" 2 3 
# 45 "/usr/include/c++/7.1.1/ios" 2 3 
# 39 "/usr/include/c++/7.1.1/istream" 2 3 
# 1 "/usr/include/c++/7.1.1/ostream" 1 3 
# 36 "/usr/include/c++/7.1.1/ostream" 3 

# 37 "/usr/include/c++/7.1.1/ostream" 3 




namespace std 
{ 

# 57 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef ctype < _CharT > __ctype_type ; 
# 83 "/usr/include/c++/7.1.1/ostream" 3 
explicit 
basic_ostream ( __streambuf_type * __sb ) 
{ __CvT__record_line____(__CvT_miT,149,85);this -> init ( __sb ) ; } 






virtual 
~ basic_ostream ( ) { __CvT__record_line____(__CvT_miT,149,93);} 


class sentry ; 
friend class sentry ; 
# 107 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
operator << ( __ostream_type & ( * __pf ) ( __ostream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,149,109);



__CvT__record_line____(__CvT_miT,149,113);return __pf ( * this ) ; 
} 

__ostream_type & 
operator << ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,149,118);



__CvT__record_line____(__CvT_miT,149,122);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,149,123);return * this ; 
} 

__ostream_type & 
operator << ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,149,128);



__CvT__record_line____(__CvT_miT,149,132);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,149,133);return * this ; 
} 
# 165 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
operator << ( long __n ) 
{ __CvT__record_line____(__CvT_miT,149,167);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,149,171);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( bool __n ) 
{ __CvT__record_line____(__CvT_miT,149,175);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( short __n ) ; 

__ostream_type & 
operator << ( unsigned short __n ) 
{ __CvT__record_line____(__CvT_miT,149,182);


__CvT__record_line____(__CvT_miT,149,185);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 

__ostream_type & 
operator << ( int __n ) ; 

__ostream_type & 
operator << ( unsigned int __n ) 
{ __CvT__record_line____(__CvT_miT,149,193);


__CvT__record_line____(__CvT_miT,149,196);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 


__ostream_type & 
operator << ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,149,202);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,149,206);return _M_insert ( __n ) ; } 
# 219 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
operator << ( double __f ) 
{ __CvT__record_line____(__CvT_miT,149,221);return _M_insert ( __f ) ; } 

__ostream_type & 
operator << ( float __f ) 
{ __CvT__record_line____(__CvT_miT,149,225);


__CvT__record_line____(__CvT_miT,149,228);return _M_insert ( static_cast < double > ( __f ) ) ; 
} 

__ostream_type & 
operator << ( long double __f ) 
{ __CvT__record_line____(__CvT_miT,149,233);return _M_insert ( __f ) ; } 
# 244 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
operator << ( const void * __p ) 
{ __CvT__record_line____(__CvT_miT,149,246);return _M_insert ( __p ) ; } 
# 269 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
operator << ( __streambuf_type * __sb ) ; 
# 302 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
put ( char_type __c ) ; 






void 
_M_write ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,149,312);
__CvT__record_line____(__CvT_miT,149,313);const streamsize __put = this -> rdbuf ( ) -> sputn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,149,314);if ( __put != __n ) 
{__CvT__record_line____(__CvT_miT,149,315);this -> setstate ( ios_base :: badbit ) ; 
}} 
# 334 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
write ( const char_type * __s , streamsize __n ) ; 
# 347 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
flush ( ) ; 
# 357 "/usr/include/c++/7.1.1/ostream" 3 
pos_type 
tellp ( ) ; 
# 368 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
seekp ( pos_type ) ; 
# 380 "/usr/include/c++/7.1.1/ostream" 3 
__ostream_type & 
seekp ( off_type , ios_base :: seekdir ) ; 

protected : 
basic_ostream ( ) 
{ __CvT__record_line____(__CvT_miT,149,385);this -> init ( 0 ) ; } 



basic_ostream ( basic_iostream < _CharT , _Traits >& ) { __CvT__record_line____(__CvT_miT,149,389);} 

basic_ostream ( const basic_ostream & ) = delete ; 

basic_ostream ( basic_ostream && __rhs ) 
: __ios_type ( ) 
{ __CvT__record_line____(__CvT_miT,149,395);__ios_type :: move ( __rhs ) ; } 



basic_ostream & operator = ( const basic_ostream & ) = delete ; 

basic_ostream & 
operator = ( basic_ostream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,149,403);
__CvT__record_line____(__CvT_miT,149,404);swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,149,405);return * this ; 
} 

void 
swap ( basic_ostream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,149,410);__ios_type :: swap ( __rhs ) ; } 


template < typename _ValueT > 
__ostream_type & 
_M_insert ( _ValueT __v ) ; 
} ; 
# 425 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 
basic_ostream < _CharT , _Traits >& _M_os ; 

public : 
# 444 "/usr/include/c++/7.1.1/ostream" 3 
explicit 
sentry ( basic_ostream < _CharT , _Traits >& __os ) ; 
# 454 "/usr/include/c++/7.1.1/ostream" 3 
~ sentry ( ) 
{ __CvT__record_line____(__CvT_miT,149,455);

__CvT__record_line____(__CvT_miT,149,457);if ( bool ( _M_os . flags ( ) & ios_base :: unitbuf ) && ! uncaught_exception ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,149,460);if ( _M_os . rdbuf ( ) && _M_os . rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,149,461);_M_os . setstate ( ios_base :: badbit ) ; 
}} 
}} 
# 473 "/usr/include/c++/7.1.1/ostream" 3 
explicit 

operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,149,476);return _M_ok ; } 
} ; 
# 495 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,149,498);return __ostream_insert ( __out , & __c , 1 ) ; } 

template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,149,503);return ( __out << __out . widen ( __c ) ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,149,509);return __ostream_insert ( __out , & __c , 1 ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , signed char __c ) 
{ __CvT__record_line____(__CvT_miT,149,515);return ( __out << static_cast < char > ( __c ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , unsigned char __c ) 
{ __CvT__record_line____(__CvT_miT,149,520);return ( __out << static_cast < char > ( __c ) ) ; } 
# 537 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,149,540);
__CvT__record_line____(__CvT_miT,149,541);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,149,542);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,149,544);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,149,546);return __out ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits > & 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) ; 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,149,557);
__CvT__record_line____(__CvT_miT,149,558);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,149,559);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,149,561);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,149,563);return __out ; 
} 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,149,570);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits > & 
operator << ( basic_ostream < char , _Traits >& __out , const unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,149,575);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 
# 588 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
endl ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,149,591);return flush ( __os . put ( __os . widen ( '\n' ) ) ) ; } 
# 600 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
ends ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,149,603);return __os . put ( _CharT ( ) ) ; } 






template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
flush ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,149,613);return __os . flush ( ) ; } 


template < typename _Ch , typename _Up > 
basic_ostream < _Ch , _Up >& 
__is_convertible_to_basic_ostream_test ( basic_ostream < _Ch , _Up >* ) ; 

template < typename _Tp , typename = void > 
struct __is_convertible_to_basic_ostream_impl 
{ 
using __ostream_type = void ; 
} ; 

template < typename _Tp > 
using __do_is_convertible_to_basic_ostream_impl = 
decltype ( __is_convertible_to_basic_ostream_test 
( declval < typename remove_reference < _Tp >:: type *> ( ) ) ) ; 

template < typename _Tp > 
struct __is_convertible_to_basic_ostream_impl 
< _Tp , 
__void_t < __do_is_convertible_to_basic_ostream_impl < _Tp >>> 
{ 
using __ostream_type = 
__do_is_convertible_to_basic_ostream_impl < _Tp > ; 
} ; 

template < typename _Tp > 
struct __is_convertible_to_basic_ostream 
: __is_convertible_to_basic_ostream_impl < _Tp > 
{ 
public : 
using type = __not_ < is_void < 
typename __is_convertible_to_basic_ostream_impl < _Tp >:: __ostream_type >> ; 
constexpr static bool value = type :: value ; 
} ; 

template < typename _Ostream , typename _Tp , typename = void > 
struct __is_insertable : false_type { } ; 

template < typename _Ostream , typename _Tp > 
struct __is_insertable < _Ostream , _Tp , 
__void_t < decltype ( declval < _Ostream &> ( ) 
<< declval < const _Tp &> ( ) ) >> 
: true_type { } ; 

template < typename _Ostream > 
using __rvalue_ostream_type = 
typename __is_convertible_to_basic_ostream < 
_Ostream >:: __ostream_type ; 
# 674 "/usr/include/c++/7.1.1/ostream" 3 
template < typename _Ostream , typename _Tp > 
inline 
typename enable_if < __and_ < __not_ < is_lvalue_reference < _Ostream >> , 
__is_convertible_to_basic_ostream < _Ostream > , 
__is_insertable < 
__rvalue_ostream_type < _Ostream > , 
const _Tp &>>:: value , 
__rvalue_ostream_type < _Ostream >>:: type 
operator << ( _Ostream && __os , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,149,683);
__CvT__record_line____(__CvT_miT,149,684);__rvalue_ostream_type < _Ostream > __ret_os = __os ; 
__CvT__record_line____(__CvT_miT,149,685);__ret_os << __x ; 
__CvT__record_line____(__CvT_miT,149,686);return __ret_os ; 
} 



} 

# 1 "/usr/include/c++/7.1.1/bits/ostream.tcc" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/ostream.tcc" 3 

# 38 "/usr/include/c++/7.1.1/bits/ostream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >:: sentry :: 
sentry ( basic_ostream < _CharT , _Traits >& __os ) 
: _M_ok ( false ) , _M_os ( __os ) 
{ __CvT__record_line____(__CvT_miT,150,49);

__CvT__record_line____(__CvT_miT,150,51);if ( __os . tie ( ) && __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,150,52);__os . tie ( ) -> flush ( ) ; 

}__CvT__record_line____(__CvT_miT,150,54);if ( __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,150,55);_M_ok = true ; 
}else {
__CvT__record_line____(__CvT_miT,150,57);__os . setstate ( ios_base :: failbit ) ; 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
_M_insert ( _ValueT __v ) 
{ __CvT__record_line____(__CvT_miT,150,65);
__CvT__record_line____(__CvT_miT,150,66);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,150,67);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,150,69);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,70);try 
{ 
__CvT__record_line____(__CvT_miT,150,72);const __num_put_type & __np = __check_facet ( this -> _M_num_put ) ; 
__CvT__record_line____(__CvT_miT,150,73);if ( __np . put ( * this , * this , this -> fill ( ) , __v ) . failed ( ) ) 
{__CvT__record_line____(__CvT_miT,150,74);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,78);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,79);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,82);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,83);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,84);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,150,86);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( short __n ) 
{ __CvT__record_line____(__CvT_miT,150,93);


__CvT__record_line____(__CvT_miT,150,96);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,150,97);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,150,98);return _M_insert ( static_cast < long > ( static_cast < unsigned short > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,150,100);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( int __n ) 
{ __CvT__record_line____(__CvT_miT,150,107);


__CvT__record_line____(__CvT_miT,150,110);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,150,111);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,150,112);return _M_insert ( static_cast < long > ( static_cast < unsigned int > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,150,114);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( __streambuf_type * __sbin ) 
{ __CvT__record_line____(__CvT_miT,150,121);
__CvT__record_line____(__CvT_miT,150,122);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,123);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,150,124);if ( __cerb && __sbin ) 
{{ 
__CvT__record_line____(__CvT_miT,150,126);try 
{ 
__CvT__record_line____(__CvT_miT,150,128);if ( ! __copy_streambufs ( __sbin , this -> rdbuf ( ) ) ) 
{__CvT__record_line____(__CvT_miT,150,129);__err |= ios_base :: failbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,133);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,134);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,137);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,150,139);if ( ! __sbin ) 
{__CvT__record_line____(__CvT_miT,150,140);__err |= ios_base :: badbit ; 
}}__CvT__record_line____(__CvT_miT,150,141);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,142);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,150,143);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
put ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,150,150);






__CvT__record_line____(__CvT_miT,150,157);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,150,158);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,150,160);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,161);try 
{ 
__CvT__record_line____(__CvT_miT,150,163);const int_type __put = this -> rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,150,164);if ( traits_type :: eq_int_type ( __put , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,150,165);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,169);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,170);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,173);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,174);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,175);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,150,177);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
write ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,150,184);







__CvT__record_line____(__CvT_miT,150,192);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,150,193);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,150,195);try 
{ __CvT__record_line____(__CvT_miT,150,196);_M_write ( __s , __n ) ; } 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,199);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,200);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,203);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,150,205);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
flush ( ) 
{ __CvT__record_line____(__CvT_miT,150,212);



__CvT__record_line____(__CvT_miT,150,216);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,217);try 
{ 
__CvT__record_line____(__CvT_miT,150,219);if ( this -> rdbuf ( ) && this -> rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,150,220);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,224);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,225);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,228);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,229);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,230);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,150,231);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_ostream < _CharT , _Traits >:: pos_type 
basic_ostream < _CharT , _Traits >:: 
tellp ( ) 
{ __CvT__record_line____(__CvT_miT,150,238);
__CvT__record_line____(__CvT_miT,150,239);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,150,240);try 
{ 
__CvT__record_line____(__CvT_miT,150,242);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,150,243);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , ios_base :: out ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,247);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,248);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,251);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,252);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,150,259);
__CvT__record_line____(__CvT_miT,150,260);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,261);try 
{ 
__CvT__record_line____(__CvT_miT,150,263);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,150,267);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,150,271);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,150,272);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,277);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,278);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,281);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,282);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,283);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,150,284);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,150,291);
__CvT__record_line____(__CvT_miT,150,292);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,150,293);try 
{ 
__CvT__record_line____(__CvT_miT,150,295);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,150,299);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,150,303);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,150,304);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,309);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,310);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,313);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,150,314);if ( __err ) 
{__CvT__record_line____(__CvT_miT,150,315);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,150,316);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,150,322);
__CvT__record_line____(__CvT_miT,150,323);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,150,324);__out . setstate ( ios_base :: badbit ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,150,329);const size_t __clen = char_traits < char >:: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,150,330);try 
{ 
__CvT__record_line____(__CvT_miT,150,332);struct __ptr_guard 
{ 
_CharT * __p ; 
__ptr_guard ( _CharT * __ip ) : __p ( __ip ) { __CvT__record_line____(__CvT_miT,150,335);} 
~ __ptr_guard ( ) { __CvT__record_line____(__CvT_miT,150,336);delete [ ] __p ; } 
_CharT * __get ( ) { __CvT__record_line____(__CvT_miT,150,337);return __p ; } 
} __pg ( new _CharT [ __clen ] ) ; 

__CvT__record_line____(__CvT_miT,150,340);_CharT * __ws = __pg . __get ( ) ; 
__CvT__record_line____(__CvT_miT,150,341);for ( size_t __i = 0 ; __i < __clen ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,150,342);__ws [ __i ] = __out . widen ( __s [ __i ] ) ; 
}__CvT__record_line____(__CvT_miT,150,343);__ostream_insert ( __out , __ws , __clen ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,150,347);__out . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,150,348);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,150,351);__out . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,150,353);return __out ; 
} 




extern template class basic_ostream < char > ; 
extern template ostream & endl ( ostream & ) ; 
extern template ostream & ends ( ostream & ) ; 
extern template ostream & flush ( ostream & ) ; 
extern template ostream & operator << ( ostream & , char ) ; 
extern template ostream & operator << ( ostream & , unsigned char ) ; 
extern template ostream & operator << ( ostream & , signed char ) ; 
extern template ostream & operator << ( ostream & , const char * ) ; 
extern template ostream & operator << ( ostream & , const unsigned char * ) ; 
extern template ostream & operator << ( ostream & , const signed char * ) ; 

extern template ostream & ostream :: _M_insert ( long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long ) ; 
extern template ostream & ostream :: _M_insert ( bool ) ; 

extern template ostream & ostream :: _M_insert ( long long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long long ) ; 

extern template ostream & ostream :: _M_insert ( double ) ; 
extern template ostream & ostream :: _M_insert ( long double ) ; 
extern template ostream & ostream :: _M_insert ( const void * ) ; 


extern template class basic_ostream < wchar_t > ; 
extern template wostream & endl ( wostream & ) ; 
extern template wostream & ends ( wostream & ) ; 
extern template wostream & flush ( wostream & ) ; 
extern template wostream & operator << ( wostream & , wchar_t ) ; 
extern template wostream & operator << ( wostream & , char ) ; 
extern template wostream & operator << ( wostream & , const wchar_t * ) ; 
extern template wostream & operator << ( wostream & , const char * ) ; 

extern template wostream & wostream :: _M_insert ( long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long ) ; 
extern template wostream & wostream :: _M_insert ( bool ) ; 

extern template wostream & wostream :: _M_insert ( long long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long long ) ; 

extern template wostream & wostream :: _M_insert ( double ) ; 
extern template wostream & wostream :: _M_insert ( long double ) ; 
extern template wostream & wostream :: _M_insert ( const void * ) ; 




} 
# 694 "/usr/include/c++/7.1.1/ostream" 2 3 
# 40 "/usr/include/c++/7.1.1/istream" 2 3 

namespace std 
{ 

# 57 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 
typedef ctype < _CharT > __ctype_type ; 

protected : 





streamsize _M_gcount ; 

public : 







explicit 
basic_istream ( __streambuf_type * __sb ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,130,95);this -> init ( __sb ) ; } 






virtual 
~ basic_istream ( ) 
{ __CvT__record_line____(__CvT_miT,130,104);_M_gcount = streamsize ( 0 ) ; } 


class sentry ; 
friend class sentry ; 
# 119 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
operator >> ( __istream_type & ( * __pf ) ( __istream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,130,121);return __pf ( * this ) ; } 

__istream_type & 
operator >> ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,130,125);
__CvT__record_line____(__CvT_miT,130,126);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,130,127);return * this ; 
} 

__istream_type & 
operator >> ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,130,132);
__CvT__record_line____(__CvT_miT,130,133);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,130,134);return * this ; 
} 
# 167 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
operator >> ( bool & __n ) 
{ __CvT__record_line____(__CvT_miT,130,169);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( short & __n ) ; 

__istream_type & 
operator >> ( unsigned short & __n ) 
{ __CvT__record_line____(__CvT_miT,130,176);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( int & __n ) ; 

__istream_type & 
operator >> ( unsigned int & __n ) 
{ __CvT__record_line____(__CvT_miT,130,183);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( long & __n ) 
{ __CvT__record_line____(__CvT_miT,130,187);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long & __n ) 
{ __CvT__record_line____(__CvT_miT,130,191);return _M_extract ( __n ) ; } 


__istream_type & 
operator >> ( long long & __n ) 
{ __CvT__record_line____(__CvT_miT,130,196);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long long & __n ) 
{ __CvT__record_line____(__CvT_miT,130,200);return _M_extract ( __n ) ; } 
# 213 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
operator >> ( float & __f ) 
{ __CvT__record_line____(__CvT_miT,130,215);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( double & __f ) 
{ __CvT__record_line____(__CvT_miT,130,219);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( long double & __f ) 
{ __CvT__record_line____(__CvT_miT,130,223);return _M_extract ( __f ) ; } 
# 234 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
operator >> ( void *& __p ) 
{ __CvT__record_line____(__CvT_miT,130,236);return _M_extract ( __p ) ; } 
# 258 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
operator >> ( __streambuf_type * __sb ) ; 
# 268 "/usr/include/c++/7.1.1/istream" 3 
streamsize 
gcount ( ) const 
{ __CvT__record_line____(__CvT_miT,130,270);return _M_gcount ; } 
# 301 "/usr/include/c++/7.1.1/istream" 3 
int_type 
get ( ) ; 
# 315 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
get ( char_type & __c ) ; 
# 342 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 353 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,130,355);return this -> get ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 376 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb , char_type __delim ) ; 
# 386 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb ) 
{ __CvT__record_line____(__CvT_miT,130,388);return this -> get ( __sb , this -> widen ( '\n' ) ) ; } 
# 415 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 426 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,130,428);return this -> getline ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 450 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
ignore ( streamsize __n , int_type __delim ) ; 

__istream_type & 
ignore ( streamsize __n ) ; 

__istream_type & 
ignore ( ) ; 
# 467 "/usr/include/c++/7.1.1/istream" 3 
int_type 
peek ( ) ; 
# 485 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
read ( char_type * __s , streamsize __n ) ; 
# 504 "/usr/include/c++/7.1.1/istream" 3 
streamsize 
readsome ( char_type * __s , streamsize __n ) ; 
# 521 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
putback ( char_type __c ) ; 
# 537 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
unget ( ) ; 
# 555 "/usr/include/c++/7.1.1/istream" 3 
int 
sync ( ) ; 
# 570 "/usr/include/c++/7.1.1/istream" 3 
pos_type 
tellg ( ) ; 
# 585 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
seekg ( pos_type ) ; 
# 601 "/usr/include/c++/7.1.1/istream" 3 
__istream_type & 
seekg ( off_type , ios_base :: seekdir ) ; 


protected : 
basic_istream ( ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,130,608);this -> init ( 0 ) ; } 


basic_istream ( const basic_istream & ) = delete ; 

basic_istream ( basic_istream && __rhs ) 
: __ios_type ( ) , _M_gcount ( __rhs . _M_gcount ) 
{ __CvT__record_line____(__CvT_miT,130,615);
__CvT__record_line____(__CvT_miT,130,616);__ios_type :: move ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,130,617);__rhs . _M_gcount = 0 ; 
} 



basic_istream & operator = ( const basic_istream & ) = delete ; 

basic_istream & 
operator = ( basic_istream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,130,626);
__CvT__record_line____(__CvT_miT,130,627);swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,130,628);return * this ; 
} 

void 
swap ( basic_istream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,130,633);
__CvT__record_line____(__CvT_miT,130,634);__ios_type :: swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,130,635);std :: swap ( _M_gcount , __rhs . _M_gcount ) ; 
} 


template < typename _ValueT > 
__istream_type & 
_M_extract ( _ValueT & __v ) ; 
} ; 


template <> 
basic_istream < char >& 
basic_istream < char >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n , int_type __delim ) ; 


template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n , int_type __delim ) ; 
# 685 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 

public : 

typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: __ctype_type __ctype_type ; 
typedef typename _Traits :: int_type __int_type ; 
# 721 "/usr/include/c++/7.1.1/istream" 3 
explicit 
sentry ( basic_istream < _CharT , _Traits >& __is , bool __noskipws = false ) ; 
# 732 "/usr/include/c++/7.1.1/istream" 3 
explicit 

operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,130,735);return _M_ok ; } 
} ; 
# 750 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char & __c ) 
{ __CvT__record_line____(__CvT_miT,130,757);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char & __c ) 
{ __CvT__record_line____(__CvT_miT,130,762);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 
# 792 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) ; 


template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __in , char * __s ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,130,804);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,130,809);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 
# 823 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_iostream 
: public basic_istream < _CharT , _Traits > , 
public basic_ostream < _CharT , _Traits > 
{ 
public : 



typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 







explicit 
basic_iostream ( basic_streambuf < _CharT , _Traits >* __sb ) 
: __istream_type ( __sb ) , __ostream_type ( __sb ) { __CvT__record_line____(__CvT_miT,130,850);} 




virtual 
~ basic_iostream ( ) { __CvT__record_line____(__CvT_miT,130,856);} 

protected : 
basic_iostream ( ) 
: __istream_type ( ) , __ostream_type ( ) { __CvT__record_line____(__CvT_miT,130,860);} 


basic_iostream ( const basic_iostream & ) = delete ; 

basic_iostream ( basic_iostream && __rhs ) 
: __istream_type ( std :: move ( __rhs ) ) , __ostream_type ( * this ) 
{ __CvT__record_line____(__CvT_miT,130,867);} 



basic_iostream & operator = ( const basic_iostream & ) = delete ; 

basic_iostream & 
operator = ( basic_iostream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,130,875);
__CvT__record_line____(__CvT_miT,130,876);swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,130,877);return * this ; 
} 

void 
swap ( basic_iostream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,130,882);__istream_type :: swap ( __rhs ) ; } 

} ; 
# 906 "/usr/include/c++/7.1.1/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __is ) ; 


template < typename _Ch , typename _Up > 
basic_istream < _Ch , _Up >& 
__is_convertible_to_basic_istream_test ( basic_istream < _Ch , _Up >* ) ; 

template < typename _Tp , typename = void > 
struct __is_convertible_to_basic_istream_impl 
{ 
using __istream_type = void ; 
} ; 

template < typename _Tp > 
using __do_is_convertible_to_basic_istream_impl = 
decltype ( __is_convertible_to_basic_istream_test 
( declval < typename remove_reference < _Tp >:: type *> ( ) ) ) ; 

template < typename _Tp > 
struct __is_convertible_to_basic_istream_impl 
< _Tp , 
__void_t < __do_is_convertible_to_basic_istream_impl < _Tp >>> 
{ 
using __istream_type = 
__do_is_convertible_to_basic_istream_impl < _Tp > ; 
} ; 

template < typename _Tp > 
struct __is_convertible_to_basic_istream 
: __is_convertible_to_basic_istream_impl < _Tp > 
{ 
public : 
using type = __not_ < is_void < 
typename __is_convertible_to_basic_istream_impl < _Tp >:: __istream_type >> ; 
constexpr static bool value = type :: value ; 
} ; 

template < typename _Istream , typename _Tp , typename = void > 
struct __is_extractable : false_type { } ; 

template < typename _Istream , typename _Tp > 
struct __is_extractable < _Istream , _Tp , 
__void_t < decltype ( declval < _Istream &> ( ) 
>> declval < _Tp > ( ) ) >> 
: true_type { } ; 

template < typename _Istream > 
using __rvalue_istream_type = 
typename __is_convertible_to_basic_istream < 
_Istream >:: __istream_type ; 
# 972 "/usr/include/c++/7.1.1/istream" 3 
template < typename _Istream , typename _Tp > 
inline 
typename enable_if < __and_ < __not_ < is_lvalue_reference < _Istream >> , 
__is_convertible_to_basic_istream < _Istream > , 
__is_extractable < 
__rvalue_istream_type < _Istream > , 
_Tp &&>>:: value , 
__rvalue_istream_type < _Istream >>:: type 
operator >> ( _Istream && __is , _Tp && __x ) 
{ __CvT__record_line____(__CvT_miT,130,981);
__CvT__record_line____(__CvT_miT,130,982);__rvalue_istream_type < _Istream > __ret_is = __is ; 
__CvT__record_line____(__CvT_miT,130,983);__ret_is >> std :: forward < _Tp > ( __x ) ; 
__CvT__record_line____(__CvT_miT,130,984);return __ret_is ; 
} 



} 

# 1 "/usr/include/c++/7.1.1/bits/istream.tcc" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/istream.tcc" 3 

# 38 "/usr/include/c++/7.1.1/bits/istream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >:: sentry :: 
sentry ( basic_istream < _CharT , _Traits >& __in , bool __noskip ) : _M_ok ( false ) 
{ __CvT__record_line____(__CvT_miT,151,48);
__CvT__record_line____(__CvT_miT,151,49);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,50);if ( __in . good ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,52);if ( __in . tie ( ) ) 
{__CvT__record_line____(__CvT_miT,151,53);__in . tie ( ) -> flush ( ) ; 
}__CvT__record_line____(__CvT_miT,151,54);if ( ! __noskip && bool ( __in . flags ( ) & ios_base :: skipws ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,56);const __int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,57);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,58);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,151,60);const __ctype_type & __ct = __check_facet ( __in . _M_ctype ) ; 
__CvT__record_line____(__CvT_miT,151,61);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , 
traits_type :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,151,64);__c = __sb -> snextc ( ) ; 




}__CvT__record_line____(__CvT_miT,151,69);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,70);__err |= ios_base :: eofbit ; 
}} 
}} 

}__CvT__record_line____(__CvT_miT,151,74);if ( __in . good ( ) && __err == ios_base :: goodbit ) 
{__CvT__record_line____(__CvT_miT,151,75);_M_ok = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,151,78);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,151,79);__in . setstate ( __err ) ; 
} 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
_M_extract ( _ValueT & __v ) 
{ __CvT__record_line____(__CvT_miT,151,88);
__CvT__record_line____(__CvT_miT,151,89);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,151,90);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,92);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,93);try 
{ 
__CvT__record_line____(__CvT_miT,151,95);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,151,96);__ng . get ( * this , 0 , * this , __err , __v ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,100);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,101);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,104);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,105);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,106);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,108);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( short & __n ) 
{ __CvT__record_line____(__CvT_miT,151,115);


__CvT__record_line____(__CvT_miT,151,118);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,151,119);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,121);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,122);try 
{ 
__CvT__record_line____(__CvT_miT,151,124);long __l ; 
__CvT__record_line____(__CvT_miT,151,125);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,151,126);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,151,130);if ( __l < __gnu_cxx :: __numeric_traits < short >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,151,132);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,151,133);__n = __gnu_cxx :: __numeric_traits < short >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,151,135);if ( __l > __gnu_cxx :: __numeric_traits < short >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,151,137);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,151,138);__n = __gnu_cxx :: __numeric_traits < short >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,141);__n = short ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,145);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,146);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,149);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,150);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,151);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,153);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( int & __n ) 
{ __CvT__record_line____(__CvT_miT,151,160);


__CvT__record_line____(__CvT_miT,151,163);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,151,164);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,166);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,167);try 
{ 
__CvT__record_line____(__CvT_miT,151,169);long __l ; 
__CvT__record_line____(__CvT_miT,151,170);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,151,171);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,151,175);if ( __l < __gnu_cxx :: __numeric_traits < int >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,151,177);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,151,178);__n = __gnu_cxx :: __numeric_traits < int >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,151,180);if ( __l > __gnu_cxx :: __numeric_traits < int >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,151,182);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,151,183);__n = __gnu_cxx :: __numeric_traits < int >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,186);__n = int ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,190);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,191);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,194);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,195);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,196);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,198);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( __streambuf_type * __sbout ) 
{ __CvT__record_line____(__CvT_miT,151,205);
__CvT__record_line____(__CvT_miT,151,206);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,207);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,151,208);if ( __cerb && __sbout ) 
{{ 
__CvT__record_line____(__CvT_miT,151,210);try 
{ 
__CvT__record_line____(__CvT_miT,151,212);bool __ineof ; 
__CvT__record_line____(__CvT_miT,151,213);if ( ! __copy_streambufs_eof ( this -> rdbuf ( ) , __sbout , __ineof ) ) 
{__CvT__record_line____(__CvT_miT,151,214);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,215);if ( __ineof ) 
{__CvT__record_line____(__CvT_miT,151,216);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,220);this -> _M_setstate ( ios_base :: failbit ) ; 
__CvT__record_line____(__CvT_miT,151,221);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,224);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,151,226);if ( ! __sbout ) 
{__CvT__record_line____(__CvT_miT,151,227);__err |= ios_base :: failbit ; 
}}__CvT__record_line____(__CvT_miT,151,228);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,229);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,230);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
get ( void ) 
{ __CvT__record_line____(__CvT_miT,151,237);
__CvT__record_line____(__CvT_miT,151,238);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,239);int_type __c = __eof ; 
__CvT__record_line____(__CvT_miT,151,240);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,241);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,242);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,243);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,245);try 
{ 
__CvT__record_line____(__CvT_miT,151,247);__c = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,151,249);if ( ! traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,250);_M_gcount = 1 ; 
}else {
__CvT__record_line____(__CvT_miT,151,252);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,256);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,257);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,260);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,151,262);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,151,263);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,264);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,265);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,266);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,151,273);
__CvT__record_line____(__CvT_miT,151,274);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,275);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,276);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,277);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,279);try 
{ 
__CvT__record_line____(__CvT_miT,151,281);const int_type __cb = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,151,283);if ( ! traits_type :: eq_int_type ( __cb , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,285);_M_gcount = 1 ; 
__CvT__record_line____(__CvT_miT,151,286);__c = traits_type :: to_char_type ( __cb ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,289);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,293);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,294);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,297);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,151,299);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,151,300);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,301);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,302);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,303);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,151,310);
__CvT__record_line____(__CvT_miT,151,311);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,312);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,313);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,314);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,316);try 
{ 
__CvT__record_line____(__CvT_miT,151,318);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,151,319);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,320);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,321);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,151,323);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,327);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,151,328);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,151,329);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,151,331);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,332);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,336);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,337);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,340);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,151,344);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,151,345);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,151,346);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,151,347);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,348);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,349);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,350);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( __streambuf_type & __sb , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,151,357);
__CvT__record_line____(__CvT_miT,151,358);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,359);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,360);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,361);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,363);try 
{ 
__CvT__record_line____(__CvT_miT,151,365);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,151,366);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,367);__streambuf_type * __this_sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,368);int_type __c = __this_sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,151,369);char_type __c2 = traits_type :: to_char_type ( __c ) ; 

__CvT__record_line____(__CvT_miT,151,371);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) 
&& ! traits_type :: eq_int_type ( __sb . sputc ( __c2 ) , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,375);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,151,376);__c = __this_sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,151,377);__c2 = traits_type :: to_char_type ( __c ) ; 
} 
}__CvT__record_line____(__CvT_miT,151,379);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,380);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,384);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,385);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,388);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,151,390);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,151,391);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,392);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,393);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,394);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,151,401);
__CvT__record_line____(__CvT_miT,151,402);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,403);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,404);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,405);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,407);try 
{ 
__CvT__record_line____(__CvT_miT,151,409);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,151,410);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,411);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,412);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,151,414);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,418);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,151,419);__c = __sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,151,420);++ _M_gcount ; 
} 
}__CvT__record_line____(__CvT_miT,151,422);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,423);__err |= ios_base :: eofbit ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,151,426);if ( traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,428);__sb -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,151,429);++ _M_gcount ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,432);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,437);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,438);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,441);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,151,445);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,151,446);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,151,447);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,151,448);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,449);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,450);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,451);return * this ; 
} 




template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( void ) 
{ __CvT__record_line____(__CvT_miT,151,461);
__CvT__record_line____(__CvT_miT,151,462);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,463);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,464);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,466);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,467);try 
{ 
__CvT__record_line____(__CvT_miT,151,469);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,470);__streambuf_type * __sb = this -> rdbuf ( ) ; 

__CvT__record_line____(__CvT_miT,151,472);if ( traits_type :: eq_int_type ( __sb -> sbumpc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,473);__err |= ios_base :: eofbit ; 
}else {
__CvT__record_line____(__CvT_miT,151,475);_M_gcount = 1 ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,479);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,480);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,483);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,484);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,485);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,487);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,151,494);
__CvT__record_line____(__CvT_miT,151,495);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,496);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,497);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,151,499);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,500);try 
{ 
__CvT__record_line____(__CvT_miT,151,502);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,503);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,504);int_type __c = __sb -> sgetc ( ) ; 
# 513 "/usr/include/c++/7.1.1/bits/istream.tcc" 3 
__CvT__record_line____(__CvT_miT,151,513);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,151,514);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,151,516);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,519);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,151,520);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,151,522);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,525);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,151,527);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,530);break ; 
}} 

}__CvT__record_line____(__CvT_miT,151,533);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,151,534);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,151,536);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,537);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,541);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,542);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,545);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,546);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,547);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,549);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n , int_type __delim ) 
{ __CvT__record_line____(__CvT_miT,151,556);
__CvT__record_line____(__CvT_miT,151,557);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,558);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,559);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,151,561);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,562);try 
{ 
__CvT__record_line____(__CvT_miT,151,564);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,565);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,566);int_type __c = __sb -> sgetc ( ) ; 


__CvT__record_line____(__CvT_miT,151,569);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,151,570);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,151,572);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,576);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,151,577);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,151,579);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,583);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,151,585);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,151,588);break ; 
}} 

}__CvT__record_line____(__CvT_miT,151,591);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,151,592);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,151,594);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,595);__err |= ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,151,596);if ( traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,598);if ( _M_gcount 
< __gnu_cxx :: __numeric_traits < streamsize >:: __max ) 
{__CvT__record_line____(__CvT_miT,151,600);++ _M_gcount ; 
}__CvT__record_line____(__CvT_miT,151,601);__sb -> sbumpc ( ) ; 
} 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,606);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,607);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,610);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,611);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,612);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,614);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
peek ( void ) 
{ __CvT__record_line____(__CvT_miT,151,621);
__CvT__record_line____(__CvT_miT,151,622);int_type __c = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,623);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,624);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,625);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,627);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,628);try 
{ 
__CvT__record_line____(__CvT_miT,151,630);__c = this -> rdbuf ( ) -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,151,631);if ( traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,151,632);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,636);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,637);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,640);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,641);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,642);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,644);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
read ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,151,651);
__CvT__record_line____(__CvT_miT,151,652);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,653);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,654);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,656);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,657);try 
{ 
__CvT__record_line____(__CvT_miT,151,659);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,151,660);if ( _M_gcount != __n ) 
{__CvT__record_line____(__CvT_miT,151,661);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,665);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,666);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,669);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,670);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,671);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,673);return * this ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_istream < _CharT , _Traits >:: 
readsome ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,151,680);
__CvT__record_line____(__CvT_miT,151,681);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,151,682);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,683);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,685);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,686);try 
{ 

__CvT__record_line____(__CvT_miT,151,689);const streamsize __num = this -> rdbuf ( ) -> in_avail ( ) ; 
__CvT__record_line____(__CvT_miT,151,690);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,151,691);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , std :: min ( __num , __n ) ) ; 
}else {__CvT__record_line____(__CvT_miT,151,692);if ( __num == - 1 ) 
{__CvT__record_line____(__CvT_miT,151,693);__err |= ios_base :: eofbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,697);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,698);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,701);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,702);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,703);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,705);return _M_gcount ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
putback ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,151,712);


__CvT__record_line____(__CvT_miT,151,715);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,151,717);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,151,718);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,719);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,721);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,722);try 
{ 
__CvT__record_line____(__CvT_miT,151,724);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,725);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,726);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sputbackc ( __c ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,728);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,732);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,733);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,736);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,737);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,738);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,740);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
unget ( void ) 
{ __CvT__record_line____(__CvT_miT,151,747);


__CvT__record_line____(__CvT_miT,151,750);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,151,752);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,151,753);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,754);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,756);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,757);try 
{ 
__CvT__record_line____(__CvT_miT,151,759);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,760);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,761);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sungetc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,763);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,767);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,768);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,771);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,772);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,773);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,775);return * this ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_istream < _CharT , _Traits >:: 
sync ( void ) 
{ __CvT__record_line____(__CvT_miT,151,782);


__CvT__record_line____(__CvT_miT,151,785);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,151,786);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,787);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,789);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,790);try 
{ 
__CvT__record_line____(__CvT_miT,151,792);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,793);if ( __sb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,795);if ( __sb -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,151,796);__err |= ios_base :: badbit ; 
}else {
__CvT__record_line____(__CvT_miT,151,798);__ret = 0 ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,803);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,804);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,807);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,808);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,809);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,811);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: pos_type 
basic_istream < _CharT , _Traits >:: 
tellg ( void ) 
{ __CvT__record_line____(__CvT_miT,151,818);


__CvT__record_line____(__CvT_miT,151,821);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,151,822);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,823);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,825);try 
{ 
__CvT__record_line____(__CvT_miT,151,827);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,151,828);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , 
ios_base :: in ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,833);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,834);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,837);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,151,839);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,151,846);



__CvT__record_line____(__CvT_miT,151,850);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,151,851);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,852);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,854);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,855);try 
{ 
__CvT__record_line____(__CvT_miT,151,857);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,151,860);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,151,864);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,151,865);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,870);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,871);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,874);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,875);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,876);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,878);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,151,885);



__CvT__record_line____(__CvT_miT,151,889);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,151,890);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,151,891);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,893);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,894);try 
{ 
__CvT__record_line____(__CvT_miT,151,896);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,151,899);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,151,903);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,151,904);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,909);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,910);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,913);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,914);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,915);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,917);return * this ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) 
{ __CvT__record_line____(__CvT_miT,151,924);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: int_type __int_type ; 

__CvT__record_line____(__CvT_miT,151,928);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,151,929);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,931);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,932);try 
{ 
__CvT__record_line____(__CvT_miT,151,934);const __int_type __cb = __in . rdbuf ( ) -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,151,935);if ( ! _Traits :: eq_int_type ( __cb , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,151,936);__c = _Traits :: to_char_type ( __cb ) ; 
}else {
__CvT__record_line____(__CvT_miT,151,938);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,942);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,943);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,946);__in . _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,151,947);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,948);__in . setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,151,950);return __in ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,151,956);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef _CharT char_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,151,963);streamsize __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,151,964);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,151,965);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,151,966);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,151,968);try 
{ 

__CvT__record_line____(__CvT_miT,151,971);streamsize __num = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,151,972);if ( __num <= 0 ) 
{__CvT__record_line____(__CvT_miT,151,973);__num = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,151,975);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 

__CvT__record_line____(__CvT_miT,151,977);const int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,978);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,979);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,151,981);while ( __extracted < __num - 1 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,151,986);* __s ++ = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,151,987);++ __extracted ; 
__CvT__record_line____(__CvT_miT,151,988);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,151,990);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,991);__err |= ios_base :: eofbit ; 



}__CvT__record_line____(__CvT_miT,151,995);* __s = char_type ( ) ; 
__CvT__record_line____(__CvT_miT,151,996);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,151,1000);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,151,1001);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,151,1004);__in . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,151,1006);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,151,1007);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,151,1008);if ( __err ) 
{__CvT__record_line____(__CvT_miT,151,1009);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,151,1010);return __in ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __in ) 
{ __CvT__record_line____(__CvT_miT,151,1017);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,151,1023);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,151,1024);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,151,1025);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,151,1026);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,151,1028);while ( ! _Traits :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , _Traits :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,151,1030);__c = __sb -> snextc ( ) ; 

}__CvT__record_line____(__CvT_miT,151,1032);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,151,1033);__in . setstate ( ios_base :: eofbit ) ; 
}__CvT__record_line____(__CvT_miT,151,1034);return __in ; 
} 




extern template class basic_istream < char > ; 
extern template istream & ws ( istream & ) ; 
extern template istream & operator >> ( istream & , char & ) ; 
extern template istream & operator >> ( istream & , char * ) ; 
extern template istream & operator >> ( istream & , unsigned char & ) ; 
extern template istream & operator >> ( istream & , signed char & ) ; 
extern template istream & operator >> ( istream & , unsigned char * ) ; 
extern template istream & operator >> ( istream & , signed char * ) ; 

extern template istream & istream :: _M_extract ( unsigned short & ) ; 
extern template istream & istream :: _M_extract ( unsigned int & ) ; 
extern template istream & istream :: _M_extract ( long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long & ) ; 
extern template istream & istream :: _M_extract ( bool & ) ; 

extern template istream & istream :: _M_extract ( long long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long long & ) ; 

extern template istream & istream :: _M_extract ( float & ) ; 
extern template istream & istream :: _M_extract ( double & ) ; 
extern template istream & istream :: _M_extract ( long double & ) ; 
extern template istream & istream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < char > ; 


extern template class basic_istream < wchar_t > ; 
extern template wistream & ws ( wistream & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t * ) ; 

extern template wistream & wistream :: _M_extract ( unsigned short & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned int & ) ; 
extern template wistream & wistream :: _M_extract ( long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long & ) ; 
extern template wistream & wistream :: _M_extract ( bool & ) ; 

extern template wistream & wistream :: _M_extract ( long long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long long & ) ; 

extern template wistream & wistream :: _M_extract ( float & ) ; 
extern template wistream & wistream :: _M_extract ( double & ) ; 
extern template wistream & wistream :: _M_extract ( long double & ) ; 
extern template wistream & wistream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < wchar_t > ; 




} 
# 992 "/usr/include/c++/7.1.1/istream" 2 3 
# 39 "/usr/include/c++/7.1.1/fstream" 2 3 

# 1 "/usr/include/c++/7.1.1/bits/codecvt.h" 1 3 
# 39 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 

# 40 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 

namespace std 
{ 



class codecvt_base 
{ 
public : 
enum result 
{ 
ok , 
partial , 
error , 
noconv 
} ; 
} ; 
# 67 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class __codecvt_abstract_base 
: public locale :: facet , public codecvt_base 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 
# 115 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
result 
out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,152,120);
__CvT__record_line____(__CvT_miT,152,121);return this -> do_out ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 
# 154 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
result 
unshift ( state_type & __state , extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,152,157);return this -> do_unshift ( __state , __to , __to_end , __to_next ) ; } 
# 195 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
result 
in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,152,200);
__CvT__record_line____(__CvT_miT,152,201);return this -> do_in ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 

int 
encoding ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,152,207);return this -> do_encoding ( ) ; } 

bool 
always_noconv ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,152,211);return this -> do_always_noconv ( ) ; } 

int 
length ( state_type & __state , const extern_type * __from , 
const extern_type * __end , size_t __max ) const 
{ __CvT__record_line____(__CvT_miT,152,216);return this -> do_length ( __state , __from , __end , __max ) ; } 

int 
max_length ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,152,220);return this -> do_max_length ( ) ; } 

protected : 
explicit 
__codecvt_abstract_base ( size_t __refs = 0 ) : locale :: facet ( __refs ) { __CvT__record_line____(__CvT_miT,152,224);} 

virtual 
~ __codecvt_abstract_base ( ) { __CvT__record_line____(__CvT_miT,152,227);} 
# 236 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const = 0 ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const = 0 ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const = 0 ; 

virtual int 
do_encoding ( ) const throw ( ) = 0 ; 

virtual bool 
do_always_noconv ( ) const throw ( ) = 0 ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const = 0 ; 

virtual int 
do_max_length ( ) const throw ( ) = 0 ; 
} ; 
# 273 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt 
: public __codecvt_abstract_base < _InternT , _ExternT , _StateT > 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) 
: __codecvt_abstract_base < _InternT , _ExternT , _StateT > ( __refs ) , 
_M_c_locale_codecvt ( 0 ) 
{ __CvT__record_line____(__CvT_miT,152,294);} 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) { __CvT__record_line____(__CvT_miT,152,301);} 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
locale :: id codecvt < _InternT , _ExternT , _StateT >:: id ; 


template <> 
class codecvt < char , char , mbstate_t > 
: public __codecvt_abstract_base < char , char , mbstate_t > 
{ 
friend class messages < char > ; 

public : 

typedef char intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 






template <> 
class codecvt < wchar_t , char , mbstate_t > 
: public __codecvt_abstract_base < wchar_t , char , mbstate_t > 
{ 
friend class messages < wchar_t > ; 

public : 

typedef wchar_t intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , 
const extern_type * __from , const extern_type * __from_end , 
const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual 
int do_encoding ( ) const throw ( ) ; 

virtual 
bool do_always_noconv ( ) const throw ( ) ; 

virtual 
int do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 
# 467 "/usr/include/c++/7.1.1/bits/codecvt.h" 3 
template <> 
class codecvt < char16_t , char , mbstate_t > 
: public __codecvt_abstract_base < char16_t , char , mbstate_t > 
{ 
public : 

typedef char16_t intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) 
: __codecvt_abstract_base < char16_t , char , mbstate_t > ( __refs ) { __CvT__record_line____(__CvT_miT,152,482);} 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , 
const extern_type * __from , const extern_type * __from_end , 
const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual 
int do_encoding ( ) const throw ( ) ; 

virtual 
bool do_always_noconv ( ) const throw ( ) ; 

virtual 
int do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 





template <> 
class codecvt < char32_t , char , mbstate_t > 
: public __codecvt_abstract_base < char32_t , char , mbstate_t > 
{ 
public : 

typedef char32_t intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) 
: __codecvt_abstract_base < char32_t , char , mbstate_t > ( __refs ) { __CvT__record_line____(__CvT_miT,152,539);} 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , 
const extern_type * __from , const extern_type * __from_end , 
const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual 
int do_encoding ( ) const throw ( ) ; 

virtual 
bool do_always_noconv ( ) const throw ( ) ; 

virtual 
int do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 





template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname : public codecvt < _InternT , _ExternT , _StateT > 
{ 
public : 
explicit 
codecvt_byname ( const char * __s , size_t __refs = 0 ) 
: codecvt < _InternT , _ExternT , _StateT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,152,588);
__CvT__record_line____(__CvT_miT,152,589);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,152,592);this -> _S_destroy_c_locale ( this -> _M_c_locale_codecvt ) ; 
__CvT__record_line____(__CvT_miT,152,593);this -> _S_create_c_locale ( this -> _M_c_locale_codecvt , __s ) ; 
} 
}} 


explicit 
codecvt_byname ( const string & __s , size_t __refs = 0 ) 
: codecvt_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,152,600);} 


protected : 
virtual 
~ codecvt_byname ( ) { __CvT__record_line____(__CvT_miT,152,605);} 
} ; 


template <> 
class codecvt_byname < char16_t , char , mbstate_t > 
: public codecvt < char16_t , char , mbstate_t > 
{ 
public : 
explicit 
codecvt_byname ( const char * __s , size_t __refs = 0 ) 
: codecvt < char16_t , char , mbstate_t > ( __refs ) { __CvT__record_line____(__CvT_miT,152,616);} 

explicit 
codecvt_byname ( const string & __s , size_t __refs = 0 ) 
: codecvt_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,152,620);} 

protected : 
virtual 
~ codecvt_byname ( ) { __CvT__record_line____(__CvT_miT,152,624);} 
} ; 

template <> 
class codecvt_byname < char32_t , char , mbstate_t > 
: public codecvt < char32_t , char , mbstate_t > 
{ 
public : 
explicit 
codecvt_byname ( const char * __s , size_t __refs = 0 ) 
: codecvt < char32_t , char , mbstate_t > ( __refs ) { __CvT__record_line____(__CvT_miT,152,634);} 

explicit 
codecvt_byname ( const string & __s , size_t __refs = 0 ) 
: codecvt_byname ( __s . c_str ( ) , __refs ) { __CvT__record_line____(__CvT_miT,152,638);} 

protected : 
virtual 
~ codecvt_byname ( ) { __CvT__record_line____(__CvT_miT,152,642);} 
} ; 





extern template class codecvt_byname < char , char , mbstate_t > ; 

extern template 
const codecvt < char , char , mbstate_t >& 
use_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 


extern template class codecvt_byname < wchar_t , char , mbstate_t > ; 

extern template 
const codecvt < wchar_t , char , mbstate_t >& 
use_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 



extern template class codecvt_byname < char16_t , char , mbstate_t > ; 
extern template class codecvt_byname < char32_t , char , mbstate_t > ; 





} 
# 41 "/usr/include/c++/7.1.1/fstream" 2 3 
# 1 "/usr/include/c++/7.1.1/cstdio" 1 3 
# 39 "/usr/include/c++/7.1.1/cstdio" 3 

# 40 "/usr/include/c++/7.1.1/cstdio" 3 
# 42 "/usr/include/c++/7.1.1/fstream" 2 3 
# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/basic_file.h" 1 3 
# 37 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/basic_file.h" 3 

# 38 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/basic_file.h" 3 


# 1 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++io.h" 1 3 
# 35 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++io.h" 3 
# 1 "/usr/include/c++/7.1.1/cstdio" 1 3 
# 39 "/usr/include/c++/7.1.1/cstdio" 3 

# 40 "/usr/include/c++/7.1.1/cstdio" 3 
# 36 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++io.h" 2 3 


namespace std 
{ 


typedef __gthread_mutex_t __c_lock ; 


typedef FILE __c_file ; 


} 
# 41 "/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/basic_file.h" 2 3 



namespace std 
{ 



template < typename _CharT > 
class __basic_file ; 


template <> 
class __basic_file < char > 
{ 

__c_file * _M_cfile ; 


bool _M_cfile_created ; 

public : 
__basic_file ( __c_lock * __lock = 0 ) throw ( ) ; 


__basic_file ( __basic_file && __rv , __c_lock * __lock = 0 ) noexcept 
: _M_cfile ( __rv . _M_cfile ) , _M_cfile_created ( __rv . _M_cfile_created ) 
{ __CvT__record_line____(__CvT_miT,153,68);
__CvT__record_line____(__CvT_miT,153,69);__rv . _M_cfile = nullptr ; 
__CvT__record_line____(__CvT_miT,153,70);__rv . _M_cfile_created = false ; 
} 

__basic_file & operator = ( const __basic_file & ) = delete ; 
__basic_file & operator = ( __basic_file && ) = delete ; 

void 
swap ( __basic_file & __f ) noexcept 
{ __CvT__record_line____(__CvT_miT,153,78);
__CvT__record_line____(__CvT_miT,153,79);std :: swap ( _M_cfile , __f . _M_cfile ) ; 
__CvT__record_line____(__CvT_miT,153,80);std :: swap ( _M_cfile_created , __f . _M_cfile_created ) ; 
} 


__basic_file * 
open ( const char * __name , ios_base :: openmode __mode , int __prot = 0664 ) ; 

__basic_file * 
sys_open ( __c_file * __file , ios_base :: openmode ) ; 

__basic_file * 
sys_open ( int __fd , ios_base :: openmode __mode ) throw ( ) ; 

__basic_file * 
close ( ) ; 

bool 
is_open ( ) const throw ( ) ; 

int 
fd ( ) throw ( ) ; 

__c_file * 
file ( ) throw ( ) ; 

~ __basic_file ( ) ; 

streamsize 
xsputn ( const char * __s , streamsize __n ) ; 

streamsize 
xsputn_2 ( const char * __s1 , streamsize __n1 , 
const char * __s2 , streamsize __n2 ) ; 

streamsize 
xsgetn ( char * __s , streamsize __n ) ; 

streamoff 
seekoff ( streamoff __off , ios_base :: seekdir __way ) throw ( ) ; 

int 
sync ( ) ; 

streamsize 
showmanyc ( ) ; 
} ; 


} 
# 43 "/usr/include/c++/7.1.1/fstream" 2 3 




namespace std 
{ 

# 71 "/usr/include/c++/7.1.1/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_filebuf : public basic_streambuf < _CharT , _Traits > 
{ 

template < typename _Tp > 
using __chk_state = __and_ < is_copy_assignable < _Tp > , 
is_copy_constructible < _Tp > , 
is_default_constructible < _Tp >> ; 

static_assert ( __chk_state < typename _Traits :: state_type >:: value , 
"state_type must be CopyAssignable, CopyConstructible" 
" and DefaultConstructible" ) ; 

static_assert ( is_same < typename _Traits :: pos_type , 
fpos < typename _Traits :: state_type >>:: value , 
"pos_type must be fpos<state_type>" ) ; 

public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 

typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 
typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef __basic_file < char > __file_type ; 
typedef typename traits_type :: state_type __state_type ; 
typedef codecvt < char_type , char , __state_type > __codecvt_type ; 

friend class ios_base ; 

protected : 


__c_lock _M_lock ; 


__file_type _M_file ; 


ios_base :: openmode _M_mode ; 


__state_type _M_state_beg ; 




__state_type _M_state_cur ; 



__state_type _M_state_last ; 


char_type * _M_buf ; 






size_t _M_buf_size ; 


bool _M_buf_allocated ; 
# 147 "/usr/include/c++/7.1.1/fstream" 3 
bool _M_reading ; 
bool _M_writing ; 







char_type _M_pback ; 
char_type * _M_pback_cur_save ; 
char_type * _M_pback_end_save ; 
bool _M_pback_init ; 



const __codecvt_type * _M_codecvt ; 






char * _M_ext_buf ; 




streamsize _M_ext_buf_size ; 






const char * _M_ext_next ; 
char * _M_ext_end ; 






void 
_M_create_pback ( ) 
{ __CvT__record_line____(__CvT_miT,129,192);
__CvT__record_line____(__CvT_miT,129,193);if ( ! _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,129,195);_M_pback_cur_save = this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,129,196);_M_pback_end_save = this -> egptr ( ) ; 
__CvT__record_line____(__CvT_miT,129,197);this -> setg ( & _M_pback , & _M_pback , & _M_pback + 1 ) ; 
__CvT__record_line____(__CvT_miT,129,198);_M_pback_init = true ; 
} 
}} 






void 
_M_destroy_pback ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,129,209);
__CvT__record_line____(__CvT_miT,129,210);if ( _M_pback_init ) 
{{ 

__CvT__record_line____(__CvT_miT,129,213);_M_pback_cur_save += this -> gptr ( ) != this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,129,214);this -> setg ( _M_buf , _M_pback_cur_save , _M_pback_end_save ) ; 
__CvT__record_line____(__CvT_miT,129,215);_M_pback_init = false ; 
} 
}} 

public : 







basic_filebuf ( ) ; 


basic_filebuf ( const basic_filebuf & ) = delete ; 
basic_filebuf ( basic_filebuf && ) ; 





virtual 
~ basic_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,239);this -> close ( ) ; } 


basic_filebuf & operator = ( const basic_filebuf & ) = delete ; 
basic_filebuf & operator = ( basic_filebuf && ) ; 
void swap ( basic_filebuf & ) ; 






bool 
is_open ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,129,253);return _M_file . is_open ( ) ; } 
# 296 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
open ( const char * __s , ios_base :: openmode __mode ) ; 
# 306 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
open ( const std :: string & __s , ios_base :: openmode __mode ) 
{ __CvT__record_line____(__CvT_miT,129,308);return open ( __s . c_str ( ) , __mode ) ; } 
# 323 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
close ( ) ; 

protected : 
void 
_M_allocate_internal_buffer ( ) ; 

void 
_M_destroy_internal_buffer ( ) throw ( ) ; 


virtual streamsize 
showmanyc ( ) ; 






virtual int_type 
underflow ( ) ; 

virtual int_type 
pbackfail ( int_type __c = _Traits :: eof ( ) ) ; 
# 355 "/usr/include/c++/7.1.1/fstream" 3 
virtual int_type 
overflow ( int_type __c = _Traits :: eof ( ) ) ; 



bool 
_M_convert_to_external ( char_type * , streamsize ) ; 
# 375 "/usr/include/c++/7.1.1/fstream" 3 
virtual __streambuf_type * 
setbuf ( char_type * __s , streamsize __n ) ; 

virtual pos_type 
seekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 

virtual pos_type 
seekpos ( pos_type __pos , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 


pos_type 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) ; 

int 
_M_get_ext_pos ( __state_type & __state ) ; 

virtual int 
sync ( ) ; 

virtual void 
imbue ( const locale & __loc ) ; 

virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 

virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 


bool 
_M_terminate_output ( ) ; 
# 421 "/usr/include/c++/7.1.1/fstream" 3 
void 
_M_set_buffer ( streamsize __off ) 
{ __CvT__record_line____(__CvT_miT,129,423);
__CvT__record_line____(__CvT_miT,129,424);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,129,425);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 

__CvT__record_line____(__CvT_miT,129,428);if ( __testin && __off > 0 ) 
{__CvT__record_line____(__CvT_miT,129,429);this -> setg ( _M_buf , _M_buf , _M_buf + __off ) ; 
}else {
__CvT__record_line____(__CvT_miT,129,431);this -> setg ( _M_buf , _M_buf , _M_buf ) ; 

}__CvT__record_line____(__CvT_miT,129,433);if ( __testout && __off == 0 && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,129,434);this -> setp ( _M_buf , _M_buf + _M_buf_size - 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,129,436);this -> setp ( 0 , 0 ) ; 
}} 
} ; 
# 454 "/usr/include/c++/7.1.1/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ifstream : public basic_istream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_istream < char_type , traits_type > __istream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 481 "/usr/include/c++/7.1.1/fstream" 3 
basic_ifstream ( ) : __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,482);this -> init ( & _M_filebuf ) ; } 
# 494 "/usr/include/c++/7.1.1/fstream" 3 
explicit 
basic_ifstream ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
: __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,497);
__CvT__record_line____(__CvT_miT,129,498);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,499);this -> open ( __s , __mode ) ; 
} 
# 510 "/usr/include/c++/7.1.1/fstream" 3 
explicit 
basic_ifstream ( const std :: string & __s , 
ios_base :: openmode __mode = ios_base :: in ) 
: __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,514);
__CvT__record_line____(__CvT_miT,129,515);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,516);this -> open ( __s , __mode ) ; 
} 

basic_ifstream ( const basic_ifstream & ) = delete ; 

basic_ifstream ( basic_ifstream && __rhs ) 
: __istream_type ( std :: move ( __rhs ) ) , 
_M_filebuf ( std :: move ( __rhs . _M_filebuf ) ) 
{ __CvT__record_line____(__CvT_miT,129,524);__istream_type :: set_rdbuf ( & _M_filebuf ) ; } 
# 533 "/usr/include/c++/7.1.1/fstream" 3 
~ basic_ifstream ( ) 
{ __CvT__record_line____(__CvT_miT,129,534);} 




basic_ifstream & 
operator = ( const basic_ifstream & ) = delete ; 

basic_ifstream & 
operator = ( basic_ifstream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,544);
__CvT__record_line____(__CvT_miT,129,545);__istream_type :: operator = ( std :: move ( __rhs ) ) ; 
__CvT__record_line____(__CvT_miT,129,546);_M_filebuf = std :: move ( __rhs . _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,547);return * this ; 
} 

void 
swap ( basic_ifstream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,552);
__CvT__record_line____(__CvT_miT,129,553);__istream_type :: swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,129,554);_M_filebuf . swap ( __rhs . _M_filebuf ) ; 
} 
# 565 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,129,567);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,129,575);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,129,581);return _M_filebuf . is_open ( ) ; } 
# 594 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
{ __CvT__record_line____(__CvT_miT,129,596);
__CvT__record_line____(__CvT_miT,129,597);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: in ) ) 
{__CvT__record_line____(__CvT_miT,129,598);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,602);this -> clear ( ) ; 
}} 
# 614 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const std :: string & __s , ios_base :: openmode __mode = ios_base :: in ) 
{ __CvT__record_line____(__CvT_miT,129,616);
__CvT__record_line____(__CvT_miT,129,617);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: in ) ) 
{__CvT__record_line____(__CvT_miT,129,618);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,622);this -> clear ( ) ; 
}} 
# 632 "/usr/include/c++/7.1.1/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,129,634);
__CvT__record_line____(__CvT_miT,129,635);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,129,636);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 655 "/usr/include/c++/7.1.1/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ofstream : public basic_ostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ostream < char_type , traits_type > __ostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 682 "/usr/include/c++/7.1.1/fstream" 3 
basic_ofstream ( ) : __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,683);this -> init ( & _M_filebuf ) ; } 
# 696 "/usr/include/c++/7.1.1/fstream" 3 
explicit 
basic_ofstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
: __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,700);
__CvT__record_line____(__CvT_miT,129,701);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,702);this -> open ( __s , __mode ) ; 
} 
# 714 "/usr/include/c++/7.1.1/fstream" 3 
explicit 
basic_ofstream ( const std :: string & __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
: __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,718);
__CvT__record_line____(__CvT_miT,129,719);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,720);this -> open ( __s , __mode ) ; 
} 

basic_ofstream ( const basic_ofstream & ) = delete ; 

basic_ofstream ( basic_ofstream && __rhs ) 
: __ostream_type ( std :: move ( __rhs ) ) , 
_M_filebuf ( std :: move ( __rhs . _M_filebuf ) ) 
{ __CvT__record_line____(__CvT_miT,129,728);__ostream_type :: set_rdbuf ( & _M_filebuf ) ; } 
# 737 "/usr/include/c++/7.1.1/fstream" 3 
~ basic_ofstream ( ) 
{ __CvT__record_line____(__CvT_miT,129,738);} 




basic_ofstream & 
operator = ( const basic_ofstream & ) = delete ; 

basic_ofstream & 
operator = ( basic_ofstream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,748);
__CvT__record_line____(__CvT_miT,129,749);__ostream_type :: operator = ( std :: move ( __rhs ) ) ; 
__CvT__record_line____(__CvT_miT,129,750);_M_filebuf = std :: move ( __rhs . _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,751);return * this ; 
} 

void 
swap ( basic_ofstream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,756);
__CvT__record_line____(__CvT_miT,129,757);__ostream_type :: swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,129,758);_M_filebuf . swap ( __rhs . _M_filebuf ) ; 
} 
# 769 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,129,771);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,129,779);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,129,785);return _M_filebuf . is_open ( ) ; } 
# 798 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
{ __CvT__record_line____(__CvT_miT,129,801);
__CvT__record_line____(__CvT_miT,129,802);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: out ) ) 
{__CvT__record_line____(__CvT_miT,129,803);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,807);this -> clear ( ) ; 
}} 
# 819 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const std :: string & __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
{ __CvT__record_line____(__CvT_miT,129,822);
__CvT__record_line____(__CvT_miT,129,823);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: out ) ) 
{__CvT__record_line____(__CvT_miT,129,824);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,828);this -> clear ( ) ; 
}} 
# 838 "/usr/include/c++/7.1.1/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,129,840);
__CvT__record_line____(__CvT_miT,129,841);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,129,842);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 861 "/usr/include/c++/7.1.1/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_fstream : public basic_iostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ios < char_type , traits_type > __ios_type ; 
typedef basic_iostream < char_type , traits_type > __iostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 889 "/usr/include/c++/7.1.1/fstream" 3 
basic_fstream ( ) 
: __iostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,891);this -> init ( & _M_filebuf ) ; } 
# 901 "/usr/include/c++/7.1.1/fstream" 3 
explicit 
basic_fstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
: __iostream_type ( 0 ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,905);
__CvT__record_line____(__CvT_miT,129,906);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,907);this -> open ( __s , __mode ) ; 
} 







explicit 
basic_fstream ( const std :: string & __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
: __iostream_type ( 0 ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,129,920);
__CvT__record_line____(__CvT_miT,129,921);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,922);this -> open ( __s , __mode ) ; 
} 

basic_fstream ( const basic_fstream & ) = delete ; 

basic_fstream ( basic_fstream && __rhs ) 
: __iostream_type ( std :: move ( __rhs ) ) , 
_M_filebuf ( std :: move ( __rhs . _M_filebuf ) ) 
{ __CvT__record_line____(__CvT_miT,129,930);__iostream_type :: set_rdbuf ( & _M_filebuf ) ; } 
# 939 "/usr/include/c++/7.1.1/fstream" 3 
~ basic_fstream ( ) 
{ __CvT__record_line____(__CvT_miT,129,940);} 




basic_fstream & 
operator = ( const basic_fstream & ) = delete ; 

basic_fstream & 
operator = ( basic_fstream && __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,950);
__CvT__record_line____(__CvT_miT,129,951);__iostream_type :: operator = ( std :: move ( __rhs ) ) ; 
__CvT__record_line____(__CvT_miT,129,952);_M_filebuf = std :: move ( __rhs . _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,129,953);return * this ; 
} 

void 
swap ( basic_fstream & __rhs ) 
{ __CvT__record_line____(__CvT_miT,129,958);
__CvT__record_line____(__CvT_miT,129,959);__iostream_type :: swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,129,960);_M_filebuf . swap ( __rhs . _M_filebuf ) ; 
} 
# 971 "/usr/include/c++/7.1.1/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,129,973);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,129,981);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,129,987);return _M_filebuf . is_open ( ) ; } 
# 1000 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,129,1003);
__CvT__record_line____(__CvT_miT,129,1004);if ( ! _M_filebuf . open ( __s , __mode ) ) 
{__CvT__record_line____(__CvT_miT,129,1005);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,1009);this -> clear ( ) ; 
}} 
# 1021 "/usr/include/c++/7.1.1/fstream" 3 
void 
open ( const std :: string & __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,129,1024);
__CvT__record_line____(__CvT_miT,129,1025);if ( ! _M_filebuf . open ( __s , __mode ) ) 
{__CvT__record_line____(__CvT_miT,129,1026);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,129,1030);this -> clear ( ) ; 
}} 
# 1040 "/usr/include/c++/7.1.1/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,129,1042);
__CvT__record_line____(__CvT_miT,129,1043);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,129,1044);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 



template < class _CharT , class _Traits > 
inline void 
swap ( basic_filebuf < _CharT , _Traits >& __x , 
basic_filebuf < _CharT , _Traits >& __y ) 
{ __CvT__record_line____(__CvT_miT,129,1054);__x . swap ( __y ) ; } 


template < class _CharT , class _Traits > 
inline void 
swap ( basic_ifstream < _CharT , _Traits >& __x , 
basic_ifstream < _CharT , _Traits >& __y ) 
{ __CvT__record_line____(__CvT_miT,129,1061);__x . swap ( __y ) ; } 


template < class _CharT , class _Traits > 
inline void 
swap ( basic_ofstream < _CharT , _Traits >& __x , 
basic_ofstream < _CharT , _Traits >& __y ) 
{ __CvT__record_line____(__CvT_miT,129,1068);__x . swap ( __y ) ; } 


template < class _CharT , class _Traits > 
inline void 
swap ( basic_fstream < _CharT , _Traits >& __x , 
basic_fstream < _CharT , _Traits >& __y ) 
{ __CvT__record_line____(__CvT_miT,129,1075);__x . swap ( __y ) ; } 



} 

# 1 "/usr/include/c++/7.1.1/bits/fstream.tcc" 1 3 
# 37 "/usr/include/c++/7.1.1/bits/fstream.tcc" 3 

# 38 "/usr/include/c++/7.1.1/bits/fstream.tcc" 3 




namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_allocate_internal_buffer ( ) 
{ 


if ( ! _M_buf_allocated && ! _M_buf ) 
{ 
_M_buf = new char_type [ _M_buf_size ] ; 
_M_buf_allocated = true ; 
} 
} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_destroy_internal_buffer ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,155,64);
__CvT__record_line____(__CvT_miT,155,65);if ( _M_buf_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,155,67);delete [ ] _M_buf ; 
__CvT__record_line____(__CvT_miT,155,68);_M_buf = 0 ; 
__CvT__record_line____(__CvT_miT,155,69);_M_buf_allocated = false ; 
} 
}__CvT__record_line____(__CvT_miT,155,71);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,72);_M_ext_buf = 0 ; 
__CvT__record_line____(__CvT_miT,155,73);_M_ext_buf_size = 0 ; 
__CvT__record_line____(__CvT_miT,155,74);_M_ext_next = 0 ; 
__CvT__record_line____(__CvT_miT,155,75);_M_ext_end = 0 ; 
} 

template < typename _CharT , typename _Traits > 
basic_filebuf < _CharT , _Traits >:: 
basic_filebuf ( ) : __streambuf_type ( ) , _M_lock ( ) , _M_file ( & _M_lock ) , 
_M_mode ( ios_base :: openmode ( 0 ) ) , _M_state_beg ( ) , _M_state_cur ( ) , 
_M_state_last ( ) , _M_buf ( 0 ) , _M_buf_size ( 8192 ) , 
_M_buf_allocated ( false ) , _M_reading ( false ) , _M_writing ( false ) , _M_pback ( ) , 
_M_pback_cur_save ( 0 ) , _M_pback_end_save ( 0 ) , _M_pback_init ( false ) , 
_M_codecvt ( 0 ) , _M_ext_buf ( 0 ) , _M_ext_buf_size ( 0 ) , _M_ext_next ( 0 ) , 
_M_ext_end ( 0 ) 
{ __CvT__record_line____(__CvT_miT,155,87);
__CvT__record_line____(__CvT_miT,155,88);if ( has_facet < __codecvt_type > ( this -> _M_buf_locale ) ) 
{__CvT__record_line____(__CvT_miT,155,89);_M_codecvt = & use_facet < __codecvt_type > ( this -> _M_buf_locale ) ; 
}} 


template < typename _CharT , typename _Traits > 
basic_filebuf < _CharT , _Traits >:: 
basic_filebuf ( basic_filebuf && __rhs ) 
: __streambuf_type ( __rhs ) , 
_M_lock ( ) , _M_file ( std :: move ( __rhs . _M_file ) , & _M_lock ) , 
_M_mode ( std :: __exchange ( __rhs . _M_mode , ios_base :: openmode ( 0 ) ) ) , 
_M_state_beg ( std :: move ( __rhs . _M_state_beg ) ) , 
_M_state_cur ( std :: move ( __rhs . _M_state_cur ) ) , 
_M_state_last ( std :: move ( __rhs . _M_state_last ) ) , 
_M_buf ( std :: __exchange ( __rhs . _M_buf , nullptr ) ) , 
_M_buf_size ( std :: __exchange ( __rhs . _M_buf_size , 1 ) ) , 
_M_buf_allocated ( std :: __exchange ( __rhs . _M_buf_allocated , false ) ) , 
_M_reading ( std :: __exchange ( __rhs . _M_reading , false ) ) , 
_M_writing ( std :: __exchange ( __rhs . _M_writing , false ) ) , 
_M_pback ( __rhs . _M_pback ) , 
_M_pback_cur_save ( std :: __exchange ( __rhs . _M_pback_cur_save , nullptr ) ) , 
_M_pback_end_save ( std :: __exchange ( __rhs . _M_pback_end_save , nullptr ) ) , 
_M_pback_init ( std :: __exchange ( __rhs . _M_pback_init , false ) ) , 
_M_codecvt ( __rhs . _M_codecvt ) , 
_M_ext_buf ( std :: __exchange ( __rhs . _M_ext_buf , nullptr ) ) , 
_M_ext_buf_size ( std :: __exchange ( __rhs . _M_ext_buf_size , 0 ) ) , 
_M_ext_next ( std :: __exchange ( __rhs . _M_ext_next , nullptr ) ) , 
_M_ext_end ( std :: __exchange ( __rhs . _M_ext_end , nullptr ) ) 
{ __CvT__record_line____(__CvT_miT,155,116);
__CvT__record_line____(__CvT_miT,155,117);__rhs . _M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,118);__rhs . _M_state_last = __rhs . _M_state_cur = __rhs . _M_state_beg ; 
} 

template < typename _CharT , typename _Traits > 
basic_filebuf < _CharT , _Traits >& 
basic_filebuf < _CharT , _Traits >:: 
operator = ( basic_filebuf && __rhs ) 
{ __CvT__record_line____(__CvT_miT,155,125);
__CvT__record_line____(__CvT_miT,155,126);this -> close ( ) ; 
__CvT__record_line____(__CvT_miT,155,127);__streambuf_type :: operator = ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,155,128);_M_file . swap ( __rhs . _M_file ) ; 
__CvT__record_line____(__CvT_miT,155,129);_M_mode = std :: __exchange ( __rhs . _M_mode , ios_base :: openmode ( 0 ) ) ; 
__CvT__record_line____(__CvT_miT,155,130);_M_state_beg = std :: move ( __rhs . _M_state_beg ) ; 
__CvT__record_line____(__CvT_miT,155,131);_M_state_cur = std :: move ( __rhs . _M_state_cur ) ; 
__CvT__record_line____(__CvT_miT,155,132);_M_state_last = std :: move ( __rhs . _M_state_last ) ; 
__CvT__record_line____(__CvT_miT,155,133);_M_buf = std :: __exchange ( __rhs . _M_buf , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,134);_M_buf_size = std :: __exchange ( __rhs . _M_buf_size , 1 ) ; 
__CvT__record_line____(__CvT_miT,155,135);_M_buf_allocated = std :: __exchange ( __rhs . _M_buf_allocated , false ) ; 
__CvT__record_line____(__CvT_miT,155,136);_M_ext_buf = std :: __exchange ( __rhs . _M_ext_buf , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,137);_M_ext_buf_size = std :: __exchange ( __rhs . _M_ext_buf_size , 0 ) ; 
__CvT__record_line____(__CvT_miT,155,138);_M_ext_next = std :: __exchange ( __rhs . _M_ext_next , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,139);_M_ext_end = std :: __exchange ( __rhs . _M_ext_end , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,140);_M_reading = std :: __exchange ( __rhs . _M_reading , false ) ; 
__CvT__record_line____(__CvT_miT,155,141);_M_writing = std :: __exchange ( __rhs . _M_writing , false ) ; 
__CvT__record_line____(__CvT_miT,155,142);_M_pback_cur_save = std :: __exchange ( __rhs . _M_pback_cur_save , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,143);_M_pback_end_save = std :: __exchange ( __rhs . _M_pback_end_save , nullptr ) ; 
__CvT__record_line____(__CvT_miT,155,144);_M_pback_init = std :: __exchange ( __rhs . _M_pback_init , false ) ; 
__CvT__record_line____(__CvT_miT,155,145);__rhs . _M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,146);__rhs . _M_state_last = __rhs . _M_state_cur = __rhs . _M_state_beg ; 
__CvT__record_line____(__CvT_miT,155,147);return * this ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
swap ( basic_filebuf & __rhs ) 
{ __CvT__record_line____(__CvT_miT,155,154);
__CvT__record_line____(__CvT_miT,155,155);__streambuf_type :: swap ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,155,156);_M_file . swap ( __rhs . _M_file ) ; 
__CvT__record_line____(__CvT_miT,155,157);std :: swap ( _M_mode , __rhs . _M_mode ) ; 
__CvT__record_line____(__CvT_miT,155,158);std :: swap ( _M_state_beg , __rhs . _M_state_beg ) ; 
__CvT__record_line____(__CvT_miT,155,159);std :: swap ( _M_state_cur , __rhs . _M_state_cur ) ; 
__CvT__record_line____(__CvT_miT,155,160);std :: swap ( _M_state_last , __rhs . _M_state_last ) ; 
__CvT__record_line____(__CvT_miT,155,161);std :: swap ( _M_buf , __rhs . _M_buf ) ; 
__CvT__record_line____(__CvT_miT,155,162);std :: swap ( _M_buf_size , __rhs . _M_buf_size ) ; 
__CvT__record_line____(__CvT_miT,155,163);std :: swap ( _M_buf_allocated , __rhs . _M_buf_allocated ) ; 
__CvT__record_line____(__CvT_miT,155,164);std :: swap ( _M_ext_buf , __rhs . _M_ext_buf ) ; 
__CvT__record_line____(__CvT_miT,155,165);std :: swap ( _M_ext_buf_size , __rhs . _M_ext_buf_size ) ; 
__CvT__record_line____(__CvT_miT,155,166);std :: swap ( _M_ext_next , __rhs . _M_ext_next ) ; 
__CvT__record_line____(__CvT_miT,155,167);std :: swap ( _M_ext_end , __rhs . _M_ext_end ) ; 
__CvT__record_line____(__CvT_miT,155,168);std :: swap ( _M_reading , __rhs . _M_reading ) ; 
__CvT__record_line____(__CvT_miT,155,169);std :: swap ( _M_writing , __rhs . _M_writing ) ; 
__CvT__record_line____(__CvT_miT,155,170);std :: swap ( _M_pback_cur_save , __rhs . _M_pback_cur_save ) ; 
__CvT__record_line____(__CvT_miT,155,171);std :: swap ( _M_pback_end_save , __rhs . _M_pback_end_save ) ; 
__CvT__record_line____(__CvT_miT,155,172);std :: swap ( _M_pback_init , __rhs . _M_pback_init ) ; 
} 


template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
open ( const char * __s , ios_base :: openmode __mode ) 
{ __CvT__record_line____(__CvT_miT,155,180);
__CvT__record_line____(__CvT_miT,155,181);__filebuf_type * __ret = 0 ; 
__CvT__record_line____(__CvT_miT,155,182);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,184);_M_file . open ( __s , __mode ) ; 
__CvT__record_line____(__CvT_miT,155,185);if ( this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,187);_M_allocate_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,155,188);_M_mode = __mode ; 


__CvT__record_line____(__CvT_miT,155,191);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,155,192);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,155,193);_M_set_buffer ( - 1 ) ; 


__CvT__record_line____(__CvT_miT,155,196);_M_state_last = _M_state_cur = _M_state_beg ; 


__CvT__record_line____(__CvT_miT,155,199);if ( ( __mode & ios_base :: ate ) 
&& this -> seekoff ( 0 , ios_base :: end , __mode ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,155,202);this -> close ( ) ; 
}else {
__CvT__record_line____(__CvT_miT,155,204);__ret = this ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,155,207);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
close ( ) 
{ __CvT__record_line____(__CvT_miT,155,214);
__CvT__record_line____(__CvT_miT,155,215);if ( ! this -> is_open ( ) ) 
{__CvT__record_line____(__CvT_miT,155,216);return 0 ; 

}__CvT__record_line____(__CvT_miT,155,218);bool __testfail = false ; 
{ 

__CvT__record_line____(__CvT_miT,155,221);struct __close_sentry 
{ 
basic_filebuf * __fb ; 
__close_sentry ( basic_filebuf * __fbi ) : __fb ( __fbi ) { __CvT__record_line____(__CvT_miT,155,224);} 
~ __close_sentry ( ) 
{ __CvT__record_line____(__CvT_miT,155,226);
__CvT__record_line____(__CvT_miT,155,227);__fb -> _M_mode = ios_base :: openmode ( 0 ) ; 
__CvT__record_line____(__CvT_miT,155,228);__fb -> _M_pback_init = false ; 
__CvT__record_line____(__CvT_miT,155,229);__fb -> _M_destroy_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,155,230);__fb -> _M_reading = false ; 
__CvT__record_line____(__CvT_miT,155,231);__fb -> _M_writing = false ; 
__CvT__record_line____(__CvT_miT,155,232);__fb -> _M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,233);__fb -> _M_state_last = __fb -> _M_state_cur = __fb -> _M_state_beg ; 
} 
} __cs ( this ) ; 

__CvT__record_line____(__CvT_miT,155,237);try 
{ 
__CvT__record_line____(__CvT_miT,155,239);if ( ! _M_terminate_output ( ) ) 
{__CvT__record_line____(__CvT_miT,155,240);__testfail = true ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,155,244);_M_file . close ( ) ; 
__CvT__record_line____(__CvT_miT,155,245);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,155,248);__testfail = true ; } 
} 

__CvT__record_line____(__CvT_miT,155,251);if ( ! _M_file . close ( ) ) 
{__CvT__record_line____(__CvT_miT,155,252);__testfail = true ; 

}__CvT__record_line____(__CvT_miT,155,254);if ( __testfail ) 
{__CvT__record_line____(__CvT_miT,155,255);return 0 ; 
}else {
__CvT__record_line____(__CvT_miT,155,257);return this ; 
}} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
showmanyc ( ) 
{ __CvT__record_line____(__CvT_miT,155,264);
__CvT__record_line____(__CvT_miT,155,265);streamsize __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,155,266);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,155,267);if ( __testin && this -> is_open ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,155,271);__ret = this -> egptr ( ) - this -> gptr ( ) ; 







__CvT__record_line____(__CvT_miT,155,279);if ( __check_facet ( _M_codecvt ) . encoding ( ) >= 0 ) 

{__CvT__record_line____(__CvT_miT,155,281);__ret += _M_file . showmanyc ( ) / _M_codecvt -> max_length ( ) ; 
}} 
}__CvT__record_line____(__CvT_miT,155,283);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,155,290);
__CvT__record_line____(__CvT_miT,155,291);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,155,292);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,155,293);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,155,295);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,155,297);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,155,298);return __ret ; 
}__CvT__record_line____(__CvT_miT,155,299);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,300);_M_writing = false ; 
} 



}__CvT__record_line____(__CvT_miT,155,305);_M_destroy_pback ( ) ; 

__CvT__record_line____(__CvT_miT,155,307);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,155,308);return traits_type :: to_int_type ( * this -> gptr ( ) ) ; 


}__CvT__record_line____(__CvT_miT,155,311);const size_t __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 


__CvT__record_line____(__CvT_miT,155,314);bool __got_eof = false ; 

__CvT__record_line____(__CvT_miT,155,316);streamsize __ilen = 0 ; 
__CvT__record_line____(__CvT_miT,155,317);codecvt_base :: result __r = codecvt_base :: ok ; 
__CvT__record_line____(__CvT_miT,155,318);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,320);__ilen = _M_file . xsgetn ( reinterpret_cast < char *> ( this -> eback ( ) ) , 
__buflen ) ; 
__CvT__record_line____(__CvT_miT,155,322);if ( __ilen == 0 ) 
{__CvT__record_line____(__CvT_miT,155,323);__got_eof = true ; 
}} 
}else {
{ 


__CvT__record_line____(__CvT_miT,155,329);const int __enc = _M_codecvt -> encoding ( ) ; 
__CvT__record_line____(__CvT_miT,155,330);streamsize __blen ; 
__CvT__record_line____(__CvT_miT,155,331);streamsize __rlen ; 
__CvT__record_line____(__CvT_miT,155,332);if ( __enc > 0 ) 
{__CvT__record_line____(__CvT_miT,155,333);__blen = __rlen = __buflen * __enc ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,155,336);__blen = __buflen + _M_codecvt -> max_length ( ) - 1 ; 
__CvT__record_line____(__CvT_miT,155,337);__rlen = __buflen ; 
} 
}__CvT__record_line____(__CvT_miT,155,339);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,155,340);__rlen = __rlen > __remainder ? __rlen - __remainder : 0 ; 



__CvT__record_line____(__CvT_miT,155,344);if ( _M_reading && this -> egptr ( ) == this -> eback ( ) && __remainder ) 
{__CvT__record_line____(__CvT_miT,155,345);__rlen = 0 ; 



}__CvT__record_line____(__CvT_miT,155,349);if ( _M_ext_buf_size < __blen ) 
{{ 
__CvT__record_line____(__CvT_miT,155,351);char * __buf = new char [ __blen ] ; 
__CvT__record_line____(__CvT_miT,155,352);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,155,353);__builtin_memcpy ( __buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,155,355);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,356);_M_ext_buf = __buf ; 
__CvT__record_line____(__CvT_miT,155,357);_M_ext_buf_size = __blen ; 
} 
}else {__CvT__record_line____(__CvT_miT,155,359);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,155,360);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}}__CvT__record_line____(__CvT_miT,155,362);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,363);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,155,364);_M_state_last = _M_state_cur ; 

__CvT__record_line____(__CvT_miT,155,366);do {
{ 
__CvT__record_line____(__CvT_miT,155,368);if ( __rlen > 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,155,373);if ( _M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size ) 
{{ 
__CvT__record_line____(__CvT_miT,155,375);__throw_ios_failure ( ( "basic_filebuf::underflow " "codecvt::max_length() " "is not valid" ) 

) ; 
} 
}__CvT__record_line____(__CvT_miT,155,379);streamsize __elen = _M_file . xsgetn ( _M_ext_end , __rlen ) ; 
__CvT__record_line____(__CvT_miT,155,380);if ( __elen == 0 ) 
{__CvT__record_line____(__CvT_miT,155,381);__got_eof = true ; 
}else {__CvT__record_line____(__CvT_miT,155,382);if ( __elen == - 1 ) 
{__CvT__record_line____(__CvT_miT,155,383);break ; 
}}__CvT__record_line____(__CvT_miT,155,384);_M_ext_end += __elen ; 
} 

}__CvT__record_line____(__CvT_miT,155,387);char_type * __iend = this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,155,388);if ( _M_ext_next < _M_ext_end ) 
{__CvT__record_line____(__CvT_miT,155,389);__r = _M_codecvt -> in ( _M_state_cur , _M_ext_next , 
_M_ext_end , _M_ext_next , 
this -> eback ( ) , 
this -> eback ( ) + __buflen , __iend ) ; 
}__CvT__record_line____(__CvT_miT,155,393);if ( __r == codecvt_base :: noconv ) 
{{ 
__CvT__record_line____(__CvT_miT,155,395);size_t __avail = _M_ext_end - _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,396);__ilen = std :: min ( __avail , __buflen ) ; 
__CvT__record_line____(__CvT_miT,155,397);traits_type :: copy ( this -> eback ( ) , 
reinterpret_cast < char_type *> 
( _M_ext_buf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,155,400);_M_ext_next = _M_ext_buf + __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,155,403);__ilen = __iend - this -> eback ( ) ; 




}__CvT__record_line____(__CvT_miT,155,408);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,155,409);break ; 

}__CvT__record_line____(__CvT_miT,155,411);__rlen = 1 ; 
} 
}while ( __ilen == 0 && ! __got_eof ) ;
} 

}__CvT__record_line____(__CvT_miT,155,416);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,155,418);_M_set_buffer ( __ilen ) ; 
__CvT__record_line____(__CvT_miT,155,419);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,155,420);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,155,422);if ( __got_eof ) 
{{ 



__CvT__record_line____(__CvT_miT,155,427);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,428);_M_reading = false ; 


__CvT__record_line____(__CvT_miT,155,431);if ( __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,155,432);__throw_ios_failure ( ( "basic_filebuf::underflow " "incomplete character in file" ) 
) ; 
}} 
}else {__CvT__record_line____(__CvT_miT,155,435);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,155,436);__throw_ios_failure ( ( "basic_filebuf::underflow " "invalid byte sequence in file" ) 
) ; 
}else {
__CvT__record_line____(__CvT_miT,155,439);__throw_ios_failure ( ( "basic_filebuf::underflow " "error reading the file" ) 
) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,155,442);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
pbackfail ( int_type __i ) 
{ __CvT__record_line____(__CvT_miT,155,449);
__CvT__record_line____(__CvT_miT,155,450);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,155,451);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,155,452);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,155,454);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,155,456);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,155,457);return __ret ; 
}__CvT__record_line____(__CvT_miT,155,458);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,459);_M_writing = false ; 
} 


}__CvT__record_line____(__CvT_miT,155,463);const bool __testpb = _M_pback_init ; 
__CvT__record_line____(__CvT_miT,155,464);const bool __testeof = traits_type :: eq_int_type ( __i , __ret ) ; 
__CvT__record_line____(__CvT_miT,155,465);int_type __tmp ; 
__CvT__record_line____(__CvT_miT,155,466);if ( this -> eback ( ) < this -> gptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,468);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,469);__tmp = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,155,471);if ( this -> seekoff ( - 1 , ios_base :: cur ) != pos_type ( off_type ( - 1 ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,473);__tmp = this -> underflow ( ) ; 
__CvT__record_line____(__CvT_miT,155,474);if ( traits_type :: eq_int_type ( __tmp , __ret ) ) 
{__CvT__record_line____(__CvT_miT,155,475);return __ret ; 
}} 
}else {
{ 





__CvT__record_line____(__CvT_miT,155,484);return __ret ; 
} 



}}__CvT__record_line____(__CvT_miT,155,489);if ( ! __testeof && traits_type :: eq_int_type ( __i , __tmp ) ) 
{__CvT__record_line____(__CvT_miT,155,490);__ret = __i ; 
}else {__CvT__record_line____(__CvT_miT,155,491);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,155,492);__ret = traits_type :: not_eof ( __i ) ; 
}else {__CvT__record_line____(__CvT_miT,155,493);if ( ! __testpb ) 
{{ 
__CvT__record_line____(__CvT_miT,155,495);_M_create_pback ( ) ; 
__CvT__record_line____(__CvT_miT,155,496);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,155,497);* this -> gptr ( ) = traits_type :: to_char_type ( __i ) ; 
__CvT__record_line____(__CvT_miT,155,498);__ret = __i ; 
} 
}}}} 
}__CvT__record_line____(__CvT_miT,155,501);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
overflow ( int_type __c ) 
{ __CvT__record_line____(__CvT_miT,155,508);
__CvT__record_line____(__CvT_miT,155,509);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,155,510);const bool __testeof = traits_type :: eq_int_type ( __c , __ret ) ; 
__CvT__record_line____(__CvT_miT,155,511);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 
__CvT__record_line____(__CvT_miT,155,513);if ( __testout ) 
{{ 
__CvT__record_line____(__CvT_miT,155,515);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,155,517);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,155,518);const int __gptr_off = _M_get_ext_pos ( _M_state_last ) ; 
__CvT__record_line____(__CvT_miT,155,519);if ( _M_seek ( __gptr_off , ios_base :: cur , _M_state_last ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,155,521);return __ret ; 
}} 
}__CvT__record_line____(__CvT_miT,155,523);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,155,526);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,155,528);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,155,529);this -> pbump ( 1 ) ; 
} 



}__CvT__record_line____(__CvT_miT,155,534);if ( _M_convert_to_external ( this -> pbase ( ) , 
this -> pptr ( ) - this -> pbase ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,537);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,155,538);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,155,541);if ( _M_buf_size > 1 ) 
{{ 



__CvT__record_line____(__CvT_miT,155,546);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,155,547);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,155,548);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,155,550);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,155,551);this -> pbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,155,553);__ret = traits_type :: not_eof ( __c ) ; 
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,155,558);char_type __conv = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,155,559);if ( __testeof || _M_convert_to_external ( & __conv , 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,561);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,155,562);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,155,566);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_convert_to_external ( _CharT * __ibuf , streamsize __ilen ) 
{ __CvT__record_line____(__CvT_miT,155,573);

__CvT__record_line____(__CvT_miT,155,575);streamsize __elen ; 
__CvT__record_line____(__CvT_miT,155,576);streamsize __plen ; 
__CvT__record_line____(__CvT_miT,155,577);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,579);__elen = _M_file . xsputn ( reinterpret_cast < char *> ( __ibuf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,155,580);__plen = __ilen ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,155,586);streamsize __blen = __ilen * _M_codecvt -> max_length ( ) ; 
__CvT__record_line____(__CvT_miT,155,587);char * __buf = static_cast < char *> ( __builtin_alloca ( __blen ) ) ; 

__CvT__record_line____(__CvT_miT,155,589);char * __bend ; 
__CvT__record_line____(__CvT_miT,155,590);const char_type * __iend ; 
__CvT__record_line____(__CvT_miT,155,591);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,155,592);__r = _M_codecvt -> out ( _M_state_cur , __ibuf , __ibuf + __ilen , 
__iend , __buf , __buf + __blen , __bend ) ; 

__CvT__record_line____(__CvT_miT,155,595);if ( __r == codecvt_base :: ok || __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,155,596);__blen = __bend - __buf ; 
}else {__CvT__record_line____(__CvT_miT,155,597);if ( __r == codecvt_base :: noconv ) 
{{ 

__CvT__record_line____(__CvT_miT,155,600);__buf = reinterpret_cast < char *> ( __ibuf ) ; 
__CvT__record_line____(__CvT_miT,155,601);__blen = __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,155,604);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 

}}__CvT__record_line____(__CvT_miT,155,607);__elen = _M_file . xsputn ( __buf , __blen ) ; 
__CvT__record_line____(__CvT_miT,155,608);__plen = __blen ; 


__CvT__record_line____(__CvT_miT,155,611);if ( __r == codecvt_base :: partial && __elen == __plen ) 
{{ 
__CvT__record_line____(__CvT_miT,155,613);const char_type * __iresume = __iend ; 
__CvT__record_line____(__CvT_miT,155,614);streamsize __rlen = this -> pptr ( ) - __iend ; 
__CvT__record_line____(__CvT_miT,155,615);__r = _M_codecvt -> out ( _M_state_cur , __iresume , 
__iresume + __rlen , __iend , __buf , 
__buf + __blen , __bend ) ; 
__CvT__record_line____(__CvT_miT,155,618);if ( __r != codecvt_base :: error ) 
{{ 
__CvT__record_line____(__CvT_miT,155,620);__rlen = __bend - __buf ; 
__CvT__record_line____(__CvT_miT,155,621);__elen = _M_file . xsputn ( __buf , __rlen ) ; 
__CvT__record_line____(__CvT_miT,155,622);__plen = __rlen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,155,625);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,155,629);return __elen == __plen ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsgetn ( _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,155,636);

__CvT__record_line____(__CvT_miT,155,638);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,155,639);if ( _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,155,641);if ( __n > 0 && this -> gptr ( ) == this -> eback ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,643);* __s ++ = * this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,155,644);this -> gbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,155,645);__ret = 1 ; 
__CvT__record_line____(__CvT_miT,155,646);-- __n ; 
} 
}__CvT__record_line____(__CvT_miT,155,648);_M_destroy_pback ( ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,155,650);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,155,652);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,155,653);return __ret ; 
}__CvT__record_line____(__CvT_miT,155,654);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,655);_M_writing = false ; 
} 




}}__CvT__record_line____(__CvT_miT,155,661);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,155,662);const streamsize __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 

__CvT__record_line____(__CvT_miT,155,664);if ( __n > __buflen && __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testin ) 
{{ 

__CvT__record_line____(__CvT_miT,155,668);const streamsize __avail = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,155,669);if ( __avail != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,155,671);traits_type :: copy ( __s , this -> gptr ( ) , __avail ) ; 
__CvT__record_line____(__CvT_miT,155,672);__s += __avail ; 
__CvT__record_line____(__CvT_miT,155,673);this -> setg ( this -> eback ( ) , this -> gptr ( ) + __avail , 
this -> egptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,155,675);__ret += __avail ; 
__CvT__record_line____(__CvT_miT,155,676);__n -= __avail ; 
} 



}__CvT__record_line____(__CvT_miT,155,681);streamsize __len ; 
__CvT__record_line____(__CvT_miT,155,682);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,155,684);__len = _M_file . xsgetn ( reinterpret_cast < char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,155,686);if ( __len == - 1 ) 
{__CvT__record_line____(__CvT_miT,155,687);__throw_ios_failure ( ( "basic_filebuf::xsgetn " "error reading the file" ) 
) ; 
}__CvT__record_line____(__CvT_miT,155,689);if ( __len == 0 ) 
{__CvT__record_line____(__CvT_miT,155,690);break ; 

}__CvT__record_line____(__CvT_miT,155,692);__n -= __len ; 
__CvT__record_line____(__CvT_miT,155,693);__ret += __len ; 
__CvT__record_line____(__CvT_miT,155,694);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,155,695);break ; 

}__CvT__record_line____(__CvT_miT,155,697);__s += __len ; 
} 

}__CvT__record_line____(__CvT_miT,155,700);if ( __n == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,155,702);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,155,703);_M_reading = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,155,705);if ( __len == 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,155,710);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,711);_M_reading = false ; 
} 
}}} 
}else {
__CvT__record_line____(__CvT_miT,155,715);__ret += __streambuf_type :: xsgetn ( __s , __n ) ; 

}__CvT__record_line____(__CvT_miT,155,717);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsputn ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,155,724);
__CvT__record_line____(__CvT_miT,155,725);streamsize __ret = 0 ; 



__CvT__record_line____(__CvT_miT,155,729);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 
__CvT__record_line____(__CvT_miT,155,731);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testout && ! _M_reading ) 
{{ 

__CvT__record_line____(__CvT_miT,155,735);const streamsize __chunk = 1ul << 10 ; 
__CvT__record_line____(__CvT_miT,155,736);streamsize __bufavail = this -> epptr ( ) - this -> pptr ( ) ; 


__CvT__record_line____(__CvT_miT,155,739);if ( ! _M_writing && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,155,740);__bufavail = _M_buf_size - 1 ; 

}__CvT__record_line____(__CvT_miT,155,742);const streamsize __limit = std :: min ( __chunk , __bufavail ) ; 
__CvT__record_line____(__CvT_miT,155,743);if ( __n >= __limit ) 
{{ 
__CvT__record_line____(__CvT_miT,155,745);const streamsize __buffill = this -> pptr ( ) - this -> pbase ( ) ; 
__CvT__record_line____(__CvT_miT,155,746);const char * __buf = reinterpret_cast < const char *> ( this -> pbase ( ) ) ; 
__CvT__record_line____(__CvT_miT,155,747);__ret = _M_file . xsputn_2 ( __buf , __buffill , 
reinterpret_cast < const char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,155,750);if ( __ret == __buffill + __n ) 
{{ 
__CvT__record_line____(__CvT_miT,155,752);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,155,753);_M_writing = true ; 
} 
}__CvT__record_line____(__CvT_miT,155,755);if ( __ret > __buffill ) 
{__CvT__record_line____(__CvT_miT,155,756);__ret -= __buffill ; 
}else {
__CvT__record_line____(__CvT_miT,155,758);__ret = 0 ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,155,761);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,155,764);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,155,765);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __streambuf_type * 
basic_filebuf < _CharT , _Traits >:: 
setbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,155,772);
__CvT__record_line____(__CvT_miT,155,773);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,775);if ( __s == 0 && __n == 0 ) 
{__CvT__record_line____(__CvT_miT,155,776);_M_buf_size = 1 ; 
}else {__CvT__record_line____(__CvT_miT,155,777);if ( __s && __n > 0 ) 
{{ 
# 787 "/usr/include/c++/7.1.1/bits/fstream.tcc" 3 
__CvT__record_line____(__CvT_miT,155,787);_M_buf = __s ; 
__CvT__record_line____(__CvT_miT,155,788);_M_buf_size = __n ; 
} 
}}} 
}__CvT__record_line____(__CvT_miT,155,791);return this ; 
} 




template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekoff ( off_type __off , ios_base :: seekdir __way , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,155,801);
__CvT__record_line____(__CvT_miT,155,802);int __width = 0 ; 
__CvT__record_line____(__CvT_miT,155,803);if ( _M_codecvt ) 
{__CvT__record_line____(__CvT_miT,155,804);__width = _M_codecvt -> encoding ( ) ; 
}__CvT__record_line____(__CvT_miT,155,805);if ( __width < 0 ) 
{__CvT__record_line____(__CvT_miT,155,806);__width = 0 ; 

}__CvT__record_line____(__CvT_miT,155,808);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,155,809);const bool __testfail = __off != 0 && __width <= 0 ; 
__CvT__record_line____(__CvT_miT,155,810);if ( this -> is_open ( ) && ! __testfail ) 
{{ 




__CvT__record_line____(__CvT_miT,155,816);bool __no_movement = __way == ios_base :: cur && __off == 0 
&& ( ! _M_writing || _M_codecvt -> always_noconv ( ) ) ; 


__CvT__record_line____(__CvT_miT,155,820);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,155,821);_M_destroy_pback ( ) ; 






}__CvT__record_line____(__CvT_miT,155,828);__state_type __state = _M_state_beg ; 
__CvT__record_line____(__CvT_miT,155,829);off_type __computed_off = __off * __width ; 
__CvT__record_line____(__CvT_miT,155,830);if ( _M_reading && __way == ios_base :: cur ) 
{{ 
__CvT__record_line____(__CvT_miT,155,832);__state = _M_state_last ; 
__CvT__record_line____(__CvT_miT,155,833);__computed_off += _M_get_ext_pos ( __state ) ; 
} 
}__CvT__record_line____(__CvT_miT,155,835);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,155,836);__ret = _M_seek ( __computed_off , __way , __state ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,155,839);if ( _M_writing ) 
{__CvT__record_line____(__CvT_miT,155,840);__computed_off = this -> pptr ( ) - this -> pbase ( ) ; 

}__CvT__record_line____(__CvT_miT,155,842);off_type __file_off = _M_file . seekoff ( 0 , ios_base :: cur ) ; 
__CvT__record_line____(__CvT_miT,155,843);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,845);__ret = __file_off + __computed_off ; 
__CvT__record_line____(__CvT_miT,155,846);__ret . state ( __state ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,155,850);return __ret ; 
} 





template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekpos ( pos_type __pos , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,155,861);
__CvT__record_line____(__CvT_miT,155,862);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,155,863);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,155,866);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,155,867);__ret = _M_seek ( off_type ( __pos ) , ios_base :: beg , __pos . state ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,155,869);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) 
{ __CvT__record_line____(__CvT_miT,155,876);
__CvT__record_line____(__CvT_miT,155,877);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,155,878);if ( _M_terminate_output ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,880);off_type __file_off = _M_file . seekoff ( __off , __way ) ; 
__CvT__record_line____(__CvT_miT,155,881);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,883);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,155,884);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,155,885);_M_ext_next = _M_ext_end = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,886);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,887);_M_state_cur = __state ; 
__CvT__record_line____(__CvT_miT,155,888);__ret = __file_off ; 
__CvT__record_line____(__CvT_miT,155,889);__ret . state ( _M_state_cur ) ; 
} 
}} 
}__CvT__record_line____(__CvT_miT,155,892);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
int basic_filebuf < _CharT , _Traits >:: 
_M_get_ext_pos ( __state_type & __state ) 
{ __CvT__record_line____(__CvT_miT,155,901);
__CvT__record_line____(__CvT_miT,155,902);if ( _M_codecvt -> always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,155,903);return this -> gptr ( ) - this -> egptr ( ) ; 
}else {
{ 



__CvT__record_line____(__CvT_miT,155,909);const int __gptr_off = 
_M_codecvt -> length ( __state , _M_ext_buf , _M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,155,912);return _M_ext_buf + __gptr_off - _M_ext_end ; 
} 
}} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_terminate_output ( ) 
{ __CvT__record_line____(__CvT_miT,155,920);

__CvT__record_line____(__CvT_miT,155,922);bool __testvalid = true ; 
__CvT__record_line____(__CvT_miT,155,923);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,925);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,155,926);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,155,927);__testvalid = false ; 
}} 


}__CvT__record_line____(__CvT_miT,155,931);if ( _M_writing && ! __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testvalid ) 
{{ 



__CvT__record_line____(__CvT_miT,155,937);const size_t __blen = 128 ; 
__CvT__record_line____(__CvT_miT,155,938);char __buf [ __blen ] ; 
__CvT__record_line____(__CvT_miT,155,939);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,155,940);streamsize __ilen = 0 ; 

__CvT__record_line____(__CvT_miT,155,942);do {
{ 
__CvT__record_line____(__CvT_miT,155,944);char * __next ; 
__CvT__record_line____(__CvT_miT,155,945);__r = _M_codecvt -> unshift ( _M_state_cur , __buf , 
__buf + __blen , __next ) ; 
__CvT__record_line____(__CvT_miT,155,947);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,155,948);__testvalid = false ; 
}else {__CvT__record_line____(__CvT_miT,155,949);if ( __r == codecvt_base :: ok || 
__r == codecvt_base :: partial ) 
{{ 
__CvT__record_line____(__CvT_miT,155,952);__ilen = __next - __buf ; 
__CvT__record_line____(__CvT_miT,155,953);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,155,955);const streamsize __elen = _M_file . xsputn ( __buf , __ilen ) ; 
__CvT__record_line____(__CvT_miT,155,956);if ( __elen != __ilen ) 
{__CvT__record_line____(__CvT_miT,155,957);__testvalid = false ; 
}} 
}} 
}}} 
}while ( __r == codecvt_base :: partial && __ilen > 0 && __testvalid ) ;

__CvT__record_line____(__CvT_miT,155,963);if ( __testvalid ) 
{{ 




__CvT__record_line____(__CvT_miT,155,969);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,155,970);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,155,971);__testvalid = false ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,155,974);return __testvalid ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_filebuf < _CharT , _Traits >:: 
sync ( ) 
{ __CvT__record_line____(__CvT_miT,155,981);


__CvT__record_line____(__CvT_miT,155,984);int __ret = 0 ; 
__CvT__record_line____(__CvT_miT,155,985);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,987);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,155,988);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,155,989);__ret = - 1 ; 
}} 
}__CvT__record_line____(__CvT_miT,155,991);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,155,998);
__CvT__record_line____(__CvT_miT,155,999);bool __testvalid = true ; 

__CvT__record_line____(__CvT_miT,155,1001);const __codecvt_type * _M_codecvt_tmp = 0 ; 
__CvT__record_line____(__CvT_miT,155,1002);if ( __builtin_expect ( has_facet < __codecvt_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,155,1003);_M_codecvt_tmp = & use_facet < __codecvt_type > ( __loc ) ; 

}__CvT__record_line____(__CvT_miT,155,1005);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,155,1008);if ( ( _M_reading || _M_writing ) 
&& __check_facet ( _M_codecvt ) . encoding ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,155,1010);__testvalid = false ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,155,1013);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,155,1015);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,155,1017);if ( _M_codecvt_tmp 
&& ! __check_facet ( _M_codecvt_tmp ) . always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,155,1019);__testvalid = this -> seekoff ( 0 , ios_base :: cur , _M_mode ) 
!= pos_type ( off_type ( - 1 ) ) ; 
}} 
}else {
{ 

__CvT__record_line____(__CvT_miT,155,1025);_M_ext_next = _M_ext_buf 
+ _M_codecvt -> length ( _M_state_last , _M_ext_buf , 
_M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,155,1029);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,155,1030);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,155,1031);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,155,1033);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,155,1034);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,155,1035);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,155,1036);_M_state_last = _M_state_cur = _M_state_beg ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,155,1039);if ( _M_writing && ( __testvalid = _M_terminate_output ( ) ) ) 
{__CvT__record_line____(__CvT_miT,155,1040);_M_set_buffer ( - 1 ) ; 
}}} 
}} 

}__CvT__record_line____(__CvT_miT,155,1044);if ( __testvalid ) 
{__CvT__record_line____(__CvT_miT,155,1045);_M_codecvt = _M_codecvt_tmp ; 
}else {
__CvT__record_line____(__CvT_miT,155,1047);_M_codecvt = 0 ; 
}} 




extern template class basic_filebuf < char > ; 
extern template class basic_ifstream < char > ; 
extern template class basic_ofstream < char > ; 
extern template class basic_fstream < char > ; 


extern template class basic_filebuf < wchar_t > ; 
extern template class basic_ifstream < wchar_t > ; 
extern template class basic_ofstream < wchar_t > ; 
extern template class basic_fstream < wchar_t > ; 




} 
# 1082 "/usr/include/c++/7.1.1/fstream" 2 3 
# 3 "hard.c" 2 
# 1 "/usr/include/c++/7.1.1/iostream" 1 3 
# 36 "/usr/include/c++/7.1.1/iostream" 3 

# 37 "/usr/include/c++/7.1.1/iostream" 3 





namespace std 
{ 

# 60 "/usr/include/c++/7.1.1/iostream" 3 
extern istream cin ; 
extern ostream cout ; 
extern ostream cerr ; 
extern ostream clog ; 


extern wistream wcin ; 
extern wostream wcout ; 
extern wostream wcerr ; 
extern wostream wclog ; 




static ios_base :: Init __ioinit ; 


} 
# 4 "hard.c" 2 


# 5 "hard.c" 
using namespace std ; 

int main ( ) 
{ extern void CvT_StartRecording____(); CvT_StartRecording____(); __CvT__record_line____(__CvT_miT,0,8);

__CvT__record_line____(__CvT_miT,0,10);string x ( "crap" ) ; 
__CvT__record_line____(__CvT_miT,0,11);string y ( "junk" ) ; 

__CvT__record_line____(__CvT_miT,0,13);string z = x + y ; 

__CvT__record_line____(__CvT_miT,0,15);cout << z << endl ; 

} 

# 1 "Instrumentation code ending"
static char const *__CvT__file_name____[]={
"/home/lguitron24/Tec/CalidadYpruebasSoftware/Coverage/CovTool/tests/hard.c",
"/home/lguitron24/Tec/CalidadYpruebasSoftware/Coverage/CovTool/tests/<built-in>",
"/home/lguitron24/Tec/CalidadYpruebasSoftware/Coverage/CovTool/tests/<command-line>",
"/usr/include/stdc-predef.h",
"/usr/include/c++/7.1.1/string",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++config.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/os_defines.h",
"/usr/include/features.h",
"/usr/include/sys/cdefs.h",
"/usr/include/bits/wordsize.h",
"/usr/include/bits/long-double.h",
"/usr/include/gnu/stubs.h",
"/usr/include/gnu/stubs-64.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/cpu_defines.h",
"/usr/include/c++/7.1.1/bits/stringfwd.h",
"/usr/include/c++/7.1.1/bits/memoryfwd.h",
"/usr/include/c++/7.1.1/bits/char_traits.h",
"/usr/include/c++/7.1.1/bits/stl_algobase.h",
"/usr/include/c++/7.1.1/bits/functexcept.h",
"/usr/include/c++/7.1.1/bits/exception_defines.h",
"/usr/include/c++/7.1.1/bits/cpp_type_traits.h",
"/usr/include/c++/7.1.1/ext/type_traits.h",
"/usr/include/c++/7.1.1/ext/numeric_traits.h",
"/usr/include/c++/7.1.1/bits/stl_pair.h",
"/usr/include/c++/7.1.1/bits/move.h",
"/usr/include/c++/7.1.1/bits/concept_check.h",
"/usr/include/c++/7.1.1/type_traits",
"/usr/include/c++/7.1.1/bits/stl_iterator_base_types.h",
"/usr/include/c++/7.1.1/bits/stl_iterator_base_funcs.h",
"/usr/include/c++/7.1.1/debug/assertions.h",
"/usr/include/c++/7.1.1/bits/stl_iterator.h",
"/usr/include/c++/7.1.1/bits/ptr_traits.h",
"/usr/include/c++/7.1.1/debug/debug.h",
"/usr/include/c++/7.1.1/bits/predefined_ops.h",
"/usr/include/c++/7.1.1/bits/postypes.h",
"/usr/include/c++/7.1.1/cwchar",
"/usr/include/wchar.h",
"/usr/include/bits/libc-header-start.h",
"/usr/include/stdio.h",
"/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdarg.h",
"/usr/include/bits/wchar.h",
"/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stddef.h",
"/usr/include/xlocale.h",
"/usr/include/c++/7.1.1/cstdint",
"/usr/lib/gcc/x86_64-pc-linux-gnu/7.1.1/include/stdint.h",
"/usr/include/stdint.h",
"/usr/include/bits/types.h",
"/usr/include/bits/typesizes.h",
"/usr/include/c++/7.1.1/bits/allocator.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++allocator.h",
"/usr/include/c++/7.1.1/ext/new_allocator.h",
"/usr/include/c++/7.1.1/new",
"/usr/include/c++/7.1.1/exception",
"/usr/include/c++/7.1.1/bits/exception.h",
"/usr/include/c++/7.1.1/bits/exception_ptr.h",
"/usr/include/c++/7.1.1/bits/cxxabi_init_exception.h",
"/usr/include/c++/7.1.1/typeinfo",
"/usr/include/c++/7.1.1/bits/hash_bytes.h",
"/usr/include/c++/7.1.1/bits/nested_exception.h",
"/usr/include/c++/7.1.1/bits/localefwd.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++locale.h",
"/usr/include/c++/7.1.1/clocale",
"/usr/include/locale.h",
"/usr/include/bits/locale.h",
"/usr/include/c++/7.1.1/iosfwd",
"/usr/include/c++/7.1.1/cctype",
"/usr/include/ctype.h",
"/usr/include/endian.h",
"/usr/include/bits/endian.h",
"/usr/include/bits/byteswap.h",
"/usr/include/bits/byteswap-16.h",
"/usr/include/bits/uintn-identity.h",
"/usr/include/c++/7.1.1/bits/ostream_insert.h",
"/usr/include/c++/7.1.1/bits/cxxabi_forced.h",
"/usr/include/c++/7.1.1/bits/stl_function.h",
"/usr/include/c++/7.1.1/backward/binders.h",
"/usr/include/c++/7.1.1/bits/range_access.h",
"/usr/include/c++/7.1.1/initializer_list",
"/usr/include/c++/7.1.1/bits/basic_string.h",
"/usr/include/c++/7.1.1/ext/atomicity.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/gthr-default.h",
"/usr/include/pthread.h",
"/usr/include/sched.h",
"/usr/include/bits/types/time_t.h",
"/usr/include/bits/types/struct_timespec.h",
"/usr/include/bits/sched.h",
"/usr/include/time.h",
"/usr/include/bits/time.h",
"/usr/include/bits/timex.h",
"/usr/include/bits/types/struct_timeval.h",
"/usr/include/bits/types/clock_t.h",
"/usr/include/bits/types/struct_tm.h",
"/usr/include/bits/types/clockid_t.h",
"/usr/include/bits/types/timer_t.h",
"/usr/include/bits/types/struct_itimerspec.h",
"/usr/include/bits/pthreadtypes.h",
"/usr/include/bits/setjmp.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/atomic_word.h",
"/usr/include/c++/7.1.1/ext/alloc_traits.h",
"/usr/include/c++/7.1.1/bits/alloc_traits.h",
"/usr/include/c++/7.1.1/ext/string_conversions.h",
"/usr/include/c++/7.1.1/cstdlib",
"/usr/include/stdlib.h",
"/usr/include/bits/waitflags.h",
"/usr/include/bits/waitstatus.h",
"/usr/include/sys/types.h",
"/usr/include/sys/select.h",
"/usr/include/bits/select.h",
"/usr/include/bits/sigset.h",
"/usr/include/sys/sysmacros.h",
"/usr/include/bits/sysmacros.h",
"/usr/include/alloca.h",
"/usr/include/bits/stdlib-float.h",
"/usr/include/c++/7.1.1/bits/std_abs.h",
"/usr/include/c++/7.1.1/cstdio",
"/usr/include/libio.h",
"/usr/include/_G_config.h",
"/usr/include/bits/stdio_lim.h",
"/usr/include/bits/sys_errlist.h",
"/usr/include/c++/7.1.1/cerrno",
"/usr/include/errno.h",
"/usr/include/bits/errno.h",
"/usr/include/linux/errno.h",
"/usr/include/asm/errno.h",
"/usr/include/asm-generic/errno.h",
"/usr/include/asm-generic/errno-base.h",
"/usr/include/c++/7.1.1/bits/functional_hash.h",
"/usr/include/c++/7.1.1/bits/basic_string.tcc",
"/usr/include/c++/7.1.1/fstream",
"/usr/include/c++/7.1.1/istream",
"/usr/include/c++/7.1.1/ios",
"/usr/include/c++/7.1.1/bits/ios_base.h",
"/usr/include/c++/7.1.1/bits/locale_classes.h",
"/usr/include/c++/7.1.1/bits/locale_classes.tcc",
"/usr/include/c++/7.1.1/system_error",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/error_constants.h",
"/usr/include/c++/7.1.1/stdexcept",
"/usr/include/c++/7.1.1/streambuf",
"/usr/include/c++/7.1.1/bits/streambuf.tcc",
"/usr/include/c++/7.1.1/bits/basic_ios.h",
"/usr/include/c++/7.1.1/bits/locale_facets.h",
"/usr/include/c++/7.1.1/cwctype",
"/usr/include/wctype.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_base.h",
"/usr/include/c++/7.1.1/bits/streambuf_iterator.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/ctype_inline.h",
"/usr/include/c++/7.1.1/bits/locale_facets.tcc",
"/usr/include/c++/7.1.1/bits/basic_ios.tcc",
"/usr/include/c++/7.1.1/ostream",
"/usr/include/c++/7.1.1/bits/ostream.tcc",
"/usr/include/c++/7.1.1/bits/istream.tcc",
"/usr/include/c++/7.1.1/bits/codecvt.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/basic_file.h",
"/usr/include/c++/7.1.1/x86_64-pc-linux-gnu/bits/c++io.h",
"/usr/include/c++/7.1.1/bits/fstream.tcc",
"/usr/include/c++/7.1.1/iostream",
0};
static int __CvT__logged_lines___[] = {
0,8,
0,10,
0,11,
0,13,
0,15,
5,257,
16,93,
16,97,
16,101,
16,123,
16,127,
16,131,
16,135,
16,139,
16,148,
16,149,
16,150,
16,151,
16,152,
16,153,
16,154,
16,161,
16,162,
16,163,
16,164,
16,165,
16,172,
16,173,
16,174,
16,175,
16,176,
16,183,
16,184,
16,192,
16,194,
16,195,
16,202,
16,204,
16,205,
16,245,
16,249,
16,253,
16,255,
16,261,
16,262,
16,263,
16,264,
16,269,
16,273,
16,274,
16,275,
16,276,
16,281,
16,282,
16,283,
16,284,
16,289,
16,290,
16,291,
16,292,
16,297,
16,298,
16,299,
16,300,
16,305,
16,311,
16,315,
16,319,
16,323,
16,340,
16,344,
16,348,
16,352,
16,353,
16,354,
16,355,
16,360,
16,364,
16,365,
16,366,
16,367,
16,372,
16,373,
16,374,
16,375,
16,380,
16,381,
16,382,
16,383,
16,388,
16,389,
16,390,
16,391,
16,396,
16,400,
16,404,
16,408,
16,412,
16,439,
16,443,
16,447,
16,451,
16,452,
16,453,
16,454,
16,455,
16,456,
16,457,
16,462,
16,463,
16,464,
16,465,
16,466,
16,471,
16,472,
16,473,
16,474,
16,475,
16,480,
16,481,
16,482,
16,483,
16,489,
16,490,
16,491,
16,492,
16,498,
16,499,
16,500,
16,501,
16,506,
16,510,
16,514,
16,518,
16,522,
16,536,
16,540,
16,544,
16,548,
16,549,
16,550,
16,551,
16,552,
16,553,
16,554,
16,559,
16,560,
16,561,
16,562,
16,563,
16,568,
16,569,
16,570,
16,571,
16,572,
16,577,
16,578,
16,579,
16,580,
16,586,
16,587,
16,588,
16,589,
16,595,
16,596,
16,597,
16,598,
16,603,
16,607,
16,611,
16,615,
16,619,
17,320,
17,322,
17,324,
17,325,
17,326,
17,328,
17,339,
17,341,
17,343,
17,344,
17,345,
17,347,
17,358,
17,364,
17,366,
17,367,
17,368,
17,369,
17,376,
17,380,
17,385,
17,421,
17,422,
17,447,
17,454,
17,480,
17,487,
17,502,
17,503,
17,504,
17,505,
17,516,
17,517,
17,518,
17,519,
17,530,
17,531,
17,532,
17,533,
17,534,
17,545,
17,546,
17,547,
17,548,
17,549,
17,560,
17,566,
17,568,
17,569,
17,570,
17,571,
17,578,
17,582,
17,587,
17,596,
17,597,
17,623,
17,632,
17,659,
17,668,
17,683,
17,684,
17,685,
17,693,
17,694,
17,695,
17,696,
17,704,
17,705,
17,706,
17,707,
17,725,
17,731,
17,739,
17,740,
17,742,
17,743,
17,750,
17,751,
17,752,
17,754,
17,755,
17,762,
17,763,
17,764,
17,785,
17,789,
17,798,
17,799,
17,800,
17,801,
17,802,
17,812,
17,813,
17,814,
17,815,
17,822,
17,825,
17,831,
17,840,
17,845,
17,855,
17,856,
17,858,
17,860,
17,866,
17,874,
17,879,
17,880,
17,883,
17,884,
17,885,
17,886,
17,888,
17,903,
17,904,
17,916,
17,917,
17,918,
17,919,
17,920,
17,921,
17,922,
17,930,
17,933,
17,940,
17,948,
17,952,
17,954,
17,956,
17,957,
17,958,
17,959,
17,961,
17,962,
17,963,
17,966,
17,968,
17,986,
17,993,
17,1001,
17,1005,
17,1009,
17,1013,
17,1017,
17,1021,
17,1042,
17,1051,
17,1075,
17,1081,
17,1082,
17,1083,
17,1084,
17,1107,
17,1121,
17,1123,
17,1124,
17,1125,
17,1126,
17,1127,
17,1130,
17,1132,
17,1133,
17,1134,
17,1157,
17,1168,
17,1170,
17,1171,
17,1172,
17,1173,
17,1174,
17,1178,
17,1180,
17,1181,
17,1182,
17,1205,
17,1218,
17,1241,
17,1248,
17,1258,
17,1259,
17,1261,
17,1262,
17,1264,
17,1284,
17,1293,
17,1318,
17,1324,
17,1336,
17,1337,
17,1340,
17,1341,
17,1343,
17,1364,
17,1374,
17,1401,
17,1408,
20,409,
21,153,
21,158,
21,163,
26,74,
26,79,
26,2258,
26,2259,
26,2261,
34,124,
34,134,
34,137,
34,142,
34,147,
34,155,
34,156,
34,157,
34,166,
34,167,
34,168,
34,179,
34,180,
34,181,
34,182,
34,193,
34,194,
34,195,
34,196,
34,206,
34,217,
34,222,
48,91,
48,95,
48,131,
48,134,
48,137,
48,139,
48,148,
48,154,
48,160,
48,166,
48,183,
48,190,
48,192,
48,193,
48,203,
48,211,
50,79,
50,81,
50,84,
50,86,
50,90,
50,94,
50,100,
50,101,
50,102,
50,111,
50,117,
50,125,
50,130,
50,136,
50,140,
50,156,
50,161,
51,56,
51,70,
51,169,
51,171,
51,174,
51,175,
52,49,
53,63,
54,103,
54,107,
54,123,
54,124,
54,125,
54,145,
54,167,
54,172,
54,215,
56,100,
56,116,
56,121,
56,122,
56,137,
56,141,
56,143,
56,173,
56,190,
56,207,
58,57,
58,68,
58,69,
58,70,
58,71,
58,76,
58,84,
58,88,
58,97,
58,99,
58,105,
58,113,
58,117,
58,121,
58,136,
58,137,
58,138,
58,144,
58,150,
72,58,
72,62,
72,63,
72,65,
72,66,
72,68,
72,69,
72,78,
72,82,
72,83,
72,85,
72,87,
72,88,
72,90,
72,93,
72,94,
72,95,
72,96,
72,97,
72,98,
72,101,
72,102,
72,106,
72,107,
72,110,
72,112,
74,172,
74,182,
74,192,
74,202,
74,212,
74,222,
74,238,
74,253,
74,268,
74,283,
74,298,
74,313,
74,356,
74,366,
74,376,
74,386,
74,396,
74,406,
74,420,
74,435,
74,450,
74,465,
74,480,
74,495,
74,529,
74,539,
74,549,
74,563,
74,578,
74,593,
74,622,
74,631,
74,640,
74,649,
74,662,
74,676,
74,690,
74,704,
74,750,
74,755,
74,763,
74,777,
74,783,
74,791,
74,824,
74,828,
74,832,
74,839,
74,850,
74,854,
74,858,
74,865,
74,874,
74,878,
74,887,
74,891,
74,897,
74,902,
74,912,
74,916,
74,943,
74,947,
74,961,
74,965,
74,979,
74,983,
74,997,
74,1001,
74,1015,
74,1019,
74,1033,
74,1037,
74,1051,
74,1055,
74,1069,
74,1073,
74,1084,
74,1089,
74,1094,
74,1099,
74,1104,
74,1109,
74,1114,
74,1119,
75,119,
75,123,
75,129,
75,136,
75,138,
75,154,
75,158,
75,164,
75,171,
75,173,
76,59,
76,69,
76,79,
76,88,
76,98,
76,118,
76,129,
76,139,
76,149,
76,159,
76,169,
76,179,
76,189,
76,199,
76,209,
76,219,
76,229,
77,62,
77,66,
77,70,
77,74,
77,78,
77,89,
77,99,
78,6084,
78,6087,
78,6124,
78,6132,
78,6139,
78,6175,
78,6180,
78,6185,
78,6190,
78,6196,
78,6200,
78,6204,
78,6213,
78,6218,
78,6224,
78,6229,
78,6235,
78,6241,
78,6247,
78,6248,
78,6250,
78,6256,
78,6257,
78,6259,
78,6265,
78,6266,
78,6268,
78,6276,
78,6281,
78,6286,
78,6291,
78,6296,
78,6302,
78,6306,
78,6310,
78,6316,
78,6321,
78,6327,
78,6332,
78,6338,
78,6344,
78,6350,
78,6351,
78,6353,
78,6359,
78,6360,
78,6362,
78,6368,
78,6369,
78,6371,
78,6416,
78,6434,
78,6449,
78,6465,
78,6466,
78,6479,
78,6486,
78,6491,
79,49,
79,53,
79,66,
79,67,
79,68,
79,69,
79,74,
79,79,
79,81,
79,82,
79,84,
79,93,
79,95,
79,96,
79,98,
81,248,
81,249,
81,251,
81,661,
81,662,
81,667,
81,668,
81,673,
81,674,
81,679,
81,680,
81,685,
81,686,
81,691,
81,692,
81,697,
81,698,
81,699,
81,701,
81,706,
81,707,
81,712,
81,713,
81,718,
81,719,
81,724,
81,725,
81,730,
81,731,
81,732,
81,737,
81,738,
81,739,
81,741,
81,746,
81,747,
81,748,
81,750,
81,755,
81,756,
81,757,
81,759,
81,766,
81,767,
81,768,
81,770,
81,776,
81,777,
81,778,
81,780,
81,809,
81,810,
81,815,
81,816,
81,823,
81,824,
81,830,
81,831,
81,836,
81,837,
81,851,
81,852,
81,857,
81,858,
81,863,
81,864,
81,870,
81,871,
81,877,
81,878,
81,883,
81,884,
82,561,
82,562,
82,563,
82,564,
82,566,
100,215,
100,220,
101,57,
101,58,
101,60,
101,62,
101,63,
101,64,
101,68,
101,70,
101,74,
101,75,
101,80,
101,82,
101,83,
101,84,
101,86,
101,88,
101,90,
101,91,
101,93,
101,102,
101,105,
101,108,
101,109,
101,111,
101,113,
101,115,
102,171,
102,208,
114,56,
114,61,
114,71,
114,75,
114,79,
114,84,
114,103,
127,92,
127,94,
127,110,
127,124,
127,127,
127,130,
127,133,
127,136,
127,139,
127,142,
127,145,
127,148,
127,151,
127,154,
127,157,
127,160,
127,163,
127,166,
127,169,
127,170,
127,192,
127,197,
127,202,
127,211,
127,216,
127,221,
127,230,
127,232,
127,242,
127,244,
128,60,
128,61,
128,62,
128,64,
128,66,
128,67,
128,69,
128,71,
128,72,
128,74,
128,76,
128,79,
128,81,
128,83,
128,84,
128,85,
128,87,
128,89,
128,91,
128,92,
128,93,
128,98,
128,99,
128,101,
128,102,
128,103,
128,107,
128,108,
128,110,
128,112,
128,113,
128,117,
128,118,
128,119,
128,120,
128,122,
128,125,
128,126,
128,127,
128,134,
128,137,
128,138,
128,143,
128,145,
128,147,
128,148,
128,153,
128,166,
128,167,
128,168,
128,170,
128,172,
128,173,
128,176,
128,178,
128,180,
128,183,
128,184,
128,185,
128,186,
128,187,
128,188,
128,190,
128,191,
128,196,
128,197,
128,200,
128,209,
128,211,
128,212,
128,215,
128,217,
128,219,
128,220,
128,224,
128,225,
128,228,
128,229,
128,232,
128,239,
128,240,
128,242,
128,243,
128,246,
128,247,
128,249,
128,256,
128,257,
128,259,
128,260,
128,262,
128,264,
128,265,
128,266,
128,267,
128,268,
128,271,
128,272,
128,274,
128,282,
128,284,
128,285,
128,287,
128,288,
128,290,
128,293,
128,294,
128,295,
128,296,
128,297,
128,299,
128,301,
128,302,
128,303,
128,313,
128,314,
128,316,
128,317,
128,319,
128,320,
128,321,
128,322,
128,323,
128,324,
128,327,
128,328,
128,329,
128,336,
128,337,
128,339,
128,340,
128,342,
128,349,
128,350,
128,351,
128,352,
128,353,
128,354,
128,361,
128,362,
128,364,
128,366,
128,367,
128,370,
128,372,
128,373,
128,383,
128,384,
128,385,
128,386,
128,395,
128,396,
128,398,
128,399,
128,401,
128,403,
128,405,
128,406,
128,407,
128,410,
128,412,
128,413,
128,415,
128,416,
128,424,
128,425,
128,427,
128,428,
128,430,
128,432,
128,434,
128,435,
128,437,
128,438,
128,439,
128,440,
128,445,
128,446,
128,447,
128,448,
128,449,
128,451,
128,452,
128,453,
128,454,
128,457,
128,458,
128,459,
128,466,
128,468,
128,469,
128,476,
128,477,
128,478,
128,480,
128,481,
128,483,
128,1159,
128,1163,
128,1164,
128,1165,
128,1166,
128,1167,
128,1168,
128,1174,
128,1177,
128,1178,
128,1179,
128,1180,
128,1181,
128,1182,
128,1190,
128,1192,
128,1194,
128,1195,
128,1196,
128,1197,
128,1199,
128,1200,
128,1201,
128,1202,
128,1203,
128,1205,
128,1208,
128,1209,
128,1210,
128,1214,
128,1215,
128,1216,
128,1218,
128,1225,
128,1226,
128,1227,
128,1228,
128,1230,
128,1231,
128,1232,
128,1233,
128,1234,
128,1236,
128,1244,
128,1246,
128,1247,
128,1249,
128,1250,
128,1251,
128,1253,
128,1254,
128,1258,
128,1265,
128,1266,
128,1267,
128,1269,
128,1270,
128,1271,
128,1272,
128,1273,
128,1275,
128,1283,
128,1285,
128,1287,
128,1288,
128,1289,
128,1291,
128,1299,
128,1301,
128,1302,
128,1304,
128,1305,
128,1306,
128,1308,
128,1309,
128,1313,
128,1321,
128,1323,
128,1324,
128,1325,
128,1326,
128,1333,
128,1334,
128,1335,
128,1336,
128,1337,
128,1345,
128,1347,
128,1348,
128,1350,
128,1351,
128,1352,
128,1354,
128,1355,
128,1359,
128,1366,
128,1367,
128,1368,
128,1370,
128,1371,
128,1372,
128,1374,
128,1375,
128,1379,
128,1386,
128,1387,
128,1388,
128,1389,
128,1390,
128,1391,
128,1392,
128,1393,
128,1394,
128,1402,
128,1403,
128,1404,
128,1405,
128,1406,
128,1407,
128,1408,
128,1410,
128,1411,
128,1412,
128,1419,
128,1421,
128,1422,
128,1423,
128,1424,
128,1425,
128,1426,
128,1427,
128,1434,
128,1436,
128,1437,
128,1438,
128,1439,
128,1440,
128,1441,
128,1442,
128,1443,
128,1451,
128,1453,
128,1454,
128,1455,
128,1456,
128,1457,
128,1458,
128,1459,
128,1467,
128,1476,
128,1477,
128,1478,
128,1479,
128,1481,
128,1484,
128,1485,
128,1486,
128,1487,
128,1488,
128,1490,
128,1491,
128,1492,
128,1494,
128,1499,
128,1501,
128,1502,
128,1504,
128,1505,
128,1506,
128,1508,
128,1510,
128,1511,
128,1512,
128,1516,
128,1517,
128,1524,
128,1528,
128,1529,
128,1530,
128,1531,
128,1532,
128,1539,
128,1546,
128,1547,
128,1548,
128,1549,
128,1550,
128,1552,
128,1554,
128,1555,
128,1556,
128,1557,
128,1559,
128,1563,
128,1564,
128,1565,
128,1568,
128,1569,
128,1570,
128,1572,
128,1573,
128,1576,
128,1580,
128,1581,
128,1588,
128,1591,
128,1592,
128,1593,
128,1594,
128,1595,
129,192,
129,193,
129,195,
129,196,
129,197,
129,198,
129,209,
129,210,
129,213,
129,214,
129,215,
129,239,
129,253,
129,308,
129,423,
129,424,
129,425,
129,428,
129,429,
129,431,
129,433,
129,434,
129,436,
129,482,
129,497,
129,498,
129,499,
129,514,
129,515,
129,516,
129,524,
129,534,
129,544,
129,545,
129,546,
129,547,
129,552,
129,553,
129,554,
129,567,
129,575,
129,581,
129,596,
129,597,
129,598,
129,602,
129,616,
129,617,
129,618,
129,622,
129,634,
129,635,
129,636,
129,683,
129,700,
129,701,
129,702,
129,718,
129,719,
129,720,
129,728,
129,738,
129,748,
129,749,
129,750,
129,751,
129,756,
129,757,
129,758,
129,771,
129,779,
129,785,
129,801,
129,802,
129,803,
129,807,
129,822,
129,823,
129,824,
129,828,
129,840,
129,841,
129,842,
129,891,
129,905,
129,906,
129,907,
129,920,
129,921,
129,922,
129,930,
129,940,
129,950,
129,951,
129,952,
129,953,
129,958,
129,959,
129,960,
129,973,
129,981,
129,987,
129,1003,
129,1004,
129,1005,
129,1009,
129,1024,
129,1025,
129,1026,
129,1030,
129,1042,
129,1043,
129,1044,
129,1054,
129,1061,
129,1068,
129,1075,
130,95,
130,104,
130,121,
130,125,
130,126,
130,127,
130,132,
130,133,
130,134,
130,169,
130,176,
130,183,
130,187,
130,191,
130,196,
130,200,
130,215,
130,219,
130,223,
130,236,
130,270,
130,355,
130,388,
130,428,
130,608,
130,615,
130,616,
130,617,
130,626,
130,627,
130,628,
130,633,
130,634,
130,635,
130,735,
130,757,
130,762,
130,804,
130,809,
130,850,
130,856,
130,860,
130,867,
130,875,
130,876,
130,877,
130,882,
130,981,
130,982,
130,983,
130,984,
132,84,
132,88,
132,92,
132,96,
132,100,
132,104,
132,108,
132,126,
132,130,
132,134,
132,138,
132,142,
132,146,
132,150,
132,166,
132,170,
132,174,
132,178,
132,182,
132,186,
132,190,
132,211,
132,215,
132,538,
132,541,
132,546,
132,549,
132,550,
132,554,
132,571,
132,620,
132,631,
132,632,
132,633,
132,634,
132,647,
132,648,
132,649,
132,650,
132,664,
132,665,
132,666,
132,667,
132,668,
132,679,
132,690,
132,699,
132,700,
132,701,
132,702,
132,713,
132,722,
132,723,
132,724,
132,725,
132,764,
132,775,
132,810,
132,811,
132,813,
132,831,
132,832,
132,834,
132,879,
132,880,
132,881,
132,887,
132,888,
132,889,
132,895,
132,896,
132,897,
132,903,
132,904,
132,905,
132,911,
132,912,
132,913,
132,919,
132,920,
132,921,
132,927,
132,928,
132,929,
132,935,
132,936,
132,937,
132,943,
132,944,
132,945,
132,951,
132,952,
132,953,
132,959,
132,960,
132,961,
132,967,
132,968,
132,969,
132,975,
132,976,
132,977,
132,983,
132,984,
132,985,
132,992,
132,993,
132,994,
132,1000,
132,1001,
132,1002,
132,1008,
132,1009,
132,1010,
132,1017,
132,1018,
132,1019,
132,1025,
132,1026,
132,1027,
132,1033,
132,1034,
132,1035,
132,1042,
132,1043,
132,1044,
132,1050,
132,1051,
132,1052,
132,1062,
132,1063,
132,1064,
132,1070,
132,1071,
132,1072,
133,163,
133,178,
133,265,
133,404,
133,447,
133,451,
133,454,
133,457,
133,458,
133,514,
133,557,
133,561,
133,564,
133,567,
133,568,
133,587,
133,588,
133,589,
133,591,
133,592,
133,593,
133,611,
133,616,
133,617,
133,618,
133,671,
133,685,
133,702,
133,720,
133,734,
133,747,
133,828,
133,829,
133,832,
133,833,
133,840,
133,845,
134,46,
134,47,
134,49,
134,50,
134,53,
134,54,
134,56,
134,57,
134,64,
134,65,
134,66,
134,68,
134,72,
134,73,
134,75,
134,83,
134,85,
134,86,
134,105,
134,106,
134,107,
134,108,
134,133,
134,134,
134,135,
134,136,
134,137,
134,139,
134,150,
134,156,
134,163,
134,166,
134,167,
134,169,
134,170,
134,171,
134,172,
134,177,
134,179,
134,180,
134,181,
134,183,
134,184,
134,185,
134,186,
134,187,
134,188,
134,189,
134,190,
134,192,
134,193,
134,201,
134,202,
134,205,
134,207,
134,208,
134,210,
134,212,
134,214,
134,219,
134,222,
134,225,
134,227,
134,228,
134,229,
134,230,
134,233,
134,234,
134,235,
134,236,
134,238,
134,239,
134,244,
134,245,
134,248,
134,250,
134,257,
134,258,
134,259,
134,260,
134,264,
135,71,
135,74,
135,122,
135,126,
135,130,
135,134,
135,135,
135,149,
135,152,
135,157,
135,161,
135,162,
135,163,
135,168,
135,175,
135,178,
135,181,
135,189,
135,192,
135,205,
135,209,
135,210,
135,218,
135,227,
135,230,
135,235,
135,239,
135,240,
135,241,
135,249,
135,253,
135,257,
135,260,
135,265,
135,268,
135,279,
135,284,
135,285,
135,293,
135,298,
135,299,
135,305,
135,306,
135,313,
135,314,
135,320,
135,324,
135,328,
135,333,
135,348,
135,351,
135,354,
135,357,
135,361,
135,365,
135,370,
135,391,
135,392,
135,393,
138,198,
138,210,
138,211,
138,212,
138,213,
138,214,
138,227,
138,240,
138,253,
138,265,
138,271,
138,285,
138,286,
138,287,
138,299,
138,300,
138,301,
138,303,
138,304,
138,317,
138,318,
138,319,
138,321,
138,322,
138,325,
138,326,
138,339,
138,340,
138,341,
138,342,
138,344,
138,345,
138,358,
138,373,
138,374,
138,375,
138,376,
138,378,
138,381,
138,382,
138,384,
138,398,
138,399,
138,400,
138,402,
138,403,
138,406,
138,407,
138,425,
138,426,
138,427,
138,429,
138,430,
138,431,
138,434,
138,435,
138,451,
138,467,
138,482,
138,485,
138,488,
138,498,
138,510,
138,511,
138,512,
138,513,
138,529,
138,532,
138,535,
138,545,
138,556,
138,557,
138,558,
138,577,
138,592,
138,604,
138,616,
138,627,
138,649,
138,688,
138,701,
138,702,
138,703,
138,705,
138,707,
138,708,
138,710,
138,725,
138,769,
138,784,
138,785,
138,786,
138,788,
138,794,
138,797,
138,812,
138,813,
138,814,
138,815,
138,816,
138,817,
138,818,
138,819,
139,50,
139,51,
139,52,
139,54,
139,55,
139,56,
139,57,
139,58,
139,59,
139,62,
139,64,
139,65,
139,67,
139,68,
139,71,
139,81,
139,82,
139,83,
139,85,
139,86,
139,88,
139,89,
139,90,
139,91,
139,92,
139,93,
139,96,
139,98,
139,99,
139,101,
139,102,
139,105,
139,108,
139,119,
139,120,
139,121,
139,122,
139,123,
139,125,
139,126,
139,128,
139,129,
139,131,
139,132,
139,134,
139,141,
139,142,
139,143,
140,118,
140,126,
140,138,
140,158,
140,165,
140,168,
140,169,
140,170,
140,181,
140,191,
140,202,
140,212,
140,223,
140,258,
140,259,
140,260,
140,273,
140,282,
140,296,
140,308,
140,309,
140,310,
140,311,
140,322,
140,371,
140,372,
140,374,
140,375,
140,377,
140,391,
140,392,
140,393,
140,394,
140,431,
140,450,
140,463,
140,480,
140,481,
140,482,
140,483,
140,484,
140,485,
140,486,
140,491,
140,495,
140,496,
140,497,
140,498,
140,499,
140,500,
140,501,
140,506,
141,120,
141,121,
141,122,
141,130,
141,131,
141,132,
141,133,
141,170,
141,187,
141,203,
141,219,
141,233,
141,248,
141,262,
141,277,
141,294,
141,313,
141,332,
141,355,
141,359,
141,362,
141,623,
141,803,
141,820,
141,836,
141,853,
141,873,
141,874,
141,875,
141,876,
141,877,
141,900,
141,901,
141,903,
141,904,
141,906,
141,907,
141,908,
141,931,
141,932,
141,933,
141,934,
141,935,
141,936,
141,937,
141,965,
141,966,
141,968,
141,969,
141,971,
141,972,
141,973,
141,982,
141,1083,
141,1106,
141,1107,
141,1108,
141,1132,
141,1159,
141,1160,
141,1161,
141,1485,
141,1490,
141,1623,
141,1640,
141,1641,
141,1643,
141,1644,
141,1645,
141,1692,
141,1706,
141,1720,
141,1733,
141,1746,
141,1777,
141,1790,
141,1803,
141,1820,
141,1832,
141,1845,
141,1858,
141,1871,
141,1908,
141,1909,
141,1912,
141,1913,
141,1914,
141,1915,
141,1922,
141,1927,
141,1969,
141,1997,
141,2034,
141,2039,
141,2044,
141,2049,
141,2055,
141,2060,
141,2094,
141,2099,
141,2104,
141,2137,
141,2141,
141,2157,
141,2158,
141,2159,
141,2161,
141,2162,
141,2166,
141,2167,
141,2168,
141,2169,
141,2170,
141,2171,
141,2173,
141,2180,
141,2181,
141,2182,
141,2183,
141,2185,
141,2186,
141,2187,
141,2189,
141,2213,
141,2218,
141,2223,
141,2228,
141,2234,
141,2239,
141,2310,
141,2329,
141,2371,
141,2376,
141,2381,
141,2386,
141,2434,
141,2439,
141,2460,
141,2489,
141,2510,
141,2515,
141,2521,
141,2526,
141,2566,
141,2572,
141,2578,
141,2584,
141,2590,
141,2596,
141,2602,
141,2608,
141,2614,
141,2620,
141,2626,
141,2633,
141,2640,
141,2646,
145,103,
145,113,
145,117,
145,124,
145,132,
145,138,
145,142,
145,144,
145,145,
145,147,
145,153,
145,158,
145,159,
145,161,
145,162,
145,164,
145,173,
145,178,
145,179,
145,180,
145,181,
145,183,
145,184,
145,185,
145,187,
145,189,
145,191,
145,196,
145,197,
145,198,
145,206,
145,212,
145,242,
145,246,
145,251,
145,252,
145,254,
145,255,
145,261,
145,266,
145,271,
145,276,
145,280,
145,281,
145,284,
145,285,
145,296,
145,297,
145,299,
145,300,
145,301,
145,302,
145,304,
145,312,
145,313,
145,314,
145,315,
145,316,
145,324,
145,325,
145,326,
145,327,
145,328,
145,336,
145,342,
145,344,
145,345,
145,346,
145,348,
145,349,
145,351,
145,352,
145,353,
145,354,
145,358,
145,359,
145,363,
145,371,
145,377,
145,379,
145,380,
145,381,
145,382,
145,385,
145,386,
145,388,
145,390,
145,391,
145,392,
145,393,
145,396,
145,399,
145,400,
145,402,
145,404,
146,44,
146,49,
146,50,
146,51,
146,52,
146,58,
146,59,
146,61,
146,62,
146,68,
146,69,
146,71,
146,72,
147,54,
147,55,
147,56,
147,57,
147,59,
147,60,
147,62,
147,63,
147,67,
147,68,
147,70,
147,72,
147,79,
147,80,
147,82,
147,83,
147,84,
147,85,
147,87,
147,88,
147,89,
147,90,
147,91,
147,96,
147,97,
147,98,
147,99,
147,101,
147,102,
147,103,
147,104,
147,106,
147,107,
147,109,
147,110,
147,113,
147,117,
147,118,
147,119,
147,120,
147,124,
147,125,
147,126,
147,127,
147,151,
147,154,
147,155,
147,156,
147,157,
147,158,
147,161,
147,164,
147,166,
147,167,
147,168,
147,172,
147,173,
147,174,
147,176,
147,181,
147,182,
147,183,
147,185,
147,187,
147,188,
147,190,
147,192,
147,193,
147,195,
147,197,
147,198,
147,200,
147,203,
147,207,
147,208,
147,209,
147,210,
147,211,
147,212,
147,214,
147,216,
147,218,
147,219,
147,221,
147,222,
147,224,
147,227,
147,228,
147,230,
147,235,
147,236,
147,239,
147,241,
147,242,
147,243,
147,244,
147,246,
147,250,
147,251,
147,255,
147,257,
147,258,
147,260,
147,263,
147,267,
147,269,
147,273,
147,275,
147,276,
147,282,
147,283,
147,287,
147,289,
147,291,
147,296,
147,297,
147,298,
147,299,
147,302,
147,306,
147,308,
147,310,
147,311,
147,312,
147,314,
147,319,
147,320,
147,321,
147,322,
147,325,
147,327,
147,328,
147,329,
147,333,
147,335,
147,339,
147,340,
147,344,
147,347,
147,348,
147,350,
147,355,
147,358,
147,359,
147,361,
147,364,
147,367,
147,377,
147,382,
147,383,
147,384,
147,385,
147,386,
147,389,
147,391,
147,392,
147,395,
147,398,
147,399,
147,401,
147,402,
147,403,
147,407,
147,408,
147,410,
147,416,
147,417,
147,418,
147,420,
147,422,
147,423,
147,426,
147,427,
147,428,
147,429,
147,430,
147,431,
147,433,
147,437,
147,438,
147,439,
147,441,
147,442,
147,445,
147,448,
147,450,
147,452,
147,453,
147,454,
147,457,
147,462,
147,466,
147,467,
147,468,
147,469,
147,470,
147,471,
147,475,
147,476,
147,477,
147,478,
147,480,
147,482,
147,484,
147,485,
147,486,
147,488,
147,489,
147,492,
147,493,
147,494,
147,495,
147,498,
147,499,
147,501,
147,504,
147,508,
147,512,
147,514,
147,515,
147,519,
147,520,
147,523,
147,524,
147,527,
147,529,
147,530,
147,532,
147,533,
147,534,
147,535,
147,536,
147,539,
147,540,
147,541,
147,542,
147,546,
147,547,
147,549,
147,554,
147,557,
147,559,
147,562,
147,567,
147,570,
147,571,
147,573,
147,575,
147,577,
147,579,
147,580,
147,583,
147,585,
147,586,
147,587,
147,597,
147,598,
147,603,
147,604,
147,605,
147,606,
147,611,
147,612,
147,613,
147,614,
147,621,
147,622,
147,623,
147,625,
147,626,
147,627,
147,628,
147,629,
147,630,
147,631,
147,633,
147,635,
147,636,
147,639,
147,641,
147,642,
147,644,
147,645,
147,647,
147,648,
147,650,
147,651,
147,653,
147,654,
147,656,
147,657,
147,659,
147,660,
147,662,
147,664,
147,665,
147,666,
147,668,
147,670,
147,672,
147,673,
147,679,
147,680,
147,681,
147,682,
147,685,
147,693,
147,694,
147,695,
147,696,
147,697,
147,698,
147,699,
147,700,
147,708,
147,709,
147,710,
147,711,
147,712,
147,713,
147,714,
147,715,
147,740,
147,741,
147,742,
147,743,
147,744,
147,745,
147,746,
147,747,
147,755,
147,758,
147,759,
147,765,
147,766,
147,769,
147,771,
147,772,
147,782,
147,785,
147,787,
147,796,
147,797,
147,798,
147,801,
147,803,
147,804,
147,808,
147,811,
147,813,
147,814,
147,821,
147,822,
147,824,
147,826,
147,827,
147,831,
147,841,
147,842,
147,844,
147,853,
147,857,
147,858,
147,859,
147,860,
147,861,
147,864,
147,865,
147,870,
147,871,
147,873,
147,876,
147,877,
147,880,
147,884,
147,887,
147,889,
147,893,
147,896,
147,898,
147,900,
147,903,
147,905,
147,907,
147,908,
147,912,
147,913,
147,915,
147,916,
147,921,
147,922,
147,924,
147,926,
147,927,
147,929,
147,933,
147,942,
147,946,
147,947,
147,952,
147,953,
147,955,
147,956,
147,958,
147,977,
147,979,
147,980,
147,981,
147,984,
147,986,
147,990,
147,992,
147,993,
147,997,
147,1002,
147,1003,
147,1004,
147,1005,
147,1008,
147,1012,
147,1014,
147,1015,
147,1016,
147,1017,
147,1020,
147,1044,
147,1046,
147,1048,
147,1051,
147,1052,
147,1053,
147,1055,
147,1056,
147,1062,
147,1068,
147,1071,
147,1072,
147,1074,
147,1075,
147,1076,
147,1079,
147,1082,
147,1084,
147,1088,
147,1089,
147,1091,
147,1093,
147,1094,
147,1096,
147,1100,
147,1107,
147,1108,
147,1109,
147,1111,
147,1112,
147,1117,
147,1118,
147,1119,
147,1121,
147,1123,
147,1126,
147,1127,
147,1129,
147,1130,
147,1134,
147,1135,
147,1137,
147,1139,
147,1140,
147,1144,
147,1145,
147,1147,
147,1149,
147,1150,
147,1152,
147,1159,
147,1174,
147,1181,
147,1182,
147,1183,
147,1185,
147,1191,
147,1193,
147,1194,
147,1211,
147,1212,
147,1213,
147,1216,
147,1218,
147,1219,
147,1220,
147,1223,
147,1224,
147,1229,
147,1230,
147,1232,
147,1235,
147,1236,
147,1237,
147,1239,
147,1244,
147,1245,
147,1246,
147,1247,
147,1251,
147,1252,
147,1260,
147,1261,
147,1262,
147,1264,
147,1268,
147,1269,
147,1272,
147,1273,
147,1275,
147,1277,
147,1278,
147,1279,
147,1282,
147,1284,
147,1285,
147,1286,
147,1289,
148,42,
148,43,
148,44,
148,46,
148,47,
148,48,
148,54,
148,55,
148,56,
148,57,
148,58,
148,64,
148,67,
148,73,
148,77,
148,78,
148,79,
148,80,
148,81,
148,83,
148,84,
148,86,
148,89,
148,90,
148,91,
148,92,
148,93,
148,95,
148,96,
148,97,
148,98,
148,99,
148,100,
148,101,
148,103,
148,106,
148,108,
148,115,
148,116,
148,117,
148,118,
148,119,
148,120,
148,121,
148,127,
148,129,
148,132,
148,146,
148,147,
148,149,
148,150,
148,151,
148,152,
148,158,
148,159,
148,160,
148,162,
148,164,
148,165,
148,167,
148,169,
148,170,
148,172,
149,85,
149,93,
149,109,
149,113,
149,118,
149,122,
149,123,
149,128,
149,132,
149,133,
149,167,
149,171,
149,175,
149,182,
149,185,
149,193,
149,196,
149,202,
149,206,
149,221,
149,225,
149,228,
149,233,
149,246,
149,312,
149,313,
149,314,
149,315,
149,385,
149,389,
149,395,
149,403,
149,404,
149,405,
149,410,
149,455,
149,457,
149,460,
149,461,
149,476,
149,498,
149,503,
149,509,
149,515,
149,520,
149,540,
149,541,
149,542,
149,544,
149,546,
149,557,
149,558,
149,559,
149,561,
149,563,
149,570,
149,575,
149,591,
149,603,
149,613,
149,683,
149,684,
149,685,
149,686,
150,49,
150,51,
150,52,
150,54,
150,55,
150,57,
150,65,
150,66,
150,67,
150,69,
150,70,
150,72,
150,73,
150,74,
150,78,
150,79,
150,82,
150,83,
150,84,
150,86,
150,93,
150,96,
150,97,
150,98,
150,100,
150,107,
150,110,
150,111,
150,112,
150,114,
150,121,
150,122,
150,123,
150,124,
150,126,
150,128,
150,129,
150,133,
150,134,
150,137,
150,139,
150,140,
150,141,
150,142,
150,143,
150,150,
150,157,
150,158,
150,160,
150,161,
150,163,
150,164,
150,165,
150,169,
150,170,
150,173,
150,174,
150,175,
150,177,
150,184,
150,192,
150,193,
150,195,
150,196,
150,199,
150,200,
150,203,
150,205,
150,212,
150,216,
150,217,
150,219,
150,220,
150,224,
150,225,
150,228,
150,229,
150,230,
150,231,
150,238,
150,239,
150,240,
150,242,
150,243,
150,247,
150,248,
150,251,
150,252,
150,259,
150,260,
150,261,
150,263,
150,267,
150,271,
150,272,
150,277,
150,278,
150,281,
150,282,
150,283,
150,284,
150,291,
150,292,
150,293,
150,295,
150,299,
150,303,
150,304,
150,309,
150,310,
150,313,
150,314,
150,315,
150,316,
150,322,
150,323,
150,324,
150,329,
150,330,
150,332,
150,335,
150,336,
150,337,
150,340,
150,341,
150,342,
150,343,
150,347,
150,348,
150,351,
150,353,
151,48,
151,49,
151,50,
151,52,
151,53,
151,54,
151,56,
151,57,
151,58,
151,60,
151,61,
151,64,
151,69,
151,70,
151,74,
151,75,
151,78,
151,79,
151,88,
151,89,
151,90,
151,92,
151,93,
151,95,
151,96,
151,100,
151,101,
151,104,
151,105,
151,106,
151,108,
151,115,
151,118,
151,119,
151,121,
151,122,
151,124,
151,125,
151,126,
151,130,
151,132,
151,133,
151,135,
151,137,
151,138,
151,141,
151,145,
151,146,
151,149,
151,150,
151,151,
151,153,
151,160,
151,163,
151,164,
151,166,
151,167,
151,169,
151,170,
151,171,
151,175,
151,177,
151,178,
151,180,
151,182,
151,183,
151,186,
151,190,
151,191,
151,194,
151,195,
151,196,
151,198,
151,205,
151,206,
151,207,
151,208,
151,210,
151,212,
151,213,
151,214,
151,215,
151,216,
151,220,
151,221,
151,224,
151,226,
151,227,
151,228,
151,229,
151,230,
151,237,
151,238,
151,239,
151,240,
151,241,
151,242,
151,243,
151,245,
151,247,
151,249,
151,250,
151,252,
151,256,
151,257,
151,260,
151,262,
151,263,
151,264,
151,265,
151,266,
151,273,
151,274,
151,275,
151,276,
151,277,
151,279,
151,281,
151,283,
151,285,
151,286,
151,289,
151,293,
151,294,
151,297,
151,299,
151,300,
151,301,
151,302,
151,303,
151,310,
151,311,
151,312,
151,313,
151,314,
151,316,
151,318,
151,319,
151,320,
151,321,
151,323,
151,327,
151,328,
151,329,
151,331,
151,332,
151,336,
151,337,
151,340,
151,344,
151,345,
151,346,
151,347,
151,348,
151,349,
151,350,
151,357,
151,358,
151,359,
151,360,
151,361,
151,363,
151,365,
151,366,
151,367,
151,368,
151,369,
151,371,
151,375,
151,376,
151,377,
151,379,
151,380,
151,384,
151,385,
151,388,
151,390,
151,391,
151,392,
151,393,
151,394,
151,401,
151,402,
151,403,
151,404,
151,405,
151,407,
151,409,
151,410,
151,411,
151,412,
151,414,
151,418,
151,419,
151,420,
151,422,
151,423,
151,426,
151,428,
151,429,
151,432,
151,437,
151,438,
151,441,
151,445,
151,446,
151,447,
151,448,
151,449,
151,450,
151,451,
151,461,
151,462,
151,463,
151,464,
151,466,
151,467,
151,469,
151,470,
151,472,
151,473,
151,475,
151,479,
151,480,
151,483,
151,484,
151,485,
151,487,
151,494,
151,495,
151,496,
151,497,
151,499,
151,500,
151,502,
151,503,
151,504,
151,513,
151,514,
151,516,
151,519,
151,520,
151,522,
151,525,
151,527,
151,530,
151,533,
151,534,
151,536,
151,537,
151,541,
151,542,
151,545,
151,546,
151,547,
151,549,
151,556,
151,557,
151,558,
151,559,
151,561,
151,562,
151,564,
151,565,
151,566,
151,569,
151,570,
151,572,
151,576,
151,577,
151,579,
151,583,
151,585,
151,588,
151,591,
151,592,
151,594,
151,595,
151,596,
151,598,
151,600,
151,601,
151,606,
151,607,
151,610,
151,611,
151,612,
151,614,
151,621,
151,622,
151,623,
151,624,
151,625,
151,627,
151,628,
151,630,
151,631,
151,632,
151,636,
151,637,
151,640,
151,641,
151,642,
151,644,
151,651,
151,652,
151,653,
151,654,
151,656,
151,657,
151,659,
151,660,
151,661,
151,665,
151,666,
151,669,
151,670,
151,671,
151,673,
151,680,
151,681,
151,682,
151,683,
151,685,
151,686,
151,689,
151,690,
151,691,
151,692,
151,693,
151,697,
151,698,
151,701,
151,702,
151,703,
151,705,
151,712,
151,715,
151,717,
151,718,
151,719,
151,721,
151,722,
151,724,
151,725,
151,726,
151,728,
151,732,
151,733,
151,736,
151,737,
151,738,
151,740,
151,747,
151,750,
151,752,
151,753,
151,754,
151,756,
151,757,
151,759,
151,760,
151,761,
151,763,
151,767,
151,768,
151,771,
151,772,
151,773,
151,775,
151,782,
151,785,
151,786,
151,787,
151,789,
151,790,
151,792,
151,793,
151,795,
151,796,
151,798,
151,803,
151,804,
151,807,
151,808,
151,809,
151,811,
151,818,
151,821,
151,822,
151,823,
151,825,
151,827,
151,828,
151,833,
151,834,
151,837,
151,839,
151,846,
151,850,
151,851,
151,852,
151,854,
151,855,
151,857,
151,860,
151,864,
151,865,
151,870,
151,871,
151,874,
151,875,
151,876,
151,878,
151,885,
151,889,
151,890,
151,891,
151,893,
151,894,
151,896,
151,899,
151,903,
151,904,
151,909,
151,910,
151,913,
151,914,
151,915,
151,917,
151,924,
151,928,
151,929,
151,931,
151,932,
151,934,
151,935,
151,936,
151,938,
151,942,
151,943,
151,946,
151,947,
151,948,
151,950,
151,956,
151,963,
151,964,
151,965,
151,966,
151,968,
151,971,
151,972,
151,973,
151,975,
151,977,
151,978,
151,979,
151,981,
151,986,
151,987,
151,988,
151,990,
151,991,
151,995,
151,996,
151,1000,
151,1001,
151,1004,
151,1006,
151,1007,
151,1008,
151,1009,
151,1010,
151,1017,
151,1023,
151,1024,
151,1025,
151,1026,
151,1028,
151,1030,
151,1032,
151,1033,
151,1034,
152,120,
152,121,
152,157,
152,200,
152,201,
152,207,
152,211,
152,216,
152,220,
152,224,
152,227,
152,294,
152,301,
152,482,
152,539,
152,588,
152,589,
152,592,
152,593,
152,600,
152,605,
152,616,
152,620,
152,624,
152,634,
152,638,
152,642,
153,68,
153,69,
153,70,
153,78,
153,79,
153,80,
155,64,
155,65,
155,67,
155,68,
155,69,
155,71,
155,72,
155,73,
155,74,
155,75,
155,87,
155,88,
155,89,
155,116,
155,117,
155,118,
155,125,
155,126,
155,127,
155,128,
155,129,
155,130,
155,131,
155,132,
155,133,
155,134,
155,135,
155,136,
155,137,
155,138,
155,139,
155,140,
155,141,
155,142,
155,143,
155,144,
155,145,
155,146,
155,147,
155,154,
155,155,
155,156,
155,157,
155,158,
155,159,
155,160,
155,161,
155,162,
155,163,
155,164,
155,165,
155,166,
155,167,
155,168,
155,169,
155,170,
155,171,
155,172,
155,180,
155,181,
155,182,
155,184,
155,185,
155,187,
155,188,
155,191,
155,192,
155,193,
155,196,
155,199,
155,202,
155,204,
155,207,
155,214,
155,215,
155,216,
155,218,
155,221,
155,224,
155,226,
155,227,
155,228,
155,229,
155,230,
155,231,
155,232,
155,233,
155,237,
155,239,
155,240,
155,244,
155,245,
155,248,
155,251,
155,252,
155,254,
155,255,
155,257,
155,264,
155,265,
155,266,
155,267,
155,271,
155,279,
155,281,
155,283,
155,290,
155,291,
155,292,
155,293,
155,295,
155,297,
155,298,
155,299,
155,300,
155,305,
155,307,
155,308,
155,311,
155,314,
155,316,
155,317,
155,318,
155,320,
155,322,
155,323,
155,329,
155,330,
155,331,
155,332,
155,333,
155,336,
155,337,
155,339,
155,340,
155,344,
155,345,
155,349,
155,351,
155,352,
155,353,
155,355,
155,356,
155,357,
155,359,
155,360,
155,362,
155,363,
155,364,
155,366,
155,368,
155,373,
155,375,
155,379,
155,380,
155,381,
155,382,
155,383,
155,384,
155,387,
155,388,
155,389,
155,393,
155,395,
155,396,
155,397,
155,400,
155,403,
155,408,
155,409,
155,411,
155,416,
155,418,
155,419,
155,420,
155,422,
155,427,
155,428,
155,431,
155,432,
155,435,
155,436,
155,439,
155,442,
155,449,
155,450,
155,451,
155,452,
155,454,
155,456,
155,457,
155,458,
155,459,
155,463,
155,464,
155,465,
155,466,
155,468,
155,469,
155,471,
155,473,
155,474,
155,475,
155,484,
155,489,
155,490,
155,491,
155,492,
155,493,
155,495,
155,496,
155,497,
155,498,
155,501,
155,508,
155,509,
155,510,
155,511,
155,513,
155,515,
155,517,
155,518,
155,519,
155,521,
155,523,
155,526,
155,528,
155,529,
155,534,
155,537,
155,538,
155,541,
155,546,
155,547,
155,548,
155,550,
155,551,
155,553,
155,558,
155,559,
155,561,
155,562,
155,566,
155,573,
155,575,
155,576,
155,577,
155,579,
155,580,
155,586,
155,587,
155,589,
155,590,
155,591,
155,592,
155,595,
155,596,
155,597,
155,600,
155,601,
155,604,
155,607,
155,608,
155,611,
155,613,
155,614,
155,615,
155,618,
155,620,
155,621,
155,622,
155,625,
155,629,
155,636,
155,638,
155,639,
155,641,
155,643,
155,644,
155,645,
155,646,
155,648,
155,650,
155,652,
155,653,
155,654,
155,655,
155,661,
155,662,
155,664,
155,668,
155,669,
155,671,
155,672,
155,673,
155,675,
155,676,
155,681,
155,682,
155,684,
155,686,
155,687,
155,689,
155,690,
155,692,
155,693,
155,694,
155,695,
155,697,
155,700,
155,702,
155,703,
155,705,
155,710,
155,711,
155,715,
155,717,
155,724,
155,725,
155,729,
155,731,
155,735,
155,736,
155,739,
155,740,
155,742,
155,743,
155,745,
155,746,
155,747,
155,750,
155,752,
155,753,
155,755,
155,756,
155,758,
155,761,
155,764,
155,765,
155,772,
155,773,
155,775,
155,776,
155,777,
155,787,
155,788,
155,791,
155,801,
155,802,
155,803,
155,804,
155,805,
155,806,
155,808,
155,809,
155,810,
155,816,
155,820,
155,821,
155,828,
155,829,
155,830,
155,832,
155,833,
155,835,
155,836,
155,839,
155,840,
155,842,
155,843,
155,845,
155,846,
155,850,
155,861,
155,862,
155,863,
155,866,
155,867,
155,869,
155,876,
155,877,
155,878,
155,880,
155,881,
155,883,
155,884,
155,885,
155,886,
155,887,
155,888,
155,889,
155,892,
155,901,
155,902,
155,903,
155,909,
155,912,
155,920,
155,922,
155,923,
155,925,
155,926,
155,927,
155,931,
155,937,
155,938,
155,939,
155,940,
155,942,
155,944,
155,945,
155,947,
155,948,
155,949,
155,952,
155,953,
155,955,
155,956,
155,957,
155,963,
155,969,
155,970,
155,971,
155,974,
155,981,
155,984,
155,985,
155,987,
155,988,
155,989,
155,991,
155,998,
155,999,
155,1001,
155,1002,
155,1003,
155,1005,
155,1008,
155,1010,
155,1013,
155,1015,
155,1017,
155,1019,
155,1025,
155,1029,
155,1030,
155,1031,
155,1033,
155,1034,
155,1035,
155,1036,
155,1039,
155,1040,
155,1044,
155,1045,
155,1047,
0};
static int __CvT__instrumented_lines___[]={
5,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
166,
197,
0,
0,
1,
3,
0,
0,
0,
0,
5,
0,
0,
0,
0,
0,
0,
0,
22,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
16,
0,
17,
6,
1,
1,
9,
0,
10,
0,
19,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
26,
0,
84,
10,
17,
7,
58,
15,
0,
72,
5,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
2,
26,
2,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
7,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
30,
407,
117,
51,
0,
135,
37,
81,
59,
0,
0,
103,
48,
52,
157,
0,
0,
0,
95,
13,
523,
63,
64,
131,
484,
27,
6,
0,
456,
0,
0};
static __CvT__module_info____
__CvT_miTBODY(
              __CvT__file_name____,
              sizeof(__CvT__file_name____)/sizeof(char*) -1,
              __CvT__logged_lines___,
              (sizeof(__CvT__logged_lines___)/sizeof(int) -1) / 2
              ,__CvT__instrumented_lines___);
static __CvT__module_info____* __CvT_miTINIT = __CvT_miT = &__CvT_miTBODY;
