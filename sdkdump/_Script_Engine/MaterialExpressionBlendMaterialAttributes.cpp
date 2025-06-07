#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionBlendMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionBlendMaterialAttributes::get_VertexAttributeBlendType() {
    return (void*)((uintptr_t)this + 0x99);
}
void* _Script_Engine::MaterialExpressionBlendMaterialAttributes::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBlendMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBlendMaterialAttributes");
    return result;
}
void* _Script_Engine::MaterialExpressionBlendMaterialAttributes::get_B() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionBlendMaterialAttributes::get_Alpha() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::MaterialExpressionBlendMaterialAttributes::get_PixelAttributeBlendType() {
    return (void*)((uintptr_t)this + 0x98);
}
