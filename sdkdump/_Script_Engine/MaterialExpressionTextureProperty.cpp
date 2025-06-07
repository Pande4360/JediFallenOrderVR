#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTextureProperty.hpp"
void* _Script_Engine::MaterialExpressionTextureProperty::get_TextureObject() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureProperty");
    return result;
}
void* _Script_Engine::MaterialExpressionTextureProperty::get_Property() {
    return (void*)((uintptr_t)this + 0x58);
}
