#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FloatProperty.hpp"
#include "CurveFloat.hpp"
#include "TimelineFloatTrack.hpp"
_Script_Engine::CurveFloat*& _Script_Engine::TimelineFloatTrack::get_FloatCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TimelineFloatTrack::get_InterpFunc() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TimelineFloatTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::TimelineFloatTrack::get_FloatPropertyName() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::TimelineFloatTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimelineFloatTrack");
    return result;
}
_Script_CoreUObject::FloatProperty*& _Script_Engine::TimelineFloatTrack::get_FloatProperty() {
    return *(_Script_CoreUObject::FloatProperty**)((uintptr_t)this + 0x28);
}
