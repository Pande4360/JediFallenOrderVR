#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Overlap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Overlap::get_OverlapData() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Overlap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Overlap");
    return result;
}
