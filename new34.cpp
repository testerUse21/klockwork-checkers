static int yy_string_get() {
  register unsigned char *string;
  register int c;
 
  string = bash_input.location.string;
  c = EOF;
 
  /* If the string doesn't exist, or is empty, EOF found. */
  if (string && *string) {
    c = *string++;
    bash_input.location.string = string;
  }
  return (c);
}
