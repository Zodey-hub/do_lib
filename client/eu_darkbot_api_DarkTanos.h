/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class eu_darkbot_api_DarkTanos */

#ifndef _Included_eu_darkbot_api_DarkTanos
#define _Included_eu_darkbot_api_DarkTanos
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    setData
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_setData
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    createWindow
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_createWindow
  (JNIEnv *, jobject);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    setSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_setSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    setVisible
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_setVisible
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    setMinimized
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_setMinimized
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    reload
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_reload
  (JNIEnv *, jobject);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_eu_darkbot_api_DarkTanos_isValid
  (JNIEnv *, jobject);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    getMemoryUsage
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_eu_darkbot_api_DarkTanos_getMemoryUsage
  (JNIEnv *, jobject);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_eu_darkbot_api_DarkTanos_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    keyClick
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_keyClick
  (JNIEnv *, jobject, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    sendText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_sendText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    mouseMove
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_mouseMove
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    mouseDown
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_mouseDown
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    mouseUp
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_mouseUp
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    mouseClick
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_mouseClick
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_eu_darkbot_api_DarkTanos_readInt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_eu_darkbot_api_DarkTanos_readLong
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_eu_darkbot_api_DarkTanos_readDouble
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readBoolean
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_eu_darkbot_api_DarkTanos_readBoolean
  (JNIEnv *, jobject, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readBytes
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_eu_darkbot_api_DarkTanos_readBytes__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    readBytes
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_readBytes__J_3BI
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    replaceInt
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_replaceInt
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    replaceLong
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_replaceLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    replaceDouble
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_replaceDouble
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    replaceBoolean
 * Signature: (JZZ)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_replaceBoolean
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    writeInt
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_writeInt
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    writeLong
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_writeLong
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    writeDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_writeDouble
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    writeBoolean
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_writeBoolean
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    writeBytes
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_writeBytes
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    queryInt
 * Signature: (II)[J
 */
JNIEXPORT jlongArray JNICALL Java_eu_darkbot_api_DarkTanos_queryInt
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    queryLong
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_eu_darkbot_api_DarkTanos_queryLong
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    queryBytes
 * Signature: ([BI)[J
 */
JNIEXPORT jlongArray JNICALL Java_eu_darkbot_api_DarkTanos_queryBytes
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    sendNotification
 * Signature: (JLjava/lang/String;[J)Z
 */
JNIEXPORT jboolean JNICALL Java_eu_darkbot_api_DarkTanos_sendNotification
  (JNIEnv *, jobject, jlong, jstring, jlongArray);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    selectEntity
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_selectEntity
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    refine
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_eu_darkbot_api_DarkTanos_refine
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    useItem
 * Signature: (JLjava/lang/String;I[J)Z
 */
JNIEXPORT jboolean JNICALL Java_eu_darkbot_api_DarkTanos_useItem
  (JNIEnv *, jobject, jlong, jstring, jint, jlongArray);

/*
 * Class:     eu_darkbot_api_DarkTanos
 * Method:    callMethod
 * Signature: (JI[J)J
 */
JNIEXPORT jlong JNICALL Java_eu_darkbot_api_DarkTanos_callMethod
  (JNIEnv *, jobject, jlong, jint, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
