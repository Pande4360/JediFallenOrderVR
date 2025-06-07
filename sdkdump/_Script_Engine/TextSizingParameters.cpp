#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Font.hpp"
#include "TextSizingParameters.hpp"
float& _Script_Engine::TextSizingParameters::get_DrawX() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::TextSizingParameters::get_DrawYL() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::TextSizingParameters::get_DrawY() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::TextSizingParameters::get_DrawXL() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TextSizingParameters::get_SpacingAdjust() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::TextSizingParameters::get_Scaling() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::TextSizingParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TextSizingParameters");
    return result;
}
_Script_Engine::Font*& _Script_Engine::TextSizingParameters::get_DrawFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x18);
}
