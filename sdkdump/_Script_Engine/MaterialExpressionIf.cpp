#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionIf.hpp"
void* _Script_Engine::MaterialExpressionIf::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionIf::get_AGreaterThanB() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionIf::get_B() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionIf::get_AEqualsB() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::MaterialExpressionIf::get_ALessThanB() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::MaterialExpressionIf::get_EqualsThreshold() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::MaterialExpressionIf::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_Engine::MaterialExpressionIf::get_ConstAEqualsB() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionIf::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionIf");
    return result;
}
