# fifo
A first-in-first-out(FIFO) queue implemented in C, based on the linux kernel linked list. It is a practice of how to use list_head data structure, etc. 

## Usage 
   #define QueueElement <TYPE>
   Queue* q = initQueue(20);
   QueueElement e1,e2; 
   /* init e1, e2*/ 
   enqueue(q,e1);
   enqueue(q,e2);
   dequeue(q);

## Credits
   list.h is copied from Kulesh Shanmugasundaram's site: 
   http://isis.poly.edu/kulesh/stuff/src/klist/
   Kulesh deserves all the credits for posting the explanation and
the adapted source code. 