#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NavCollisionBase.hpp"
#include "NavCollision.hpp"
void* _Script_NavigationSystem::NavCollision::get_CylinderCollision() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavCollision");
    return result;
}
void* _Script_NavigationSystem::NavCollision::get_BoxCollision() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_NavigationSystem::NavCollision::get_AreaClass() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_NavigationSystem::NavCollision::get_bGatherConvexGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavCollision::set_bGatherConvexGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
