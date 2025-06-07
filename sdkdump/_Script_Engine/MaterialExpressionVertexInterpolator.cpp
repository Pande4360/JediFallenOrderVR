#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionVertexInterpolator.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVertexInterpolator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVertexInterpolator");
    return result;
}
void* _Script_Engine::MaterialExpressionVertexInterpolator::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
