#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "RsMaterialExpressionAverageNormalLength.hpp"
void* _Script_Engine::RsMaterialExpressionAverageNormalLength::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialExpressionAverageNormalLength::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialExpressionAverageNormalLength");
    return result;
}
