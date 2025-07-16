C - Variadic Functions are functions that accept a variable number of arguments.

They are declared using an ellipsis (...) in the parameter list and 
require the <stdarg.h> header to handle the arguments.

Key Macros from <stdarg.h>:
va_list – Type to hold the variable arguments.

va_start – Initializes the argument list.

va_arg – Retrieves the next argument.

va_end – Cleans up.

Used commonly in functions like printf().

