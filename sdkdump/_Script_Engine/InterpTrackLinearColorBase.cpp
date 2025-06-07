#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackLinearColorBase.hpp"
void* _Script_Engine::InterpTrackLinearColorBase::get_LinearColorTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackLinearColorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackLinearColorBase");
    return result;
}
float& _Script_Engine::InterpTrackLinearColorBase::get_CurveTension() {
    return *(float*)((uintptr_t)this + 0x88);
}
