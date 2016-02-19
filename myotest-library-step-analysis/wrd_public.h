#ifndef WRD_PUBLIC
#define WRD_PUBLIC

/***************************************************************************
 *
  __  __             _            _        _    ____ ___
 |  \/  |_   _  ___ | |_ ___  ___| |_     / \  |  _ \_ _|
 | |\/| | | | |/ _ \| __/ _ \/ __| __|   / _ \ | |_) | |
 | |  | | |_| | (_) | ||  __/\__ \ |_   / ___ \|  __/| |
 |_|  |_|\__, |\___/ \__\___||___/\__| /_/   \_\_|  |___|
         |___/

* Copyright (C) 2015, Myotest
*
***************************************************************************/

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

/*ACTIVITY MONiTOR*/
MYOTEST_EXTERN long myoAPI_getWalkingStepCounter(void);
MYOTEST_EXTERN long myoAPI_getRunningStepCounter(void);

#ifdef  __cplusplus
}
#endif


#endif // WRD_PUBLIC
