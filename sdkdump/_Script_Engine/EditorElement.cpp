#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditorElement.hpp"
int32_t& _Script_Engine::EditorElement::get_Indices() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::EditorElement::get_Weights() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::EditorElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EditorElement");
    return result;
}
