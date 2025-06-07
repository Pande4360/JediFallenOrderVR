#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryGenerator_ProjectedPoints.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_ProjectedPoints::get_ProjectionData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_ProjectedPoints::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints");
    return result;
}
