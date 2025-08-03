C - HASH TABLES

A hash table in C/C++ is a data structure that maps keys to values.
A hash table uses a hash function to compute indexes for a key.
You can store the value at the appropriate location based on the hash table index.
The benefit of using a hash table is its very fast access time.

ABOUT LAST TASK: 

Your hash table is organized like this:

<pre> ```text ht └── array (table) ├── [0] → node1 → node2 → NULL ├── [1] → NULL ├── [2] → node3 → NULL └── ... ``` </pre>

Each index [i] in the array can point to:

A single node (hash_node_t)

Or a linked list of multiple nodes (in case of a collision)

💡 Therefore:

You must loop through every index in the array using a for loop.

At each index, you must traverse the linked list using a while loop.

For each node, you need to free the key, free the value, and free the node itself.

This ensures all dynamically allocated memory is properly released, avoiding memory leaks. 
