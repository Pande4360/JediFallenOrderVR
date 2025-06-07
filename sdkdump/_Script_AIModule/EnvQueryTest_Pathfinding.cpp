#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Pathfinding.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Pathfinding::get_FilterClass() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_AIModule::EnvQueryTest_Pathfinding::get_TestMode() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AIModule::EnvQueryTest_Pathfinding::get_SkipUnreachable() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_AIModule::EnvQueryTest_Pathfinding::get_Context() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_AIModule::EnvQueryTest_Pathfinding::get_PathFromContext() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Pathfinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Pathfinding");
    return result;
}
