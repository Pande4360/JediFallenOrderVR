#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PassiveSoundMixModifier.hpp"
#include "SoundMix.hpp"
_Script_CoreUObject::Class* _Script_Engine::PassiveSoundMixModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PassiveSoundMixModifier");
    return result;
}
_Script_Engine::SoundMix*& _Script_Engine::PassiveSoundMixModifier::get_SoundMix() {
    return *(_Script_Engine::SoundMix**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::PassiveSoundMixModifier::get_MaxVolumeThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::PassiveSoundMixModifier::get_MinVolumeThreshold() {
    return *(float*)((uintptr_t)this + 0x8);
}
