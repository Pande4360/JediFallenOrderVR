#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstToggle.hpp"
void* _Script_Engine::InterpTrackInstToggle::get_Action() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::InterpTrackInstToggle::get_bSavedActiveState() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_Engine::InterpTrackInstToggle::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstToggle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstToggle");
    return result;
}
void _Script_Engine::InterpTrackInstToggle::set_bSavedActiveState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
