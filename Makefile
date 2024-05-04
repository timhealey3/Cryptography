CC = g++
CFLAGS = -Wall -Wextra -std=c++11

SRCS = main.cpp caesar.cpp vigenere.cpp rsa.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = cryptography

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
