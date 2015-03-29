#include <stdio.h>

#include <iostream>
#include <iomanip>

using namespace std;

void c_run_float()
{
        printf("\n\t======c_run_float()======\n\n");
        
        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 123;
                f3 = 123.1;
                f4 = 123.12;
                f5 = 123.123;
                f6 = 123.1234;
                f7 = 123.12345;
                f8 = 123.123456;
                f9 = 123.1234567;
                f10 = 123.12345678;

                printf("local float withou assign\t: %f\n", f1);
                printf("f2 = 123\t\t\t: %f\n", f2);
                printf("f3 = 123.1\t\t\t: %f\n", f3);
                printf("f4 = 123.12\t\t\t: %f\n", f4);
                printf("f5 = 123.123\t\t\t: %f\n", f5);
                printf("f6 = 123.1234\t\t\t: %f\n", f6);
                printf("f7 = 123.12345\t\t\t: %f\n", f7);
                printf("f8 = 123.123456\t\t\t: %f\n", f8);
                printf("f9 = 123.1234567\t\t: %f\n", f9);
                printf("f10 = 123.12345678\t\t: %f\n", f10);

                printf("\nConlusion 1:C float default precision is 9\n\n");
        }


        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 1234567;
                f3 = 1234567.1;
                f4 = 1234567.12;
                f5 = 1234567.123;
                f6 = 1234567.1234;
                f7 = 1234567.12345;
                f8 = 1234567.123456;
                f9 = 1234567.1234567;
                f10 = 1234567.12345678;

                printf("f2 = 1234567\t\t\t: %f\n", f2);
                printf("f3 = 1234567.1\t\t\t: %f\n", f3);
                printf("f4 = 1234567.12\t\t\t: %f\n", f4);
                printf("f5 = 1234567.123\t\t: %f\n", f5);
                printf("f6 = 1234567.1234\t\t: %f\n", f6);
                printf("f7 = 1234567.12345\t\t: %f\n", f7);
                printf("f8 = 1234567.123456\t\t: %f\n", f8);
                printf("f9 = 1234567.1234567\t\t: %f\n", f9);
                printf("f10 = 1234567.12345678\t\t: %f\n", f10);

                printf("\nConlusion 2:C float default precision is 9\n\n");
        }

        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f10 = 1234567.12345678;

                printf("f10 = 1234567.12345678\t\t:%%1.1f\t: %1.1f\n", f10);
                printf("f10 = 1234567.12345678\t\t:%%1.2f\t: %1.2f\n", f10);
                printf("f10 = 1234567.12345678\t\t:%%1.3f\t: %1.3f\n", f10);
                printf("f10 = 1234567.12345678\t\t:%%1.4f\t: %1.4f\n", f10);
                printf("f10 = 1234567.12345678\t\t:%%1.5f\t: %1.5f\n", f10);
                printf("f10 = 1234567.12345678\t\t:%%1.6f\t: %1.6f\n", f10);

                printf("\nConlusion 3:C float max precision is 9\n");
        }

        printf("\n\t------c_run_float()------\n\n");
}

