# myotest-step-analysis-library
mbed module encapsulating the Myotest Step Analysis binary library, compiled for SiLabs EFM32GG.

Myotest libraries bridge the gap between raw sensor signal and meaningful information. They allow third parties to focus on product development and user experience whilst sensor signal processing is taken care off by the libraries.

The Step Analysis library is a technology demonstrator made available by Myotest. It is, amongst other things, able to reliably count steps and automatically differentiate between walking and running.

The Step Analysis library takes raw sensor signal as input (raw 3 axis accelerometer signal and timestamp) and delivers meaningful features such as a daily walking step counter and a daily running step counter. The library is also able to give feedback to the application on the most appropriate sensor sampling rate and sensor data resolution, based on the current activity, to optimize power consumption. Further information is available in the Step Analysis library [API guide](Docs/api_guide.md) and in the [Integration guide](Docs/integration_guide.md).

The Step Analysis library encapsulate algorithms that work in the background without any specific interaction from the user required. It is designed to work with a sensor worn either at the wrist, on the belt or on the chest.

This library is distributed as a binary, precompiled for the SiLabs EFM32GG. It was tested both on the ‘EFM32GG Starter Kit’ and the Wearable Reference Design (WRD). Should you require this library precompiled for a different target, please get in touch with Myotest.

Myotest offers a number of libraries that can be tailor made to any third party application to include the desired algorithms, assessments or exercises with the required output features. Myotest libraries are optimized to run directly on ARM MCUs. They can also be encapsulated at the application level through available wrappers (iOS Objective C, Android Java, Tizen, Windows Phone, PC application).

More information about Myotest, its technology, products and solutions are available on our website [www.myotest.com](http://www.myotest.com "Myotest website")

______
Copyright © 2016 Myotest S.A. All rights reserved.
