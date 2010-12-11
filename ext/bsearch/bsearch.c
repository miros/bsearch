#include <ruby.h>
#include <string.h>

static VALUE binary_search(VALUE, VALUE);

void Init_bsearch()
{
  rb_define_method(rb_cArray, "bsearch", binary_search, 1);
}

static VALUE binary_search(VALUE self, VALUE rb_str_to_search)
{
	int upper = RARRAY_LEN(self) - 1;
	printf("array size: %d \n", upper);
	int lower = 0;

	VALUE *array = RARRAY_PTR(self);
	char *str_to_search = rb_string_value_ptr(&rb_str_to_search);

	while(upper >= lower) {
                
		int index = lower + (upper - lower) / 2;
		VALUE *current_element = array + index;
		printf("current index: %d \n", index);
		char *current_value = rb_string_value_ptr(current_element);
		printf("current value: %s \n", current_value);

		if (strcmp(current_value, str_to_search) == 0) {
			printf("found index: %d \n", index);
			return INT2NUM(index);
		} else if(strcmp(current_value, str_to_search) < 0) {
			printf("> \n");
			lower = index + 1;
		} else {
			printf("< \n");
			upper = index - 1;
		}
               
	}

	printf("not found");

	return Qfalse;
}
