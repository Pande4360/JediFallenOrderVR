#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GaussianSumBloomSettings.hpp"
float& _Script_Engine::GaussianSumBloomSettings::get_Filter1Size() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Threshold() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Filter2Size() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::GaussianSumBloomSettings::get_SizeScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Filter3Size() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Stretch() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Shape() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Filter4Size() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Filter5Size() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::GaussianSumBloomSettings::get_Filter6Size() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter1Tint() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter2Tint() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter3Tint() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter4Tint() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter5Tint() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::GaussianSumBloomSettings::get_Filter6Tint() {
    return (void*)((uintptr_t)this + 0x7c);
}
_Script_CoreUObject::Class* _Script_Engine::GaussianSumBloomSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GaussianSumBloomSettings");
    return result;
}
