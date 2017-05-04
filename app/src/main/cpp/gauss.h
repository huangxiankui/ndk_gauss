/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_byhook_code_GaussBlurry */

#ifndef _Included_cn_byhook_code_GaussBlurry
#define _Included_cn_byhook_code_GaussBlurry


#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_byhook_code_GaussBlurry
 * Method:    gaussBlur
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT jint JNICALL Java_com_example_alw_myapplication_GaussBlurry_gaussBlur
  (JNIEnv *, jobject, jobject,jint radius);

/**
 * 高斯模糊算法
 **/
void GaussBlur(int* pix, int w, int h, int radius);

void * WorkerThread(void * args);

#ifdef __cplusplus
}
#endif
#endif
