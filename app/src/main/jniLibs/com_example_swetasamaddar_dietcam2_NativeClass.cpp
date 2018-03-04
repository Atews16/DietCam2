#include<com_example_swetasamaddar_dietcam2_NativeClass.h>

JNIEXPORT jstring JNICALL Java_com_example_swetasamaddar_dietcam2_NativeClass_getMessagefromJNI
  (JNIEnv *evn, jclass obj){
    return evn->NewStringUTF("This is message from JNI");


  }

