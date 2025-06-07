#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWidgetCount.hpp"
void* _Script_Engine::RsWidgetCount::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::RsWidgetCount::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsWidgetCount::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsWidgetCount");
    return result;
}
