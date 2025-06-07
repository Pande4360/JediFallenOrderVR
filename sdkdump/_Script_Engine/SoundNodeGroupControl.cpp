#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeGroupControl.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeGroupControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeGroupControl");
    return result;
}
void* _Script_Engine::SoundNodeGroupControl::get_GroupSizes() {
    return (void*)((uintptr_t)this + 0x38);
}
