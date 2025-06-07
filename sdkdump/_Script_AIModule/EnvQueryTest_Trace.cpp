#include "..\FUObjectArray.hpp"
#include "EnvQueryTest.hpp"
#include "EnvQueryTest_Trace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryTest_Trace::get_TraceData() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AIModule::EnvQueryTest_Trace::get_TraceFromContext() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_AIModule::EnvQueryTest_Trace::get_ItemHeightOffset() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_AIModule::EnvQueryTest_Trace::get_ContextHeightOffset() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_AIModule::EnvQueryTest_Trace::get_Context() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryTest_Trace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryTest_Trace");
    return result;
}
