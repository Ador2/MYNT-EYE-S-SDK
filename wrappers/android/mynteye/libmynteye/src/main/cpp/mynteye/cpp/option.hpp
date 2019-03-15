// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include <functional>

namespace mynteye_jni {

enum class Option : int {
    /**
     * Image gain, valid if manual-exposure
     *  range: [0,48], default: 24
     */
    GAIN,
    /**
     * Image brightness, valid if manual-exposure
     *  range: [0,240], default: 120
     */
    BRIGHTNESS,
    /**
     * Image contrast, valid if manual-exposure
     *  range: [0,255], default: 127
     */
    CONTRAST,
    /**
     * Image frame rate, must set IMU_FREQUENCY together
     *  values: {10,15,20,25,30,35,40,45,50,55,60}, default: 25
     */
    FRAME_RATE,
    /**
     * IMU frequency, must set FRAME_RATE together
     *  values: {100,200,250,333,500}, default: 200
     */
    IMU_FREQUENCY,
    /**
     * Exposure mode
     *  0: enable auto-exposure
     *  1: disable auto-exposure (manual-exposure)
     */
    EXPOSURE_MODE,
    /**
     * Max gain, valid if auto-exposure
     *  range of standard 1: [0,48], default: 48
     *  range of standard 2: [0,255], default: 8
     */
    MAX_GAIN,
    /**
     * Max exposure time, valid if auto-exposure
     *  range of standard 1: [0,240], default: 240
     *  range of standard 2: [0,1000], default: 333
     */
    MAX_EXPOSURE_TIME,
    /**
     * min exposure time, valid if auto-exposure
     *  range: [0,1000], default: 0
     */
    MIN_EXPOSURE_TIME,
    /**
     * Desired brightness, valid if auto-exposure
     *  range of standard 1: [0,255], default: 192
     *  range of standard 2: [1,255], default: 122
     */
    DESIRED_BRIGHTNESS,
    /**
     * IR control
     *  range: [0,160], default: 0
     */
    IR_CONTROL,
    /**
     * HDR mode
     *  0: 10-bit
     *  1: 12-bit
     */
    HDR_MODE,
    /**
     * The range of accelerometer
     *  value of standard 1: {4,8,16,32}, default: 8
     *  value of standard 2: {6,12,24,48}, default: 12
     */
    ACCELEROMETER_RANGE,
    /**
     * The range of gyroscope
     *  value of standard 1: {500,1000,2000,4000}, default: 1000
     *  value of standard 2: {250,500,1000,2000,4000}, default: 1000
     */
    GYROSCOPE_RANGE,
    /**
     * The parameter of accelerometer low pass filter
     *  values: {0,1,2}, default: 2
     */
    ACCELEROMETER_LOW_PASS_FILTER,
    /**
     * The parameter of gyroscope low pass filter
     *  values: {23,64}, default: 64
     */
    GYROSCOPE_LOW_PASS_FILTER,
    /** Zero drift calibration */
    ZERO_DRIFT_CALIBRATION,
    /** Erase chip */
    ERASE_CHIP,
};

}  // namespace mynteye_jni

namespace std {

template <>
struct hash<::mynteye_jni::Option> {
    size_t operator()(::mynteye_jni::Option type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
