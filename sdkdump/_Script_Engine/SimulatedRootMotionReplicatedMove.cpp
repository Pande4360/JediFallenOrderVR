#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SimulatedRootMotionReplicatedMove.hpp"
float& _Script_Engine::SimulatedRootMotionReplicatedMove::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SimulatedRootMotionReplicatedMove::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SimulatedRootMotionReplicatedMove");
    return result;
}
void* _Script_Engine::SimulatedRootMotionReplicatedMove::get_RootMotion() {
    return (void*)((uintptr_t)this + 0x8);
}
