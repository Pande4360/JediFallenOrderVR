#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PoseData.hpp"
void* _Script_Engine::PoseData::get_LocalSpacePose() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PoseData::get_TrackToBufferIndex() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PoseData::get_CurveData() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::PoseData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PoseData");
    return result;
}
