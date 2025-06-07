#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelStreaming.hpp"
#include "RsStreamingLevelReference.hpp"
_Script_Engine::LevelStreaming*& _Script_Engine::RsStreamingLevelReference::get_ParentStreamingLevel() {
    return *(_Script_Engine::LevelStreaming**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingLevelReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsStreamingLevelReference");
    return result;
}
