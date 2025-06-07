#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavCollisionCylinder.hpp"
void* _Script_NavigationSystem::NavCollisionCylinder::get_Offset() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_NavigationSystem::NavCollisionCylinder::get_Radius() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_NavigationSystem::NavCollisionCylinder::get_Height() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavCollisionCylinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavCollisionCylinder");
    return result;
}
