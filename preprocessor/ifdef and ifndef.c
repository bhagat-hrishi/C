#include<stdio.h>

#define i_am_defined



int main()
{
//ifdef check whether macro defined or not
//if macro  is defined then #ifdef part executed
#ifdef i_am_defined
printf("\nI will print because of i_am_defined macro defined");
#endif // i_am_defined

//ifndef check weather macro defined or not
#ifndef hrishi
#error Aborting compilation process
#endif


//undefined i_am_defined macro
#undef i_am_defined

//if macro  is not defined then #ifndef part is executed
#ifndef i_am_defined
printf("\nI will execute as you undefine macro i_am_define");
#endif // i_am_defined



#define gfg 120

#if gfg > 200
   #undef gfg
   #define gfg 200
#elif gfg < 50
   #undef gfg
   #define gfg 50
#else
   #undef gfg
   #define gfg 100
#endif
//Notice how the entire structure of #if, #elif and #else
//chained directives ends with #endif.
//else part executed so 100
printf("\n\n%d",gfg);




}
