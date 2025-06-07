#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundClass.hpp"
#include "SoundNode.hpp"
#include "SoundNodeSoundClass.hpp"
_Script_Engine::SoundClass*& _Script_Engine::SoundNodeSoundClass::get_SoundClassOverride() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeSoundClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeSoundClass");
    return result;
}
