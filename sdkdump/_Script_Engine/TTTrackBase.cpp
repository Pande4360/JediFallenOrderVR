#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TTTrackBase.hpp"
void* _Script_Engine::TTTrackBase::get_TrackName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::TTTrackBase::get_bIsExternalCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::TTTrackBase::set_bIsExternalCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::TTTrackBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTTrackBase");
    return result;
}
