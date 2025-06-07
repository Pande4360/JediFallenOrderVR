#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundEffectPreset.hpp"
#include "SoundEffectSourcePreset.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundEffectSourcePreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundEffectSourcePreset");
    return result;
}
