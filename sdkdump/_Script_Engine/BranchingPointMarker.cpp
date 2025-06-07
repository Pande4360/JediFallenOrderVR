#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BranchingPointMarker.hpp"
int32_t& _Script_Engine::BranchingPointMarker::get_NotifyIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::BranchingPointMarker::get_TriggerTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::BranchingPointMarker::get_NotifyEventType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::BranchingPointMarker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BranchingPointMarker");
    return result;
}
