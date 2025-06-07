#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_CollisionWhiskers.hpp"
float& _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_FinalTraceSize() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_bDoObstructionCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
int32_t& _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_NumSmoothingPasses() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_PropagationFactor() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_OffsetSmoothTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_bStayAboveNavSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_CollisionWhiskers::get_ZPropagationReductionFactor() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_SwGame::R4CameraBehavior_CollisionWhiskers::set_bDoObstructionCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::R4CameraBehavior_CollisionWhiskers::set_bStayAboveNavSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_CollisionWhiskers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_CollisionWhiskers");
    return result;
}
