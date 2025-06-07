#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraExposureSettings.hpp"
float& _Script_Engine::CameraExposureSettings::get_LowPercent() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::CameraExposureSettings::get_Method() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::CameraExposureSettings::get_HighPercent() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CameraExposureSettings::get_SpeedDown() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::CameraExposureSettings::get_MinBrightness() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::CameraExposureSettings::get_MaxBrightness() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::CameraExposureSettings::get_SpeedUp() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::CameraExposureSettings::get_Bias() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::CameraExposureSettings::get_HistogramLogMin() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::CameraExposureSettings::get_HistogramLogMax() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::CameraExposureSettings::get_CalibrationConstant() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::CameraExposureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraExposureSettings");
    return result;
}
