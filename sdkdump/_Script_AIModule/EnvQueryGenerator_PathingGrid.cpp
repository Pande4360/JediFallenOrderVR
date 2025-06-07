#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator_PathingGrid.hpp"
#include "EnvQueryGenerator_SimpleGrid.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_PathingGrid::get_PathToItem() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_AIModule::EnvQueryGenerator_PathingGrid::get_NavigationFilter() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_AIModule::EnvQueryGenerator_PathingGrid::get_ScanRangeMultiplier() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_PathingGrid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_PathingGrid");
    return result;
}
