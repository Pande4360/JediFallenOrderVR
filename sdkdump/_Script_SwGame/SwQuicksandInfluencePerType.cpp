#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwQuicksandInfluencePerType.hpp"
void* _Script_SwGame::SwQuicksandInfluencePerType::get_ActorType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwQuicksandInfluencePerType::get_SettingsPerType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandInfluencePerType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwQuicksandInfluencePerType");
    return result;
}
