# makefile for binarysearch project
CC = gcc

DEPS = -MMD -MF $(@:.o=.d)
WARNINGS = -fstack-protector -Wall -W -Wcast-qual -Wwrite-strings -Wextra -Wno-unused -Wno-unused-parameter

CFLAGS += -g $(WARNINGS) $(DEPS) -std=gnu99

SOURCES = binarysearch.c test_binarysearch.c

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = test_binarysearch

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

opt: clean
	$(CC) -O2

clean:
	rm -f $(OBJECTS)