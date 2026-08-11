CC = gcc
CFLAGS = -Wall -Wextra -std=c99

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
