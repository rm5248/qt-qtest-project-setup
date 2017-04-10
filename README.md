# qt-qtest-project-setup
A basic QT project with unit tests

See my blog post for details: https://rm5248.com/qtest-project-setup/

A quick overview: I was looking for a way to do tests in Qt Creator as a separate project.  This project has a basic setup for that; all the code for the main application is under MainCode.  MainCodeRunner is the program that statically links with the code in MainCode, and has a 1-line main() method to call the proper main() in MainCode.  MainCodeUnitTests contains the QTest unit tests for testing the code.

(This code has intentional bugs in it, so that you can see how QTest works)

Also, it was only after I created this project that I realzied I had essentially copied from this: https://dragly.org/2014/03/13/new-project-structure-for-projects-in-qt-creator-with-unit-tests/

Whoops.
