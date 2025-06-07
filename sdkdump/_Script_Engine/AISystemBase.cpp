#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AISystemBase.hpp"
void* _Script_Engine::AISystemBase::get_AISystemClassName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::AISystemBase::get_AISystemModuleName() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::AISystemBase::set_bInstantiateAISystemOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AISystemBase::get_bInstantiateAISystemOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::AISystemBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AISystemBase");
    return result;
}
