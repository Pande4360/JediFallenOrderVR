#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpressionInput.hpp"
#include "MaterialAttributesInput.hpp"
int32_t& _Script_Engine::MaterialAttributesInput::get_PropertyConnectedBitmask() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialAttributesInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialAttributesInput");
    return result;
}
