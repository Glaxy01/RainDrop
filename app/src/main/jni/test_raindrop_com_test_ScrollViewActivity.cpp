/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>  
#include <android/log.h>  

#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#endif

/* Header for class test_raindrop_com_test_ScrollViewActivity */

#ifndef _Included_test_raindrop_com_test_ScrollViewActivity
#define _Included_test_raindrop_com_test_ScrollViewActivity
#ifdef __cplusplus
extern "C" {
#endif
/* 
 * Class: lab_sodino_jnitest_MainActivity 
 * Method: getStringFromNative 
 * Signature: ()Ljava/lang/String; 
 */
JNIEXPORT jstring JNICALL Java_test_raindrop_com_test_ScrollViewActivity_getStringFromNative (JNIEnv * env, jobject jObj){
    LOGE("log string from ndk.");
    return env->NewStringUTF("Hello From JNI!");
}

#ifdef __cplusplus
}
#endif
#endif 