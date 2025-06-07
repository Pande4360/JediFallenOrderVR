#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\StructProperty.hpp"
#include "CurveVector.hpp"
#include "TimelineVectorTrack.hpp"
_Script_Engine::CurveVector*& _Script_Engine::TimelineVectorTrack::get_VectorCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TimelineVectorTrack::get_InterpFunc() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TimelineVectorTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::StructProperty*& _Script_Engine::TimelineVectorTrack::get_VectorProperty() {
    return *(_Script_CoreUObject::StructProperty**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::TimelineVectorTrack::get_VectorPropertyName() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::TimelineVectorTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimelineVectorTrack");
    return result;
}
