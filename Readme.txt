>>>>>> in evk_7ulp.mk
add 
# Simple HAL
PRODUCT_PACKAGES += \
    android.hardware.simple@2.0-impl \
    android.hardware.simple@2.0-service 

# naruto HAL
PRODUCT_PACKAGES += \
    android.hardware.naruto@1.0-impl \
    android.hardware.naruto@1.0-service


>>>>>> in imx7.mk
add
mysimptest \
naruto_test \


>>>>>> in hardware/interfaces
add
naruto folder
simple folder


>>>>>> in system/core
add
test folder
test2 folder


>>>>>>
. build/envsetup.sh
lunch
23
PACKAGE=android.hardware.simple@2.0
LOC=hardware/interfaces/simple/2.0/default/
make hidl-gen -j64
hidl-gen -o $LOC -Lc++-impl -randroid.hardware:hardware/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE
hidl-gen -o $LOC -Landroidbp-impl -randroid.hardware:hardware/interfaces -randroid.hidl:system/libhidl/transport $PACKAGE



follow instruction in 
http://devarea.com/android-hidl-and-project-treble/#.XEXvxh_ngUU
