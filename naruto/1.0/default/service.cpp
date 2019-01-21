#include <android/hardware/naruto/1.0/INaruto.h>

#include <hidl/LegacySupport.h>

#include "Naruto.h"

using android::hardware::naruto::V1_0::INaruto;
using android::hardware::naruto::V1_0::implementation::Naruto;
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::sp;

int main() {
      int res;
      android::sp<INaruto> ser = Naruto::getInstance();
      ALOGE("naruto main");
      configureRpcThreadpool(1, true /*callerWillJoin*/);

      if (ser != nullptr) {
          res = ser->registerAsService();
          if(res != 0)
            ALOGE("Can't register instance of SimpleHardware, nullptr");
      } else {
          ALOGE("Can't create instance of SimpleHardware, nullptr");
       }

      joinRpcThreadpool();

      return 0; // should never get here
}
