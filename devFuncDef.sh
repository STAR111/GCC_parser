gccConfigAndBuild()
{
    pushd ./gcc-build;
    ../gcc-misra-all/configure --disable-bootstrap
    make;
    popd;
}

gccBuild()
{
    pushd ./gcc-build;
    ../gcc-misra-all/configure --enable-languages=c
    make;
    popd;
}

gccT1()
{
    pushd ./gcc-build/test;
    echo ------------------10.1.a.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 10.1.a.c;
    echo ------------------10.1.b.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 10.1.b.c;
    echo ------------------10.1.c.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 10.1.c.c;
    echo ------------------10.1.d.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 10.1.d.c;
    popd;
}

gccT2()
{
    pushd ./gcc-build/test;
    echo ------------------10.2.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 10.2.c;
    popd;
}

gccT5()
{
    pushd ./gcc-build/test;
    echo ------------------10.5.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf -Wall 10.5.c;
    popd;
}

gccBT()
{
    gccBuild;
    gccT1;
    gccT2;
    gccT5;
}
gccBT
