#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SignificanceManager.hpp"
void* _Script_SignificanceManager::SignificanceManager::get_SignificanceManagerClassName() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_SignificanceManager::SignificanceManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SignificanceManager.SignificanceManager");
    return result;
}
