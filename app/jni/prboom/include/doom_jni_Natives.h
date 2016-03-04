/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class doom_jni_Natives */

#ifndef _Included_doom_jni_Natives
#define _Included_doom_jni_Natives
#ifdef __cplusplus
extern "C" {
#endif
#undef doom_jni_Natives_EV_KEYDOWN
#define doom_jni_Natives_EV_KEYDOWN 0L
#undef doom_jni_Natives_EV_KEYUP
#define doom_jni_Natives_EV_KEYUP 1L
#undef doom_jni_Natives_EV_MOUSE
#define doom_jni_Natives_EV_MOUSE 2L
/*
 * Class:     doom_util_Natives
 * Method:    DoomInit
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_DoomInit
  (JNIEnv *, jclass, jobjectArray, jstring);

/*
 * Class:     doom_util_Natives
 * Method:    DoomInit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_DoomStartFrame
        (JNIEnv *, jclass, float, float, float);

/*
 * Class:     doom_util_Natives
 * Method:    DoomInit
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_DoomDrawEye
        (JNIEnv *, jclass, jint);

/*
 * Class:     doom_util_Natives
 * Method:    DoomInit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_DoomEndFrame
        (JNIEnv *, jclass);

/*
 * Class:     doom_util_Natives
 * Method:    keyEvent
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_keyEvent
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     doom_util_Natives
 * Method:    motionEvent
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_motionEvent
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     doom_util_Natives
 * Method:    setVideoMode
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_doom_util_Natives_setVideoMode
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
