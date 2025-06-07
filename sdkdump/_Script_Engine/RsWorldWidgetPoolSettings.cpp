#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsWorldWidgetPoolSettings.hpp"
void* _Script_Engine::RsWorldWidgetPoolSettings::get_WidgetPoolInit() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldWidgetPoolSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsWorldWidgetPoolSettings");
    return result;
}
