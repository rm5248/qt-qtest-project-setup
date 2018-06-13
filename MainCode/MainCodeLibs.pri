# Linux build does not have separate 'debug' and 'release' folders when building,
# the entire directory will be either 'debug' or 'release'
linux{
    PRE_TARGETDEPS += ../MainCode/libMainCode.a
    LIBS += -L../MainCode
}

# Add in the correct location for the static library, depending on if we are
# in a debug or release(for Windows)
msvc {
    debug{
        # Ensure that qt will always re-link
        # See: http://stackoverflow.com/questions/1485435/force-relink-when-building-in-qt-creator
        PRE_TARGETDEPS += ../MainCode/debug/MainCode.lib
        LIBS += -L../MainCode/debug/
    }else{
        PRE_TARGETDEPS += ../MainCode/release/MainCode.lib
        LIBS += -L../MainCode/release/
    }
}

win32:!msvc{
    debug{
        # Ensure that qt will always re-link
        # See: http://stackoverflow.com/questions/1485435/force-relink-when-building-in-qt-creator
        PRE_TARGETDEPS += ../MainCode/debug/libMainCode.a
        LIBS += -L../MainCode/debug/
    }else{
        PRE_TARGETDEPS += ../MainCode/release/libMainCode.a
        LIBS += -L../MainCode/release/
    }
}

# MainCode is the main code library that we are going to (statically!) link with.
LIBS += -lMainCode

# Add in any other libraries here...
# for example, libraries from pkg-config
#unix: CONFIG += link_pkgconfig
#unix: PKGCONFIG += libfoo
