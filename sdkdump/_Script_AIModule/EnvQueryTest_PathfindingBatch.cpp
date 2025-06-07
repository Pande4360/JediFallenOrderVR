#include "..\FUObjectArray.hpp"
#include "EnvQueryTest_Pathfinding.hpp"
#include "EnvQueryTest_PathfindingBatch.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_PathfindingBatch::get_ScanRangeMultiplier() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_PathfindingBatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_PathfindingBatch");
    return result;
}
