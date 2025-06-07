#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Font.hpp"
#include "FontParameterValue.hpp"
void* _Script_Engine::FontParameterValue::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Font*& _Script_Engine::FontParameterValue::get_FontValue() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::FontParameterValue::get_FontPage() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::FontParameterValue::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::FontParameterValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FontParameterValue");
    return result;
}
