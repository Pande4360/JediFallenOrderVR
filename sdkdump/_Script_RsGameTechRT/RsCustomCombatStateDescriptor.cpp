#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCustomCombatStateDescriptor.hpp"
void* _Script_RsGameTechRT::RsCustomCombatStateDescriptor::get_State() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsCustomCombatStateDescriptor::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCustomCombatStateDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCustomCombatStateDescriptor");
    return result;
}
