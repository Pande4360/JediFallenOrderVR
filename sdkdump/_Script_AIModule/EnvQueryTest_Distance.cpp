#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Distance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Distance::get_DistanceTo() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_AIModule::EnvQueryTest_Distance::get_TestMode() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Distance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Distance");
    return result;
}
