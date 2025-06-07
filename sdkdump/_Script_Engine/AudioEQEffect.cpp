#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioEQEffect.hpp"
float& _Script_Engine::AudioEQEffect::get_FrequencyCenter0() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::AudioEQEffect::get_Gain0() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::AudioEQEffect::get_FrequencyCenter2() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::AudioEQEffect::get_Bandwidth0() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AudioEQEffect::get_FrequencyCenter1() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::AudioEQEffect::get_Gain1() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::AudioEQEffect::get_Bandwidth1() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::AudioEQEffect::get_Gain2() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::AudioEQEffect::get_Bandwidth2() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::AudioEQEffect::get_FrequencyCenter3() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::AudioEQEffect::get_Gain3() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::AudioEQEffect::get_Bandwidth3() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Engine::AudioEQEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioEQEffect");
    return result;
}
