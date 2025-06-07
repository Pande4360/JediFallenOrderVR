#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlendParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlendParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlendParameter");
    return result;
}
void* _Script_Engine::BlendParameter::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::BlendParameter::get_Min() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::BlendParameter::get_GridNum() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::BlendParameter::get_Max() {
    return *(float*)((uintptr_t)this + 0x14);
}
