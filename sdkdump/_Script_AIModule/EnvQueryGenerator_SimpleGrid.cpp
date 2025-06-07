#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator_ProjectedPoints.hpp"
#include "EnvQueryGenerator_SimpleGrid.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_SimpleGrid::get_GridSize() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AIModule::EnvQueryGenerator_SimpleGrid::get_SpaceBetween() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AIModule::EnvQueryGenerator_SimpleGrid::get_GenerateAround() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_SimpleGrid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_SimpleGrid");
    return result;
}
