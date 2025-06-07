#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAISpawnAnimationDef.hpp"
_Script_RsGameTechRT::RsAICharacterDefinition*& _Script_RsGameTechRT::RsAISpawnAnimationDef::get_AICharacterDefinition() {
    return *(_Script_RsGameTechRT::RsAICharacterDefinition**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAISpawnAnimationDef::get_SpawnAnimations() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnAnimationDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnAnimationDef");
    return result;
}
