[previous task](../task-03)

# Task 4: Timers
[`ztimer`](https://doc.riot-os.org/group__sys__ztimer.html) is the high level API of RIOT to multiplex hardware timers.
For this task we need only the following functions

    - `ztimer_now(ZTIMER_SEC)` to get current system time in seconds
    - `ztimer_sleep(ZTIMER_SEC, sec)` to sleep `sec` seconds

## Task 4.1: Use `ztimer`
* Note the inclusion of `ztimer` in the [Makefile](Makefile)
```Makefile
USEMODULE += ztimer_sec
```
* Create a thread in [`main.c`](main.c#L12) that prints the current system time every 2 seconds
* Check the existence of the thread with `ps` shell command

[Read the doc](https://doc.riot-os.org/group__sys__ztimer.html)

[next task](../task-05)
