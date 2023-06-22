/*************************************************
 *
 *  File Name: charset.h
 *
 *  Last modified:
 *  Michael Thomsen     21/03/2005
 *
 * 	Change log: none
 *************************************************/


/*** Supported ASCII characters ***

ASCII	CHAR	ASCII	CHAR	ASCII	CHAR	ASCII	CHAR	ASCII	CHAR	ASCII	CHAR
 0x20        0x30  0     0x40  @     0x50  P     0x60  `     0x70  p
 0x21  !     0x31  1     0x41  A     0x51  Q     0x61  a     0x71  q
 0x22  "     0x32  2     0x42  B     0x52  R     0x62  b     0x72  r
 0x23  #     0x33  3     0x43  C     0x53  S     0x63  c     0x73  s
 0x24  $     0x34  4     0x44  D     0x54  T     0x64  d     0x74  t
 0x25  %     0x35  5     0x45  E     0x55  U     0x65  e     0x75  u
 0x26  &     0x36  6     0x46  F     0x56  V     0x66  f     0x76  v
 0x27  '     0x37  7     0x47  G     0x57  W     0x67  g     0x77  w
 0x28  (     0x38  8     0x48  H     0x58  X     0x68  h     0x78  x
 0x29  )     0x39  9     0x49  I     0x59  Y     0x69  i     0x79  y
 0x2A  *     0x3A  :     0x4A  J     0x5A  Z     0x6A  j     0x7A  z
 0x2B  +     0x3B  ;     0x4B  K     0x5B  [     0x6B  k     0x7B  {
 0x2C  ,     0x3C  <     0x4C  L     0x5C  \     0x6C  l     0x7C  |
 0x2D  -     0x3D  =     0x4D  M     0x5D  ]     0x6D  m     0x7D  }
 0x2E  .     0x3E  >     0x4E  N     0x5E  ^     0x6E  n     0x7E  ~
 0x2F  /     0x3F  ?     0x4F  O     0x5F  _     0x6F  o

Note:
1. The ASCII character 0x20 is "SPACE" or a blank.
2. The ASCII character 0x7F(DEL) is not supported by the matrix below.

*/

#ifndef _CHARSET_H_
#define _CHARSET_H_

extern const char character_data[95][5];

extern const char custom_character_data[11][5];

#endif /*! _ACHARSET_H_ */
