#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionConstant2Vector.hpp"
float& _Script_Engine::MaterialExpressionConstant2Vector::get_R() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionConstant2Vector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionConstant2Vector");
    return result;
}
float& _Script_Engine::MaterialExpressionConstant2Vector::get_G() {
    return *(float*)((uintptr_t)this + 0x44);
}
