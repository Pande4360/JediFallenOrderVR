#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloatConstantCurve.hpp"
#include "SoundNode.hpp"
#include "SoundNodeEnveloper.hpp"
void _Script_Engine::SoundNodeEnveloper::set_bLoopIndefinitely(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundNodeEnveloper::get_LoopStart() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::SoundNodeEnveloper::get_LoopEnd() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void _Script_Engine::SoundNodeEnveloper::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SoundNodeEnveloper::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
float& _Script_Engine::SoundNodeEnveloper::get_DurationAfterLoop() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::SoundNodeEnveloper::get_bLoopIndefinitely() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SoundNodeEnveloper::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
_Script_Engine::DistributionFloatConstantCurve*& _Script_Engine::SoundNodeEnveloper::get_VolumeInterpCurve() {
    return *(_Script_Engine::DistributionFloatConstantCurve**)((uintptr_t)this + 0x50);
}
_Script_Engine::DistributionFloatConstantCurve*& _Script_Engine::SoundNodeEnveloper::get_PitchInterpCurve() {
    return *(_Script_Engine::DistributionFloatConstantCurve**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::SoundNodeEnveloper::get_VolumeCurve() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::SoundNodeEnveloper::get_PitchCurve() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_Engine::SoundNodeEnveloper::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x150);
}
float& _Script_Engine::SoundNodeEnveloper::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::SoundNodeEnveloper::get_VolumeMin() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_Engine::SoundNodeEnveloper::get_VolumeMax() {
    return *(float*)((uintptr_t)this + 0x15c);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeEnveloper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeEnveloper");
    return result;
}
