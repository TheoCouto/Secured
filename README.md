# Secured

## About the Project
- **First Year** EPITECH Project (2023/2024)
- **Module**: Elementary Programming in C (B-CPE-110)
- **Duration**: 3 weeks (30/12/2023 - 19/01/2024)
- **Solo** Project

### Specifications
- **Binary Name**: libhastable.a
- **Language**: C
- **Compilation**: via Makefile, including re, clean, and fclean rules
- **Authorized Functions**: write, malloc, free

**You can find more information about the project in **B-CPE-110_Secured.pdf** above.*

-------------------

## Objective
The aim of this project is to develop your own **hash function** and create your own **hash table**.

### Hash Function
The hash function is the central element of a hash table, defining which table index should be used to store the data. A hash function is a mathematical function that converts any numerical data into an output string comprising a fixed number of characters or a positive integer.

Hash functions are the basic tools of modern cryptography that are used in information security to authenticate transactions, messages, and digital signatures!

One of your first goals will be to develop your own hash function, which you can then use for your hash table.

Your own hash function:
```
int hash(char *key, int len);
```

There are **4 criteria** for determining whether a hash function is good:
1. The output string is entirely determined by the hashed data (constants are allowed but must be justified!)
2. All input data is used in hashing
3. Two almost identical inputs give very different output values
4. The hash function evenly distributes the data in the hash table!

In the library you render, there will be a hash function like this one. `key` being the value to be
hashed and `len` being the size of the hash table (some hash methods take table size into account).

Usually, the hash function gives us the index directly, modulated by the size of the table, but in
this case we’ll return the hashed value and do the modulation ourselves later.

### Hash Table
Hash tables are highly appreciated by developers for the speed with which they can access their data. Other programming languages also have usable hash tables, such as C++’s `unordered_map` (formerly called `hash_map`). 

In the library you’re rendering, there will be two functions for creating and destroying a hash table:

- *Creating and deleting the hash table:*
```
hashtable_t *new_hashtable (int (*hash)(char *, int), int len);
void delete_hashtable( hashtable_t *ht);
```
The `new_hashtable` function returns a pointer to a structure imposed on you, a `hashtable_t` structure. What’s more, you’ll notice that the `new_hashtable` takes a `hash` parameter, which is nothing other than a pointer to a function! This allows each hash table to be assigned its own function.

It’s up to you to decide what to put in the structure, and what type of data structure to use for the table. . . !

4 other hash table manipulation functions are also requested:

- *Handling the hash table:*
```
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
```
-------------------

## EPITECH Tests

|UNIT TESTS|COVERAGE %|
|-|-|
|Branches|77,3%|
|Lines|82,9%|

|NAME|PASSED|CRASH|
|-|-|-|
|Algorithm app. - Hash function|4/4|No|
|Algorithm app. - Hash table|5/5|No|
|Basics|6/6|No|
|Data Structure|4/5|No|
|Optimization|0/5|No|
|Robustness|9/10|No|
|**TOTAL**|**28/35**|**No**|

|***FINAL GRADE***|***15,1/20***|
|-|-|
