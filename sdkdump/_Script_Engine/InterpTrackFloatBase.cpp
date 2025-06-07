#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackFloatBase.hpp"
void* _Script_Engine::InterpTrackFloatBase::get_FloatTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::InterpTrackFloatBase::get_CurveTension() {
    return *(float*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFloatBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFloatBase");
    return result;
}
