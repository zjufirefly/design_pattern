srcs=$(wildcard *.cc)
objs:=$(srcs:.cc=.o)
deps:=$(srcs:.cc=.d)

CFLAGS=-c -g -Wall

prog:$(objs)
	g++ -o prog $^ -lpthread

-include $(deps)
$(objs):%.o:%.cc
	g++ $(CFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" -o $@ $<


.PHONY: clean
clean:
	rm -rf prog *.o *.d


