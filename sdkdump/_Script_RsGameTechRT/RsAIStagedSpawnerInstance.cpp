#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAISpawnerInstance.hpp"
#include "RsAIStagedSpawnerInstance.hpp"
void* _Script_RsGameTechRT::RsAIStagedSpawnerInstance::get_AICharacterDefinitionAssetPtr() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsAIStagedSpawnerInstance::get_PatrolSettings() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_RsGameTechRT::RsAICharacterDefinition*& _Script_RsGameTechRT::RsAIStagedSpawnerInstance::get_AICharacterDefinition() {
    return *(_Script_RsGameTechRT::RsAICharacterDefinition**)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIStagedSpawnerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIStagedSpawnerInstance");
    return result;
}
