#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIDebugSpawnShortcut.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIDebugSpawnShortcut::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIDebugSpawnShortcut");
    return result;
}
void* _Script_RsGameTechRT::RsAIDebugSpawnShortcut::get_Hotkey() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAIDebugSpawnShortcut::get_AICharacterDefinition() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsAIDebugSpawnShortcut::get_SpawnDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
