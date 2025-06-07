#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GridBlendSample.hpp"
void* _Script_Engine::GridBlendSample::get_GridElement() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::GridBlendSample::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::GridBlendSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GridBlendSample");
    return result;
}
