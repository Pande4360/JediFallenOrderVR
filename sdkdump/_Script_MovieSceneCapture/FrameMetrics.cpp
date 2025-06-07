#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameMetrics.hpp"
float& _Script_MovieSceneCapture::FrameMetrics::get_TotalElapsedTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_MovieSceneCapture::FrameMetrics::get_FrameDelta() {
    return *(float*)((uintptr_t)this + 0x4);
}
int32_t& _Script_MovieSceneCapture::FrameMetrics::get_FrameNumber() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_MovieSceneCapture::FrameMetrics::get_NumDroppedFrames() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::FrameMetrics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.FrameMetrics");
    return result;
}
