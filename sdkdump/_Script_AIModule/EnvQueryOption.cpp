#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryOption.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryOption::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryOption");
    return result;
}
_Script_AIModule::EnvQueryGenerator*& _Script_AIModule::EnvQueryOption::get_Generator() {
    return *(_Script_AIModule::EnvQueryGenerator**)((uintptr_t)this + 0x28);
}
void* _Script_AIModule::EnvQueryOption::get_Tests() {
    return (void*)((uintptr_t)this + 0x30);
}
