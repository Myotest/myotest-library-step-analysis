/* **************************************************************************
*
*
     __  __             _            _      _____
    |  \/  |           | |          | |    / ____|    /\
    | \  / |_   _  ___ | |_ ___  ___| |_  | (___     /  \
    | |\/| | | | |/ _ \| __/ _ \/ __| __|  \___ \   / /\ \
    | |  | | |_| | (_) | ||  __/\__ \ |_   ____) | / ____ \ _
    |_|  |_|\__, |\___/ \__\___||___/\__| |_____(_)_/    \_(_)
             __/ |
            |___/
*
* Copyright (c) 2004-2016 Myotest SA
*
* PackageLicenseDeclared: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
****************************************************************************/

#ifndef WRD_PUBLIC
#define WRD_PUBLIC

typedef enum myoAPI_ExerciseUID
{
    RANGE_OF_MOTION,
    ACTIVITY_MONITOR
} myoAPI_ExerciseUID;


//#define MYOTEST_EXTERN __declspec(dllexport)
#define MYOTEST_EXTERN extern

#ifdef  __cplusplus
extern "C" {
#endif

MYOTEST_EXTERN void myoAPI_init(myoAPI_ExerciseUID);
MYOTEST_EXTERN void myoAPI_release(void);

MYOTEST_EXTERN void myoAPI_acquisition(long timestamp, int accX, int accY, int accZ);
MYOTEST_EXTERN void myoAPI_process(void);
MYOTEST_EXTERN void myoAPI_resetCounters(void);

/*ACTIVITY MONITOR*/
MYOTEST_EXTERN long myoAPI_getWalkingStepCounter(void);
MYOTEST_EXTERN long myoAPI_getRunningStepCounter(void);

#ifdef  __cplusplus
}
#endif


#endif // WRD_PUBLIC
