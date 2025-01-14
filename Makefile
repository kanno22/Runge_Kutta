CC = gcc
CXX = g++
CFLAGS = -O -g -I -Wall -Wno-unused-result
CXXFLAGS= -std=c++11 $(CFLAGS)

SUFFIX = .cpp
SRCDIR = ./src
SRCS = sample.cpp Calc.cpp Log.cpp

OBJDIR = ./obj
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRCS))))

LIBDIR = ./lib
LIBS = #-l pthread -l m -L. -l dx2lib_x64

TARGET = run

INCDIR = .

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(LIBS) $^ 

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp 
	@[ -d $(OBJDIR) ]
	$(CXX) -o $@ $(LIBS) -c $<

.PHONY: all

all: clean $(OBJDIR) $(TARGET)

.PHONY: clean 
 
clean:
	rm -rf ./*.o $(OBJDIR)/*.o $(TARGET) *.exe
