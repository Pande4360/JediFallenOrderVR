#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSlotGroup.hpp"
void* _Script_Engine::AnimSlotGroup::get_GroupName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimSlotGroup::get_SlotNames() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSlotGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSlotGroup");
    return result;
}
