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
    ../gcc-misra-all/configure --disable-bootstrap --enable-languages=c
    make -j;
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

gccT22()
{
    pushd ./gcc-build/test;
    echo ------------------2.2.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf 2.2.c;
    popd;
}

gccT41()
{
    pushd ./gcc-build/test;
    echo ------------------4.1.c---------------------------------
    ../gcc/xgcc -B ../gcc -I ../gcc/include -sei-sc sc.conf  4.1.c;
    popd;
}

gccBT()
{
    gccBuild;
    #gccT1;
    gccT22;
    gccT41;
}
gccBT
