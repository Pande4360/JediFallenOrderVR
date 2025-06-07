#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavCollisionBox.hpp"
void* _Script_NavigationSystem::NavCollisionBox::get_Offset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_NavigationSystem::NavCollisionBox::get_Extent() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavCollisionBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavCollisionBox");
    return result;
}
