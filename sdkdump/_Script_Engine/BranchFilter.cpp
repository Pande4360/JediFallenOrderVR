#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BranchFilter.hpp"
void* _Script_Engine::BranchFilter::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::BranchFilter::get_BlendDepth() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::BranchFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BranchFilter");
    return result;
}
