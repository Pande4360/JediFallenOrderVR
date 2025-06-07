#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWidgetPoolInitData.hpp"
void* _Script_Engine::RsWidgetPoolInitData::get_InitAmount() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsWidgetPoolInitData::get_WidgetToInit() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsWidgetPoolInitData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsWidgetPoolInitData");
    return result;
}
