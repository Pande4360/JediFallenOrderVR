#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionClearCoatNormalCustomOutput.hpp"
#include "MaterialExpressionCustomOutput.hpp"
void* _Script_Engine::MaterialExpressionClearCoatNormalCustomOutput::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionClearCoatNormalCustomOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionClearCoatNormalCustomOutput");
    return result;
}
