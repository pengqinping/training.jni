#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_twp_jni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "xxxx Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
