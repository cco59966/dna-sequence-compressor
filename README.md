# dna-sequence-compressor
Command-line tool in C that compresses DNA nucleotide sequences into binary using bitwise encoding, reducing storage size by up to 75%.

# DNA Sequence Compressor

A command-line tool written in C that compresses and decompresses DNA nucleotide sequences using bitwise operations. Each nucleotide (A, T, C, G) is encoded into 2 bits, reducing storage size by up to 75% compared to plain ASCII representation.

## How it works

DNA sequences consist of only 4 characters — A, T, C, G. Since 4 values fit in 2 bits, this program packs 4 nucleotides into a single byte instead of storing each character as a full 8-bit ASCII value.

| Nucleotide | Binary |
|------------|--------|
| A | 00 |
| T | 01 |
| C | 10 |
| G | 11 |

## Tech Stack

- Language: C
- Build tool: Make
- Concepts: Bitwise operations, memory-efficient encoding, command-line argument parsing

## Getting Started

**Requirements:** GCC and Make installed on your machine.

**Build the project:**
```bash
make
```

**Compress a DNA sequence:**
```bash
./proj1.out -c ATTCGG
```

**Decompress back to a sequence:**
```bash
./proj1.out -d 6 27 192
```
The first argument after `-d` is the original sequence length, followed by the compressed integers.

**Run the example from the Makefile:**
```bash
make run
```

**Clean build files:**
```bash
make clean
```

## Project Structure
