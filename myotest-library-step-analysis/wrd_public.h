#ifndef WRD_PUBLIC
#define WRD_PUBLIC

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

typedef enum myoAPI_ExerciseUID
{
    STEP_ANALYSIS = 1
} myoAPI_ExerciseUID;


//#define MYOTEST_EXTERN __declspec(dllexport)
#define MYOTEST_EXTERN extern

#ifdef  __cplusplus
extern "C" {
#endif

/************************************************************************/
/* Name : myoAPI_init                                                   */
/* in   : Exercise UID                                                  */
/* out  : 0 = Error ; 1 = Initialization ok                             */
/*        2 = ExerciseUID not recognised                                */
/************************************************************************/
MYOTEST_EXTERN short myoAPI_init(myoAPI_ExerciseUID);

/************************************************************************/
/* Name : myoAPI_release                                                */
/* in   : none                                                          */
/* out  : 0 = Error ; 1 = Ok ; 2 = ExerciseUID not recognised           */
/************************************************************************/
MYOTEST_EXTERN short myoAPI_release(void);

/************************************************************************/
/* Name : myoAPI_acquisition                                            */
/* in   : timestamp in millisecond                                      */
/*        acceleration axis X, Y and Z in milli g                       */
/* out  : 0 = Default ; 1 = Input buffer full => need to call process   */
/*        2 = ExerciseUID not recognised                                */
/************************************************************************/
MYOTEST_EXTERN short myoAPI_acquisition(long timestamp_InMs, int accelerationX_InMg, int accelerationY_InMg, int accelerationZ_InMg);

/************************************************************************/
/* Name : myoAPI_process                                                */
/* in   : none                                                          */
/* out  : 0 = Default ; 1 = The process is busy                         */
/*        2 = ExerciseUID not recognised                                */
/************************************************************************/
MYOTEST_EXTERN short myoAPI_process(void);

/************************************************************************/
/* Name : myoAPI_resetCounters                                          */
/* in   : none                                                          */
/* out  : 0 = Error ; 1 = Ok ; 2 = ExerciseUID not recognised           */
/************************************************************************/
MYOTEST_EXTERN short myoAPI_resetCounters(void);


/**** GETTER ****/
MYOTEST_EXTERN long myoAPI_getWalkingStepCounter(void);
MYOTEST_EXTERN long myoAPI_getRunningStepCounter(void);
MYOTEST_EXTERN long myoAPI_getAlgoPath(void);

#ifdef  __cplusplus
}
#endif

#endif // WRD_PUBLIC
