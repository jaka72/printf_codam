#include "test.h"
#include <limits.h>


void test_c()
{
    int ret_orig, ret_mine;

    printf(HYEL"\n__TEST CHARS__________________________________________________\n\n" RESET);
    // printf(BLU"       %%%%  %%5.c     %%-5c     %%*c      %%-*c     %%c\n"RESET);
    // ret_orig =    printf("Orig:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
    // ret_mine = ft_printf("Mine:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);

    ret_orig =    printf("");
    ret_mine = ft_printf("");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("\x01\x02\a\v\b\f\r\n");
    ret_mine = ft_printf("\x01\x02\a\v\b\f\r\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig = printf("%%\n");
    ret_mine = ft_printf("%%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %%\n");
    ret_mine = ft_printf(" %%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %%c\n");
    ret_mine = ft_printf(" %%c\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%%%%%%\n");
    ret_mine = ft_printf("%%%%%%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%%%c\n", 'x');
    ret_mine = ft_printf("%%%c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c\n", 'x');
    ret_mine = ft_printf("%c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %c\n", 'x');
    ret_mine = ft_printf(" %c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c \n", 'x');
    ret_mine = ft_printf("%c \n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c%c%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%c%c%c\n", 'a', '\t', 'b');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%cc%cc%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%cs%cs%c\n", 'c', 'b', 'a');
    ret_mine = ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


void test_s()
{
    int ret_orig, ret_mine;

    printf(HYEL"\n__TEST STRINGS__________________________________________________\n\n" RESET);

    ret_orig =    printf("%s\n", "");
    ret_mine = ft_printf("%s\n", "");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf("%s\n", (char *)NULL);
    ret_mine = ft_printf("%s\n", (char *)NULL);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf("%s\n", "some string with %s hehe");
    ret_mine = ft_printf("%s\n", "some string with %s hehe");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf(" %s\n", "can it handle \t and \n?\n");
    ret_mine = ft_printf(" %s\n", "can it handle \t and \n?\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
    ret_mine = ft_printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf("%s%s%s\n", "And ", "some", "joined");
    ret_mine = ft_printf("%s%s%s\n", "And ", "some", "joined");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


    ret_orig =    printf("%ss%ss%ss\n", "And ", "some other", "joined");
    ret_mine = ft_printf("%ss%ss%ss\n", "And ", "some other", "joined");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


void test_p()
{
    int ret_orig, ret_mine;

        printf(HYEL"\n__TEST POINTERS__________________________________________________\n\n" RESET);
		
    ret_orig =    printf("%p\n", "");
    ret_mine = ft_printf("%p\n", "");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%p\n", NULL);
    ret_mine = ft_printf("%p\n", NULL);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%p\n", (void *)-14523);
    ret_mine = ft_printf("%p\n", (void *)-14523);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("0x%p-\n", (void *)ULONG_MAX);
    ret_mine = ft_printf("0x%p-\n", (void *)ULONG_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    ret_mine = ft_printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}



void test_d()
{
    int ret_orig, ret_mine;

    printf(HYEL"\n__TEST INTEGERS__________________________________________________\n\n" RESET);
    ret_orig =    printf("%d\n", 0);
    ret_mine = ft_printf("%d\n", 0);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%d\n", -10);
    ret_mine = ft_printf("%d\n", -10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", -200000);
    ret_mine = ft_printf("%d\n", -200000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", -6000023);
    ret_mine = ft_printf("%d\n", -6000023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 10);
    ret_mine = ft_printf("%d\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 10000);
    ret_mine = ft_printf("%d\n", 10000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 100023);
    ret_mine = ft_printf("%d\n", 100023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", INT_MAX);
    ret_mine = ft_printf("%d\n", INT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", INT_MIN);
    ret_mine = ft_printf("%d\n", INT_MIN);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%dxx\n", 10);
    ret_mine = ft_printf("dgs%dxx\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%d%dd%d\n", 1, 2, -3);
    ret_mine = ft_printf("%d%dd%d\n", 1, 2, -3);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}




void test_i()
{
    int ret_orig, ret_mine;
    printf(HYEL"\n__TEST INTEGERS__________________________________________________\n\n" RESET);

    ret_orig =    printf("%i\n", 0);
    ret_mine = ft_printf("%i\n", 0);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%i\n", -10);
    ret_mine = ft_printf("%i\n", -10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", -200000);
    ret_mine = ft_printf("%i", -200000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", -6000023);
    ret_mine = ft_printf("%i\n", -6000023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 10);
    ret_mine = ft_printf("%i\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 10000);
    ret_mine = ft_printf("%i\n", 10000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 100023);
    ret_mine = ft_printf("%i\n", 100023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", INT_MAX);
    ret_mine = ft_printf("%i\n", INT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", INT_MIN);
    ret_mine = ft_printf("%i\n", INT_MIN);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%ixx\n", 10);
    ret_mine = ft_printf("dgs%ixx\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%i%ii%i\n", 1, 2, -3);
    ret_mine = ft_printf("%i%ii%i\n", 1, 2, -3);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}







void test_u()
{
    int ret_orig, ret_mine;
    printf(HYEL"\n__TEST UNSIGNED INTEGERS__________________________________________________\n\n" RESET);

    ret_orig =    printf("%u\n", 0);
    ret_mine = ft_printf("%u\n", 0);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%u\n", -10);
    ret_mine = ft_printf("%u\n", -10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%u\n", -200000);
    ret_mine = ft_printf("%u\n", -200000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", -6000023);
    ret_mine = ft_printf("%u\n", -6000023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 10);
    ret_mine = ft_printf("%u\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 10000);
    ret_mine = ft_printf("%u\n", 10000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 100023);
    ret_mine = ft_printf("%u\n", 100023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", INT_MAX);
    ret_mine = ft_printf("%u\n", INT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", INT_MIN);
    ret_mine = ft_printf("%u\n", INT_MIN);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", UINT_MAX);
    ret_mine = ft_printf("%u\n", UINT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%uxx\n", 10);
    ret_mine = ft_printf("dgs%uxx\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%u%uu%u\n", 1, 2, -3);
    ret_mine = ft_printf("%u%uu%u\n", 1, 2, -3);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


// ret_orig =    printf
//ret_mine = ft_printf

void test_x()
{
    ret_orig =    printf("%x\n", 0);
    ret_mine = ft_printf("%x\n", 0);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%x\n", -10);
    ret_mine = ft_printf("%x\n", -10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%x\n", -200000);
    ret_mine = ft_printf("%x\n", -200000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", -6000023);
    ret_mine = ft_printf("%x\n", -6000023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 10);
    ret_mine = ft_printf("%x\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 10000);
    ret_mine = ft_printf("%x\n", 10000);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 100023);
    ret_mine = ft_printf("%x\n", 100023);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 0xabcdef);
    ret_mine = ft_printf("%x\n", 0xabcdef);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 0x7fedcba1);
    ret_mine = ft_printf("%x\n", 0x7fedcba1);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", INT_MAX);
    ret_mine = ft_printf("%x\n", INT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", INT_MIN);
    ret_mine = ft_printf("%x\n", INT_MIN);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", UINT_MAX);
    ret_mine = ft_printf("%x\n", UINT_MAX);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%xxx\n", 10);
    ret_mine = ft_printf("dgs%xxx\n", 10);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
    
    ret_orig =    printf("%x%xx%x\n", 1, 2, -3);
    ret_mine = ft_printf("%x%xx%x\n", 1, 2, -3);
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}

// void test_X()
// {
// 	TEST("X format", {
// 		test_printf("%X", 0);
// 		test_printf("%X", -10);
// 		test_printf("%X", -200000);
// 		test_printf("%X", -6000023);
// 		test_printf("%X", 10);
// 		test_printf("%X", 10000);
// 		test_printf("%X", 100023);
// 		test_printf("%X", 0xabcdef);
// 		test_printf("%X", 0x7fedcba1);
// 		test_printf("%X", INT_MAX);
// 		test_printf("%X", INT_MIN);
// 		test_printf("%X", UINT_MAX);
// 		test_printf("dgs%Xxx", 10);
// 		test_printf("%X%Xx%X", 1, 2, -3);
// 	})
// }

// int main(int argn, char **argv)
// {
// 	printf(YEL "Mandatory:" NC "\n");
// 	pf_setup_framework(argn, argv);

// 	simple_test();
// 	test_c();
// 	test_s();
// 	test_p();
// 	test_d();
// 	test_i();
// 	test_u();
// 	test_x();
// 	test_X();

// 	TEST("random", {
// 		// generated in python
// 		//==%%^^&&++==
// 	});
// }


int main(void)
{
	// test_c();
	test_s();
	test_p();
	test_d();
	test_i();
	test_u();
	test_x();


    //printf("new: [%#8x] ", 0x123);

	return (0);
}
