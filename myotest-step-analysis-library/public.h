#ifndef PUBLIC
#define PUBLIC

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
MYOTEST_EXTERN void myoAPI_stop(void);
MYOTEST_EXTERN void myoAPI_setSpeakCallBack( void (*functPtrSpeak)(char *));
MYOTEST_EXTERN void myoAPI_setChangeAcquisitionResolutionCallBack( void (*functPtrChnAcqRes)(int) );
MYOTEST_EXTERN void myoAPI_resetCounters(void);


/* SETTER */
 //MVT_ROM
MYOTEST_EXTERN void myoAPI_speechDone(void);

	
/*ROM*/
 //MVT_ROM
MYOTEST_EXTERN float myoAPI_getCurrentAngle(void);
MYOTEST_EXTERN float myoAPI_getFinalAngle(void);


MYOTEST_EXTERN short  myoAPI_getCurrentState(void);

/*ACTIVITY MONiTOR*/

MYOTEST_EXTERN long myoAPI_getStepCounter(void);
MYOTEST_EXTERN long myoAPI_getMissingStepCounter(void);
MYOTEST_EXTERN long myoAPI_getArtifactStepCounter(void);
MYOTEST_EXTERN long myoAPI_getValidStepCounter(void);

MYOTEST_EXTERN long myoAPI_getWalkingStepCounter(void);
MYOTEST_EXTERN long myoAPI_getRunningStepCounter(void);
MYOTEST_EXTERN long myoAPI_getOtherStepCounter(void);


#ifdef  __cplusplus
}
#endif


#endif // PUBLIC

