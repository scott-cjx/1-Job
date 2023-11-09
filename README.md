# Overview

`1 Job` is a Custom Designed PCB by [Scott CJX](https://scott-cjx.github.io) for [Nanyang Venture Formula NVF](https://nanyang-venture-formula.github.io/). Since its designer is a software person, `1 Job` is created to follow the principle of programming, having only `1 Job`.

![img-1-job-pcb](./rsc/img-1-job-pcb.png)

As this PCB is designed to have `1 Job`, you may then wonder what is that `1 Job`. Well it is meant to be one of many nodes in CanBus network. Its job is to act as either an [Input](#input) or [Output](#output) node. More will be explained.

## You might want to see: 
    
- (Brain)[https://scott-cjx.github.io/brain] - `1 Job's` partner-in-crime
- (NVF-Data Acq)[https://nanyang-venture-formula.github.io/] - how `1 Job` and `Brain` would work together to form a comprehensive Car EE System.

## Input

An Input node is one that will take in a user input or sensor interface and transmit its reading to the CanBus network. Some examples sensors that `1 Job` will interface with incldue:

- (Analog) Potentiometer
- (Digital) Push Button/ Switch

The standard program flow of an Input node will be as follows:

``` mermaid
flowchart TD
    A[Setup] --> B(Loop)
    B --> C(Read sensor value)
    C --> D(Process sensor value)
    D --> E(Transmit processed \nvalues via CanBus)
    E --> B
```

## Output

