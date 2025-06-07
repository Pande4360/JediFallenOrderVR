#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSpeedTree.hpp"
void* _Script_Engine::MaterialExpressionSpeedTree::get_LODType() {
    return (void*)((uintptr_t)this + 0xa2);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_GeometryInput() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_WindInput() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_LODInput() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_ExtraBendWS() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_GeometryType() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::MaterialExpressionSpeedTree::get_BillboardThreshold() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_WindType() {
    return (void*)((uintptr_t)this + 0xa1);
}
bool _Script_Engine::MaterialExpressionSpeedTree::get_bAccurateWindVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionSpeedTree::set_bAccurateWindVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSpeedTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSpeedTree");
    return result;
}
