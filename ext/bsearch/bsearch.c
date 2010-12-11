#include <ruby.h>

static VALUE hello_world(VALUE mod)
{
  return rb_str_new2("hello world");
}

void Init_bsearch()
{
  VALUE mBSearch = rb_define_module("BSearch");
  rb_define_singleton_method(mBSearch, "hello_world", hello_world, 0);
}
