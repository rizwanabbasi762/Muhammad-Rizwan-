int main()
{
    int num;
    for (num= 1; num <= 4294967295; num+=715827882.5){
        //int (4 byte) can store values from -2,147,483,648 to +2,147,483,647.
        /* sir int can store 4294967295 data from -2,147,483,648 to +2,147,483,647
        when a number reach 2,147,483,647 then its convert in minus -2,147,483,648 and reverse counting start
        and goes to 0 then start and goes to 2,147,483,647 and then again start minus counting -2,147,483,648 to +2,147,483,647


        OUTPUT OF THIS PROGRAM IS
                1 Hello World
                715827883 Hello World
                1431655765 Hello World
                2147483647 Hello World
                -2147483648 Hello World
                -1431655765 Hello World
                -715827882 Hello World
        */


            printf( "%d Hello World\n",num);

    }
    return 0;
}

