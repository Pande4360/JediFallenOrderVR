#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionRotateAboutAxis.hpp"
void* _Script_Engine::MaterialExpressionRotateAboutAxis::get_NormalizedRotationAxis() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionRotateAboutAxis::get_RotationAngle() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionRotateAboutAxis::get_PivotPoint() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionRotateAboutAxis::get_Position() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::MaterialExpressionRotateAboutAxis::get_Period() {
    return *(float*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionRotateAboutAxis::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionRotateAboutAxis");
    return result;
}
