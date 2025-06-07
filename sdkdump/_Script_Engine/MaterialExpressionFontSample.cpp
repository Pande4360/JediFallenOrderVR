#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Font.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFontSample.hpp"
_Script_Engine::Font*& _Script_Engine::MaterialExpressionFontSample::get_Font() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::MaterialExpressionFontSample::get_FontTexturePage() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFontSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFontSample");
    return result;
}
