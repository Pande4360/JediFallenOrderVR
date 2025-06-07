#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackBoolProp.hpp"
void* _Script_Engine::InterpTrackBoolProp::get_BoolTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::InterpTrackBoolProp::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackBoolProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackBoolProp");
    return result;
}
