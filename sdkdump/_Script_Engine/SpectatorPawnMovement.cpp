#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatingPawnMovement.hpp"
#include "SpectatorPawnMovement.hpp"
bool _Script_Engine::SpectatorPawnMovement::get_bIgnoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_Engine::SpectatorPawnMovement::set_bIgnoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SpectatorPawnMovement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpectatorPawnMovement");
    return result;
}
