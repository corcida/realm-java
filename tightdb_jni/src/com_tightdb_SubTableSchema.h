/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_SubTableSchema */

#ifndef _Included_com_tightdb_SubTableSchema
#define _Included_com_tightdb_SubTableSchema
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_SubTableSchema
 * Method:    nativeAddColumn
 * Signature: (J[JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_SubTableSchema_nativeAddColumn
  (JNIEnv *, jobject, jlong, jlongArray, jint, jstring);

/*
 * Class:     com_tightdb_SubTableSchema
 * Method:    nativeRemoveColumn
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_SubTableSchema_nativeRemoveColumn
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     com_tightdb_SubTableSchema
 * Method:    nativeRenameColumn
 * Signature: (J[JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_SubTableSchema_nativeRenameColumn
  (JNIEnv *, jobject, jlong, jlongArray, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
