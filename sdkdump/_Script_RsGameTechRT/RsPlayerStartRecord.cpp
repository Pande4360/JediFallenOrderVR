#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsStreamingDefinition.hpp"
#include "RsPlayerStartRecord.hpp"
void* _Script_RsGameTechRT::RsPlayerStartRecord::get_PlayerStartName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerStartRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPlayerStartRecord");
    return result;
}
void* _Script_RsGameTechRT::RsPlayerStartRecord::get_PlayerStartTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsPlayerStartRecord::get_PlanetName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::RsStreamingDefinition*& _Script_RsGameTechRT::RsPlayerStartRecord::get_RootStreamingLevelDefinition() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsPlayerStartRecord::get_RootStreamingDefinitionPath() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsPlayerStartRecord::get_StreamingAreas() {
    return (void*)((uintptr_t)this + 0x60);
}
