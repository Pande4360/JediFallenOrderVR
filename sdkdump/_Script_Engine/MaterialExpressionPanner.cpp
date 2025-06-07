#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionPanner.hpp"
void* _Script_Engine::MaterialExpressionPanner::get_Coordinate() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionPanner::get_SpeedY() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_Engine::MaterialExpressionPanner::get_Time() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::MaterialExpressionPanner::get_SpeedX() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::MaterialExpressionPanner::get_Speed() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::MaterialExpressionPanner::get_bFractionalPart() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialExpressionPanner::get_ConstCoordinate() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Engine::MaterialExpressionPanner::set_bFractionalPart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionPanner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionPanner");
    return result;
}