void c_run_double()
{
        printf("\n\t======c_run_double()======\n\n");
        
        {
                double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20;

                d2 = 123;
                d3 = 123.1;
                d4 = 123.12;
                d5 = 123.123;
                d6 = 123.1234;
                d7 = 123.12345;
                d8 = 123.123456;
                d9 = 123.1234567;
                d10 = 123.12345678;
                d11 = 123.123456789;
                d12 = 123.1234567891;
                d13 = 123.12345678912;
                d14 = 123.123456789123;
                d15 = 123.123456789123456789;
                d16 = 123456.123456789123456789;

                printf("local dloat withou assign\t: %f\n", d1);
                printf("d2 = 123\t\t\t: %f\n", d2);
                printf("d3 = 123.1\t\t\t: %f\n", d3);
                printf("d4 = 123.12\t\t\t: %f\n", d4);
                printf("d5 = 123.123\t\t\t: %f\n", d5);
                printf("d6 = 123.1234\t\t\t: %f\n", d6);
                printf("d7 = 123.12345\t\t\t: %f\n", d7);
                printf("d8 = 123.123456\t\t\t: %f\n", d8);
                printf("d9 = 123.1234567\t\t: %f\n", d9);
                printf("d10 = 123.12345678\t\t: %f\n", d10);
                printf("d11 = 123.123456789\t\t: %f\n", d11);
                printf("d12 = 123.1234567891\t\t: %f\n", d12);
                printf("d13 = 123.12345678912\t\t: %f\n", d13);
                printf("d14 = 123.123456789123\t\t: %f\n", d14);

                printf("\nConclusion 1:C double default precision is 9\n\n");

                printf("d15 = 123.123456789123456789\t:%%.11f\t: %.11f\n", d15);
                printf("d15 = 123.123456789123456789\t:%%.12f\t: %.12f\n", d15);
                printf("d15 = 123.123456789123456789\t:%%.13f\t: %.13f\n", d15);
                printf("d15 = 123.123456789123456789\t:%%.14f\t: %.14f\tERROR\n", d15);

                printf("\n");

                printf("d16 = 123456.123456789123456789\t:%%.11f\t: %.11f\n", d16);
                printf("d16 = 123456.123456789123456789\t:%%.12f\t: %.12f\n", d16);
                printf("d16 = 123456.123456789123456789\t:%%.13f\t: %.13f\n", d16);
                printf("d16 = 123456.123456789123456789\t:%%.14f\t: %.14f\n", d16);

                printf("\nConclusion 2:C double max precision is 16\n");
        }

        printf("\n\t------c_run_double()------\n\n");        
}


void c_run()
{
        printf("\n\t======c_run()======\n\n");

        c_run_float();

        c_run_double();

        printf("\n\t------c_run()------\n\n");
}


