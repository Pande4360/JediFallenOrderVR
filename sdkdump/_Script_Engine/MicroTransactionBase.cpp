#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MicroTransactionBase.hpp"
#include "PlatformInterfaceBase.hpp"
void* _Script_Engine::MicroTransactionBase::get_AvailableProducts() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::MicroTransactionBase::get_LastError() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MicroTransactionBase::get_LastErrorSolution() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MicroTransactionBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MicroTransactionBase");
    return result;
}
