#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FOscillator.hpp"
float& _Script_Engine::FOscillator::get_Amplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::FOscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FOscillator");
    return result;
}
float& _Script_Engine::FOscillator::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::FOscillator::get_InitialOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::FOscillator::get_Waveform() {
    return (void*)((uintptr_t)this + 0x9);
}
