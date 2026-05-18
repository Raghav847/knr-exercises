# K&R Exercises

Repository for working through exercises from *The C Programming Language* by Brian Kernighan and Dennis Ritchie (2nd Edition).

## Structure

```text
knr-exercises/
├── ch01/      # Chapter 1 exercises
├── ch02/      # Chapter 2 exercises
├── ch03/      # Chapter 3 exercises
├── ch04/      # Chapter 4 exercises
├── ch05/      # Chapter 5 exercises
├── ch06/      # Chapter 6 exercises
├── ch07/      # Chapter 7 exercises
├── ch08/      # Chapter 8 exercises
├── Makefile
└── README.md
```

The chapter directories are currently scaffolds for organizing solutions by chapter.

## Building

The `Makefile` is set up to build a program from its matching `.c` file path.

Example:

```bash
make ch01/ex1-1
./ch01/ex1-1
```

This expects a source file at `ch01/ex1-1.c`.

## Requirements

- `gcc`
- `make`
