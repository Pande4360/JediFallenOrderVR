#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBitfield_NavPermissionFlags.hpp"
_Script_CoreUObject::Class* _Script_Engine::RsBitfield_NavPermissionFlags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsBitfield_NavPermissionFlags");
    return result;
}
void* _Script_Engine::RsBitfield_NavPermissionFlags::get_Bits() {
    return (void*)((uintptr_t)this + 0x0);
}
