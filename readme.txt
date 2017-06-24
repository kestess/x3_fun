As these things go, I wanted to play with X3 and ended up playing with b2 for the first time.

Since my boost was home-built this is the hacky way to add dynamic libraries on a temporary basis:
export DYLD_LIBRARY_PATH=/Users/john/x3_fun/bin/darwin-4.2.1/debug:/Users/john/Downloads/boost_install/lib

Easiest way to declare BOOST_ROOT and BOOST_INSTALL without commitments:
b2 -sBOOST_ROOT=/Users/john/Downloads/boost_1_64_0/ -sBOOST_INSTALL=/Users/john/Downloads/boost_install toolset=darwin

This builds, but it's obvious that only BOOST_INSTALL should be used; however, that breaks and learning
b2 wasn't today's goal anyway.

World's worst "clean" since it isn't working:
find . | grep "\.o" | xargs -I % rm  %


