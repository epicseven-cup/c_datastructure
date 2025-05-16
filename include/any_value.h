// #include guards
#ifndef ANYVALUE_H
#define ANYVALUE_H

// Public structures goes into the *.h files

enum Type {
  // added in C23, comment it out when needed
  BOOL; CHAR; SIGNED_CHAR; UNSIGNED_CHAR; SHORT; SHORT_INT; SIGNED_SHORT;
  SIGNED_SHORT_INT;
  UNSIGNED_SHORT;
  UNSIGNED_SHORT_INT;
  INT;
  SIGNED;
  SIGNED_INT;
  UNSIGNED;
  UNSIGNED_INT;
  LONG;
  LONG_INT;
  SIGNED_LONG;
  SIGNED_LONG_INT;
  UNSIGNED_LONG;
  UNSIGNED_LONG_INT;
  LONG_LONG;
  LONG_LONG_INT;
  SIGNED_LONG_LONG;
  SIGNED_LONG_LONG_INT;
  UNSIGNED_LONG_LONG;
  UNSIGNED_LONG_LONG_INT;
  FLOAT;
  DOUBLE;
  LONG_DOUBLE;
};

union Value {
  // added in c23, comment it out when needed
  bool bool_value;
  char char_value;
  signed char signed_char_value;
  unsigned char unsigned_char_value;
  short short_value;
  short int short_int_value;
  signed short signed_short_value;
  signed short int signed_short_int_value;
  unsigned short unsigned_short_value;
  unsigned short int unsigned_short_int_value;
  int int_value;
  signed signed_value;
  signed int signed_int_value;
  unsigned unsigned_value;
  unsigned int unsigned_int_value;
  long long_value;
  long int long_int_value;
  signed long signed_long_value;
  signed long int signed_long_int_value;
  unsigned long unsigned_long_value;
  unsigned long int unsigned_long_int_value;
  long long long_long_value;
  long long int long_long_int_value;
  signed long long signed_long_long_value;
  signed long long int signed_long_long_int_value;
  unsigned long long unsigned_long_long_value;
  unsigned long long int unsigned_long_long_int_value;
  float float_value;
  double double_value;
  long double long_double_value;
};

struct AnyValue {
  Type type;
  Value value;
};

// end of guards
#endif
