#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundBase.hpp"
#include "SoundTrackKey.hpp"
float& _Script_Engine::SoundTrackKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SoundTrackKey::get_Volume() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SoundTrackKey::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundBase*& _Script_Engine::SoundTrackKey::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::SoundTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundTrackKey");
    return result;
}