void cpp_run_float()
{
        cout << "\n\t======cpp_run_float()======\n" << endl;
        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 123;
                f3 = 123.1;
                f4 = 123.12;
                f5 = 123.123;
                f6 = 123.1234;
                f7 = 123.12345;
                f8 = 123.123456;
                f9 = 123.1234567;
                f10 = 123.12345678;

                cout << "local float withou assign\t: " << f1 << endl;
                cout << "f2 = 123\t\t\t: " << f2 << endl;
                cout << "f3 = 123.1\t\t\t: " << f3 << endl;
                cout << "f4 = 123.12\t\t\t: " << f4 << endl;
                cout << "f5 = 123.123\t\t\t: " << f5 << endl;
                cout << "f6 = 123.1234\t\t\t: " << f6 << endl;
                cout << "f7 = 123.12345\t\t\t: " << f7 << endl;
                cout << "f8 = 123.123456\t\t\t: " << f8 << endl;
                cout << "f9 = 123.1234567\t\t: " << f9 << endl;
                cout << "f10 = 123.12345678\t\t: " << f10 << endl;

                cout << "\nConclusion 1:C++ float default precision is 6" << endl;
        }

        cout << endl;

        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 1234567;
                f3 = 1234567.1;
                f4 = 1234567.12;
                f5 = 1234567.123;
                f6 = 1234567.1234;
                f7 = 1234567.12345;
                f8 = 1234567.123456;
                f9 = 1234567.1234567;
                f10 = 1234567.12345678;

                cout << "f2 = 1234567\t\t\t: " << f2 << endl;
                cout << "f3 = 1234567.1\t\t\t: " << f3 << endl;
                cout << "f4 = 1234567.12\t\t\t: " << f4 << endl;
                cout << "f5 = 1234567.123\t\t: " << f5 << endl;
                cout << "f6 = 1234567.1234\t\t: " << f6 << endl;
                cout << "f7 = 1234567.12345\t\t: " << f7 << endl;
                cout << "f8 = 1234567.123456\t\t: " << f8 << endl;
                cout << "f9 = 1234567.1234567\t\t: " << f9 << endl;
                cout << "f10 = 1234567.12345678\t\t: " << f10 << endl;

                cout << "\nConclusion 2:C++ float default precision is 6" << endl;
        }

        cout << endl;

        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 1234567;
                f3 = 1234567.1;
                f4 = 1234567.12;
                f5 = 1234567.123;
                f6 = 1234567.1234;
                f7 = 1234567.12345;
                f8 = 1234567.123456;
                f9 = 1234567.1234567;
                f10 = 1234567.12345678;

                cout << "f2 = 1234567\t\t\t:setprecision(7)\t: " << f2 << endl;
                cout << "f3 = 1234567.1\t\t\t:setprecision(7)\t: " << f3 << endl;
                cout << "f4 = 1234567.12\t\t\t:setprecision(7)\t: " << f4 << endl;
                cout << "f5 = 1234567.123\t\t:setprecision(7)\t: " << f5 << endl;
                cout << "f6 = 1234567.1234\t\t:setprecision(7)\t: " << setprecision(7) << f6 << endl;
                cout << "f7 = 1234567.12345\t\t:setprecision(7)\t: " << setprecision(7) << f7 << endl;
                cout << "f8 = 1234567.123456\t\t:setprecision(7)\t: " << setprecision(7) << f8 << endl;
                cout << "f9 = 1234567.1234567\t\t:setprecision(7)\t: " << setprecision(7) << f9 << endl;
                cout << "f10 = 1234567.12345678\t\t:setprecision(7)\t: " << setprecision(7) << f10 << endl;

                cout << endl;

                cout << "f10 = 1234567.12345678\t\t:setprecision(10)\t: " << setprecision(10) << f10 << endl;
                cout << "f10 = 1234567.12345678\t\t:setprecision(11)\t: " << setprecision(11) << f10 << endl;

                cout << "\nConclusion 3:C++ float max precision is 10" << endl;
        }

        cout << endl;

        {
                float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;

                f2 = 1234567;
                f3 = 1234567.1;
                f4 = 1234567.12;
                f5 = 1234567.123;
                f6 = 1234567.1234;
                f7 = 1234567.12345;
                f8 = 1234567.123456;
                f9 = 1234567.1234567;
                f10 = 1234567.12345678;

                cout << "f2 = 1234567\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << fixed << f2 << endl;
                cout << "f3 = 1234567.1\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << f3 << endl;
                cout << "f4 = 1234567.12\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << f4 << endl;
                cout << "f5 = 1234567.123\t\t:setprecision(7):fixed\t: " << setprecision(7) << f5 << endl;
                cout << "f6 = 1234567.1234\t\t:setprecision(7):fixed\t: " << setprecision(7) << f6 << endl;
                cout << "f7 = 1234567.12345\t\t:setprecision(7):fixed\t: " << setprecision(7) << f7 << endl;
                cout << "f8 = 1234567.123456\t\t:setprecision(7):fixed\t: " << setprecision(7) << f8 << endl;
                cout << "f9 = 1234567.1234567\t\t:setprecision(7):fixed\t: " << setprecision(7) << f9 << endl;
                cout << "f10 = 1234567.12345678\t\t:setprecision(7):fixed\t: " << setprecision(7) << f10 << endl;

                cout.unsetf(ios::fixed);
              
                cout << "\nConlusion 4:C++ setprecision() and fixed can control the numbers of digits after point" << endl;
        }


        cout << "\n\t------cpp_run_float()------\n" << endl;
}


