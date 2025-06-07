#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioComponentParam.hpp"
#include "SoundWave.hpp"
void* _Script_Engine::AudioComponentParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AudioComponentParam::get_FloatParam() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::AudioComponentParam::get_BoolParam() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
int32_t& _Script_Engine::AudioComponentParam::get_IntParam() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void _Script_Engine::AudioComponentParam::set_BoolParam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundWave*& _Script_Engine::AudioComponentParam::get_SoundWaveParam() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::AudioComponentParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioComponentParam");
    return result;
}
