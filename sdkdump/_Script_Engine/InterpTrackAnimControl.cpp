#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackAnimControl.hpp"
#include "InterpTrackFloatBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackAnimControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackAnimControl");
    return result;
}
void* _Script_Engine::InterpTrackAnimControl::get_SlotName() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::InterpTrackAnimControl::get_AnimSeqs() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::InterpTrackAnimControl::get_bSkipAnimNotifiers() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackAnimControl::set_bSkipAnimNotifiers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