void cpp_run_double()
{
        cout << "\n\t======cpp_run_double()======\n" << endl;        
        
        {
                double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20;

                d2 = 123;
                d3 = 123.1;
                d4 = 123.12;
                d5 = 123.123;
                d6 = 123.1234;
                d7 = 123.12345;
                d8 = 123.123456;
                d9 = 123.1234567;
                d10 = 123.12345678;
                d11 = 123.123456789;
                d12 = 123.1234567891;
                d13 = 123.12345678912;
                d14 = 123.123456789123;
                d15 = 123.1234567891234;
                d16 = 123.12345678912345;
                d17 = 123.123456789123456;
                d18 = 123.1234567891234567;
                d19 = 123.12345678912345678;
                d20 = 123.123456789123456789;

                cout << "local dloat withou assign\t: " << d1 << endl;
                cout << "d2 = 123\t\t\t: " << d2 << endl;
                cout << "d3 = 123.1\t\t\t: " << d3 << endl;
                cout << "d4 = 123.12\t\t\t: " << d4 << endl;
                cout << "d5 = 123.123\t\t\t: " << d5 << endl;
                cout << "d6 = 123.1234\t\t\t: " << d6 << endl;
                cout << "d7 = 123.12345\t\t\t: " << d7 << endl;
                cout << "d8 = 123.123456\t\t\t: " << d8 << endl;
                cout << "d9 = 123.1234567\t\t: " << d9 << endl;
                cout << "d10 = 123.12345678\t\t: " << d10 << endl;
                cout << "d11 = 123.123456789\t\t: " << d11 << endl;
                cout << "d12 = 123.1234567891\t\t: " << d12 << endl;
                cout << "d13 = 123.12345678912\t\t: " << d13 << endl;
                cout << "d14 = 123.123456789123\t\t: " << d14 << endl;

                cout << "\nConclusion 1:C++ double default precision is 6" << endl << endl;

                cout << "d2 = 123\t\t\t:setprecision(7)\t: " << setprecision(7) << d2 << endl;
                cout << "d3 = 123.1\t\t\t:setprecision(7)\t: " << setprecision(7) << d3 << endl;
                cout << "d4 = 123.12\t\t\t:setprecision(7)\t: " << setprecision(7) << d4 << endl;
                cout << "d5 = 123.123\t\t\t:setprecision(7)\t: " << setprecision(7) << d5 << endl;
                cout << "d6 = 123.1234\t\t\t:setprecision(7)\t: " << setprecision(7) << d6 << endl;
                cout << "d7 = 123.12345\t\t\t:setprecision(7)\t: " << setprecision(7) << d7 << endl;
                cout << "d8 = 123.123456\t\t\t:setprecision(7)\t: " << setprecision(7) << d8 << endl;
                cout << "d9 = 123.1234567\t\t:setprecision(7)\t: " << setprecision(7) << d9 << endl;
                cout << "d10 = 123.12345678\t\t:setprecision(7)\t: " << setprecision(7) << d10 << endl;
                cout << "d11 = 123.123456789\t\t:setprecision(7)\t: " << setprecision(7) << d11 << endl;
                cout << "d12 = 123.1234567891\t\t:setprecision(7)\t: " << setprecision(7) << d12 << endl;
                cout << "d13 = 123.12345678912\t\t:setprecision(7)\t: " << setprecision(7) << d13 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(7)\t: " << setprecision(7) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(9)\t: " << setprecision(9) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(10)\t: " << setprecision(10) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(11)\t: " << setprecision(11) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(12)\t: " << setprecision(12) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(13)\t: " << setprecision(13) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(14)\t: " << setprecision(14) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(15)\t: " << setprecision(15) << d14 << endl;
                cout << "d14 = 123.123456789123\t\t:setprecision(16)\t: " << setprecision(16) << d14 << endl;
                cout << "d15 = 123.1234567891234\t\t:setprecision(16)\t: " << setprecision(16) << d15 << endl;
                cout << "d16 = 123.12345678912345\t:setprecision(16)\t: " << setprecision(16) << d16 << endl;
                cout << "d17 = 123.123456789123456\t:setprecision(16)\t: " << setprecision(16) << d17 << endl;
                cout << "d18 = 123.1234567891234567\t:setprecision(16)\t: " << setprecision(16) << d18 << endl;
                cout << "d19 = 123.12345678912345678\t:setprecision(16)\t: " << setprecision(16) << d19 << endl;
                cout << "d20 = 123.123456789123456789\t:setprecision(16)\t: " << setprecision(16) << d20 << endl;
                cout << "d20 = 123.123456789123456789\t:setprecision(18)\t: " << setprecision(18) << d20 << endl;
                cout << "d20 = 123.123456789123456789\t:setprecision(19)\t: " << setprecision(19) << d20 << endl;

                cout << "\nConclusion 2:C++ double max precision is 16" << endl << endl;
        }

        {
                double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20;

                d10 = 1234567.12345678;
                d11 = 1234567.123456789;
                d12 = 1234567.1234567891;
                d13 = 1234567.12345678912;
                d14 = 1234567.123456789123;
                d15 = 1234567.1234567891234;
                d16 = 1234567.12345678912345;
                d17 = 1234567.123456789123456;
                d18 = 1234567.1234567891234567;
                d19 = 1234567.12345678912345678;
                d20 = 1234567.123456789123456789;

                cout << "d10 = 1234567.12345678\t\t\t:setprecision(6)\t: " << setprecision(6) << d10 << endl;
                cout << "d10 = 1234567.12345678\t\t\t:setprecision(7)\t: " << setprecision(7) << d10 << endl;
                cout << "d11 = 1234567.123456789\t\t\t:setprecision(7)\t: " << setprecision(7) << d11 << endl;
                cout << "d12 = 1234567.1234567891\t\t:setprecision(7)\t: " << setprecision(7) << d12 << endl;
                cout << "d13 = 1234567.12345678912\t\t:setprecision(7)\t: " << setprecision(7) << d13 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(7)\t: " << setprecision(7) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(9)\t: " << setprecision(9) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(10)\t: " << setprecision(10) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(11)\t: " << setprecision(11) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(12)\t: " << setprecision(12) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(13)\t: " << setprecision(13) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(14)\t: " << setprecision(14) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(15)\t: " << setprecision(15) << d14 << endl;
                cout << "d14 = 1234567.123456789123\t\t:setprecision(16)\t: " << setprecision(16) << d14 << endl;
                cout << "d15 = 1234567.1234567891234\t\t:setprecision(16)\t: " << setprecision(16) << d15 << endl;
                cout << "d16 = 1234567.12345678912345\t\t:setprecision(16)\t: " << setprecision(16) << d16 << endl;
                cout << "d17 = 1234567.123456789123456\t\t:setprecision(16)\t: " << setprecision(16) << d17 << endl;
                cout << "d18 = 1234567.1234567891234567\t\t:setprecision(16)\t: " << setprecision(16) << d18 << endl;
                cout << "d19 = 1234567.12345678912345678\t\t:setprecision(16)\t: " << setprecision(16) << d19 << endl;
                cout << "d20 = 1234567.123456789123456789\t:setprecision(16)\t: " << setprecision(16) << d20 << endl;
                cout << "d20 = 1234567.123456789123456789\t:setprecision(17)\t: " << setprecision(17) << d20 << endl;
                cout << "d20 = 1234567.123456789123456789\t:setprecision(18)\t: " << setprecision(18) << d20 << endl;
                cout << "d20 = 1234567.123456789123456789\t:setprecision(19)\t: " << setprecision(19) << d20 << endl;

                cout << "\nConclusion 3:C++ double max precision is 16" << endl << endl;
        }

        {
                double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20;

                d2 = 123;
                d3 = 123.1;
                d4 = 123.12;
                d5 = 123.123;
                d6 = 123.1234;
                d7 = 123.12345;
                d8 = 123.123456;
                d9 = 123.1234567;
                d10 = 123.12345678;
                d11 = 123.123456789;

                cout << "d2 = 123\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << fixed << d2 << endl;
                cout << "d3 = 123.1\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d3 << endl;
                cout << "d4 = 123.12\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d4 << endl;
                cout << "d5 = 123.123\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d5 << endl;
                cout << "d6 = 123.1234\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d6 << endl;
                cout << "d7 = 123.12345\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d7 << endl;
                cout << "d8 = 123.123456\t\t\t:setprecision(7):fixed\t: " << setprecision(7) << d8 << endl;
                cout << "d9 = 123.1234567\t\t:setprecision(7):fixed\t: " << setprecision(7) << d9 << endl;
                cout << "d10 = 123.12345678\t\t:setprecision(7):fixed\t: " << setprecision(7) << d10 << endl;
                cout << "d11 = 123.123456789\t\t:setprecision(7):fixed\t: " << setprecision(7) << d11 << endl;

                cout.unsetf(ios::fixed);

                cout << "\nConclusion 4:C++ setprecision() and fixed can control the number of digits after point" 
                     << endl << endl;
        }

        cout << "\n\t------cpp_run_double()------\n" << endl;        
}

void cpp_run()
{
        cout << "\n\t======cpp_run()======\n" << endl;

        cpp_run_float();

        cpp_run_double();

        cout << "\n\t------cpp_run()------\n" << endl;
}


int main()
{

        cout << "sizeof(float)\t=" << sizeof(float) << endl;
        cout << "sizeof(double)\t=" << sizeof(double) << endl;

        c_run();

        cpp_run();

        return 0;
}
