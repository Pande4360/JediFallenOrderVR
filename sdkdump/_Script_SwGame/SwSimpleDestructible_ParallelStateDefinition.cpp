#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_ParallelStateDefinition.hpp"
int32_t& _Script_SwGame::SwSimpleDestructible_ParallelStateDefinition::get_PhaseStart() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SwGame::SwSimpleDestructible_ParallelStateDefinition::get_PhaseEnd() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ParallelStateDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ParallelStateDefinition");
    return result;
}
