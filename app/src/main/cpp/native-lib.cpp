#include <jni.h>
#include <string>

extern "C" {

#include <libavcodec/avcodec.h>

}

using namespace std;

extern "C" JNIEXPORT jstring JNICALL
Java_com_raines_ffmpegdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = av_version_info();
    return env->NewStringUTF(hello.c_str());

}
