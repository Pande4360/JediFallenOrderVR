#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "TextureParameterValue.hpp"
void* _Script_Engine::TextureParameterValue::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Texture*& _Script_Engine::TextureParameterValue::get_ParameterValue() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x10);
}
void* _Script_Engine::TextureParameterValue::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::TextureParameterValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TextureParameterValue");
    return result;
}
