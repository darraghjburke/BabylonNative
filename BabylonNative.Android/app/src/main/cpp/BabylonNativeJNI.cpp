#include <jni.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <time.h>
#include <android/native_window.h> // requires ndk r5 or newer
#include <android/native_window_jni.h> // requires ndk r5 or newer
#include <android/log.h>

extern "C" {
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_initEngine(JNIEnv* env, jobject obj, jobject assetMgr);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_finishEngine(JNIEnv* env, jobject obj);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_surfaceCreated(JNIEnv* env, jobject obj, jobject surface);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_surfaceChanged(JNIEnv* env, jobject obj, jint width, jint height);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_openFile(JNIEnv* env, jobject obj, jstring path);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_openStream(JNIEnv* env, jobject obj, jobjectArray input);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_setTouchInfo(JNIEnv* env, jobject obj, jfloat dx, jfloat dy, jboolean down);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_setPinchInfo(JNIEnv* env, jobject obj, jfloat zoom);
    JNIEXPORT void JNICALL Java_com_android_appviewer_AndroidViewAppActivity_step(JNIEnv* env, jobject obj);
};

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_initEngine(JNIEnv* env, jobject obj,
                                                       jobject assetMgr)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_finishEngine(JNIEnv* env, jobject obj)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_surfaceCreated(JNIEnv* env, jobject obj, jobject surface)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_surfaceChanged(JNIEnv* env, jobject obj, jint width, jint height)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_openFile(JNIEnv* env, jobject obj, jstring path)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_openStream(JNIEnv* env, jobject obj, jobjectArray input)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_step(JNIEnv* env, jobject obj)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_setTouchInfo(JNIEnv* env, jobject obj, jfloat x, jfloat y, jboolean down)
{
}

JNIEXPORT void JNICALL
Java_com_android_appviewer_AndroidViewAppActivity_setPinchInfo(JNIEnv* env, jobject obj, jfloat zoom)
{
}

