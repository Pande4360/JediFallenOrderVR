#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatingPawnMovement.hpp"
#include "PawnMovementComponent.hpp"
float& _Script_Engine::FloatingPawnMovement::get_MaxSpeed() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::FloatingPawnMovement::get_Acceleration() {
    return *(float*)((uintptr_t)this + 0x20c);
}
void _Script_Engine::FloatingPawnMovement::set_bPositionCorrected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::FloatingPawnMovement::get_bPositionCorrected() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
float& _Script_Engine::FloatingPawnMovement::get_Deceleration() {
    return *(float*)((uintptr_t)this + 0x210);
}
float& _Script_Engine::FloatingPawnMovement::get_TurningBoost() {
    return *(float*)((uintptr_t)this + 0x214);
}
_Script_CoreUObject::Class* _Script_Engine::FloatingPawnMovement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.FloatingPawnMovement");
    return result;
}
