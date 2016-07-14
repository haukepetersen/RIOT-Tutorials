# Task 3: Multithreading
Threads in RIOT are functions with signature
```C
void *thread_handler(void *arg);
```
Use [`thread_create()`](http://doc.riot-os.org/thread_8h.html#a87c94d383e64a09974fc8665f82a99b3) from
[`thread.h`](http://doc.riot-os.org/thread_8h.html) to start it
```C
pid = thread_create(stack, sizeof(stack),
                    THREAD_PRIORITY_MAIN - 1,
                    THREAD_CREATE_STACKTEST,
                    thread_handler,
                    NULL, "thread");
```

## Task 3.1: Start a thread
* Start the thread `"thread"` from within [`main()`](main.c#L15-L25)
* Run the application on `native`: `make all term`
* Check your output, it should read: `I'm in "thread" now`

[Read the doc](http://doc.riot-os.org/group__core__thread.html)

[next task](../task-04)