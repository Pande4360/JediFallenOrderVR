#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionStaticBoolParameter.hpp"
#include "MaterialExpressionStaticSwitchParameter.hpp"
void* _Script_Engine::MaterialExpressionStaticSwitchParameter::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionStaticSwitchParameter::get_B() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStaticSwitchParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStaticSwitchParameter");
    return result;
}
