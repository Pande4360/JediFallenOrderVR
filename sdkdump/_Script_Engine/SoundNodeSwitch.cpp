#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeSwitch.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeSwitch");
    return result;
}
void* _Script_Engine::SoundNodeSwitch::get_IntParameterName() {
    return (void*)((uintptr_t)this + 0x38);
}
