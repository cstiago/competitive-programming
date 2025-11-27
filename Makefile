CXX = g++
CXXFLAGS = -Wall -Wextra -Wconversion -Winvalid-pch -O2 -std=c++23 -DLOCAL
LDFLAGS = -static -Wl,-z,stack-size=268435456
LDLIBS = -lstdc++exp

%: %.cpp
	$(CXX) $< $(CXXFLAGS) $(LDFLAGS) $(LDLIBS) -o $@
