#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RAPUID.hpp"
void* _Script_DialoguePlugin::RAPUID::get_RAPUID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::RAPUID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DialoguePlugin.RAPUID");
    return result;
}
