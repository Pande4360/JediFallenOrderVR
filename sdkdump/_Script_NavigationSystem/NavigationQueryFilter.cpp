#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavigationQueryFilter.hpp"
void* _Script_NavigationSystem::NavigationQueryFilter::get_Areas() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_NavigationSystem::NavigationQueryFilter::get_ExcludeFlags() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_NavigationSystem::NavigationQueryFilter::get_IncludeFlags() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationQueryFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationQueryFilter");
    return result;
}
