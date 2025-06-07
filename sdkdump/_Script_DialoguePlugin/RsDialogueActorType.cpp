#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDialogueActorType.hpp"
void* _Script_DialoguePlugin::RsDialogueActorType::get_ActorName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_DialoguePlugin::RsDialogueActorType::get_CharacterNameTag() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::RsDialogueActorType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DialoguePlugin.RsDialogueActorType");
    return result;
}
