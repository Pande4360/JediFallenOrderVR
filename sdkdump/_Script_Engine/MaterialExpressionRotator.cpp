#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionRotator.hpp"
void* _Script_Engine::MaterialExpressionRotator::get_Coordinate() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionRotator::get_CenterY() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::MaterialExpressionRotator::get_Time() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRotator");
    return result;
}
float& _Script_Engine::MaterialExpressionRotator::get_Speed() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::MaterialExpressionRotator::get_CenterX() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionRotator::get_ConstCoordinate() {
    return (void*)((uintptr_t)this + 0x7c);
}
