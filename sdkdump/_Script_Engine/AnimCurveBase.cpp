#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCurveBase.hpp"
void* _Script_Engine::AnimCurveBase::get_LastObservedName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCurveBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimCurveBase");
    return result;
}
void* _Script_Engine::AnimCurveBase::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::AnimCurveBase::get_CurveTypeFlags() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
