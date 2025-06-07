#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "RsMaterialExpressionClothAmbient.hpp"
void* _Script_Engine::RsMaterialExpressionClothAmbient::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialExpressionClothAmbient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialExpressionClothAmbient");
    return result;
}
