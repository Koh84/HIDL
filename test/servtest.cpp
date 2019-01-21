#define LOG_TAG "android.hardware.simple@2.0-service"

#include <android/hardware/simple/2.0/ISimphw.h>
#include <hidl/Status.h>
#include <hidl/LegacySupport.h>
#include <utils/misc.h>
#include <utils/Log.h>
#include <hardware/hardware.h>
#include <hidl/HidlSupport.h>


#include<stdio.h>


using android::hardware::simple::V2_0::ISimphw;
using android::sp;


int main() {
      int res;
      android::sp<ISimphw> ser = ISimphw::getService();

      res = ser->simpfn(200);

      printf("val=%d\n",res);

      return 0; 
}
