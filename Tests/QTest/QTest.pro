TEMPLATE = subdirs
SUBDIRS += Calculator \
    Test_Calculator
CONFIG(debug, debug|release) {
SUBDIRS += Test_Calculator
}
