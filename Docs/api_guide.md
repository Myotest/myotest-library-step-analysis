# Myotest Step Analysis Library - API guide
## Introduction
Myotest motion analysis libraries bridge the gap between raw sensor signal and meaningful information. They allow third parties to focus on product development and user experience whilst sensor signal processing is taken care off by the libraries.

The Myotest Step Analysis library uses accelerometer sensor data to reliably count steps and automatically differentiate between walking and running. The motion sensing algorithms used in the Myotest Step Analysis library work in the background without any specific interaction from the user required.

The library is implemented in C and all functions available to the end-user are documented here. 

## Initialization 
The library needs to be initialized before use. All required buffers and data structure are allocated as part of this initialization. The “myoAPI_init” function needs to be called to initialize the library. This function takes one argument of type “myoAPI_ActivityUID” which in this case refers to the Step Analysis algorithm.

```C
    void myoAPI_init(myoAPI_ActivityUID);
```

## Release
Should the library be shut down and its use no longer required, all the resources that were allocated for it can be released using the “myoAPI_release” function. The function has no argument and does not return anything.

```C
    void myoAPI_release(void);
```

## Feeding and processing sensor signal 
The library takes 3 axes accelerometer data as input. The library expects a timestamp in milliseconds and 3 acceleration values in milli-G. Data can be fed to the library in real time, especially if read from a real sensor currently in motion. Data can also be fed to the library faster than real time; this is useful when testing the library with pre-recorded data.
Each data sample fed to the library needs to be processed, this is triggered by calling the “myoAPI_process” function

```C
    void myoAPI_acquisition(long timestamp, int accX, int accY, int accZ);
    void myoAPI_process(void);
```

## Getting results out of the library
The Step Analysis is able to differentiate between walking and running, thus it keeps two step counter. These are accessible with the following getter function:

```C
    long myoAPI_getWalkingStepCounter(void);
    long myoAPI_getRunningStepCounter(void);
```

## Engineering functionalities
The counters kept by the library can be reset using the following function: It is the repsonsability of the application layer to reset the counters. If the intended application is to have daily counters, it is up to the application to reset the counters at midnight: The library may have been made in Switzerland it does not know the time! It does taste of chocolate tough.

```C
    void myoAPI_resetCounters(void);
```

______
More information about Myotest, its technology, products and solutions are available on our website [www.myotest.com](http://www.myotest.com "Myotest website")

______
Copyright © 2016 Myotest S.A. All rights reserved.

