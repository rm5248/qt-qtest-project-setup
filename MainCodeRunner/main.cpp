#include <QCoreApplication>

extern "C"{

int maincode_main( int, char** );

}

int main(int argc, char *argv[])
{
    return maincode_main( argc, argv );
}
