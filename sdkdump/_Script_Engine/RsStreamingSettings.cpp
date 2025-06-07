#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsStreamingDefinition.hpp"
#include "RsStreamingSettings.hpp"
void* _Script_Engine::RsStreamingSettings::get_GlobalStreamingLevel() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsStreamingSettings::get_GlobalStreamingDefinition() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x50);
}
void* _Script_Engine::RsStreamingSettings::get_StreamingManagerClassName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::RsStreamingSettings::get_StreamingManagerClass() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsStreamingSettings");
    return result;
}
