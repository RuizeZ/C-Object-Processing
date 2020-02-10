#define STRLEN 16

struct A {
	char string_a[STRLEN]; // Must have vowel or add to end
	char string_b[STRLEN]; // Any string
	struct B *ptr_c; // 
	struct C *ptr_d; // 
	int (*op0)(struct A *objA);
	unsigned char *(*op1)(struct A *objA);
};
struct B {
	char string_a[STRLEN]; // Any string
	int num_b; // >0 or set to 0
	char string_c[STRLEN]; // Any string
	int num_d; // >0 or set to 0
};
struct C {
	char string_a[STRLEN]; // Must have vowel or add to end
	char string_b[STRLEN]; // Any string
	char string_c[STRLEN]; // Capitalize Strings
	int num_d; // <0 or set to 0
	char string_e[STRLEN]; // Must have vowel or add to end
};
