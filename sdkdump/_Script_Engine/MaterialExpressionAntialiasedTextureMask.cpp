#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionAntialiasedTextureMask.hpp"
#include "MaterialExpressionTextureSampleParameter2D.hpp"
float& _Script_Engine::MaterialExpressionAntialiasedTextureMask::get_Threshold() {
    return *(float*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::MaterialExpressionAntialiasedTextureMask::get_Channel() {
    return (void*)((uintptr_t)this + 0x11c);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionAntialiasedTextureMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionAntialiasedTextureMask");
    return result;
}
