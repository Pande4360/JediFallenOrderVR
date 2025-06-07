#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDecalMipmapLevel.hpp"
void* _Script_Engine::MaterialExpressionDecalMipmapLevel::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionDecalMipmapLevel::get_ConstWidth() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::MaterialExpressionDecalMipmapLevel::get_ConstHeight() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDecalMipmapLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDecalMipmapLevel");
    return result;
}
