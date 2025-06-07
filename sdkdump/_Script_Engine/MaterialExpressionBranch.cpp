#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionBranch.hpp"
void* _Script_Engine::MaterialExpressionBranch::get_BranchAttribute() {
    return (void*)((uintptr_t)this + 0xa1);
}
void* _Script_Engine::MaterialExpressionBranch::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionBranch::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MaterialExpressionBranch::get_B() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionBranch::get_TrueExpr() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionBranch::get_FalseExpr() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::MaterialExpressionBranch::get_Condition() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::MaterialExpressionBranch::get_ConstFalse() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBranch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBranch");
    return result;
}
